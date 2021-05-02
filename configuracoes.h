#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>
#include <stdlib.h>



#define DEBUG 1
#define MAX_STRING 255
#define LIMITE_SUBPROGRAMA 10

#define TIPO_INDEFINIDO 0
#define TIPO_INTEIRO 1
#define TIPO_PONTO_FLUTUANTE 2
#define TIPO_CARACTERE 3
#define TIPO_CADEIA 4
#define TIPO_FUNCAO 5
#define TIPO_CONJUNTO 6



extern FILE* yyin;
extern int yylineno;
int yylex();
int yyparse();
int yylex_destroy();

#endif
