#ifndef TABSIMBOLOS_H
#define TABSIMBOLOS_H
#include "../uthash/uthash.h"


#define ESCOPO_ATUAL = 1
#define TOTAL_ESCOPOS = 2

typedef enum 
{
    INDEFINIDA,
    CONSTANTE,
    FUNCAO,
    IDENTIFICADOR,
    OPERACAO,
    PARAMETRO
} TagSimbolo;

typedef struct Simbolo Simbolo;
typedef struct Escopo Escopo;
typedef struct Linha Linha;
typedef struct Parametro Parametro;
/* typedef struct TipoSimbolo
{
    enum 
    {
        ID,
        CADEIA,
        CARACTER,
        CONJUNTO,
        INDEFINIDO,
        INTEIRO,
        PONTO_FLUTUANTE 
    } tipo;

} TipoSimbolo; */

typedef union {
    int intval;
    float floatval;
    char charval;
    char* stringval;
} Valor;

typedef struct Parametro
{
    int tipo_dado;
    const char* identificador;
    Simbolo *simbolo;
    Parametro *proximo;
    Valor valor;
} Parametro;

typedef struct Linha
{
    int linha_no;
    Linha *proxima;
} Linha;

typedef struct Simbolo
{
    const char* identificador;
    const char* reg;
    Linha* linhas;
    int escopo;
    TagSimbolo tag;
    Simbolo* proximo;

    union 
    {
        struct
        {
            int tipo_dado;
            Valor valor;
        } constante;
        struct
        {
            int tipo_dado; /* tipo do retorno */
            int parametros_no;
            Parametro* parametros;
        } funcao;
    };

    UT_hash_handle hh;
} Simbolo;

typedef struct Escopo
{
    /* Árvore N-ária com ponteiro para o pai */
    Simbolo* tabela_hash;
    Escopo* pai;
    Escopo* filho;
    Escopo* proximo;
} Escopo;

typedef struct
{
    Escopo* escopo_atual;
} TabelaSimbolos;

static TabelaSimbolos *tabela_simbolos;

void tabela_inicializar();
void tabela_finalizar(TabelaSimbolos* tabela_simbolos);
void add_simbolo(int declare, const char *identificador, int tipo_dado, int linha_no);
Simbolo* buscar_simbolo_todos_escopos(const char* identificador);
Simbolo* buscar_simbolo(const char* identificador);
/* void deletar_simbolo(struct tab_simbolos *simbolo); */
void deletar_todos();
void imprimir_simbolo();
void imprime_simbolos_recursivo(Escopo* escopo);
void add_lista(Simbolo* novo_simbolo);
void imprime_simbolos();
void verifica_existencia_main();
void liberar_tabela_simbolos();
void liberar_tabela_simbolos_recursivo(Escopo* escopo);
const char* tipo_texto(int tipo);
void novo_escopo();
void sair_escopo();
Escopo* escopo_atual();
#endif
