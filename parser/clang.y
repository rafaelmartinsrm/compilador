%{
#include <stdio.h>
#include <stdlib.h>
#include "../configuracoes.h"
#include "../util/tabela_simbolos.h"
#include "../util/ast.h"
#include "../tac/tac.h"


extern FILE *yyin;
extern FILE *yyout;
extern int yylex();
extern int linha_no;
extern int coluna_no;
extern int declare;
extern int yylex_destroy(void);

Simbolo **simbolos = NULL;
int simbolos_no = 0;
char erro[256];

void yyerror(const char *s);
%}

%define parse.error verbose
%define lr.type canonical-lr

%union{
    int		intval;
    float 	floatval;
    char    charval;
    char* 	stringval;
    
    Simbolo* simbolo;
    NoAST*  no;
    Valor   valor;
    int     tipo_dado;
}

%token <valor> TOKEN_INTEIRO
%token <valor> TOKEN_EMPTY
%token <valor> TOKEN_PONTO_FLUTUANTE
%token <valor> TOKEN_CARACTERE
%token <valor> TOKEN_CADEIA
%token <valor> OP_DIVISAO OP_MULTIPLICACAO OP_E OP_OU OP_IGUALDADE OP_MAIOR_QUE OP_MENOR_QUE OP_MAIOR_IGUAL OP_MENOR_IGUAL OP_SOMA OP_SUBTRACAO CONJUNTO_ADD CONJUNTO_REMOVE CONJUNTO_EXISTS COMANDO_READ COMANDO_WRITE COMANDO_WRITELN
%token <simbolo> TOKEN_ID
%token ATRIBUICAO ASPAS_SIMPLES ASPAS_DUPLAS CHAVE_E CHAVE_D COMANDO_FOR COMANDO_FORALL CONJUNTO_IN TIPO_ELEM COMANDO_ELSE EMPTY COMANDO_IF IN IS_FLOAT IS_INT IS_SET OP_NEGACAO PARENTESE_E PARENTESE_D PONTO_E_VIRGULA RETURN TIPO_SET TIPO_INT TIPO_FLOAT VIRGULA
%type <tipo_dado> def_declaracao_tipo

%type <valor> operadores_expressao
%type <no> programa declaracao declaracoes declaracao_func lista_tipo_parametro
%type <no> declaracao_var valores 
%type <no> lista_itens_bloco item_bloco expressao_composta
%type <no> tipos_expressao expressao_declaracao expressao_iteracao expressao_decisao expressao_return
%type <simbolo> declaracao_parametro
%type <simbolo> def_declaracao
%type <no> expressao expressao_atribuicao expressao_relacional expressao_logica expressao_aritmetica expressao_chamada expressao_conjunto expressao_io expressao_principal expressao_lista_param expressao_operacao


%nonassoc THEN
%nonassoc COMANDO_ELSE

%start programa
%%

programa                : declaracoes
                        {
                            tac($1);
                            liberar_ast($1);
                        }
                        ;

declaracoes             : declaracao
                        {
                            $$ = novo_no_ast_declaracoes(NULL, 0, $1);
                        }
                        | declaracoes declaracao
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) $1;
                            $$ = novo_no_ast_declaracoes($1, novo_no->declaracoes_no, $2);
                        }
						;

lista_identificadores	: TOKEN_ID
						| lista_identificadores VIRGULA TOKEN_ID
						;

declaracao_parametro	: def_declaracao_tipo def_declaracao
                        {
                            $2->tag = PARAMETRO;
                            $2->funcao.tipo_dado = $1;
                            $$ = $2;    
                        }
						| def_declaracao_tipo { declare = 1; $$ = NULL; }
						;

lista_tipo_parametro	: declaracao_parametro
                        {
                            $$ = novo_no_ast_parametros(NULL, 0, $1);
                        }
						| lista_tipo_parametro VIRGULA declaracao_parametro
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) $1;
                            $$ = novo_no_ast_parametros($1, novo_no->parametros_no, $3);
                        }
						; 

def_declaracao			: TOKEN_ID
                        {
                            $1->tag = CONSTANTE;
                            $$ = $1; 
                        }
						| def_declaracao PARENTESE_E PARENTESE_D
                        {
                            $1->funcao.parametros_no = 0;
                            $1->funcao.parametros = NULL;
                            $$ = $1;
                        }
						| def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) $3;
                            $1->funcao.parametros_no = novo_no->parametros_no;
                            $1->funcao.parametros = novo_no->parametros;
                            liberar_ast($3);
                            $$ = $1;
                        }
						| def_declaracao PARENTESE_E lista_identificadores PARENTESE_D
						;

