#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../configuracoes.h"
#include "tabela_simbolos.h"
#include "ast.h"
#include "../uthash/uthash.h"

void tabela_inicializar()
{
    FILE* arquivo = fopen("saida/erros.txt", "w");
    if(arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo.txt\n");
        return;
    }
    fclose(arquivo);

    tabela_simbolos = malloc(sizeof(TabelaSimbolos));
    if(tabela_simbolos == NULL)
        return;
    tabela_simbolos->escopo_atual = malloc(sizeof(Escopo));
    if(tabela_simbolos->escopo_atual == NULL)
        return;
    tabela_simbolos->escopo_atual->tabela_hash = NULL;
    tabela_simbolos->escopo_atual->pai = NULL;
    tabela_simbolos->escopo_atual->filho = NULL;
    tabela_simbolos->escopo_atual->proximo = NULL;
    
    return;
}

void add_simbolo(int declare, const char *identificador, int tipo_dado, int linha_no)
{
    Simbolo* simbolo = NULL;
    if(declare)
        simbolo = buscar_simbolo(identificador);
    else
        simbolo = buscar_simbolo_todos_escopos(identificador);

    Linha* linha = malloc(sizeof(Linha));
    Linha* temp_linha = NULL;
    linha->linha_no = linha_no;
    linha->proxima = NULL;

    if(simbolo == NULL)
    {
        simbolo = malloc(sizeof(Simbolo));
        simbolo->tag = INDEFINIDA;
        if(simbolo == NULL)
            return;
        simbolo->identificador = strdup(identificador);
            simbolo->reg = NULL;
            HASH_ADD_STR(tabela_simbolos->escopo_atual->tabela_hash, identificador, simbolo);
            simbolo->linhas = linha;
        }
        else
        {
            temp_linha = simbolo->linhas;
            while(temp_linha->proxima != NULL) 
                temp_linha = temp_linha->proxima;
            temp_linha->proxima = linha;
        }
        /* se já existir, adicionar linhas */ 
        /* linhas+ escopo+ tipos+ */
        return;
    }

    Simbolo* buscar_simbolo(const char* identificador)
    {
        Simbolo* simbolo;
        HASH_FIND_STR(tabela_simbolos->escopo_atual->tabela_hash, identificador, simbolo);
        if(simbolo)
            return simbolo;
        return NULL;
    }


    Simbolo* buscar_simbolo_todos_escopos(const char* identificador)
    {
        Simbolo* simbolo;
        HASH_FIND_STR(tabela_simbolos->escopo_atual->tabela_hash, identificador, simbolo);
        if(simbolo)
            return simbolo;
        else
        {
            if(tabela_simbolos->escopo_atual->pai)
            {
                Escopo* temp_escopo = tabela_simbolos->escopo_atual;
                for(temp_escopo = temp_escopo->pai; temp_escopo != NULL; temp_escopo = temp_escopo->pai)
                {
                    HASH_FIND_STR(temp_escopo->tabela_hash, identificador, simbolo);
                    if(simbolo)
                        return simbolo;
                }
            }
        }
        return NULL;
    }

    void verifica_existencia_main()
    {
        Simbolo* simbolo = buscar_simbolo_todos_escopos("main");

        if(!simbolo)
        {
            adicionar_erro("[ERRO] Não foi definida uma main.");
        }
    }

    Escopo** lista_escopos(Escopo** lista, Escopo *raiz, int *tamanho)
    {
        if(*tamanho == 0)
            lista = malloc(sizeof(Escopo*));
        for(; raiz != NULL; raiz = raiz->filho)
        {

            *tamanho += 1;
            lista = realloc(lista, *tamanho * sizeof(Escopo*));
            lista[(*tamanho) - 1] = raiz;
            if(raiz->proximo != NULL)
            {
                lista_escopos(lista, raiz->proximo, tamanho);
            }
        }

        return lista;
    }

    void liberar_tabela_simbolos_recursivo(Escopo* escopo)
    {
        if(!escopo)
            return;

        Simbolo *simbolo, *tmp;
        Escopo *tmp_escopo;
        while(escopo)
        {
            HASH_ITER(hh, escopo->tabela_hash, simbolo, tmp)
            {
                Parametro* parametro_tmp = NULL;
            if(simbolo->tag == FUNCAO)
            {
                while(simbolo->funcao.parametros != NULL)     
                {
                    parametro_tmp = simbolo->funcao.parametros->proximo;
                    free(simbolo->funcao.parametros);
                    simbolo->funcao.parametros = parametro_tmp;
                }
            }
            Linha* linha_tmp = NULL;
            while(simbolo->linhas != NULL)
            {
                linha_tmp = simbolo->linhas->proxima;
                free(simbolo->linhas);
                simbolo->linhas = linha_tmp;
            }
            
            HASH_DEL(escopo->tabela_hash, simbolo);
            if(simbolo->reg)
                free((char*)simbolo->reg);
            free((void *)simbolo->identificador);
            free(simbolo);
        }
        if(escopo->proximo)
            liberar_tabela_simbolos_recursivo(escopo->proximo);
        
        free(escopo->tabela_hash);
        tmp_escopo = escopo;
        escopo = escopo->filho;
        free(tmp_escopo);
    }
    return;
}

