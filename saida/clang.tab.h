/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CLANG_TAB_H_INCLUDED
# define YY_YY_CLANG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_INTEIRO = 258,           /* TOKEN_INTEIRO  */
    TOKEN_EMPTY = 259,             /* TOKEN_EMPTY  */
    TOKEN_PONTO_FLUTUANTE = 260,   /* TOKEN_PONTO_FLUTUANTE  */
    TOKEN_CARACTERE = 261,         /* TOKEN_CARACTERE  */
    TOKEN_CADEIA = 262,            /* TOKEN_CADEIA  */
    OP_DIVISAO = 263,              /* OP_DIVISAO  */
    OP_MULTIPLICACAO = 264,        /* OP_MULTIPLICACAO  */
    OP_E = 265,                    /* OP_E  */
    OP_OU = 266,                   /* OP_OU  */
    OP_IGUALDADE = 267,            /* OP_IGUALDADE  */
    OP_MAIOR_QUE = 268,            /* OP_MAIOR_QUE  */
    OP_MENOR_QUE = 269,            /* OP_MENOR_QUE  */
    OP_MAIOR_IGUAL = 270,          /* OP_MAIOR_IGUAL  */
    OP_MENOR_IGUAL = 271,          /* OP_MENOR_IGUAL  */
    OP_SOMA = 272,                 /* OP_SOMA  */
    OP_SUBTRACAO = 273,            /* OP_SUBTRACAO  */
    CONJUNTO_ADD = 274,            /* CONJUNTO_ADD  */
    CONJUNTO_REMOVE = 275,         /* CONJUNTO_REMOVE  */
    CONJUNTO_EXISTS = 276,         /* CONJUNTO_EXISTS  */
    COMANDO_READ = 277,            /* COMANDO_READ  */
    COMANDO_WRITE = 278,           /* COMANDO_WRITE  */
    COMANDO_WRITELN = 279,         /* COMANDO_WRITELN  */
    TOKEN_ID = 280,                /* TOKEN_ID  */
    ATRIBUICAO = 281,              /* ATRIBUICAO  */
    ASPAS_SIMPLES = 282,           /* ASPAS_SIMPLES  */
    ASPAS_DUPLAS = 283,            /* ASPAS_DUPLAS  */
    CHAVE_E = 284,                 /* CHAVE_E  */
    CHAVE_D = 285,                 /* CHAVE_D  */
    COMANDO_FOR = 286,             /* COMANDO_FOR  */
    COMANDO_FORALL = 287,          /* COMANDO_FORALL  */
    CONJUNTO_IN = 288,             /* CONJUNTO_IN  */
    TIPO_ELEM = 289,               /* TIPO_ELEM  */
    COMANDO_ELSE = 290,            /* COMANDO_ELSE  */
    EMPTY = 291,                   /* EMPTY  */
    COMANDO_IF = 292,              /* COMANDO_IF  */
    IN = 293,                      /* IN  */
    IS_FLOAT = 294,                /* IS_FLOAT  */
    IS_INT = 295,                  /* IS_INT  */
    IS_SET = 296,                  /* IS_SET  */
    OP_NEGACAO = 297,              /* OP_NEGACAO  */
    PARENTESE_E = 298,             /* PARENTESE_E  */
    PARENTESE_D = 299,             /* PARENTESE_D  */
    PONTO_E_VIRGULA = 300,         /* PONTO_E_VIRGULA  */
    RETURN = 301,                  /* RETURN  */
    TIPO_SET = 302,                /* TIPO_SET  */
    TIPO_INT = 303,                /* TIPO_INT  */
    TIPO_FLOAT = 304,              /* TIPO_FLOAT  */
    VIRGULA = 305,                 /* VIRGULA  */
    THEN = 306                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "parser/clang.y"

    int		intval;
    float 	floatval;
    char    charval;
    char* 	stringval;
    
    Simbolo* simbolo;
    NoAST*  no;
    Valor   valor;
    int     tipo_dado;

#line 127 "clang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CLANG_TAB_H_INCLUDED  */