def_declaracao_tipo		: TIPO_INT      { $$ = TIPO_INTEIRO;}
						| TIPO_FLOAT    { $$ = TIPO_PONTO_FLUTUANTE;}
						| TIPO_ELEM     { $$ = TIPO_INDEFINIDO; }
						| TIPO_SET      { $$ = TIPO_CONJUNTO; }
						;


declaracao_func			: declaracao_parametro expressao_composta
                        {
                            $1->tag = FUNCAO;
                            $$ = novo_no_ast_declaracao_funcao($1->funcao.tipo_dado, $1, $2);
                        }
						;


declaracao 				: declaracao_func
                        {
                            $$ = $1;
                            imprimir_no($$, 1);
                        }
                        | declaracao_var 
                        { 
                            $$ = $1;
                            imprimir_no($$, 1);
                        }
						;

lista_inicializar_atrib	: def_declaracao
                        {
                            add_lista($1);
                        }
						| lista_inicializar_atrib VIRGULA def_declaracao
                        {
                            add_lista($3);
                        }
						;

declaracao_var			: def_declaracao_tipo PONTO_E_VIRGULA { $$ = NULL; }
						| def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA
                        {
                            $$ = novo_no_ast_declaracao($1, simbolos, simbolos_no);
                            simbolos_no = 0;

                            NoAST_Declaracao *novo_no = (NoAST_Declaracao*) $$;

                            for(int i = 0; i < novo_no->simbolos_no; ++i)
                            {
                                novo_no->simbolos[i]->tag = CONSTANTE;
                                novo_no->simbolos[i]->constante.tipo_dado = $1;
                            }

                            simbolos_no = 0;
                            simbolos = NULL;
                        }
						;

item_bloco				: declaracao_var { $$ = $1; }
						| tipos_expressao { $$ = $1; }
						;

lista_itens_bloco		: item_bloco
                        {
                            $$ = novo_no_ast_expressao_composta(NULL, 0, $1);
                        }
						| lista_itens_bloco item_bloco
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) $1;
                            $$ = novo_no_ast_expressao_composta($1, novo_no->itens_bloco_no, $2);
                        }
						;

expressao 				: expressao_atribuicao { $$ = $1; }
						| expressao VIRGULA expressao_atribuicao { $$ = $3; }
                        ;

expressao_declaracao	: PONTO_E_VIRGULA { $$ = NULL; }
						| expressao PONTO_E_VIRGULA { $$ = $1; }
                        ;

tipos_expressao		    : expressao_declaracao { $$ = $1; }
						| expressao_decisao { $$ = $1; } 
						| expressao_composta { $$ = $1; } 
						| expressao_return { $$ = $1; } 
						| expressao_iteracao { $$ = $1; } 
						;

valores					: TOKEN_INTEIRO         { $$ = novo_no_ast_constante(TIPO_INTEIRO, $1); }
						| TOKEN_PONTO_FLUTUANTE { $$ = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, $1); }
                        | TOKEN_EMPTY           { $$ = novo_no_ast_constante(TIPO_CONJUNTO, $1); }
						;

expressao_principal		: TOKEN_ID
                        {
                            $$ = novo_no_ast_referencia($1);
                        }
						| valores 
                        {
                            $$ = $1; 
                        }
						| ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES
                        { $$ = NULL; }
						| TOKEN_CADEIA
                        { $$ = novo_no_ast_constante(TIPO_CADEIA, $1); }
						| PARENTESE_E expressao PARENTESE_D { $$ = $2; }
						;


