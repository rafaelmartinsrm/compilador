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
    OP_IGUALDADE = 263,            /* OP_IGUALDADE  */
    OP_MAIOR_QUE = 264,            /* OP_MAIOR_QUE  */
    OP_MENOR_QUE = 265,            /* OP_MENOR_QUE  */
    OP_SOMA = 266,                 /* OP_SOMA  */
    OP_SUBTRACAO = 267,            /* OP_SUBTRACAO  */
    CONJUNTO_ADD = 268,            /* CONJUNTO_ADD  */
    CONJUNTO_REMOVE = 269,         /* CONJUNTO_REMOVE  */
    CONJUNTO_EXISTS = 270,         /* CONJUNTO_EXISTS  */
    COMANDO_READ = 271,            /* COMANDO_READ  */
    COMANDO_WRITE = 272,           /* COMANDO_WRITE  */
    COMANDO_WRITELN = 273,         /* COMANDO_WRITELN  */
    TOKEN_ID = 274,                /* TOKEN_ID  */
    ATRIBUICAO = 275,              /* ATRIBUICAO  */
    ASPAS_SIMPLES = 276,           /* ASPAS_SIMPLES  */
    ASPAS_DUPLAS = 277,            /* ASPAS_DUPLAS  */
    CHAVE_E = 278,                 /* CHAVE_E  */
    CHAVE_D = 279,                 /* CHAVE_D  */
    COMANDO_FOR = 280,             /* COMANDO_FOR  */
    COMANDO_FORALL = 281,          /* COMANDO_FORALL  */
    CONJUNTO_IN = 282,             /* CONJUNTO_IN  */
    TIPO_ELEM = 283,               /* TIPO_ELEM  */
    COMANDO_ELSE = 284,            /* COMANDO_ELSE  */
    EMPTY = 285,                   /* EMPTY  */
    COMANDO_IF = 286,              /* COMANDO_IF  */
    IN = 287,                      /* IN  */
    IS_FLOAT = 288,                /* IS_FLOAT  */
    IS_INT = 289,                  /* IS_INT  */
    IS_SET = 290,                  /* IS_SET  */
    OP_COMPARACAO = 291,           /* OP_COMPARACAO  */
    OP_DIVISAO = 292,              /* OP_DIVISAO  */
    OP_E = 293,                    /* OP_E  */
    OP_MULTIPLICACAO = 294,        /* OP_MULTIPLICACAO  */
    OP_NEGACAO = 295,              /* OP_NEGACAO  */
    OP_OU = 296,                   /* OP_OU  */
    PARENTESE_E = 297,             /* PARENTESE_E  */
    PARENTESE_D = 298,             /* PARENTESE_D  */
    PONTO_E_VIRGULA = 299,         /* PONTO_E_VIRGULA  */
    RETURN = 300,                  /* RETURN  */
    TIPO_SET = 301,                /* TIPO_SET  */
    TIPO_INT = 302,                /* TIPO_INT  */
    TIPO_FLOAT = 303,              /* TIPO_FLOAT  */
    VIRGULA = 304,                 /* VIRGULA  */
    THEN = 305                     /* THEN  */
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

#line 126 "clang.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CLANG_TAB_H_INCLUDED  */
