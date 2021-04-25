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

void lista_escopos(Escopo** lista, Escopo* raiz, int *tamanho)
{
    if(raiz != NULL)
    {
        if(*tamanho > 0)
        {
            *tamanho += 1;
            *lista = realloc(*lista, *tamanho * sizeof(Escopo*));
            lista[(*tamanho) - 1] = raiz;
        }
        else
        {
            *tamanho = 1;
            lista[(*tamanho) - 1] = raiz;
        }
        
    }

    if(raiz->proximo)
        lista_escopos(lista, raiz->proximo, tamanho);
    if(raiz->filho)
        lista_escopos(lista, raiz->filho, tamanho);

    return; 
}

void liberar_lista_escopos(Escopo** lista, int *tamanho)
{
    free(lista);
    free(tamanho);
}

void liberar_tabela_simbolos()
{
    printf("LIBERANDO\n");
    if(tabela_simbolos == NULL)
    {
        printf("ERRO GERAL \n");
        return;
    }

    int i;

    Escopo *raiz = tabela_simbolos->escopo_atual;
    Escopo **lista = malloc(sizeof(Escopo*));
    int *tamanho = malloc(sizeof(int));
    *tamanho = 0;

    while(raiz->pai != NULL)
        raiz = raiz->pai;

    Simbolo *simbolo, *tmp;

    lista_escopos(lista, raiz, tamanho);

    for(i = 0; i < *tamanho; ++i)
    {
        printf("limpeza %p\n", lista[i]->tabela_hash);
        HASH_ITER(hh, lista[i]->tabela_hash, simbolo, tmp)
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
            printf("Simbolo: %s\n", simbolo->identificador);
            HASH_DEL(lista[i]->tabela_hash, simbolo);
            free((void *)simbolo->identificador);
            free(simbolo);
        }
        
        free(lista[i]->tabela_hash);
        free(lista[i]);
    }

    liberar_lista_escopos(lista, tamanho);
    free(tabela_simbolos);
    return;
}

void imprime_simbolos()
{
    Simbolo *s, *tmp;
    Linha *l;
    Escopo *raiz = tabela_simbolos->escopo_atual;
    Escopo **lista = malloc(sizeof(Escopo*));
    int *tamanho = malloc(sizeof(int));
    *tamanho = 0;

    while(raiz->pai != NULL)
        raiz = raiz->pai;

    lista_escopos(lista, raiz, tamanho);


    for(int i = 0; i < *tamanho; ++i)
    {
        printf("impressao %p\n", lista[i]->tabela_hash);
        HASH_ITER(hh, lista[i]->tabela_hash, s, tmp)
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

void verifica_main()
{
    char erro[256];
    Simbolo* simbolo_main = buscar_simbolo_todos_escopos("main");
    if(!simbolo_main)
    sprintf(erro, "[ERRO] Não existe main\n");  
    adicionar_erro(erro);

    return;
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
