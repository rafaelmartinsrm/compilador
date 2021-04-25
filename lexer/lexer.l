%option noyywrap
%option nounput
%option noinput
%{
	#include <stdio.h>
	#include <stdlib.h>
    #include "../configuracoes.h"
    #include "../util/tabela_simbolos.h"
    #include "../util/ast.h"
	#include "../saida/clang.tab.h"

	extern FILE *yyin;
	extern FILE *yyout;

	static int proxima_coluna = 1;
	int coluna_no = 1;

	#define TRATAR_COLUNA coluna_no = proxima_coluna; proxima_coluna += strlen(yytext)
    int declare = 0;
	int linha_no = 1;
	void imprime_ret(char *tipo_token);
	void erro_lexico(const char *s);
%}

%x COMENTARIO_ML

DIGITOS		[0-9]
LETRAS		[a-zA-Z]
SUBLINHADO	"_"

ID		{LETRAS}({LETRAS}|{DIGITOS}|{SUBLINHADO})*
ID_ERRADO	{DIGITOS}+({LETRAS}|{SUBLINHADO})+
INTEIRO		[0-9]+|\-[0-9]+
PONTO_FLUTUANTE	[0-9]+\.[0-9]+
ESPACO_BRANCO	[ \t\r\f]+



%%

"//".*				{ printf("Comentário ignorado na linha %d\n", linha_no); }
"/*"				{ printf("Comentário ignorado a partir da linha %d", linha_no); BEGIN(COMENTARIO_ML); }
<COMENTARIO_ML>"*/"	{ printf(" até a linha %d\n", linha_no); BEGIN(INITIAL); }
<COMENTARIO_ML>[^*\n]+
<COMENTARIO_ML>"*"
<COMENTARIO_ML>"\n"	{ TRATAR_COLUNA; proxima_coluna = 1; linha_no += 1; }

"int"				{ TRATAR_COLUNA; imprime_ret("TIPO_INT"); declare = 1; return TIPO_INT; }
"float"				{ TRATAR_COLUNA; imprime_ret("TIPO_FLOAT"); declare = 1; return TIPO_FLOAT; }
"elem"				{ TRATAR_COLUNA; imprime_ret("TIPO_ELEM"); declare = 1; return TIPO_ELEM; }
"set"				{ TRATAR_COLUNA; imprime_ret("TIPO_SET"); declare = 1; return TIPO_SET; }

"if"				{ TRATAR_COLUNA; imprime_ret("COMANDO_IF"); return COMANDO_IF; }
"else"				{ TRATAR_COLUNA; imprime_ret("COMANDO_ELSE"); return COMANDO_ELSE; }
"for"				{ TRATAR_COLUNA; imprime_ret("COMANDO_FOR"); return COMANDO_FOR; }
"forall"			{ TRATAR_COLUNA; imprime_ret("COMANDO_FORALL"); return COMANDO_FORALL; }
"return"			{ TRATAR_COLUNA; imprime_ret("COMANDO_RETURN"); return RETURN;}
"read"				{ TRATAR_COLUNA; imprime_ret("COMANDO_READ"); return COMANDO_READ; }
"write"				{ TRATAR_COLUNA; imprime_ret("COMANDO_WRITE"); return COMANDO_WRITE; }
"writeln"			{ TRATAR_COLUNA; imprime_ret("COMANDO_WRITELN"); return COMANDO_WRITELN; }

"+"					{ TRATAR_COLUNA; imprime_ret("OP_SOMA"); yylval.intval = SOMA; return OP_SOMA;}
"-"					{ TRATAR_COLUNA; imprime_ret("OP_SUBTRACAO"); yylval.intval = SUBTRACAO; return OP_SUBTRACAO; }
"/"					{ TRATAR_COLUNA; imprime_ret("OP_DIVISAO"); return OP_DIVISAO; }
"*"					{ TRATAR_COLUNA; imprime_ret("OP_MULTIPLICACAO"); return OP_MULTIPLICACAO; }