expressao_atribuicao	: expressao_logica { $$ = $1; } 
						| expressao_operacao ATRIBUICAO expressao_atribuicao
                        {   
                            // Atribuicao = chamada ou expressao principal = qqr coisa
                            $$ = novo_no_ast_atribuicao($1, $3);
                            // Verificar se são do mesmo tipo / existe
                            Simbolo* simbolo = simbolo_no_ast($1);
                            if(simbolo && simbolo->tag == CONSTANTE)
                            {
                                if(simbolo->constante.tipo_dado == tipo_expressao($3))
                                {

                                }
                                else
                                {
                                    sprintf(erro, "[ERRO] O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                    adicionar_erro(erro);
                                }
                            }
                            else
                            {
                                sprintf(erro, "[ERRO] Simbolo não encontrado.\n");
                                adicionar_erro(erro);
                            }
                        }
						;

                        

expressao_logica		: expressao_relacional { $$ = $1; }
						| expressao_logica OP_E expressao_relacional
                        {
                            $$ = novo_no_ast_relacional($2.intval, $1, $3);
                        }
						| expressao_logica OP_OU expressao_relacional
                        {
                            $$ = novo_no_ast_relacional($2.intval, $1, $3);
                        }
						;


expressao_relacional    : expressao_aritmetica { $$ = $1; }
                        | expressao_relacional OP_MENOR_QUE expressao_aritmetica
                        {
                            $$ = novo_no_ast_relacional($2.intval, $1, $3);
                        }
                        | expressao_relacional OP_MAIOR_QUE expressao_aritmetica
                        {
                            $$ = novo_no_ast_relacional($2.intval, $1, $3);
                        }
						| expressao_relacional OP_IGUALDADE expressao_aritmetica
                        {
                            $$ = novo_no_ast_relacional($2.intval, $1, $3);
                        }
						| expressao_relacional OP_MAIOR_IGUAL expressao_aritmetica
                        {
                            $$ = novo_no_ast_relacional($2.intval, $1, $3);
                        }
						| expressao_relacional OP_MENOR_IGUAL expressao_aritmetica
                        {
                            $$ = novo_no_ast_relacional($2.intval, $1, $3);
                        }
                        ;

expressao_aritmetica	: expressao_conjunto { $$ = $1; }
						| expressao_aritmetica OP_SOMA expressao_conjunto
                        {
                            $$ = novo_no_ast_aritmetica($2.intval, $1, $3);
                        }
						| expressao_aritmetica OP_SUBTRACAO expressao_conjunto
                        {
                            $$ = novo_no_ast_aritmetica($2.intval, $1, $3);
                        }
						| expressao_aritmetica OP_DIVISAO expressao_conjunto
                        {
                            $$ = novo_no_ast_aritmetica($2.intval, $1, $3);
                        }
						| expressao_aritmetica OP_MULTIPLICACAO expressao_conjunto
                        {
                            $$ = novo_no_ast_aritmetica($2.intval, $1, $3);
                        }
						;

expressao_conjunto		: expressao_operacao { $$ = $1; }
						| CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D
                        {
                            $$ = novo_no_ast_conjunto($1.intval, $3, $5);
                        }
						| CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D
                        {
                            $$ = novo_no_ast_conjunto($1.intval, $3, $5);
                        }
						| CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D
                        {
                            $$ = novo_no_ast_conjunto($1.intval, $3, $5);
                        }
						; 


expressao_operacao      : expressao_io
                        | operadores_expressao expressao_io
                        {
                            $$ = novo_no_ast_operacao($1.intval, $2);
                        }
                        ;

operadores_expressao    : OP_SUBTRACAO
                        ;


expressao_io 			: expressao_chamada { $$ = $1; }
						| COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D
                        {
                            $$ = novo_no_ast_io($3, $1.intval);
                            if(!(TIPO_CADEIA == tipo_expressao($3)))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                            // pular +1 linha
                        }
						| COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D
                        {
                            $$ = novo_no_ast_io($3, $1.intval);
                            if(!(TIPO_CADEIA == tipo_expressao($3)))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                        }
						| COMANDO_READ PARENTESE_E expressao_io PARENTESE_D
                        {
                            $$ = NULL;
                        }
						;

expressao_chamada		: expressao_principal { $$ = $1; }
						| expressao_principal PARENTESE_E PARENTESE_D
						| expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D
                        {
                            NoAST_Parametros_Chamada *no_parametros = (NoAST_Parametros_Chamada*) $3;
                            $$ = novo_no_ast_chamada_funcao($1, $3, no_parametros->parametros_no);

                            Simbolo* simbolo = simbolo_no_ast($1);
                            if(simbolo && simbolo->tag == FUNCAO)
                            {
                                if(tipo_parametros_funcao(simbolo, $3) > 0)
                                {

                                }
                                else
                                {
                                    sprintf(erro, "[ERRO] Erro na chamada de função '%s', linha (coluna): %d (%d).\n", simbolo->identificador, linha_no, coluna_no);
                                    adicionar_erro(erro);
                                }
                            }
                            else
                            {
                                sprintf(erro, "[ERRO] Erro na chamada de função '%s', linha (coluna): %d (%d).\n", simbolo->identificador, linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                        }
						;

expressao_lista_param   : expressao_atribuicao
                        {
                            $$ = novo_no_ast_parametros_chamada(NULL, 0, $1);
                        }
                        | expressao_lista_param VIRGULA expressao_atribuicao
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) $1;
                            $$ = novo_no_ast_parametros_chamada($1,  novo_no->parametros_no, $3);
                        }
                        ;

expressao_decisao		: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao
                        {
                            $$ = novo_no_ast_if($3, $5, NULL, 0, $7);
                            if($7->tipo == NO_IF)
                            {
                                NoAST_If *novo_no = (NoAST_If*) $$;
                                NoAST_If *no_else = (NoAST_If*) $7;
                                NoAST *novo_no_elseif = novo_no_ast_elseif(no_else->condicao, no_else->bloco_if);
                                novo_no->bloco_else = no_else->bloco_else;
                                if(no_else->elseif_no == 0)
                                {
                                    novo_no->elseif_no = 1;
                                    novo_no->blocos_elseif = (NoAST **) malloc(1 * sizeof(NoAST_ElseIf *));
                                    novo_no->blocos_elseif[0] = novo_no_elseif;
                                }
                                else
                                {
                                    novo_no->elseif_no = no_else->elseif_no + 1;
                                    novo_no->blocos_elseif = (NoAST **) realloc(no_else->blocos_elseif, novo_no->elseif_no * sizeof (NoAST_ElseIf *));
                                    novo_no->blocos_elseif[novo_no->elseif_no - 1] = novo_no_elseif;
                                }
                                free(no_else);
                            }
                            else{
                            printf("%p\n\n", $7);
                            }
                        }
						| COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao %prec THEN
                        {
                            $$ = novo_no_ast_if($3, $5, NULL, 0, NULL);
                        }
					    | COMANDO_IF PARENTESE_E  expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao
                        {
                            $$ = NULL;
                        }
						| COMANDO_IF PARENTESE_E  expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao %prec THEN
                        {
                            $$ = NULL;
                        }
						;

expressao_iteracao		: COMANDO_FOR PARENTESE_E expressao_declaracao expressao_declaracao PARENTESE_D tipos_expressao
                        {
                            $$ = novo_no_ast_for($3, $4, NULL, $6);
                        }
                        | COMANDO_FOR PARENTESE_E expressao_declaracao expressao_declaracao expressao PARENTESE_D tipos_expressao
                        {
                            $$ = novo_no_ast_for($3, $4, $5, $7);
                        }
						| COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao
                        {
                            $$ = NULL;
                        }
						;

expressao_composta		: CHAVE_E CHAVE_D
                        {
                            $$ = NULL;
                        }
                            | CHAVE_E lista_itens_bloco CHAVE_D 
                            { 
                                $$ = $2; 
                        }
						;

expressao_return		: RETURN PONTO_E_VIRGULA
                        {
                            $$ = NULL;
                        }
						| RETURN expressao PONTO_E_VIRGULA
                        {
                            $$ = novo_no_ast_retorno($2);
                        }
						;

%%

void add_lista(Simbolo* novo_simbolo)
{
    if(simbolos_no == 0)
    {
        simbolos_no = 1;
        simbolos = (Simbolo **) malloc(1 * sizeof(Simbolo *));
        simbolos[0] = novo_simbolo;
    }
    else
    {
        simbolos_no += 1;
        simbolos = (Simbolo **) realloc(simbolos, simbolos_no * sizeof(Simbolo *));
        simbolos[simbolos_no - 1] = novo_simbolo;
    }
}

int main(int argc, char *argv[]) {
   tabela_inicializar(); 
/* #ifdef YYDEBUG
  yydebug = 1;
#endif */
	if(argc > 1)
	{
		yyin = fopen(argv[1], "r");
		yyparse();
		fclose(yyin);
        verifica_existencia_main();
        imprime_simbolos();
        liberar_tabela_simbolos();
		yylex_destroy();
	}

	return(0);
}

void yyerror(const char *s)
{
	printf("yyerror : %s\n", s);
    imprime_simbolos();
}

int yywrap()
{
	return 1;
}
