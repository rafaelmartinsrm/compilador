#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../configuracoes.h"
#include "tabela_simbolos.h"
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
        if(simbolo == NULL)
            return;
        simbolo->identificador = strdup(identificador);
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

void liberar_tabela_simbolos()
{
    printf("LIBERANDO\n");
    if(tabela_simbolos == NULL)
        return;

    int i;

    Escopo* escopo = tabela_simbolos->escopo_atual;

    while(escopo->pai != NULL)
        escopo = escopo->pai;

    Escopo** escopos = NULL;
    Simbolo *simbolo, *tmp;

    int* tamanho  = (int *) malloc(sizeof(int));
    *tamanho = 0;
    escopos = lista_escopos(escopos, escopo, tamanho);

    for(i = 0; i < *tamanho; ++i)
    {
        HASH_ITER(hh, escopos[i]->tabela_hash, simbolo, tmp)
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
            
            HASH_DEL(escopos[i]->tabela_hash, simbolo);
            free((void *)simbolo->identificador);
            free(simbolo);
        }
        
        free(escopos[i]->tabela_hash);
        free(escopos[i]);
    }
    
    free(escopos);
    free(tamanho);
    free(tabela_simbolos);
    return;
}

void imprime_simbolos()
{
    Simbolo *s;
    Linha *l;
    Escopo *raiz = tabela_simbolos->escopo_atual;
    int *tamanho = malloc(sizeof(int));
    *tamanho = 0;

    while(raiz->pai != NULL)
        raiz = raiz->pai;

    Escopo** lista = lista_escopos(NULL, raiz, tamanho);

    for(int i = 0; i < *tamanho; ++i)
    {
        for(s = lista[i]->tabela_hash; s != NULL; s = (Simbolo*) s->hh.next)
        {
            if(s)
            {
                if(s->tag == CONSTANTE)
                    printf("constante: %s %s | escopo %p | linhas: ", tipo_texto(s->constante.tipo_dado), s->identificador, lista[i]);
                if(s->tag == INDEFINIDA)
                    printf("indefinida: %s %s | escopo %p | linhas: ", tipo_texto(s->constante.tipo_dado), s->identificador, lista[i]);
                else if(s->tag == FUNCAO)
                    printf("funcao: %s %s | escopo: %p | linhas: ", tipo_texto(s->funcao.tipo_dado), s->identificador, lista[i]);
                for(l = s->linhas; l != NULL; l = (Linha*) l->proxima)
                {
                    printf("%d ", l->linha_no);
                }
                printf("\n");
            }
        }
    }

    free(tamanho);
    free(lista);
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
