#ifndef AST_H
#define AST_H

typedef enum TipoNo
{
    NO_RAIZ,
    NO_ATRIBUICAO,
    NO_CONJUNTO,
    NO_DECLARACAO,
    NO_CHAMADA_FUNCAO,
    NO_DECLARACOES,
    NO_DECLARACAO_FUNCAO,
    NO_ELSEIF,
    NO_EXPRESSAO,
    NO_EXPRESSAO_COMPOSTA,
    NO_EXPRESSOES,
    NO_FOR,
    NO_IF,
    NO_OPERACAO,
    NO_PARAMETROS,
    NO_PARAMETROS_CHAMADA,
    NO_REFERENCIA,
    NO_RELACIONAL,
    NO_RETORNO,
    NO_CONSTANTE,
    NO_ARITMETICA,
    NO_IO,
} TipoNo;

typedef enum TipoIO
{
    IO_READ,
    IO_WRITE,
    IO_WRITELN
} TipoIO;

typedef enum Operador 
{
    ADD,
    DIVISAO,
    E,
    EXISTS,
    INDEFINIDO,
    MAIOR_QUE,
    MAIOR_IGUAL,
    MENOR_QUE,
    MENOR_IGUAL,
    MULTIPLICACAO,
    IGUALDADE,
    OU,
    REMOVE,
    SOMA,
    SUBTRACAO,
} Operador;

typedef struct NoAST
{
    enum TipoNo tipo;
    const char* reg;
    struct NoAST *esquerda;
    struct NoAST *direita;
} NoAST;

typedef struct
{
    enum TipoNo tipo;
    struct NoAST **declaracoes;
    int declaracoes_no;
} NoAST_Declaracoes;

typedef struct
{
    enum TipoNo tipo;
    Parametro *parametros;
    int parametros_no;

} NoAST_Parametros;

typedef struct
{
    enum TipoNo tipo;
    const char* reg;
    Simbolo *definicao;
} NoAST_Referencia;

typedef struct
{
    enum TipoNo tipo;
    int tipo_dado;
    Simbolo **simbolos;
    int simbolos_no;
} NoAST_Declaracao;

typedef struct
{
    enum TipoNo tipo;
    const char* reg;
    Operador operador;
    NoAST *esquerda;
    NoAST *direita;
} NoAST_Relacional;

typedef struct
{
    enum TipoNo tipo;
    struct NoAST **itens_bloco;
    int itens_bloco_no;
} NoAST_Expressao_Composta;

typedef struct
{
    enum TipoNo tipo;
    const char* reg;
    struct NoAST *condicao;
    struct NoAST *bloco_if;
    struct NoAST **blocos_elseif;
    int elseif_no;
    struct NoAST *bloco_else;
} NoAST_If;

typedef struct
{
    enum TipoNo tipo;
    const char* reg;
    struct NoAST *condicao;
    struct NoAST *bloco_elseif;
} NoAST_ElseIf;

typedef struct
{
    enum TipoNo tipo;
    const char* reg;
    NoAST *inicializacao;
    NoAST *condicao;
    NoAST *expressao;
    NoAST *bloco_for;
} NoAST_For;

typedef struct
{
    enum TipoNo tipo;
    Simbolo *definicao;
    NoAST *parametros;
    /* tipo retorno */
    int tipo_dado;
    NoAST *expressao_composta;

} NoAST_Declaracao_Funcao;

typedef struct 
{
    enum TipoNo tipo;
    const char* reg;
    NoAST *definicao;
    NoAST *parametros;
    int parametros_no;
} NoAST_Chamada_Funcao;

typedef struct
{
    enum TipoNo tipo;
    NoAST **parametros;
    int parametros_no;
} NoAST_Parametros_Chamada;

typedef struct
{
    enum TipoNo tipo;
    struct NoAST *referencia;
} NoAST_Retorno;

typedef struct
{
    enum TipoNo tipo;
    const char* reg;
    int tipo_dado;
    Valor valor;
} NoAST_Constante;

typedef struct
{
    enum TipoNo tipo;
    struct NoAST *referencia;
    struct NoAST *constante;
} NoAST_Atribuicao;

typedef struct
{
    enum TipoNo tipo;
    const char* reg;
    Operador operador;
    NoAST *esquerda;
    NoAST *direita;
} NoAST_Aritmetica;

typedef struct
{
    enum TipoNo tipo;
    Operador operador;
    NoAST *esquerda;
    NoAST *direita;
} NoAST_Conjunto;

typedef struct
{
    enum TipoNo tipo;
    enum TipoIO tipo_io;
    NoAST *expressao;
} NoAST_IO;

typedef struct
{
    enum TipoNo tipo;
    Operador operador;
    NoAST *referencia;
} NoAST_Operacao;

NoAST *novo_no_ast(TipoNo tipo, NoAST *esquerda, NoAST *direita);

NoAST *novo_no_ast_declaracao(int tipo_dado, Simbolo **simbolos, int simbolos_no);
NoAST *novo_no_ast_atribuicao(NoAST *referencia, NoAST *constante);
NoAST *novo_no_ast_retorno(NoAST *referencia);
NoAST *novo_no_ast_expressao_composta(NoAST *no, int itens_bloco_no, NoAST *item);
NoAST *novo_no_ast_if(NoAST *condicao, NoAST *bloco_if, NoAST **bloco_elseif, int elseif_no, NoAST *bloco_else);
NoAST *novo_no_ast_elseif(NoAST *condicao, NoAST *bloco_elseif);
NoAST *novo_no_ast_for(NoAST *inicializacao, NoAST *condicao, NoAST *expressao, NoAST *bloco_for);
NoAST *novo_no_ast_declaracao_funcao(int tipo_dado, Simbolo *simbolo, NoAST *expressao_composta);
NoAST *novo_no_ast_declaracoes(NoAST *no, int declaracoes_no, NoAST *declaracao);
NoAST *novo_no_ast_parametros(NoAST *no, int parametros_no, Simbolo *parametro);
NoAST *novo_no_ast_parametros_chamada(NoAST *no, int parametros_no, NoAST *parametro);
NoAST *novo_no_ast_constante(int tipo_constante, Valor valor);
NoAST *novo_no_ast_aritmetica(Operador operador, NoAST *esquerda, NoAST *direita);
NoAST *novo_no_ast_conjunto(Operador operador, NoAST *esquerda, NoAST *direita);
NoAST *novo_no_ast_relacional(Operador operador, NoAST *esquerda, NoAST *direita);
NoAST *novo_no_ast_referencia(Simbolo *definicao);
NoAST *novo_no_ast_chamada_funcao(NoAST *definicao, NoAST *parametros, int parametros_no);
NoAST *novo_no_ast_io(NoAST *expressao, int tipo_io);
NoAST *novo_no_ast_operacao(int operador, NoAST *referencia);
Simbolo *simbolo_no_ast(NoAST *no);
void imprimir_ast(NoAST *no);
void imprimir_no(NoAST *no, int espacamento);
void liberar_ast(NoAST *no);
void adicionar_erro(const char* texto);
int tipo_expressao(NoAST *no);
int tipo_parametros_funcao(Simbolo *simbolo, NoAST *no);
#endif