void liberar_tabela_simbolos()
{
    if(tabela_simbolos == NULL)
        return;

    Escopo* escopo = tabela_simbolos->escopo_atual;

    while(escopo->pai != NULL)
        escopo = escopo->pai;

    liberar_tabela_simbolos_recursivo(escopo);
    free(tabela_simbolos);
}


void imprime_simbolos_recursivo(Escopo *escopo)
{
    Simbolo *s, *tmp;
    Linha *l;
    for(; escopo != NULL; escopo = escopo->filho)
    {
        HASH_ITER(hh, escopo->tabela_hash, s, tmp)
        {
            if(s)
            {
                if(s->tag == CONSTANTE)
                    printf("constante: %s %s | escopo %p | linhas: ", tipo_texto(s->constante.tipo_dado), s->identificador, escopo);
                else if(s->tag == INDEFINIDA)
                    printf("indefinida: %s %s | escopo %p | linhas: ", tipo_texto(-1), s->identificador, escopo);
                else if(s->tag == FUNCAO)
                    printf("funcao: %s %s | escopo: %p | linhas: ", tipo_texto(s->funcao.tipo_dado), s->identificador, escopo);
                else if(s->tag == PARAMETRO)
                    printf("parametro: %s %s | escopo: %p | linhas: ", tipo_texto(s->funcao.tipo_dado), s->identificador, escopo);
                for(l = s->linhas; l != NULL; l = (Linha*) l->proxima)
                {
                    printf("%d ", l->linha_no);
                }
                printf("\n");
            }
        }
        if(escopo->proximo)
            imprime_simbolos_recursivo(escopo->proximo);
    }
}

void imprime_simbolos()
{
    Escopo *raiz = tabela_simbolos->escopo_atual;

    while(raiz->pai != NULL)
        raiz = raiz->pai;

    imprime_simbolos_recursivo(raiz);
}

const char* tipo_texto(int tipo)
{
    switch(tipo)
    {
        case TIPO_INDEFINIDO:
            return "indef";
            break;
        case TIPO_INTEIRO:
            return "int";
            break;
        case TIPO_PONTO_FLUTUANTE:
            return "float";
            break;
        case TIPO_CONJUNTO:
            return "set";
            break;
    }

    return "indef";
}


void novo_escopo()
{
    Escopo* novo_escopo = malloc(sizeof(Escopo));
    if(novo_escopo == NULL)
        return;
    novo_escopo->pai = tabela_simbolos->escopo_atual;
    novo_escopo->filho = NULL;
    novo_escopo->proximo = NULL;
    novo_escopo->tabela_hash = NULL;

    if(tabela_simbolos->escopo_atual->filho)
    {
        tabela_simbolos->escopo_atual = tabela_simbolos->escopo_atual->filho;
        while(tabela_simbolos->escopo_atual->proximo != NULL)
            tabela_simbolos->escopo_atual = tabela_simbolos->escopo_atual->proximo;
        tabela_simbolos->escopo_atual->proximo = novo_escopo;
    }
    else
    {
        tabela_simbolos->escopo_atual->filho = novo_escopo;
    }

    tabela_simbolos->escopo_atual = novo_escopo;

    return;
}

void sair_escopo()
{
    tabela_simbolos->escopo_atual = tabela_simbolos->escopo_atual->pai;
    return;
}

Escopo* escopo_atual()
{
    if(tabela_simbolos)
        return tabela_simbolos->escopo_atual;
    else
        return NULL;
}
