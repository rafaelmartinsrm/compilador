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
    OP_IGUALDADE = 261,            /* OP_IGUALDADE  */
    OP_MAIOR_QUE = 262,            /* OP_MAIOR_QUE  */
    OP_MENOR_QUE = 263,            /* OP_MENOR_QUE  */
    OP_SOMA = 264,                 /* OP_SOMA  */
    OP_SUBTRACAO = 265,            /* OP_SUBTRACAO  */
    CONJUNTO_ADD = 266,            /* CONJUNTO_ADD  */
    CONJUNTO_REMOVE = 267,         /* CONJUNTO_REMOVE  */
    CONJUNTO_EXISTS = 268,         /* CONJUNTO_EXISTS  */
    TOKEN_ID = 269,                /* TOKEN_ID  */
    ATRIBUICAO = 270,              /* ATRIBUICAO  */
    ASPAS_SIMPLES = 271,           /* ASPAS_SIMPLES  */
    ASPAS_DUPLAS = 272,            /* ASPAS_DUPLAS  */
    CHAVE_E = 273,                 /* CHAVE_E  */
    CHAVE_D = 274,                 /* CHAVE_D  */
    COMANDO_FOR = 275,             /* COMANDO_FOR  */
    COMANDO_FORALL = 276,          /* COMANDO_FORALL  */
    COMANDO_READ = 277,            /* COMANDO_READ  */
    COMANDO_WRITE = 278,           /* COMANDO_WRITE  */
    COMANDO_WRITELN = 279,         /* COMANDO_WRITELN  */
    CONJUNTO_IN = 280,             /* CONJUNTO_IN  */
    TIPO_ELEM = 281,               /* TIPO_ELEM  */
    COMANDO_ELSE = 282,            /* COMANDO_ELSE  */
    EMPTY = 283,                   /* EMPTY  */
    COMANDO_IF = 284,              /* COMANDO_IF  */
    IN = 285,                      /* IN  */
    IS_FLOAT = 286,                /* IS_FLOAT  */
    IS_INT = 287,                  /* IS_INT  */
    IS_SET = 288,                  /* IS_SET  */
    OP_COMPARACAO = 289,           /* OP_COMPARACAO  */
    OP_DIVISAO = 290,              /* OP_DIVISAO  */
    OP_E = 291,                    /* OP_E  */
    OP_MULTIPLICACAO = 292,        /* OP_MULTIPLICACAO  */
    OP_NEGACAO = 293,              /* OP_NEGACAO  */
    OP_OU = 294,                   /* OP_OU  */
    PARENTESE_E = 295,             /* PARENTESE_E  */
    PARENTESE_D = 296,             /* PARENTESE_D  */
    PONTO_E_VIRGULA = 297,         /* PONTO_E_VIRGULA  */
    RETURN = 298,                  /* RETURN  */
    TIPO_SET = 299,                /* TIPO_SET  */
    TIPO_INT = 300,                /* TIPO_INT  */
    TIPO_FLOAT = 301,              /* TIPO_FLOAT  */
    VIRGULA = 302,                 /* VIRGULA  */
    THEN = 303                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "parser/clang.y"

    int		intval;
    float 	floatval;
    char* 	sval;
    
    Simbolo* simbolo;
    NoAST*  no;
    Valor   valor;
    int     tipo_dado;

#line 123 "clang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CLANG_TAB_H_INCLUDED  */