"&&"				{ TRATAR_COLUNA; imprime_ret("OP_E"); return OP_E; }
"!"					{ TRATAR_COLUNA; imprime_ret("OP_NEGACAO");   return OP_NEGACAO; }
"||"				{ TRATAR_COLUNA; imprime_ret("OP_OU");  return OP_OU; }
"=="                { TRATAR_COLUNA; imprime_ret("OP_IGUALDADE"); yylval.intval = IGUALDADE; return OP_IGUALDADE; }
"<"|">="|"<="	    { TRATAR_COLUNA; imprime_ret("OP_COMPARACAO"); return OP_COMPARACAO; }
">"                 { TRATAR_COLUNA; imprime_ret("OP_MAIOR_QUE"); yylval.intval = MAIOR_QUE;return OP_MAIOR_QUE; }


"'"					{ TRATAR_COLUNA; imprime_ret("ASPAS_SIMPLES"); return ASPAS_SIMPLES; }
"\""				{ TRATAR_COLUNA; imprime_ret("ASPAS_DUPLAS"); return ASPAS_DUPLAS; }
"("					{ TRATAR_COLUNA; imprime_ret("PARENTESE_E"); return PARENTESE_E; }
")"					{ TRATAR_COLUNA; imprime_ret("PARENTESE_D"); return PARENTESE_D; }
"{"					{ TRATAR_COLUNA; imprime_ret("CHAVE_E"); novo_escopo(); return CHAVE_E; }
"}"					{ TRATAR_COLUNA; imprime_ret("CHAVE_D"); sair_escopo(); return CHAVE_D; }
","					{ TRATAR_COLUNA; imprime_ret("VIRGULA"); return VIRGULA; }
";"					{ TRATAR_COLUNA; imprime_ret("PONTO_E_VIRGULA"); return PONTO_E_VIRGULA; }
"="					{ TRATAR_COLUNA; imprime_ret("ATRIBUICAO"); return ATRIBUICAO; }

"add"				{ TRATAR_COLUNA; imprime_ret("CONJUNTO_ADD"); yylval.intval = ADD; return CONJUNTO_ADD; }
"exists"			{ TRATAR_COLUNA; imprime_ret("CONJUNTO_EXISTS"); yylval.intval = EXISTS; return CONJUNTO_EXISTS; }
"remove"			{ TRATAR_COLUNA; imprime_ret("CONJUNTO_REMOVE"); yylval.intval = REMOVE; return CONJUNTO_REMOVE; }
"in"				{ TRATAR_COLUNA; imprime_ret("CONJUNTO_IN"); return CONJUNTO_IN; }


"\n"				{ TRATAR_COLUNA; proxima_coluna = 1; linha_no += 1; }
"EMPTY"             {
                        TRATAR_COLUNA;
                        imprime_ret("EMPTY");
                        return TOKEN_EMPTY;
                    }
 
{ID}				{ 
						TRATAR_COLUNA; 
						imprime_ret("ID");
						add_simbolo(declare, yytext, TIPO_INDEFINIDO, linha_no);
                        if(declare == 1)
                            yylval.simbolo = buscar_simbolo(yytext);
                        else
                            yylval.simbolo = buscar_simbolo_todos_escopos(yytext);
                        declare = 0;
						return TOKEN_ID;
					}
{INTEIRO}			{ 
						TRATAR_COLUNA;
						imprime_ret("INTEIRO");
						yylval.intval = atoi(yytext);
						return TOKEN_INTEIRO;
					}
{PONTO_FLUTUANTE}	{ 
						TRATAR_COLUNA; 
						imprime_ret("PONTO_FLUTUANTE");
						yylval.floatval = (float)atof(yytext);
						return TOKEN_PONTO_FLUTUANTE;
					}
{ESPACO_BRANCO}		/* faz nada */	

{ID_ERRADO}		{ TRATAR_COLUNA; erro_lexico("Sintaxe incorreta"); }
.			{ TRATAR_COLUNA; erro_lexico("Caractere não reconhecido"); }

%%

void imprime_ret(char *tipo_token)
{
   //printf("yytext: %s\t\t|\ttoken: %s\t|\tlinha: %d\n", yytext, tipo_token, linha_no);
}

int fileno(FILE *stream);

void erro_lexico(const char *mensagem)
{
	printf("[ERRO]: \"%s\" na linha %d e coluna %d. O token: \"%s\"\n", mensagem, linha_no, coluna_no, yytext); 
}
/*
int main(int  argc, char**  argv)
{
	init_hash_table();

	if(argc > 1)
	{
		printf("inicio parse\n");
		yyin = fopen(argv[1], "r");
		yylex();
		fclose(yyin);
		printf("fim parse\n");
		yylex_destroy();
	}
	return 0;
}*/
