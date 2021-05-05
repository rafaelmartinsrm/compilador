/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser/clang.y"

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

#line 95 "clang.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "clang.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_INTEIRO = 3,              /* TOKEN_INTEIRO  */
  YYSYMBOL_TOKEN_EMPTY = 4,                /* TOKEN_EMPTY  */
  YYSYMBOL_TOKEN_PONTO_FLUTUANTE = 5,      /* TOKEN_PONTO_FLUTUANTE  */
  YYSYMBOL_TOKEN_CARACTERE = 6,            /* TOKEN_CARACTERE  */
  YYSYMBOL_TOKEN_CADEIA = 7,               /* TOKEN_CADEIA  */
  YYSYMBOL_OP_DIVISAO = 8,                 /* OP_DIVISAO  */
  YYSYMBOL_OP_MULTIPLICACAO = 9,           /* OP_MULTIPLICACAO  */
  YYSYMBOL_OP_E = 10,                      /* OP_E  */
  YYSYMBOL_OP_OU = 11,                     /* OP_OU  */
  YYSYMBOL_OP_IGUALDADE = 12,              /* OP_IGUALDADE  */
  YYSYMBOL_OP_MAIOR_QUE = 13,              /* OP_MAIOR_QUE  */
  YYSYMBOL_OP_MENOR_QUE = 14,              /* OP_MENOR_QUE  */
  YYSYMBOL_OP_MAIOR_IGUAL = 15,            /* OP_MAIOR_IGUAL  */
  YYSYMBOL_OP_MENOR_IGUAL = 16,            /* OP_MENOR_IGUAL  */
  YYSYMBOL_OP_SOMA = 17,                   /* OP_SOMA  */
  YYSYMBOL_OP_SUBTRACAO = 18,              /* OP_SUBTRACAO  */
  YYSYMBOL_CONJUNTO_ADD = 19,              /* CONJUNTO_ADD  */
  YYSYMBOL_CONJUNTO_REMOVE = 20,           /* CONJUNTO_REMOVE  */
  YYSYMBOL_CONJUNTO_EXISTS = 21,           /* CONJUNTO_EXISTS  */
  YYSYMBOL_COMANDO_READ = 22,              /* COMANDO_READ  */
  YYSYMBOL_COMANDO_WRITE = 23,             /* COMANDO_WRITE  */
  YYSYMBOL_COMANDO_WRITELN = 24,           /* COMANDO_WRITELN  */
  YYSYMBOL_TOKEN_ID = 25,                  /* TOKEN_ID  */
  YYSYMBOL_ATRIBUICAO = 26,                /* ATRIBUICAO  */
  YYSYMBOL_ASPAS_SIMPLES = 27,             /* ASPAS_SIMPLES  */
  YYSYMBOL_ASPAS_DUPLAS = 28,              /* ASPAS_DUPLAS  */
  YYSYMBOL_CHAVE_E = 29,                   /* CHAVE_E  */
  YYSYMBOL_CHAVE_D = 30,                   /* CHAVE_D  */
  YYSYMBOL_COMANDO_FOR = 31,               /* COMANDO_FOR  */
  YYSYMBOL_COMANDO_FORALL = 32,            /* COMANDO_FORALL  */
  YYSYMBOL_CONJUNTO_IN = 33,               /* CONJUNTO_IN  */
  YYSYMBOL_TIPO_ELEM = 34,                 /* TIPO_ELEM  */
  YYSYMBOL_COMANDO_ELSE = 35,              /* COMANDO_ELSE  */
  YYSYMBOL_EMPTY = 36,                     /* EMPTY  */
  YYSYMBOL_COMANDO_IF = 37,                /* COMANDO_IF  */
  YYSYMBOL_IN = 38,                        /* IN  */
  YYSYMBOL_IS_FLOAT = 39,                  /* IS_FLOAT  */
  YYSYMBOL_IS_INT = 40,                    /* IS_INT  */
  YYSYMBOL_IS_SET = 41,                    /* IS_SET  */
  YYSYMBOL_OP_NEGACAO = 42,                /* OP_NEGACAO  */
  YYSYMBOL_PARENTESE_E = 43,               /* PARENTESE_E  */
  YYSYMBOL_PARENTESE_D = 44,               /* PARENTESE_D  */
  YYSYMBOL_PONTO_E_VIRGULA = 45,           /* PONTO_E_VIRGULA  */
  YYSYMBOL_RETURN = 46,                    /* RETURN  */
  YYSYMBOL_TIPO_SET = 47,                  /* TIPO_SET  */
  YYSYMBOL_TIPO_INT = 48,                  /* TIPO_INT  */
  YYSYMBOL_TIPO_FLOAT = 49,                /* TIPO_FLOAT  */
  YYSYMBOL_VIRGULA = 50,                   /* VIRGULA  */
  YYSYMBOL_THEN = 51,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_programa = 53,                  /* programa  */
  YYSYMBOL_declaracoes = 54,               /* declaracoes  */
  YYSYMBOL_lista_identificadores = 55,     /* lista_identificadores  */
  YYSYMBOL_declaracao_parametro = 56,      /* declaracao_parametro  */
  YYSYMBOL_lista_tipo_parametro = 57,      /* lista_tipo_parametro  */
  YYSYMBOL_def_declaracao = 58,            /* def_declaracao  */
  YYSYMBOL_def_declaracao_tipo = 59,       /* def_declaracao_tipo  */
  YYSYMBOL_declaracao_func = 60,           /* declaracao_func  */
  YYSYMBOL_declaracao = 61,                /* declaracao  */
  YYSYMBOL_lista_inicializar_atrib = 62,   /* lista_inicializar_atrib  */
  YYSYMBOL_declaracao_var = 63,            /* declaracao_var  */
  YYSYMBOL_item_bloco = 64,                /* item_bloco  */
  YYSYMBOL_lista_itens_bloco = 65,         /* lista_itens_bloco  */
  YYSYMBOL_expressao = 66,                 /* expressao  */
  YYSYMBOL_expressao_declaracao = 67,      /* expressao_declaracao  */
  YYSYMBOL_tipos_expressao = 68,           /* tipos_expressao  */
  YYSYMBOL_valores = 69,                   /* valores  */
  YYSYMBOL_expressao_principal = 70,       /* expressao_principal  */
  YYSYMBOL_expressao_atribuicao = 71,      /* expressao_atribuicao  */
  YYSYMBOL_expressao_logica = 72,          /* expressao_logica  */
  YYSYMBOL_expressao_relacional = 73,      /* expressao_relacional  */
  YYSYMBOL_expressao_aritmetica = 74,      /* expressao_aritmetica  */
  YYSYMBOL_expressao_conjunto = 75,        /* expressao_conjunto  */
  YYSYMBOL_expressao_operacao = 76,        /* expressao_operacao  */
  YYSYMBOL_operadores_expressao = 77,      /* operadores_expressao  */
  YYSYMBOL_expressao_io = 78,              /* expressao_io  */
  YYSYMBOL_expressao_chamada = 79,         /* expressao_chamada  */
  YYSYMBOL_expressao_lista_param = 80,     /* expressao_lista_param  */
  YYSYMBOL_expressao_decisao = 81,         /* expressao_decisao  */
  YYSYMBOL_expressao_iteracao = 82,        /* expressao_iteracao  */
  YYSYMBOL_expressao_composta = 83,        /* expressao_composta  */
  YYSYMBOL_expressao_return = 84           /* expressao_return  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   14652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1057

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    72,    76,    83,    84,    87,    92,    95,
      99,   106,   111,   117,   125,   128,   129,   130,   131,   135,
     143,   148,   155,   159,   165,   166,   184,   185,   188,   192,
     199,   200,   203,   204,   207,   208,   209,   210,   211,   214,
     215,   216,   219,   223,   227,   229,   231,   235,   236,   264,
     265,   269,   276,   277,   281,   285,   289,   293,   299,   300,
     304,   308,   312,   318,   319,   323,   327,   334,   335,   341,
     345,   346,   356,   365,   371,   372,   373,   399,   403,   410,
     434,   438,   442,   448,   452,   456,   462,   466,   472,   476
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_INTEIRO",
  "TOKEN_EMPTY", "TOKEN_PONTO_FLUTUANTE", "TOKEN_CARACTERE",
  "TOKEN_CADEIA", "OP_DIVISAO", "OP_MULTIPLICACAO", "OP_E", "OP_OU",
  "OP_IGUALDADE", "OP_MAIOR_QUE", "OP_MENOR_QUE", "OP_MAIOR_IGUAL",
  "OP_MENOR_IGUAL", "OP_SOMA", "OP_SUBTRACAO", "CONJUNTO_ADD",
  "CONJUNTO_REMOVE", "CONJUNTO_EXISTS", "COMANDO_READ", "COMANDO_WRITE",
  "COMANDO_WRITELN", "TOKEN_ID", "ATRIBUICAO", "ASPAS_SIMPLES",
  "ASPAS_DUPLAS", "CHAVE_E", "CHAVE_D", "COMANDO_FOR", "COMANDO_FORALL",
  "CONJUNTO_IN", "TIPO_ELEM", "COMANDO_ELSE", "EMPTY", "COMANDO_IF", "IN",
  "IS_FLOAT", "IS_INT", "IS_SET", "OP_NEGACAO", "PARENTESE_E",
  "PARENTESE_D", "PONTO_E_VIRGULA", "RETURN", "TIPO_SET", "TIPO_INT",
  "TIPO_FLOAT", "VIRGULA", "THEN", "$accept", "programa", "declaracoes",
  "lista_identificadores", "declaracao_parametro", "lista_tipo_parametro",
  "def_declaracao", "def_declaracao_tipo", "declaracao_func", "declaracao",
  "lista_inicializar_atrib", "declaracao_var", "item_bloco",
  "lista_itens_bloco", "expressao", "expressao_declaracao",
  "tipos_expressao", "valores", "expressao_principal",
  "expressao_atribuicao", "expressao_logica", "expressao_relacional",
  "expressao_aritmetica", "expressao_conjunto", "expressao_operacao",
  "operadores_expressao", "expressao_io", "expressao_chamada",
  "expressao_lista_param", "expressao_decisao", "expressao_iteracao",
  "expressao_composta", "expressao_return", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
#endif

#define YYPACT_NINF (-380)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      73,   120,   273,   294,   302,    51,    11,    50,   409,    14,
      18,    41,  -380,    44,  2146,    47,   101,    53,   195,   395,
    1045,  1643,  1737,  2413,   428,    25,    67,    93,   107,   118,
     158,  2507,   189,    69,   208,   222,   240,   289,  2183,  1110,
      -5,  2430,  2465,  2524,   470,  2574,  2847,  3183,  3277,   499,
      98,  1029, 11329, 11372,  7769,   672,  9945,  9965,  2916,  2953,
    3200,  3235,   296,    77,   270,   454,   454,   454,  1154,  1154,
    1154,    96,   381,  4763,  6051,    62,  3294,   517,   134,    80,
    3344,  3617, 12553,   958, 12579, 12579, 12579, 12579, 12579, 12579,
   12579, 12579, 12579, 12579, 12579, 12553,  9988,   175,   272,   276,
     319,   420,   109,   500,   291,   308,   313,   333,   352,   372,
     383,  3953,  5489,   411,   436,   438,   204,  4047,  3686,   715,
   10008,   610,   746,  1865,  2635, 11383, 11394, 11437, 11448, 11459,
   11502, 11513, 11524, 11567,   723,   417,   412,   497,   256,   582,
   12605, 12605, 12605, 10031, 10051, 10074,  6825, 12631, 12631,  8106,
   12631, 10094,   289,   754,   770,   445,   449,   479,   483,   502,
     504,   151,   526,   795, 11578, 11589, 11632,  8137,  8137,  8137,
    8137,  8106,  3723,  3970,  4005,  4064,   186,  8137,  4114,  4387,
      59,    88,    90,   142,   895,  9262,  9281,  9324,   488,   535,
     542,   554,   564,   584,  9343,   627,   289,  9386,  9405,   797,
      87,  4354, 11643, 11654, 10117,  1368, 10137, 10160,   599,  4444,
     904,   113,   203,   205,   247,     3,   119,   159,   179,   635,
     645,   655,   665,   675,   677,   234,   666,   289,   246,   295,
    1465,   637,   701,    -6,    39,   237,   338,   678,   679,   704,
     369,   745,   289,   382,   422,   728, 13559, 13595, 13631, 13667,
     705,   740,   744,   748,   756,   758, 13703,   787,   289,   814,
     418,  8455,  8486, 13739, 13775,    22,  1212,  5710, 14238,  1317,
    1944,  4816,  7891,  6204,  6693,  6941,  7101,   772,   801,   813,
     820,   821,   823,  7148,   864,   289,  7409,  7559,     6,  5738,
    8055, 10180,  2039,  2235,  2809,  3579,   289,   373, 10223, 10234,
   10245, 10288,   847,   848,   857, 10299,   877,   289, 10310, 10353,
   11697,  2714, 11708, 11719,   759,  4493,   876,   883,   884,  8517,
    4356,  1130,  8548,  8579,  8610,  8641,  8672,   561,   891,   892,
     894,   906,  1154,   907,  4726,   910,   921,   928,   929,  5111,
    1220,   930,   940,   942,   951,   952,  8282, 12755, 12774, 12793,
     954,   956,   977,   981,   993,   994, 12812,   947,   289, 12831,
   12850,    75,   379,    13, 13152,  5365,  3005, 12907, 12926,  4773,
     995,  1005,  1006,   239,  5568,  1227,   330,   487,   534,   569,
     616,  4836,  5011,   454,   454,   454,  1154,  1154,  1154,   989,
     842,  5688, 12657, 12657, 12657, 12657, 12657, 12657, 12657, 12657,
   12657, 12657, 12657,   289, 10364,  5059,   454,   454,   454,  1154,
    1154,  1154,  1023,   844,  7868,  1018,  1154,  1154,  1154,  1038,
     870,  8259,   454,   454,   454,  1154,  1154,  1154,  1049,   874,
    8703,  8734,  1234, 12337, 12683, 12683, 12683, 12683, 12683, 12683,
   12683, 12683, 12683, 12683, 12683,  4763, 14082,   454,   454,   454,
    1154,  1154,  1154,  1069,   879, 12364, 12709, 12709, 12709, 12709,
   12709, 12709, 12709, 12709, 12709, 12709, 12709,  6051,  6987,   960,
     768,   963,   964,  1154,  1154,  1154,  1070,   971, 12391, 11762,
    8765,  5142,   381,  4763,  6051,  8796,  1235,  8827,   815,   973,
     975,   454,   454,   454,  1008,  1028,  5383,   381,  4763,  6051,
    1055,  1236,  1056,   454,   454,   454,  1154,  1154,  1154,  1081,
    1020, 12418, 12735, 12735, 12735, 12735, 12735, 12735, 12735, 12735,
   12735, 12735, 12735, 12631, 12945,   682,  5439,   381,  4763,  6051,
     732,  1237,   803,  5786,  1089,  1091,  1117,  1065,  1107,  1108,
    9448,  9467, 10407,  1025,  9491, 10426, 10450, 10469,  1111,  1129,
    1155, 10493,  1135,   289, 10512, 10536,  4932, 11773,  3484, 11784,
   11827,  5208, 11838, 11849, 11892, 11903, 11914, 11957, 11968, 11979,
   12022,  1036,  1140,  1166,  1184,  1175,  1176,  1177,   325,   337,
    1204,  1037,  1195,  1207,  1209,   457,   586,  1219,  1041,  1231,
    1240,  1264,  1263,  1265,  1266, 13811, 13847,  8858, 14108,  1048,
   13883, 13894, 13930, 13941,  1268,  1269,  1270, 13977,  1296,   289,
   13988, 14024,  1386, 14249,  3775, 14275, 14286,  1468, 14312, 14323,
   14349, 14360, 14386, 14397, 14423, 14434, 14460,  1289,  1290,  1308,
    1312,  1304,  1315,  1322,  9176,  9219,  9510,  1057,  8306,  9553,
    9565,  9608,  1326,  1331,  1340,  9620,  1359,   289,  9663,  9675,
    6579, 10555,  4254, 10598, 10610,  7033, 10653, 10665, 10708, 10720,
   10763, 10775, 10818, 10830, 10873,   206,   786,   833,  1341,  1342,
    1343, 10884, 10927, 12033,  1066,  8889,  5489,  1355,  1361,  1068,
     452,  8920,   817,   872,  1370,  1372,  1373,  1363,  5489,  1375,
    1376,  1075,   622,  1366,  1380,  1381,  1388,  1378,  1379,  1383,
   12869, 12888, 12964,  1076,  8427,  9305,  9367,  9429,  1382,  1385,
    1396, 12983,  1399,   289, 13001, 13020,   730, 13170,  4646, 13189,
   13207,   978, 13226, 13244, 13263, 13281, 13300, 13318, 13337, 13355,
   13374,  1397,   850,  5489,  1416,  1419,  1077,   623,  1271, 12605,
   12605, 12605, 10938, 10981, 11000, 11025,  1154,  1154,  1154,  1402,
    1094, 12445, 12044, 12605, 12605, 12605,  1420,  1421,  1422,  1424,
    1423,  1427,  1429,  1430, 12605, 12605, 12605, 14134, 14160, 14186,
   14212,  1154,  1154,  1154,  1436,  1096, 12472, 14471, 12605, 12605,
   12605,  9718,  9761,  9804,  9847,  1154,  1154,  1154,  1437,  1099,
   12499, 11044, 12087, 12098, 12109, 12152,  6825, 12631, 12631,  8951,
   12631, 12605, 12605, 12605,  6825, 12631, 12631,  8982, 12631, 12605,
   12605, 12605, 13039, 13058, 13077, 13096,  1154,  1154,  1154,  1438,
    1146, 12526, 13392,  6825, 12631, 12631,  8106, 12631,  1431,  1432,
    1442,  1447,  1449,  1450, 11087, 11098, 12163,  1150,  1451,  1452,
    1453,  1454,  1455,  1456,  1479,  1480,  1487, 14035, 14071, 14497,
    1151,  1488,  1490,  1494,  1495,  1503,  1504,  9890,  9902, 11110,
    1197,  1505,  1506,  1507,  6014,  1403,  1466,  1522,  1211,  6465,
    1238,  1981,  2751,  3521,  4291,  4542,  6300,  1528,  1529,  1543,
    1544,  1545,  1546,  1547,  6061,  1552,  1553,  1555,   192,  6525,
    1254,   339,   374,   375,   404,   469,   516,  1556,  1560,  1561,
    1562,  1563,  1564,  1565, 13115, 13133, 13411,  1200,  1569,  1570,
    1571,  1333,  1575, 12174, 12217, 12228, 12239, 12282, 12293, 12304,
    1433,  1566,  1587, 14508, 14534, 14545, 14571, 14582, 14608, 14619,
   11153, 11165, 11208, 11220, 11263, 11275, 11318,  5489,  5489,  5489,
    6335,  6096,   381,  4763,  6051,  6370,  1294,  6430,  5489,  8951,
    1577,  1584,  1585,  6825,  6825,  6825,   540,  6143,   381,  4763,
    6051,   567,  1297,   587,  6825,  8982, 13429, 13448, 13466, 13485,
   13503, 13522, 13540,  8106,  8106,  8106,  8106,  8106,  9013,  9044,
    9075,  6648,  5489,  1610,  1611,  1205,   624,  6728,  9106,  6774,
    1601,  1605,  1606,   589,  5489,  1629,  1633,  1208,   738,   636,
    1624,   648,  1413,  1660,  1695,  1754,  1804,  6825, 12631, 12631,
    8951, 12631,  5489,  6825, 12631, 12631,  8982, 12631,  6825,  8106,
    1626,  1627,  1630,  6871,  1631,  9137,  1632,  1652,  1657,   649,
    1666,  1667,  2077,  8951,  8951,  8951,  8951,  8951,  8982,  8982,
    8982,  8982,  8982,  7204,  7239,  7274,  7323,  7593,   688,   689,
     714,   749,   750,  8951,  8982,  7911,   751
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -380,  -380,  -380,  -284,     9,  -278,   -30,     2,  1262,    -2,
     -34,     1,   -40,  -174,   129,  6714,  4723,  1889,  2659,  7025,
    7399,  6573,  6121,  5487,  4199,  4843,  1119,  3429,  -379,  7041,
    7294,    -7,  7415
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    99,   259,   101,    18,    40,   261,    10,
      19,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,   122,    58,
      59,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    11,     8,    80,    13,   382,   210,    11,     8,     7,
      78,    -2,   543,   471,   -20,     7,   456,   457,    -3,   472,
     208,   519,   520,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     521,   522,   434,   435,   103,   581,   -39,   -39,   -39,   -47,
     209,   -21,   588,   489,    -4,     1,   -39,   -19,   -20,   490,
     -47,    12,    -3,   -24,   599,   -47,   -47,   -52,     2,     3,
       4,   -20,   -20,   -20,   102,    -3,    -3,    -3,    65,   -86,
     112,   100,   139,   262,   260,   -21,   637,   -25,    -4,    14,
     -87,   -19,   -41,   -41,   -17,   512,   513,   -24,   -21,   -21,
     -21,    -4,    -4,    -4,   -19,   -19,   -19,   392,   393,   674,
     -24,   -24,   -24,   -86,   -17,   325,   117,     1,    84,    85,
      66,   -25,   296,   -18,   -87,   -15,   -86,   -86,   -86,   -47,
       2,     3,     4,   111,   -25,   -25,   -25,   -87,   -87,   -87,
     -11,   -47,   703,   -18,   314,   -15,    67,   -47,   -17,   344,
     102,   481,   379,   -47,   -11,   -17,   -11,   154,   -47,   -17,
      68,   -11,   -41,    -8,   -80,   -80,   -80,   -17,   -80,    -8,
     496,    69,   -41,   -17,   379,   -17,    75,   -16,    77,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   297,   -80,   -22,
     -80,   -80,   -80,   -80,   -22,   -80,   170,   -16,   -80,   -82,
     -82,   -82,   -40,   -82,   -80,   526,   -80,   -80,   -80,   -80,
     -80,    70,   -40,   115,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -45,   -82,    71,   -82,   -82,   -82,   -82,    -5,
     -82,   177,   -45,   -82,    -7,    -5,   432,   -32,   -18,   -82,
     -15,   -82,   -82,   -82,   -82,   -82,   -32,   150,    62,   -48,
     -22,   321,   -32,   -32,   -32,   -22,   -32,   -18,   -30,   -15,
     -48,    72,   430,   -18,   -30,   -15,   -48,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,    73,   -32,   -42,   -32,   -32,
     -32,   -32,   -16,   -32,   -32,   340,   -32,   -42,   375,   -43,
     -40,   -40,   -32,    74,   -32,   -32,   -32,   -32,   -32,   -43,
     211,   -16,   184,   185,   186,   208,   187,   -16,   -18,   102,
     375,   -12,   -18,   212,   213,   214,   100,    24,   188,   189,
     190,   191,   192,   193,   194,   -12,   195,   -12,   -18,   -15,
     135,    97,   -12,   -15,   140,   390,   136,   -16,   -74,   102,
     211,   -16,   196,   -34,   -34,   -34,   100,   -34,   414,   -15,
      98,   -63,    80,   212,   213,   214,   141,   -16,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   413,   -34,   -44,   -34,
     -34,   -34,   -34,    -9,   -34,   -34,   142,   -34,   -44,    -9,
     -46,   420,   837,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -46,   -45,   -45,   -34,   246,   247,   248,   429,   249,   -49,
     -49,   514,   515,   516,   517,   518,   143,   850,    97,    24,
     250,   251,   252,   253,   254,   255,   256,   211,   257,   964,
     -35,   860,   -42,   -42,   454,     1,   144,   470,   -80,   -35,
     212,   213,   214,   -49,   258,   -43,   -43,   145,     2,     3,
       4,   -69,   -69,   -69,    16,   -69,   477,   153,    -8,   -38,
      63,    80,   907,    16,   147,    64,   -14,    -8,   -38,   486,
     -69,   -69,   -69,   -69,    17,   -69,    80,   215,   216,   217,
     -14,   218,   -14,   431,   137,   421,   -74,   -14,   501,   148,
     138,   -69,    24,   219,   220,   221,   222,   223,   224,   225,
     676,   226,   149,   262,   260,   800,    80,   510,   296,   164,
     -35,   -35,   -35,   165,   -35,   688,   -30,   227,   262,   260,
     -44,   -44,   -30,   531,   -36,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -36,   -35,    81,   -35,   -35,   -35,   -35,
      82,   -35,   -35,   166,   -35,   733,   -13,   167,   262,   260,
     -35,   383,   -35,   -35,   -35,   -35,   -35,   -38,   -38,   -38,
     -13,   -38,   -13,   297,   -30,   -23,   168,   -13,   169,   -30,
     -23,   -37,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -37,   -38,   118,   -38,   -38,   -38,   -38,    82,   -38,   -38,
     171,   -38,   -36,   -36,   -36,   -86,   -36,   -38,   384,   -38,
     -38,   -38,   -38,   -38,   -86,   385,    97,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   211,   -36,   386,   -36,   -36,
     -36,   -36,   -88,   -36,   -36,   488,   -36,   387,   212,   213,
     214,   -88,   -36,   679,   -36,   -36,   -36,   -36,   -36,   -37,
     -37,   -37,   -33,   -37,   -87,   327,    -7,   388,   691,   -46,
     -46,   -33,    -7,   -87,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -11,   -37,   -11,   -37,   -37,   -37,   -37,   -11,
     -37,   -37,   389,   -37,   -77,   808,   827,  1011,   736,   -37,
     -77,   -37,   -37,   -37,   -37,   -37,   -30,   -30,   -30,   325,
     -67,   -89,   -30,   -30,   -30,    20,    21,    22,   406,    23,
     -89,   325,   750,  1018,  1041,   -86,   -86,   -86,   407,   -86,
     941,   412,   -82,   -80,    28,    29,    30,    31,   408,    32,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   409,   -86,
     957,   -86,   -86,   -86,   -86,    37,   -86,   -86,   410,   -86,
     411,   416,   417,   -83,   -84,   -86,   325,   -86,   -86,   -86,
     -86,   -86,   -83,   -84,   -70,   -88,   -88,   -88,   775,   -88,
     -50,   -50,   514,   515,   516,   517,   518,   418,   422,   -85,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -85,   -88,
     -31,   -88,   -88,   -88,   -88,   -31,   -88,   -88,   -48,   -88,
     419,  1017,   -70,   -48,   -50,   -88,   789,   -88,   -88,   -88,
     -88,   -88,   -30,   423,   -79,  1054,   -81,   424,   -30,   344,
     151,   425,   875,   -79,   -82,   -81,   152,   344,    -6,   426,
     895,   427,   -11,   -11,    -6,   321,   -33,   -33,   -33,   -11,
     -33,   -12,   428,   -12,   -10,   447,   344,   321,   -12,   379,
     -10,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -14,
     -33,   -14,   -33,   -33,   -33,   -33,   -14,   -33,   -33,   -78,
     -33,   -30,   820,   315,   448,   -78,   -33,   -30,   -33,   -33,
     -33,   -33,   -33,   -87,   -87,   -87,   449,   -87,   -12,   -12,
     -14,   -14,   321,   450,   451,   -12,   452,   -14,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -13,   -87,   -13,   -87,
     -87,   -87,   -87,   -13,   -87,   -87,   541,   -87,   579,   453,
     473,   474,   296,   -87,   296,   -87,   -87,   -87,   -87,   -87,
     475,    80,   476,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   586,   -13,   -13,    80,   596,   482,
     296,   -39,   -13,   635,   296,   340,   483,   484,   870,   296,
     325,   325,   325,   340,   491,   492,   890,   493,   -39,   -39,
     982,   325,   875,   262,   260,   -39,   344,   344,   344,   405,
     -63,   -67,   340,   497,    64,   375,   994,   344,   895,   262,
     260,   184,   185,   186,   498,   187,   379,   379,   379,   379,
     379,   499,   509,   -32,   -34,   325,    24,   188,   189,   190,
     191,   192,   193,   194,   -35,   195,   -38,   325,   -51,   -51,
     514,   515,   516,   517,   518,   -36,   -37,   503,   946,   504,
     344,   196,   120,   875,   -31,   325,   344,   666,   667,   895,
     -31,   344,   379,   136,   138,   672,   540,   682,   962,   683,
     505,   296,   -51,   136,   506,   138,   875,   875,   875,   875,
     875,   895,   895,   895,   895,   895,   507,   508,   527,   -49,
     -49,    86,    87,    88,    89,    90,   875,   895,   528,   529,
     578,   -68,   -68,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   701,   585,   321,   321,   321,   745,
     296,   -39,   -86,   985,   -49,   152,   595,   321,   870,   -49,
     -48,   759,   340,   340,   340,   763,   -48,   152,   -39,   997,
     -39,   152,   770,   340,   890,   -39,   634,   671,   152,   -88,
     -33,   784,   375,   375,   375,   375,   375,   152,   700,   742,
     795,   321,   799,    20,    21,    22,   152,    23,   296,   807,
     815,   826,   739,   321,   740,   296,   152,   296,    24,    25,
      26,    27,    28,    29,    30,    31,   340,    32,   835,   870,
     848,   321,   340,   858,   296,   890,   296,   340,   375,   296,
     741,   743,   744,    37,   746,    76,   206,   233,   234,   235,
     749,   236,   870,   870,   870,   870,   870,   890,   890,   890,
     890,   890,   747,   753,    96,   487,   237,   238,   239,   240,
      82,   241,   870,   890,   231,   231,   231,   108,   109,   110,
     905,   271,   271,   294,   919,   929,   296,   242,   748,   754,
     152,   152,   206,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   -32,   -32,   -32,   755,   -32,   756,
     757,   758,   -49,   -49,   436,   437,   438,   439,   440,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -75,   -32,   760,
     -32,   936,   -32,   -32,   972,   -49,   -32,   152,   -32,  1010,
     152,   761,  1016,   762,   -32,   296,   -32,   -32,   296,   333,
     333,   333,     9,   -75,   764,   502,   367,   367,     9,   367,
      82,   206,   532,   765,   -89,   -89,   -89,    82,   -89,   597,
     681,   693,   738,   947,    64,    82,    82,    82,    82,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   766,   -89,   963,
     -89,   -89,   -89,   -89,    82,   -89,   -89,   767,   -89,   768,
     769,   771,   772,   773,   -89,   206,   -89,   -89,   -89,   -89,
     -89,   774,   -48,   778,   404,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -80,   -80,   -80,   987,
     -80,   779,   999,   445,    82,   780,   206,    82,   781,   415,
     -63,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   782,
     -80,   206,   -80,   -80,   -80,   -80,   783,   -80,   976,   785,
     -80,   184,   185,   186,   786,   187,   -80,   206,   -80,   -80,
     -80,   -80,   -80,   787,   788,   792,   793,   794,   797,   446,
     191,   192,   193,   194,   798,   195,   -50,   -50,   436,   437,
     438,   439,   440,   801,   206,   802,   803,   -87,   805,   806,
     -89,   196,   468,   809,   810,   206,   -83,   -83,   -83,   -50,
     -83,   811,   812,   813,   819,   816,   206,   814,   817,   834,
     479,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   818,
     -83,   -48,   -83,   -83,   -83,   -83,   942,   -83,   -83,   824,
     -83,   494,   825,   -73,   -72,   -71,   -83,   -76,   -83,   -83,
     -83,   -83,   -83,   847,   857,   904,   -64,   -73,   215,   216,
     217,   -72,   218,   -71,   -76,   913,   914,   206,   -51,   -51,
     436,   437,   438,   439,   440,   524,   915,   222,   223,   224,
     225,   916,   226,   917,   918,   920,   921,   922,   923,   924,
     925,   -51,   231,   231,   231,   537,   538,   539,   227,   943,
     206,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   206,   926,   927,   231,   231,   231,   575,   576,
     577,   928,   930,   206,   931,   582,   583,   584,   932,   933,
     206,   231,   231,   231,   592,   593,   594,   934,   935,   937,
     938,   939,   206,   615,   615,   615,   615,   615,   615,   615,
     615,   615,   615,   615,   271,   944,   231,   231,   231,   631,
     632,   633,   949,   950,   206,   653,   653,   653,   653,   653,
     653,   653,   653,   653,   653,   653,   294,   951,   952,   953,
     954,   955,   668,   669,   670,   958,   959,   206,   960,   -65,
     965,   271,   271,   294,   966,   967,   968,   969,   970,   971,
     231,   231,   231,   973,   974,   975,   271,   271,   294,   977,
     -66,   -64,   231,   231,   231,   697,   698,   699,   -65,   -66,
     206,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   367,  1008,  1009,   -83,   271,   271,   294,   -84,
     -85,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,  1014,   -84,   -84,   -84,  1015,   -84,   -79,   -41,
    1033,  1034,   206,     0,  1035,  1037,  1038,   752,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -41,   -84,   -41,   -84,
     -84,   -84,   -84,   -41,   -84,   -84,  1039,   -84,   -85,   -85,
     -85,  1040,   -85,   -84,     0,   -84,   -84,   -84,   -84,   -84,
    1042,   -81,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,     0,   -85,   -85,   -85,   -85,   206,   -85,
     -85,     0,   -85,   777,     0,     0,     0,     0,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -79,   -79,   -79,
       0,   -79,     0,   -40,     0,     0,   206,     0,     0,     0,
       0,   791,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -40,   -79,   -40,   -79,   -79,   -79,   -79,   -40,   -79,   -79,
       0,   -79,     0,     0,     0,     0,     0,   -79,     0,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -82,   -82,   -82,
       0,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,   206,   -82,   -82,   -82,   -82,   822,   -82,  1019,
       0,   -82,     0,     0,     0,     0,     0,   -82,     0,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,   333,   333,
     333,     0,     0,     0,     0,   831,   832,   833,     0,     0,
     206,     0,   333,   333,   333,   -50,   -50,    86,    87,    88,
      89,    90,     0,   333,   333,   333,     0,     0,     0,     0,
     844,   845,   846,     0,     0,   206,     0,   333,   333,   333,
       0,     0,     0,     0,   854,   855,   856,     0,     0,   206,
     -50,     0,     0,     0,     0,   -50,   367,   367,     0,   367,
     333,   333,   333,     0,   367,   367,   197,   367,   333,   333,
     333,     0,     0,     0,     0,   901,   902,   903,     0,     0,
     206,     0,     0,   367,   367,     0,   367,   246,   247,   248,
       0,   249,     0,     0,   228,   228,   228,   243,   243,   243,
       0,   263,   263,   286,     0,     0,   253,   254,   255,   256,
       0,   257,   197,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   -34,   -34,   -34,   258,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,     0,   -34,   -34,     0,     0,   -34,     0,   -34,     0,
       0,     0,     0,     0,   -34,     0,   -34,   -34,     0,   243,
     243,   243,     0,     0,     0,     0,   359,   359,     0,   359,
       0,   197,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,   271,   271,   294,     0,   467,     0,     0,     0,     0,
       0,     0,   -63,     0,     0,     0,     0,   271,   271,   294,
     -81,   -81,   -81,   -63,   -81,   197,     0,     0,     0,   -63,
       0,     0,     0,     0,   197,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,     0,   -81,   -81,   -81,   -81,
       0,   -81,   -81,     0,   -81,     0,   197,     0,     0,   228,
     -81,     0,   -81,   -81,   -81,   -81,   -81,   367,   367,     0,
     367,   197,     0,   367,   367,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,     0,    20,
      21,    22,     0,    23,     0,     0,     0,     0,     0,   263,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,   197,   179,    33,    34,    35,     0,
     180,     0,   286,    36,     0,   197,   -32,   -32,   -32,    37,
     -32,    38,    39,   181,   182,   183,   197,     0,     0,     0,
     308,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
     -32,   243,     0,     0,     0,     0,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,     0,   273,   274,
     275,     0,   276,     0,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,   359,     0,   280,   281,   282,
     283,     0,   284,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228,   228,   228,   243,   243,   243,   285,     0,
     197,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   197,     0,     0,   228,   228,   228,   243,   243,
     243,     0,     0,   197,     0,   243,   243,   243,     0,     0,
     197,   228,   228,   228,   243,   243,   243,     0,     0,     0,
       0,     0,   197,   610,   610,   610,   610,   610,   610,   610,
     610,   610,   610,   610,   263,     0,   228,   228,   228,   243,
     243,   243,     0,     0,   197,   648,   648,   648,   648,   648,
     648,   648,   648,   648,   648,   648,   286,     0,     0,     0,
       0,     0,   243,   243,   243,     0,     0,   197,     0,     0,
       0,   263,   263,   286,     0,     0,     0,     0,     0,     0,
     228,   228,   228,     0,     0,     0,   263,   263,   286,     0,
       0,     0,   228,   228,   228,   243,   243,   243,     0,     0,
     197,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   359,     0,     0,     0,   263,   263,   286,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -26,   -26,   -26,     0,   -26,     0,   -45,
       0,     0,   197,     0,     0,     0,     0,   554,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -45,   -26,   -45,   -26,
     -26,   -26,   -26,   -45,   -26,     0,     0,   -26,   -28,   -28,
     -28,     0,   -28,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   197,   -28,
       0,     0,   -28,   610,     0,     0,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,    20,    21,    22,
       0,    23,     0,   -42,     0,     0,   197,     0,     0,     0,
       0,   648,    24,    25,    26,    27,    28,    29,    30,    31,
     -42,    32,   -42,   179,    79,    34,    35,   -42,   180,     0,
       0,    36,     0,     0,     0,     0,     0,    37,     0,    38,
      39,   181,   182,   183,     0,     0,     0,   -34,   -34,   -34,
       0,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   197,   -34,   -34,   -34,   -34,   714,   -34,     0,
       0,   -34,     0,     0,     0,     0,     0,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   243,   243,
     243,     0,     0,     0,     0,   243,   243,   243,     0,     0,
     197,     0,   243,   243,   243,   -51,   -51,    86,    87,    88,
      89,    90,     0,   243,   243,   243,     0,     0,     0,     0,
     243,   243,   243,     0,     0,   197,     0,   243,   243,   243,
       0,     0,     0,     0,   243,   243,   243,     0,     0,   197,
     -51,     0,     0,     0,     0,   -51,   359,   359,     0,   359,
     243,   243,   243,     0,   359,   359,   198,   359,   243,   243,
     243,     0,     0,     0,     0,   243,   243,   243,     0,     0,
     197,     0,     0,   359,   359,     0,   359,   298,   299,   300,
       0,   301,     0,     0,   229,   229,   229,   244,   244,   244,
       0,   264,   264,   287,     0,     0,   302,   303,   304,   305,
       0,   306,   198,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   -80,   -80,   -80,   307,   -80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -80,     0,   -80,   -80,     0,     0,   948,     0,   -80,     0,
       0,     0,     0,     0,   -80,     0,   -80,   -80,     0,   244,
     244,   244,     0,     0,     0,     0,   360,   360,     0,   360,
       0,   198,     0,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,   263,   263,   286,     0,   -67,     0,     0,     0,     0,
       0,     0,   -67,     0,     0,     0,     0,   263,   263,   286,
     -27,   -27,   -27,   -67,   -27,   198,     0,     0,     0,   -67,
       0,     0,     0,     0,   198,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,
       0,   -27,     0,     0,   -27,     0,   198,     0,     0,   229,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   359,   359,     0,
     359,   198,     0,   359,   359,     0,   359,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   198,     0,   -35,
     -35,   -35,     0,   -35,     0,     0,     0,     0,     0,   264,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   198,   -35,   -35,   -35,   -35,     0,
     -35,     0,   287,   -35,     0,   198,   -38,   -38,   -38,   -35,
     -38,   -35,   -35,   -35,   -35,   -35,   198,     0,     0,     0,
     309,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,     0,   -38,   -38,   -38,   -38,     0,   -38,     0,     0,
     -38,   244,     0,     0,     0,     0,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   346,   347,
     348,     0,   349,     0,     0,     0,     0,   198,     0,     0,
       0,     0,     0,     0,     0,   360,     0,   353,   354,   355,
     356,     0,   357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   229,   229,   229,   244,   244,   244,   358,     0,
     198,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   198,     0,     0,   229,   229,   229,   244,   244,
     244,     0,     0,   198,     0,   244,   244,   244,     0,     0,
     198,   229,   229,   229,   244,   244,   244,     0,     0,     0,
       0,     0,   198,   611,   611,   611,   611,   611,   611,   611,
     611,   611,   611,   611,   264,     0,   229,   229,   229,   244,
     244,   244,     0,     0,   198,   649,   649,   649,   649,   649,
     649,   649,   649,   649,   649,   649,   287,     0,     0,     0,
       0,     0,   244,   244,   244,     0,     0,   198,     0,     0,
       0,   264,   264,   287,     0,     0,     0,     0,     0,     0,
     229,   229,   229,     0,     0,     0,   264,   264,   287,     0,
       0,     0,   229,   229,   229,   244,   244,   244,     0,     0,
     198,   715,   715,   715,   715,   715,   715,   715,   715,   715,
     715,   715,   360,     0,     0,     0,   264,   264,   287,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -36,   -36,   -36,     0,   -36,     0,   -43,
       0,     0,   198,     0,     0,     0,     0,   555,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -43,   -36,   -43,   -36,
     -36,   -36,   -36,   -43,   -36,     0,     0,   -36,   -37,   -37,
     -37,     0,   -37,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,     0,   -37,   -37,   -37,   -37,   198,   -37,
       0,     0,   -37,   611,     0,     0,     0,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,   -88,   -88,   -88,
       0,   -88,     0,   -74,     0,     0,   198,     0,     0,     0,
       0,   649,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
      83,   -88,   -74,   -88,   -88,   -88,   -88,   -74,   -88,     0,
       0,   -88,     0,     0,     0,     0,     0,   -88,     0,   -88,
     -88,   -88,   -88,   -88,     0,     0,     0,   -29,   -29,   -29,
       0,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   198,   -29,   -29,   -29,   -29,   715,   -29,     0,
       0,   -29,     0,     0,     0,     0,     0,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,   244,   244,
     244,     0,     0,     0,     0,   244,   244,   244,     0,     0,
     198,     0,   244,   244,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   244,   244,   244,     0,     0,     0,     0,
     244,   244,   244,     0,     0,   198,     0,   244,   244,   244,
       0,     0,     0,     0,   244,   244,   244,     0,     0,   198,
       0,     0,     0,     0,     0,     0,   360,   360,     0,   360,
     244,   244,   244,     0,   360,   360,   207,   360,   244,   244,
     244,     0,     0,     0,     0,   244,   244,   244,     0,     0,
     198,     0,     0,   360,   360,     0,   360,   544,   545,   546,
       0,   547,     0,     0,   232,   232,   232,   245,   245,   245,
       0,   272,   272,   295,     0,     0,   548,   549,   550,   551,
       0,   552,   207,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   -35,   -35,   -35,   553,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,
     -35,     0,   -35,   -35,     0,     0,   -35,     0,   -35,     0,
       0,     0,     0,     0,   -35,     0,   -35,   -35,     0,   245,
     245,   245,     0,     0,     0,     0,   368,   368,     0,   368,
       0,   207,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,   264,   264,   287,     0,   -70,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,   264,   264,   287,
     -33,   -33,   -33,   -70,   -33,   207,     0,     0,     0,   -70,
       0,     0,     0,     0,   207,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,     0,   -33,   -33,   -33,   -33,
       0,   -33,     0,     0,   -33,     0,   207,     0,     0,   232,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   360,   360,     0,
     360,   207,     0,   360,   360,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,     0,   -89,
     -89,   -89,     0,   -89,     0,     0,     0,     0,     0,   272,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -89,   207,   -89,   -89,   -89,   -89,     0,
     -89,     0,   295,   -89,     0,   207,   -83,   -83,   -83,   -89,
     -83,   -89,   -89,   -89,   -89,   -89,   207,     0,     0,     0,
     313,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,     0,   -83,   -83,   -83,   -83,     0,   -83,     0,     0,
     -83,   245,     0,     0,     0,     0,   -83,     0,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,   600,   601,
     602,     0,   603,     0,     0,     0,     0,   207,     0,     0,
       0,     0,     0,     0,     0,   368,     0,   604,   605,   606,
     607,     0,   608,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   232,   232,   232,   245,   245,   245,   609,     0,
     207,   560,   560,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   207,     0,     0,   232,   232,   232,   245,   245,
     245,     0,     0,   207,     0,   245,   245,   245,     0,     0,
     207,   232,   232,   232,   245,   245,   245,     0,     0,     0,
       0,     0,   207,   616,   616,   616,   616,   616,   616,   616,
     616,   616,   616,   616,   272,     0,   232,   232,   232,   245,
     245,   245,     0,     0,   207,   654,   654,   654,   654,   654,
     654,   654,   654,   654,   654,   654,   295,     0,     0,     0,
       0,     0,   245,   245,   245,     0,     0,   207,     0,     0,
       0,   272,   272,   295,     0,     0,     0,     0,     0,     0,
     232,   232,   232,     0,     0,     0,   272,   272,   295,     0,
       0,     0,   232,   232,   232,   245,   245,   245,     0,     0,
     207,   720,   720,   720,   720,   720,   720,   720,   720,   720,
     720,   720,   368,     0,     0,     0,   272,   272,   295,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -84,   -84,   -84,     0,   -84,     0,   -44,
       0,     0,   207,     0,     0,     0,     0,   560,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -44,   -84,   -44,   -84,
     -84,   -84,   -84,   -44,   -84,     0,     0,   -84,   -85,   -85,
     -85,     0,   -85,   -84,     0,   -84,   -84,   -84,   -84,   -84,
       0,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,     0,   -85,   -85,   -85,   -85,   207,   -85,
       0,     0,   -85,   616,     0,     0,     0,     0,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -79,   -79,   -79,
       0,   -79,     0,   -46,     0,     0,   207,     0,     0,     0,
       0,   654,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -46,   -79,   -46,   -79,   -79,   -79,   -79,   -46,   -79,     0,
       0,   -79,     0,     0,     0,     0,     0,   -79,     0,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -81,   -81,   -81,
       0,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   207,   -81,   -81,   -81,   -81,   720,   -81,     0,
       0,   -81,     0,     0,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,     0,     0,     0,     0,   245,   245,
     245,     0,     0,     0,     0,   245,   245,   245,     0,     0,
     207,     0,   245,   245,   245,     0,     0,     0,     0,     0,
       0,     0,     0,   245,   245,   245,     0,     0,     0,     0,
     245,   245,   245,     0,     0,   207,     0,   245,   245,   245,
       0,     0,     0,     0,   245,   245,   245,     0,     0,   207,
       0,     0,     0,     0,     0,     0,   368,   368,     0,   368,
     245,   245,   245,     0,   368,   368,   204,   368,   245,   245,
     245,     0,     0,     0,     0,   245,   245,   245,     0,     0,
     207,     0,     0,   368,   368,     0,   368,   638,   639,   640,
       0,   641,     0,     0,   105,   105,   105,     0,     0,     0,
       0,   269,   269,   292,     0,     0,   642,   643,   644,   645,
       0,   646,   204,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   -38,   -38,   -38,   647,   -38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,
     -38,     0,   -38,   -38,     0,     0,   -38,     0,   -38,     0,
       0,     0,     0,     0,   -38,     0,   -38,   -38,     0,   331,
     331,   331,     0,     0,     0,     0,   365,   365,     0,   365,
       0,   204,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,     0,    23,   -49,   -49,   394,   395,   396,   397,
     398,   272,   272,   295,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,     0,     0,   272,   272,   295,
      20,    21,    22,     0,    23,   204,     0,     0,   -49,    37,
       0,   485,     0,     0,   -49,    24,    25,    26,    27,    28,
      29,    30,    31,     0,    32,     0,   179,   381,    34,    35,
       0,   180,     0,     0,    36,     0,   204,     0,     0,     0,
      37,     0,    38,    39,   181,   182,   183,   368,   368,     0,
     368,   204,     0,   368,   368,     0,   368,   -24,   -24,   -24,
       0,   -24,     0,     0,     0,     0,     0,   204,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,     0,   -24,   -24,   -24,   -24,     0,   -24,     0,
       0,   -24,     0,     0,   204,     0,     0,   -24,     0,   -24,
     -24,   -24,   -24,   -24,     0,   204,    20,    21,    22,     0,
      23,     0,     0,     0,     0,     0,   204,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   179,   480,    34,    35,     0,   180,     0,     0,
      36,     0,     0,     0,     0,     0,    37,     0,    38,    39,
     181,   182,   183,     0,     0,   -36,   -36,   -36,     0,   -36,
       0,     0,     0,     0,     0,     0,     0,   204,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,   -36,     0,   -36,   -36,     0,     0,   -36,     0,   -36,
       0,     0,   105,   105,   105,   -36,     0,   -36,   -36,     0,
     204,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   204,     0,     0,   105,   105,   105,     0,     0,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
     204,   105,   105,   105,     0,     0,     0,     0,     0,     0,
       0,     0,   204,   613,   613,   613,   613,   613,   613,   613,
     613,   613,   613,   613,   269,     0,   105,   105,   105,   704,
     705,   706,     0,   707,   204,   651,   651,   651,   651,   651,
     651,   651,   651,   651,   651,   651,   292,     0,   708,   709,
     710,   711,     0,   712,     0,     0,     0,   204,     0,     0,
       0,   269,   269,   292,     0,     0,     0,     0,     0,   713,
     105,   105,   105,     0,     0,     0,   269,   269,   292,     0,
       0,     0,   105,   105,   105,     0,     0,     0,     0,     0,
     204,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   365,     0,     0,     0,   269,   269,   292,    20,
      21,    22,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,   204,    32,     0,   179,   495,    34,    35,     0,
     180,     0,     0,    36,     0,     0,   246,   247,   248,    37,
     249,    38,    39,   181,   182,   183,    20,    21,    22,     0,
      23,    24,   250,   251,   252,   253,   254,   255,   256,     0,
     257,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   179,   525,    34,    35,   258,   180,   204,     0,
      36,     0,     0,     0,     0,     0,    37,     0,    38,    39,
     181,   182,   183,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   146,     0,     0,     0,   -86,
     -86,   -86,   -67,   -86,     0,     0,   204,     0,     0,   -67,
       0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,     0,   -86,     0,   -86,   -86,   -86,   -86,   158,
     -86,     0,   161,   -86,     0,     0,     0,     0,     0,   -86,
     205,   -86,   -86,   -86,   -86,   -86,     0,     0,     0,     0,
     172,   173,   174,   175,   176,     0,     0,     0,     0,     0,
     178,     0,     0,     0,     0,     0,     0,     0,   230,   230,
     230,     0,   204,     0,     0,   270,   270,   293,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   331,   331,
     331,     0,   -50,   -50,   394,   395,   396,   397,   398,     0,
     204,     0,   331,   331,   331,     0,     0,     0,     0,     0,
       0,     0,     0,   331,   331,   331,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,   -50,   331,   331,   331,
       0,     0,   -50,   332,   332,   332,     0,     0,     0,   204,
     366,   366,     0,   366,     0,   205,   365,   365,     0,   365,
     331,   331,   331,     0,   365,   365,     0,   365,   331,   331,
     331,     0,     0,     0,    20,    21,    22,     0,    23,     0,
     204,     0,     0,   365,   365,     0,   365,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,   205,
     179,   533,    34,    35,     0,   180,     0,     0,    36,     0,
       0,     0,     0,     0,    37,     0,    38,    39,   181,   182,
     183,     0,   -25,   -25,   -25,     0,   -25,     0,     0,     0,
     205,     0,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   205,   -25,     0,   -25,   -25,
     -25,   -25,     0,   -25,     0,     0,   -25,     0,     0,     0,
       0,   205,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,     0,    20,    21,    22,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   205,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,   205,
       0,   269,   269,   292,     0,    20,    21,    22,     0,    23,
     205,     0,     0,     0,    37,     0,   500,   269,   269,   292,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,   179,   675,    34,    35,     0,   180,     0,     0,    36,
       0,     0,     0,     0,     0,    37,     0,    38,    39,   181,
     182,   183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,   365,   365,     0,
     365,     0,     0,   365,   365,     0,   365,     0,   -51,   -51,
     394,   395,   396,   397,   398,     0,   230,   230,   230,     0,
       0,     0,     0,     0,   205,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   205,     0,     0,   230,
     230,   230,   -51,     0,     0,     0,     0,   205,   -51,     0,
       0,     0,     0,     0,   205,   230,   230,   230,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   614,   614,   614,
     614,   614,   614,   614,   614,   614,   614,   614,   270,     0,
     230,   230,   230,     0,     0,     0,     0,     0,   205,   652,
     652,   652,   652,   652,   652,   652,   652,   652,   652,   652,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,   270,   270,   293,     0,     0,
       0,     0,     0,     0,   230,   230,   230,     0,     0,     0,
     270,   270,   293,     0,     0,     0,   230,   230,   230,     0,
       0,     0,     0,     0,   205,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   366,     0,     0,     0,
     270,   270,   293,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,    20,    21,    22,     0,
      23,   523,     0,     0,     0,     0,   205,     0,     0,   796,
       0,    24,    25,    26,    27,    28,    29,    30,    31,   -63,
      32,   804,   179,   687,    34,    35,     0,   180,     0,     0,
      36,     0,     0,     0,     0,     0,    37,     0,    38,    39,
     181,   182,   183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,     0,    23,     0,     0,     0,
       0,     0,   205,     0,     0,     0,   823,    24,    25,    26,
      27,    28,    29,    30,    31,     0,    32,     0,   179,   732,
      34,    35,     0,   180,     0,     0,    36,     0,     0,     0,
       0,     0,    37,     0,    38,    39,   181,   182,   183,     0,
     205,     0,    20,    21,    22,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,     0,    32,     0,   315,   861,
     316,   317,   872,     0,   203,     0,   318,   881,     0,     0,
     892,     0,    37,     0,   319,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   908,     0,     0,   911,
       0,     0,   104,   106,   107,     0,   205,     0,     0,   268,
     268,   291,     0,     0,     0,     0,     0,     0,     0,     0,
     203,    20,    21,    22,     0,    23,     0,     0,   130,   131,
     132,   133,   332,   332,   332,     0,    24,    25,    26,    27,
      28,    29,    30,    31,   205,    32,   332,   332,   332,     0,
       0,     0,     0,     0,     0,     0,     0,   332,   332,   332,
       0,    37,     0,   530,     0,     0,     0,     0,     0,   205,
       0,   332,   332,   332,     0,     0,     0,   155,   156,   157,
       0,     0,     0,   205,   364,   364,     0,   364,     0,   203,
     366,   366,     0,   366,   332,   332,   332,     0,   366,   366,
       0,   366,   332,   332,   332,     0,     0,     0,     0,     0,
     978,   979,   980,     0,   205,     0,     0,   366,   366,     0,
     366,   988,   989,     0,     0,     0,   990,   991,   992,     0,
       0,     0,     0,   203,     0,     0,     0,  1000,  1001,     0,
       0,   184,   185,   186,     0,   187,  1002,  1003,  1004,  1005,
    1006,     0,     0,     0,     0,  1007,    24,   188,   189,   190,
     191,   192,   193,   194,   203,   195,     0,  1013,   441,   442,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   443,   444,   203,
    1020,   196,   542,  1023,     0,  1025,  1026,     0,     0,  1029,
       0,  1031,  1032,   -52,     0,   203,     0,     0,   -49,   -49,
     458,   459,   460,   461,   462,     0,  1043,  1044,  1045,  1046,
    1047,  1048,  1049,  1050,  1051,  1052,     0,     0,     0,     0,
       0,   -49,   203,     0,     0,     0,  1055,  1056,     0,     0,
       0,     0,   -49,   203,     0,   270,   270,   293,   -49,   -87,
     -87,   -87,     0,   -87,   203,     0,     0,     0,     0,     0,
       0,   270,   270,   293,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -87,     0,   -87,   -87,   -87,   -87,     0,
     -87,     0,     0,   -87,     0,     0,     0,     0,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,     0,     0,
       0,   366,   366,     0,   366,     0,     0,   366,   366,     0,
     366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     534,   535,   536,     0,     0,     0,     0,     0,   203,   203,
     203,   203,   203,   203,   203,   203,   567,   568,   569,   570,
     203,     0,     0,   572,   573,   574,     0,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,   203,   589,
     590,   591,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   268,   268,   268,   268,   268,   268,   268,   623,   624,
     625,   626,   268,     0,   628,   629,   630,     0,     0,     0,
       0,     0,   203,   291,   291,   291,   291,   291,   291,   291,
     661,   662,   663,   664,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,     0,   268,
     268,   291,     0,     0,     0,     0,     0,     0,   684,   685,
     686,     0,     0,     0,   268,   268,   291,     0,     0,     0,
     694,   695,   696,     0,     0,     0,     0,     0,   203,   364,
     364,   364,   364,   364,   364,   364,   727,   728,   729,   730,
     364,     0,     0,     0,   268,   268,   291,    20,    21,    22,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
     203,    32,     0,   179,   940,    34,    35,     0,   180,     0,
       0,    36,     0,     0,   273,   274,   275,    37,   276,    38,
      39,   181,   182,   183,    20,    21,    22,     0,    23,    24,
     277,   278,   279,   280,   281,   282,   283,     0,   284,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
     179,   956,    34,    35,   285,   180,   203,     0,    36,    20,
      21,    22,     0,    23,    37,     0,    38,    39,   181,   182,
     183,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,   179,   981,    34,    35,     0,
     180,     0,     0,    36,   203,     0,     0,     0,     0,    37,
       0,    38,    39,   181,   182,   183,    20,    21,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   179,   993,    34,    35,     0,   180,     0,     0,
      36,     0,     0,     0,     0,     0,    37,     0,    38,    39,
     181,   182,   183,   267,   267,   290,     0,     0,     0,     0,
     203,     0,     0,     0,   202,     0,     0,   125,   126,   127,
     128,   129,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,   828,   829,   830,     0,
     -39,     0,     0,     0,     0,     0,     0,   -39,   203,     0,
     838,   839,   840,     0,     0,     0,     0,   -39,   -39,     0,
       0,   841,   842,   843,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,   203,     0,   851,   852,   853,   363,   363,
       0,   363,     0,   202,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,   364,   364,     0,   364,   878,   879,
     880,     0,   364,   364,     0,   364,   898,   899,   900,     0,
       0,     0,     0,   -37,   -37,   -37,     0,   -37,   203,     0,
       0,   364,   364,     0,   364,     0,     0,   202,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,
       0,   -37,   -37,     0,     0,   -37,     0,   -37,   -86,   -86,
     -86,     0,   -86,   -37,     0,   -37,   -37,     0,   202,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,   202,   -86,     0,   -86,   -86,     0,     0,
     -86,     0,   -86,   -88,   -88,   -88,     0,   -88,   -86,   202,
     -86,   -86,     0,     0,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,     0,   -88,
       0,   -88,   -88,     0,     0,   -88,   202,   -88,     0,     0,
       0,     0,     0,   -88,     0,   -88,   -88,   202,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,   268,
     268,   291,     0,   -33,   -33,   -33,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,   268,   268,   291,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,
       0,   -33,   -33,     0,     0,   -33,     0,   -33,    20,    21,
      22,     0,    23,   -33,     0,   -33,   -33,     0,     0,   202,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,     0,   364,   364,     0,   364,     0,
       0,   364,   364,     0,   364,     0,     0,     0,    37,     0,
     945,     0,   202,   202,   202,   562,   563,   564,   565,   566,
       0,     0,     0,     0,   202,     0,     0,     0,    20,    21,
      22,     0,    23,     0,     0,   202,     0,     0,     0,     0,
       0,     0,   202,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,   202,   267,   267,   618,   619,   620,
     621,   622,     0,     0,     0,     0,   267,     0,    37,     0,
     961,     0,     0,     0,     0,     0,   202,   290,   290,   656,
     657,   658,   659,   660,     0,     0,     0,     0,   290,   -50,
     -50,   458,   459,   460,   461,   462,     0,     0,     0,   202,
       0,     0,     0,   267,   267,   290,     0,     0,     0,     0,
     201,     0,   -50,     0,     0,     0,     0,     0,   267,   267,
     290,     0,     0,   -50,     0,     0,     0,     0,     0,   -50,
       0,     0,   202,   363,   363,   722,   723,   724,   725,   726,
       0,     0,     0,     0,   363,   266,   266,   289,   267,   267,
     290,   -87,   -87,   -87,     0,   -87,   201,   123,   124,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   202,   -87,     0,   -87,     0,   -87,
     -87,     0,     0,   -87,     0,   -87,     0,     0,     0,     0,
       0,   -87,     0,   -87,   -87,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,   -41,
     362,   362,     0,   362,     0,   201,   -41,     0,     0,     0,
     202,   -89,   -89,   -89,     0,   -89,   -41,   -41,     0,     0,
       0,     0,     0,   -41,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,     0,   -89,     0,   -89,     0,   -89,
     -89,     0,     0,   -89,     0,   -89,     0,     0,   202,   201,
       0,   -89,     0,   -89,   -89,     0,     0,   -82,   -82,   -82,
       0,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     201,   -82,     0,   -82,     0,   -82,   -82,     0,     0,  1012,
       0,   -82,     0,     0,     0,   201,     0,   -82,     0,   -82,
     -82,     0,     0,     0,     0,     0,   322,     0,    20,    21,
      22,   201,    23,     0,   202,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,   334,     0,   335,   336,   201,     0,
     341,     0,   337,   376,     0,     0,     0,     0,    37,   201,
     338,   339,   202,     0,   -80,   -80,   -80,     0,   -80,     0,
     201,     0,     0,     0,     0,   376,     0,     0,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   202,   -80,     0,
     -80,     0,   -80,   -80,     0,     0,  1036,     0,   -80,     0,
       0,   202,     0,     0,   -80,     0,   -80,   -80,   363,   363,
       0,   363,     0,     0,     0,     0,   363,   363,     0,   363,
       0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   202,     0,     0,   363,   363,     0,   363,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,   201,   556,   561,   -40,     0,     0,
       0,     0,     0,     0,   -40,     0,   201,     0,     0,     0,
       0,     0,     0,     0,   -40,   -40,     0,   201,     0,     0,
       0,   -40,     0,     0,   201,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   201,   612,   617,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,   266,     0,
     -68,     0,     0,     0,     0,     0,     0,     0,   201,   650,
     655,   -68,     0,     0,     0,     0,     0,   -68,     0,     0,
     289,     0,     0,   -51,   -51,   458,   459,   460,   461,   462,
       0,   201,     0,     0,     0,   266,   266,   289,     0,     0,
       0,     0,   199,   267,   267,   290,   -51,     0,     0,     0,
     266,   266,   289,     0,     0,     0,     0,   -51,     0,   267,
     267,   290,     0,   -51,   201,   716,   721,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   362,   113,   114,   116,
     266,   266,   289,     0,     0,     0,     0,   119,   121,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     134,     0,     0,     0,     0,     0,   201,   -45,     0,   363,
     363,     0,   363,     0,   -45,   363,   363,     0,   363,     0,
       0,     0,     0,     0,   -45,   -45,     0,     0,     0,     0,
       0,   -45,     0,   323,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,   159,   160,   -42,   162,     0,   163,     0,     0,
       0,   -42,   201,     0,     0,     0,     0,   342,     0,     0,
     377,   -42,   -42,     0,     0,     0,     0,     0,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,   -83,   -83,
       0,   -83,   377,     0,     0,     0,     0,     0,     0,     0,
     201,   199,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,     0,   -83,     0,   -83,   -83,     0,     0,   -83,
       0,   -83,   -84,   -84,   -84,     0,   -84,   -83,     0,   -83,
     -83,     0,   199,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   199,   -84,     0,
     -84,   -84,     0,     0,   -84,     0,   -84,   -85,   -85,   -85,
       0,   -85,   -84,   199,   -84,   -84,   201,     0,     0,     0,
       0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -85,     0,   -85,     0,   -85,   -85,     0,     0,   -85,
     199,   -85,     0,     0,     0,     0,     0,   -85,     0,   -85,
     -85,   469,     0,     0,   201,     0,   -79,   -79,   -79,     0,
     -79,     0,   199,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   201,
     -79,     0,   -79,     0,   -79,   -79,     0,     0,   -79,     0,
     -79,     0,     0,   201,     0,     0,   -79,     0,   -79,   -79,
     362,   362,     0,   362,     0,     0,     0,     0,   362,   362,
       0,   362,     0,   199,     0,     0,     0,     0,     0,     0,
     322,     0,     0,     0,   201,     0,     0,   362,   362,     0,
     362,     0,   322,     0,     0,     0,   324,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   571,     0,
       0,     0,     0,     0,     0,   -43,   200,     0,     0,   121,
     343,     0,   -43,   378,     0,     0,   121,   322,     0,     0,
       0,     0,   -43,   -43,     0,     0,     0,     0,   121,   -43,
       0,     0,     0,     0,     0,   378,     0,     0,     0,     0,
     627,   265,   265,   288,     0,     0,     0,     0,     0,     0,
     121,     0,   200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   677,   678,   680,
     341,     0,     0,   871,     0,   266,   266,   289,   341,     0,
       0,   891,   689,   690,   692,     0,     0,   326,     0,     0,
       0,   266,   266,   289,     0,     0,   121,   341,     0,     0,
     376,     0,     0,     0,     0,     0,   361,   361,   731,   361,
       0,   200,   734,   735,   737,     0,     0,     0,     0,     0,
       0,   345,     0,     0,   380,     0,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   199,     0,
       0,   362,   362,     0,   362,   -74,   380,   362,   362,     0,
     362,     0,   -74,     0,     0,   200,   -82,   -82,   -82,     0,
     -82,     0,   455,   -74,     0,     0,     0,     0,     0,   -74,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,     0,   -82,     0,   -82,   -82,   200,     0,  1053,     0,
     -82,     0,     0,     0,   199,     0,   -82,     0,   -82,   -82,
       0,   200,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   322,   322,   322,     0,     0,     0,   200,     0,     0,
       0,     0,   322,   871,     0,     0,     0,   341,   341,   341,
       0,     0,   199,     0,     0,     0,     0,     0,   341,   891,
       0,     0,     0,     0,   200,     0,     0,   376,   376,   376,
     376,   376,     0,     0,     0,   200,   322,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,   322,     0,
       0,     0,     0,     0,     0,     0,     0,   323,     0,     0,
       0,   341,     0,     0,   871,     0,   322,   341,     0,   323,
     891,     0,   341,   376,     0,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,   871,   871,   871,
     871,   871,   891,   891,   891,   891,   891,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   871,   891,     0,
       0,     0,     0,     0,   323,     0,   121,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
     200,     0,     0,     0,     0,    95,     0,     0,     0,     0,
       0,   121,   200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   200,   -63,   121,     0,     0,     0,   -63,
     200,     0,   862,   863,     0,   877,     0,     0,     0,     0,
     882,   883,   200,   897,     0,     0,     0,   342,     0,     0,
     873,     0,     0,     0,   265,   342,   121,     0,   893,   909,
     910,     0,   912,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   342,     0,   288,   377,     0,     0,
       0,   184,   185,   186,     0,   187,     0,   200,     0,     0,
       0,   265,   265,   288,     0,     0,    24,   188,   189,   190,
     191,   192,   193,   194,     0,   195,   265,   265,   288,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     200,   196,   580,     0,   -81,   -81,   -81,   -70,   -81,     0,
       0,     0,   361,     0,   -70,     0,   265,   265,   288,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,
     -81,     0,   -81,   -81,     0,     0,   -81,     0,   -81,     0,
       0,     0,   200,     0,   -81,     0,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   983,   984,   986,
     324,     0,     0,     0,     0,     0,     0,     0,   323,   323,
     323,     0,   324,   995,   996,   998,     0,     0,     0,   323,
     873,     0,     0,     0,   342,   342,   342,     0,     0,     0,
       0,     0,     0,     0,     0,   342,   893,     0,   200,     0,
       0,     0,     0,     0,   377,   377,   377,   377,   377,     0,
       0,     0,     0,   323,     0,     0,     0,   324,     0,     0,
       0,     0,     0,  1021,  1022,   323,  1024,     0,     0,  1027,
    1028,     0,  1030,     0,     0,     0,   200,     0,   342,     0,
       0,   873,     0,   323,   342,     0,     0,   893,     0,   342,
     377,     0,     0,   463,   464,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   465,   466,   873,   873,   873,   873,   873,   893,
     893,   893,   893,   893,     0,     0,     0,     0,   -52,     0,
     343,   326,     0,   874,   873,   893,     0,     0,   343,   -52,
       0,   894,     0,   326,     0,   -52,     0,     0,     0,    20,
      21,    22,   200,    23,     0,     0,     0,   343,     0,     0,
     378,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,   369,     0,   370,   371,     0,
      20,    21,    22,   372,    23,     0,     0,     0,   326,    37,
     200,   373,   374,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,     0,    32,     0,   179,     0,    34,    35,
       0,     0,     0,     0,    36,   200,     0,     0,     0,     0,
      37,     0,    38,    39,     0,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,   361,   361,     0,   361,
       0,     0,     0,     0,   361,   361,     0,   361,     0,     0,
       0,   345,     0,     0,   876,     0,     0,     0,     0,   345,
     200,     0,   896,   361,   361,     0,   361,     0,     0,     0,
       0,   324,   324,   324,     0,     0,     0,     0,   345,     0,
       0,   380,   324,   874,     0,     0,     0,   343,   343,   343,
       0,     0,     0,     0,     0,     0,     0,     0,   343,   894,
       0,     0,   184,   185,   186,     0,   187,   378,   378,   378,
     378,   378,     0,     0,     0,     0,   324,    24,   188,   189,
     190,   191,   192,   193,   194,     0,   195,     0,   324,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   343,   196,   587,   874,     0,   324,   343,   -39,     0,
     894,     0,   343,   378,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   874,   874,   874,
     874,   874,   894,   894,   894,   894,   894,     0,     0,   -39,
       0,   265,   265,   288,     0,     0,     0,   874,   894,   -39,
     -39,     0,   326,   326,   326,     0,   -39,   265,   265,   288,
       0,     0,     0,   326,   876,     0,     0,     0,   345,   345,
     345,     0,     0,     0,     0,     0,     0,     0,     0,   345,
     896,     0,     0,     0,     0,     0,     0,     0,   380,   380,
     380,   380,   380,     0,     0,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   361,   361,   326,
     361,     0,     0,   361,   361,     0,   361,     0,     0,     0,
       0,     0,   345,     0,     0,   876,     0,   326,   345,     0,
       0,   896,     0,   345,   380,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   876,   876,
     876,   876,   876,   896,   896,   896,   896,   896,   -20,   -20,
     -20,     0,   -20,     0,     0,     0,     0,     0,   876,   896,
     -39,   -39,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,     0,   -20,     0,   -20,     0,   -20,   -20,     0,   -21,
     -21,   -21,   -20,   -21,     0,     0,     0,     0,   -20,     0,
     -20,   -20,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,     0,   -21,     0,   -21,     0,   -21,   -21,     0,
     -32,   -32,   -32,   -21,   -32,     0,     0,     0,     0,   -21,
       0,   -21,   -21,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,     0,   -32,     0,   -32,   -32,
       0,   -34,   -34,   -34,   -32,   -34,     0,     0,     0,     0,
     -32,     0,   -32,   -32,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,     0,   -34,     0,   -34,
     -34,     0,   -35,   -35,   -35,   -34,   -35,     0,     0,     0,
       0,   -34,     0,   -34,   -34,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,     0,
     -35,   -35,     0,   -38,   -38,   -38,   -35,   -38,     0,     0,
       0,     0,   -35,     0,   -35,   -35,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,
       0,   -38,   -38,     0,   -36,   -36,   -36,   -38,   -36,     0,
       0,     0,     0,   -38,     0,   -38,   -38,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,
     -36,     0,   -36,   -36,     0,   -37,   -37,   -37,   -36,   -37,
       0,     0,     0,     0,   -36,     0,   -36,   -36,     0,     0,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,   -37,     0,   -37,   -37,     0,   -19,   -19,   -19,   -37,
     -19,     0,     0,     0,     0,   -37,     0,   -37,   -37,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,
     -19,     0,   -19,     0,   -19,   -19,     0,   -24,   -24,   -24,
     -19,   -24,     0,     0,     0,     0,   -19,     0,   -19,   -19,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,     0,   -24,     0,   -24,   -24,     0,   -86,   -86,
     -86,   -24,   -86,     0,     0,     0,     0,   -24,     0,   -24,
     -24,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,     0,   -86,     0,   -86,   -86,     0,   -88,
     -88,   -88,   -86,   -88,     0,     0,     0,     0,   -86,     0,
     -86,   -86,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,     0,   -88,     0,   -88,   -88,     0,
     -33,   -33,   -33,   -88,   -33,     0,     0,     0,     0,   -88,
       0,   -88,   -88,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,     0,   -33,     0,   -33,   -33,
       0,   -25,   -25,   -25,   -33,   -25,     0,     0,     0,     0,
     -33,     0,   -33,   -33,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,     0,   -25,     0,   -25,
     -25,     0,   -87,   -87,   -87,   -25,   -87,     0,     0,     0,
       0,   -25,     0,   -25,   -25,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -87,     0,   -87,     0,
     -87,   -87,     0,   -89,   -89,   -89,   -87,   -89,     0,     0,
       0,     0,   -87,     0,   -87,   -87,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,     0,   -89,
       0,   -89,   -89,     0,    20,    21,    22,   -89,    23,     0,
       0,     0,     0,   -89,     0,   -89,   -89,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
     864,     0,   865,   866,     0,    20,    21,    22,   867,    23,
       0,     0,     0,     0,    37,     0,   868,   869,     0,     0,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,   884,     0,   885,   886,     0,   -83,   -83,   -83,   887,
     -83,     0,     0,     0,     0,    37,     0,   888,   889,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,
     -83,     0,   -83,     0,   -83,   -83,     0,   -84,   -84,   -84,
     -83,   -84,     0,     0,     0,     0,   -83,     0,   -83,   -83,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,     0,   -84,     0,   -84,   -84,     0,   -85,   -85,
     -85,   -84,   -85,     0,     0,     0,     0,   -84,     0,   -84,
     -84,     0,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,     0,   -85,     0,   -85,     0,   -85,   -85,     0,   -79,
     -79,   -79,   -85,   -79,     0,     0,     0,     0,   -85,     0,
     -85,   -85,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,     0,   -79,     0,   -79,   -79,     0,
     -81,   -81,   -81,   -79,   -81,     0,     0,     0,     0,   -79,
       0,   -79,   -79,     0,     0,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,     0,   -81,     0,   -81,   -81,
       0,     0,     0,     0,   -81,     0,     0,     0,     0,     0,
     -81,     0,   -81,   -81,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
       0,     0,   -44,     0,     0,     0,     0,     0,     0,   -44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -44,
     -44,     0,     0,     0,     0,     0,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,   -46,     0,     0,     0,     0,
       0,     0,   -46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -46,   -46,     0,     0,     0,     0,     0,   -46,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,     0,     0,   -41,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,     0,   -41,   -41,   -40,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -40,   -40,     0,     0,     0,     0,
       0,   -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -41,   -41,
     -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,   -45,   -45,   -42,
       0,     0,     0,     0,   -45,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -42,   -42,     0,     0,
       0,     0,     0,   -42,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
     -40,   -40,   -43,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,   -43,
     -43,   -74,     0,     0,     0,     0,   -43,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   391,   -74,
       0,     0,     0,     0,     0,   -74,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,   -45,   -45,   -44,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
       0,   -44,   -44,   -46,     0,     0,     0,     0,   -44,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -46,   -46,     0,     0,     0,     0,     0,   -46,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,   -39,   -39,   -75,     0,     0,     0,
       0,   -39,     0,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,     0,
     -75,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -41,   -41,   -40,     0,
       0,     0,     0,   -41,     0,     0,     0,     0,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -45,   -45,   -42,     0,     0,     0,     0,   -45,     0,
       0,     0,     0,   -42,   -42,     0,     0,     0,     0,     0,
     -42,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,   -74,     0,
       0,     0,     0,   -43,     0,     0,     0,     0,   790,   -74,
       0,     0,     0,     0,     0,   -74,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -73,     0,     0,     0,     0,     0,   -73,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,     0,     0,     0,     0,
       0,   -72,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,     0,
       0,     0,     0,     0,   -71,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,     0,     0,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,     0,   -76,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,   -44,   -46,     0,     0,     0,     0,
     -44,     0,     0,     0,     0,   -46,   -46,     0,     0,     0,
       0,     0,   -46,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
     -67,   -70,     0,     0,     0,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
     -70,     0,     0,     0,   -68,   -70,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,   -68,   -75,     0,     0,     0,   -68,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,   -75,     0,     0,     0,   -73,   -75,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -73,   -72,     0,     0,
       0,   -73,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,   -72,     0,     0,     0,
     -71,   -72,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,   -71,
     -76,     0,     0,     0,   -71,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -76,
       0,     0,     0,   403,   -76,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,   -63,     0,   -67,     0,     0,     0,   -63,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -67,     0,     0,     0,     0,   -70,   -67,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,     0,
     -70,     0,     0,   -58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -58,     0,     0,     0,     0,     0,
     -58,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -39,     0,   -39,     0,
       0,     0,     0,   -39,     0,     0,     0,   -41,     0,   -41,
       0,     0,     0,     0,   -41,     0,     0,     0,   -40,     0,
     -40,     0,     0,     0,     0,   -40,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,   -45,     0,   -45,     0,     0,     0,     0,   -45,     0,
       0,     0,   -42,     0,   -42,     0,     0,     0,     0,   -42,
       0,     0,     0,   -43,     0,   -43,     0,     0,     0,     0,
     -43,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,     0,     0,     0,     0,     0,   478,     0,   -74,     0,
       0,     0,     0,   -74,     0,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,   -68,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,   -75,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,   -75,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -41,
     -41,     0,     0,     0,     0,     0,   -41,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,     0,     0,   -40,   -40,     0,     0,     0,     0,     0,
     -40,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -45,   -45,     0,     0,     0,     0,     0,   -45,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,     0,   -42,   -42,     0,     0,
       0,     0,     0,   -42,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,   751,
     -74,     0,     0,     0,     0,     0,   -74,     0,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
       0,     0,     0,     0,     0,   -63,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -67,   -70,     0,     0,     0,     0,   -67,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,     0,
     -70,   463,   464,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     465,   466,     0,   463,   464,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   465,   466,     0,     0,   -55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -55,   -54,     0,
       0,     0,     0,   -55,     0,     0,     0,     0,     0,   -54,
       0,     0,     0,     0,     0,   -54,   463,   464,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   465,   466,     0,   463,   464,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   465,   466,     0,
       0,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -53,   -56,     0,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,   -56,     0,     0,     0,     0,     0,
     -56,   463,   464,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     465,   466,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -57,   -61,     0,
       0,     0,     0,   -57,     0,     0,     0,     0,     0,   -61,
       0,     0,     0,     0,     0,   -61,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -62,   -59,     0,     0,     0,     0,   -62,     0,
       0,     0,     0,     0,   -59,     0,     0,     0,     0,     0,
     -59,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,     0,     0,
       0,     0,     0,   -60,     0,     0,     0,   -44,     0,   -44,
       0,     0,     0,     0,   -44,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
     -46,     0,   -46,     0,     0,     0,     0,   -46,     0,     0,
       0,     0,   -73,     0,     0,     0,     0,     0,   -73,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,     0,   -72,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,   -72,   -71,     0,     0,     0,
       0,   -72,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -71,     0,     0,     0,     0,     0,
     -71,   -76,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,     0,   -76,     0,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,   -68,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -44,   -44,     0,     0,     0,     0,     0,   -44,     0,     0,
       0,   -46,   -46,   -75,     0,     0,     0,     0,   -46,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,     0,
     -75,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,   -64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64,   -65,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,     0,   -65,
       0,     0,     0,     0,     0,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,   -66,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -66,   -73,     0,     0,     0,     0,   -66,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
     -73,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -71,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,     0,   -71,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,    91,    92,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,    93,    94,     0,     0,
       0,   -76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,   -52,     0,     0,     0,     0,   -52,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,    91,    92,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
      93,    94,    91,    92,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,    93,    94,     0,     0,     0,     0,   -58,     0,     0,
       0,     0,   -58,     0,     0,     0,     0,     0,   -55,     0,
       0,     0,     0,   -55,     0,     0,     0,     0,     0,   -54,
       0,     0,     0,     0,   -54,    91,    92,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,    93,    94,    91,    92,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,    93,    94,    91,    92,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,    93,    94,     0,     0,
       0,     0,   -53,     0,     0,     0,     0,   -53,     0,     0,
       0,     0,     0,   -56,     0,     0,     0,     0,   -56,     0,
       0,     0,     0,     0,   -57,     0,     0,     0,     0,   -57,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,   -61,     0,     0,
       0,     0,   -61,     0,     0,     0,     0,     0,   -62,     0,
       0,     0,     0,   -62,     0,     0,     0,     0,     0,   -59,
       0,     0,     0,     0,   -59,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,   -60,     0,     0,     0,     0,   -60,     0,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,   -64,     0,
       0,     0,     0,     0,   -65,     0,     0,     0,     0,   -65,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   399,   400,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     401,   402,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,     0,     0,     0,   -66,     0,     0,
       0,     0,   -66,     0,     0,     0,     0,   -52,     0,     0,
       0,     0,     0,   -52,     0,     0,     0,     0,   -58,     0,
       0,     0,     0,     0,   -58,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -63,     0,     0,     0,     0,   -63,     0,     0,
       0,     0,     0,   -67,     0,     0,     0,     0,   -67,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,   -70,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,   -68,     0,     0,     0,     0,   -63,     0,     0,
       0,     0,     0,   -63,     0,     0,     0,     0,   -67,     0,
       0,     0,     0,     0,   -67,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   399,   400,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   401,   402,   399,   400,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   401,   402,     0,     0,
       0,   -70,     0,     0,     0,     0,     0,   -70,     0,     0,
       0,     0,   -55,     0,     0,     0,     0,     0,   -55,     0,
       0,     0,     0,   -54,     0,     0,     0,     0,     0,   -54,
     399,   400,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   401,
     402,   399,   400,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     401,   402,   399,   400,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   401,   402,     0,     0,     0,   -53,     0,     0,     0,
       0,     0,   -53,     0,     0,     0,     0,   -56,     0,     0,
       0,     0,     0,   -56,     0,     0,     0,     0,   -57,     0,
       0,     0,     0,     0,   -57,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,   -61,     0,     0,
       0,     0,   -62,     0,     0,     0,     0,     0,   -62,     0,
       0,     0,     0,   -59,     0,     0,     0,     0,     0,   -59,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,   -60,     0,     0,     0,
       0,     0,   -60,     0,     0,     0,     0,     0,   -75,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,   -68,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -73,     0,     0,     0,     0,   -73,     0,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,   -71,     0,     0,     0,     0,   -71,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,   -76,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,   -75,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,   -64,     0,
       0,     0,     0,     0,   -64,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,   -65,     0,     0,     0,     0,     0,   -65,     0,     0,
       0,     0,   -66,     0,     0,     0,     0,     0,   -66,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,     0,   -73,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,   -72,     0,     0,     0,     0,   -71,     0,     0,
     184,   185,   186,   -71,   187,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,   -76,    24,   188,   189,   190,   191,
     192,   193,   194,     0,   195,     0,     0,   184,   185,   186,
       0,   187,     0,     0,     0,     0,     0,     0,     0,     0,
     196,   598,    24,   188,   189,   190,   191,   192,   193,   194,
       0,   195,     0,     0,   184,   185,   186,     0,   187,     0,
       0,     0,     0,     0,     0,     0,     0,   196,   636,    24,
     188,   189,   190,   191,   192,   193,   194,     0,   195,     0,
       0,   184,   185,   186,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,   196,   673,    24,   188,   189,   190,
     191,   192,   193,   194,     0,   195,     0,     0,   184,   185,
     186,     0,   187,     0,     0,     0,     0,     0,     0,     0,
       0,   196,   702,    24,   188,   189,   190,   191,   192,   193,
     194,     0,   195,     0,     0,   184,   185,   186,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,   196,   836,
      24,   188,   189,   190,   191,   192,   193,   194,     0,   195,
       0,     0,   184,   185,   186,     0,   187,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   849,    24,   188,   189,
     190,   191,   192,   193,   194,     0,   195,     0,     0,   184,
     185,   186,     0,   187,     0,     0,     0,     0,     0,     0,
       0,     0,   196,   859,    24,   188,   189,   190,   191,   192,
     193,   194,     0,   195,     0,     0,    20,    21,    22,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,   196,
     906,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   298,   299,   300,     0,   301,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    24,    25,    26,
      27,   302,   303,   304,   305,     0,   306,     0,   233,   234,
     235,     0,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,    24,   328,   329,   330,   237,   238,   239,
     240,     0,   241,     0,   346,   347,   348,     0,   349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,    24,
     350,   351,   352,   353,   354,   355,   356,     0,   357,     0,
     544,   545,   546,     0,   547,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   358,    24,   188,   189,   190,   548,
     549,   550,   551,     0,   552,     0,   600,   601,   602,     0,
     603,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     553,    24,   250,   251,   252,   604,   605,   606,   607,     0,
     608,     0,   638,   639,   640,     0,   641,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   609,    24,   277,   278,
     279,   642,   643,   644,   645,     0,   646,     0,   704,   705,
     706,     0,   707,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   647,    24,   350,   351,   352,   708,   709,   710,
     711,     0,   712,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,   713,     0,
       0,   -41,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -41,   -41,
     -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,     0,     0,   -40,   -40,   -45,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,   -45,   -45,   -42,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,   -42,   -42,   -43,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,   -43,   -43,   -74,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,   511,   -74,   -44,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,   -44,   -44,   -46,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,   -46,   -46,   -67,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,   -67,   -70,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
     -70,   -68,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,   -68,
     -75,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,     0,   -75,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,   -42,   -42,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,   -43,   -43,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,   821,   -74,   -73,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -73,   -72,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
       0,     0,   -72,   -71,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,   -71,   -76,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
     -76,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,     0,     0,     0,     0,     0,   -46,   -46,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,     0,     0,     0,     0,   -58,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,     0,   -63,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,   -67,   519,   520,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   521,   522,     0,     0,     0,     0,     0,
       0,   -70,   519,   520,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   521,   522,     0,     0,     0,     0,     0,     0,     0,
     -55,   519,   520,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     521,   522,     0,     0,     0,     0,     0,     0,   -54,   519,
     520,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   521,   522,
       0,     0,     0,     0,     0,     0,     0,   -53,   519,   520,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   521,   522,     0,
       0,     0,     0,     0,     0,   -56,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
       0,     0,     0,     0,   -57,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,   -61,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,     0,     0,     0,     0,     0,
       0,   -62,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,   -59,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,     0,     0,   -60,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,   -68,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,   -75,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,   -64,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,   -65,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
     -66,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -73,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,   -72,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,     0,     0,   -71,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,   -76,   -39,     0,     0,     0,     0,
       0,     0,   -39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
       0,   -41,     0,     0,     0,     0,     0,     0,   -41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,     0,     0,     0,   -40,     0,     0,
       0,     0,     0,     0,   -40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -40,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,     0,   -45,     0,     0,     0,     0,     0,     0,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,     0,     0,   -42,
       0,     0,     0,     0,     0,     0,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -42,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,     0,     0,     0,   -43,     0,     0,     0,     0,
       0,     0,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -43,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,   -74,     0,     0,     0,     0,     0,     0,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   433,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,     0,     0,     0,   -44,     0,     0,
       0,     0,     0,     0,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
       0,     0,     0,   -46,     0,     0,     0,     0,     0,     0,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,   -39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -39,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -41,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -40,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,   -43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -43,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,   -74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   776,   -44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,   -46,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,   -46,   -68,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,     0,
       0,   -75,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
     -73,     0,     0,     0,     0,     0,     0,   -73,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,     0,   -71,     0,     0,     0,     0,     0,     0,   -71,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,     0,   -76,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,   -58,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -63,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,   -67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70,
     441,   442,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   443,
     444,   441,   442,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     443,   444,     0,     0,     0,   -55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -54,   441,   442,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   443,   444,   441,   442,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   443,   444,     0,
       0,     0,   -53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -56,   441,   442,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   443,   444,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,   -57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -61,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,     0,     0,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -59,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -68,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,   -65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76
};

static const yytype_int16 yycheck[] =
{
       7,     0,     0,    43,     6,   179,    40,     6,     6,     0,
      40,     0,   391,   297,     0,     6,    10,    11,     0,   297,
      25,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    10,    11,    64,   414,    33,    43,    44,    33,
      45,     0,   421,   327,     0,    34,    43,     0,    34,   327,
      44,     0,    34,     0,   433,    33,    50,    44,    47,    48,
      49,    47,    48,    49,    62,    47,    48,    49,    43,     0,
      72,    62,   102,    72,    72,    34,   455,     0,    34,    29,
       0,    34,    43,    44,    25,    10,    11,    34,    47,    48,
      49,    47,    48,    49,    47,    48,    49,    10,    11,   478,
      47,    48,    49,    34,    45,   112,    44,    34,    10,    11,
      43,    34,    50,    25,    34,    25,    47,    48,    49,    44,
      47,    48,    49,    27,    47,    48,    49,    47,    48,    49,
      29,    44,   511,    45,    25,    45,    43,    50,    25,   146,
     138,   315,   149,    45,    43,    25,    45,   138,    50,    29,
      43,    50,    33,    44,     3,     4,     5,    44,     7,    50,
     334,    43,    43,    50,   171,    45,    37,    25,    39,    18,
      19,    20,    21,    22,    23,    24,    25,    43,    27,    45,
      29,    30,    31,    32,    50,    34,    35,    45,    37,     3,
       4,     5,    33,     7,    43,   369,    45,    46,    47,    48,
      49,    43,    43,    74,    18,    19,    20,    21,    22,    23,
      24,    25,    33,    27,    25,    29,    30,    31,    32,    44,
      34,    35,    43,    37,    29,    50,   260,    35,    25,    43,
      25,    45,    46,    47,    48,    49,    44,    33,    43,    33,
      45,   112,     3,     4,     5,    50,     7,    44,    44,    44,
      44,    43,   259,    50,    50,    50,    50,    18,    19,    20,
      21,    22,    23,    24,    25,    43,    27,    33,    29,    30,
      31,    32,    25,    34,    35,   146,    37,    43,   149,    33,
      43,    44,    43,    43,    45,    46,    47,    48,    49,    43,
      34,    44,     3,     4,     5,    25,     7,    50,    25,   297,
     171,    29,    29,    47,    48,    49,   297,    18,    19,    20,
      21,    22,    23,    24,    25,    43,    27,    45,    45,    25,
      44,    25,    50,    29,    33,   196,    50,    25,    33,   327,
      34,    29,    43,     3,     4,     5,   327,     7,    43,    45,
      44,    33,   382,    47,    48,    49,    33,    45,    18,    19,
      20,    21,    22,    23,    24,    25,   227,    27,    33,    29,
      30,    31,    32,    44,    34,    35,    33,    37,    43,    50,
      33,   242,   751,    43,    35,    45,    46,    47,    48,    49,
      43,    43,    44,    44,     3,     4,     5,   258,     7,    10,
      11,    12,    13,    14,    15,    16,    44,   776,    25,    18,
      19,    20,    21,    22,    23,    24,    25,    34,    27,    35,
      35,   790,    43,    44,   285,    34,    44,    44,    44,    44,
      47,    48,    49,    44,    43,    43,    44,    44,    47,    48,
      49,     3,     4,     5,    25,     7,   307,    25,    29,    35,
      45,   481,   821,    25,    33,    50,    29,    29,    44,   320,
      22,    23,    24,    25,    45,    27,   496,     3,     4,     5,
      43,     7,    45,    45,    44,    43,    44,    50,   339,    33,
      50,    43,    18,    19,    20,    21,    22,    23,    24,    25,
     482,    27,    44,   482,   482,    33,   526,   358,    50,    44,
       3,     4,     5,    44,     7,   497,    44,    43,   497,   497,
      43,    44,    50,   374,    35,    18,    19,    20,    21,    22,
      23,    24,    25,    44,    27,    45,    29,    30,    31,    32,
      50,    34,    35,    44,    37,   527,    29,    44,   527,   527,
      43,    43,    45,    46,    47,    48,    49,     3,     4,     5,
      43,     7,    45,    43,    45,    45,    44,    50,    44,    50,
      50,    35,    18,    19,    20,    21,    22,    23,    24,    25,
      44,    27,    45,    29,    30,    31,    32,    50,    34,    35,
      44,    37,     3,     4,     5,    35,     7,    43,    43,    45,
      46,    47,    48,    49,    44,    43,    25,    18,    19,    20,
      21,    22,    23,    24,    25,    34,    27,    43,    29,    30,
      31,    32,    35,    34,    35,    44,    37,    43,    47,    48,
      49,    44,    43,   484,    45,    46,    47,    48,    49,     3,
       4,     5,    35,     7,    35,    43,    44,    43,   499,    43,
      44,    44,    50,    44,    18,    19,    20,    21,    22,    23,
      24,    25,    43,    27,    45,    29,    30,    31,    32,    50,
      34,    35,    25,    37,    44,    33,    33,    33,   529,    43,
      50,    45,    46,    47,    48,    49,    44,    44,    44,   676,
      33,    35,    50,    50,    50,     3,     4,     5,    43,     7,
      44,   688,   553,    35,    35,     3,     4,     5,    43,     7,
     864,    25,    44,    44,    22,    23,    24,    25,    43,    27,
      18,    19,    20,    21,    22,    23,    24,    25,    43,    27,
     884,    29,    30,    31,    32,    43,    34,    35,    43,    37,
      43,    43,    43,    35,    35,    43,   733,    45,    46,    47,
      48,    49,    44,    44,    33,     3,     4,     5,   609,     7,
      10,    11,    12,    13,    14,    15,    16,    43,    43,    35,
      18,    19,    20,    21,    22,    23,    24,    25,    44,    27,
      45,    29,    30,    31,    32,    50,    34,    35,    45,    37,
      25,    33,    44,    50,    44,    43,   647,    45,    46,    47,
      48,    49,    44,    43,    35,    35,    35,    43,    50,   796,
      44,    43,   799,    44,    44,    44,    50,   804,    44,    43,
     807,    43,    43,    44,    50,   676,     3,     4,     5,    50,
       7,    43,    25,    45,    44,    43,   823,   688,    50,   826,
      50,    18,    19,    20,    21,    22,    23,    24,    25,    43,
      27,    45,    29,    30,    31,    32,    50,    34,    35,    44,
      37,    44,   713,    29,    43,    50,    43,    50,    45,    46,
      47,    48,    49,     3,     4,     5,    43,     7,    43,    44,
      43,    44,   733,    43,    43,    50,    43,    50,    18,    19,
      20,    21,    22,    23,    24,    25,    43,    27,    45,    29,
      30,    31,    32,    50,    34,    35,    44,    37,    44,    25,
      43,    43,    50,    43,    50,    45,    46,    47,    48,    49,
      43,   941,    25,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    44,    43,    44,   957,    44,    43,
      50,    26,    50,    44,    50,   796,    43,    43,   799,    50,
     937,   938,   939,   804,    43,    43,   807,    43,    43,    44,
     942,   948,   949,   942,   942,    50,   953,   954,   955,    45,
      44,    44,   823,    43,    50,   826,   958,   964,   965,   958,
     958,     3,     4,     5,    43,     7,   973,   974,   975,   976,
     977,    43,    25,    44,    44,   982,    18,    19,    20,    21,
      22,    23,    24,    25,    44,    27,    44,   994,    10,    11,
      12,    13,    14,    15,    16,    44,    44,    43,   869,    43,
    1007,    43,    44,  1010,    44,  1012,  1013,    44,    44,  1016,
      50,  1018,  1019,    50,    50,    44,    27,    44,   889,    44,
      43,    50,    44,    50,    43,    50,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,    43,    43,    43,    10,
      11,    12,    13,    14,    15,    16,  1053,  1054,    43,    43,
      27,    33,    44,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    44,    27,   937,   938,   939,    44,
      50,    26,    44,   944,    45,    50,    27,   948,   949,    50,
      44,    44,   953,   954,   955,    44,    50,    50,    43,   960,
      45,    50,    44,   964,   965,    50,    27,    27,    50,    44,
      44,    44,   973,   974,   975,   976,   977,    50,    27,    44,
      44,   982,    44,     3,     4,     5,    50,     7,    50,    44,
      44,    44,    33,   994,    33,    50,    50,    50,    18,    19,
      20,    21,    22,    23,    24,    25,  1007,    27,    44,  1010,
      44,  1012,  1013,    44,    50,  1016,    50,  1018,  1019,    50,
      33,    44,    44,    43,    43,    45,    37,     3,     4,     5,
      25,     7,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,    43,    33,    55,    45,    22,    23,    24,    25,
      50,    27,  1053,  1054,    65,    66,    67,    68,    69,    70,
      44,    72,    73,    74,    44,    44,    50,    43,    43,    33,
      50,    50,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,     5,    33,     7,    44,
      44,    44,    10,    11,    12,    13,    14,    15,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    33,    27,    44,
      29,    44,    31,    32,    44,    33,    35,    50,    37,    44,
      50,    44,    44,    44,    43,    50,    45,    46,    50,   140,
     141,   142,     0,    44,    33,    45,   147,   148,     6,   150,
      50,   152,    45,    33,     3,     4,     5,    50,     7,    45,
      45,    45,    45,    45,    50,    50,    50,    50,    50,    18,
      19,    20,    21,    22,    23,    24,    25,    33,    27,    45,
      29,    30,    31,    32,    50,    34,    35,    44,    37,    44,
      44,    43,    43,    43,    43,   196,    45,    46,    47,    48,
      49,    25,    33,    33,   205,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     3,     4,     5,    45,
       7,    33,    45,    26,    50,    33,   227,    50,    44,   230,
      33,    18,    19,    20,    21,    22,    23,    24,    25,    44,
      27,   242,    29,    30,    31,    32,    44,    34,    35,    43,
      37,     3,     4,     5,    43,     7,    43,   258,    45,    46,
      47,    48,    49,    43,    25,    44,    44,    44,    33,   270,
      22,    23,    24,    25,    33,    27,    10,    11,    12,    13,
      14,    15,    16,    33,   285,    33,    33,    44,    33,    33,
      44,    43,   293,    33,    33,   296,     3,     4,     5,    33,
       7,    33,    44,    44,    25,    43,   307,    44,    43,    27,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    43,
      27,    44,    29,    30,    31,    32,    43,    34,    35,    33,
      37,   332,    33,    33,    33,    33,    43,    33,    45,    46,
      47,    48,    49,    27,    27,    27,    33,    44,     3,     4,
       5,    44,     7,    44,    44,    44,    44,   358,    10,    11,
      12,    13,    14,    15,    16,   366,    44,    22,    23,    24,
      25,    44,    27,    44,    44,    44,    44,    44,    44,    44,
      44,    33,   383,   384,   385,   386,   387,   388,    43,    43,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,    44,    44,   406,   407,   408,   409,   410,
     411,    44,    44,   414,    44,   416,   417,   418,    44,    44,
     421,   422,   423,   424,   425,   426,   427,    44,    44,    44,
      44,    44,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,    43,   447,   448,   449,   450,
     451,   452,    44,    44,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,    44,    44,    44,
      44,    44,   473,   474,   475,    43,    43,   478,    43,    33,
      44,   482,   483,   484,    44,    44,    44,    44,    44,    44,
     491,   492,   493,    44,    44,    44,   497,   498,   499,    44,
      33,    44,   503,   504,   505,   506,   507,   508,    44,    44,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,    33,    33,    44,   527,   528,   529,    44,
      44,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    33,     3,     4,     5,    33,     7,    44,    26,
      44,    44,   553,    -1,    44,    44,    44,   558,    18,    19,
      20,    21,    22,    23,    24,    25,    43,    27,    45,    29,
      30,    31,    32,    50,    34,    35,    44,    37,     3,     4,
       5,    44,     7,    43,    -1,    45,    46,    47,    48,    49,
      44,    44,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    31,    32,   609,    34,
      35,    -1,    37,   614,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     3,     4,     5,
      -1,     7,    -1,    26,    -1,    -1,   647,    -1,    -1,    -1,
      -1,   652,    18,    19,    20,    21,    22,    23,    24,    25,
      43,    27,    45,    29,    30,    31,    32,    50,    34,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,   713,    29,    30,    31,    32,   718,    34,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,   739,   740,
     741,    -1,    -1,    -1,    -1,   746,   747,   748,    -1,    -1,
     751,    -1,   753,   754,   755,    10,    11,    12,    13,    14,
      15,    16,    -1,   764,   765,   766,    -1,    -1,    -1,    -1,
     771,   772,   773,    -1,    -1,   776,    -1,   778,   779,   780,
      -1,    -1,    -1,    -1,   785,   786,   787,    -1,    -1,   790,
      45,    -1,    -1,    -1,    -1,    50,   797,   798,    -1,   800,
     801,   802,   803,    -1,   805,   806,    37,   808,   809,   810,
     811,    -1,    -1,    -1,    -1,   816,   817,   818,    -1,    -1,
     821,    -1,    -1,   824,   825,    -1,   827,     3,     4,     5,
      -1,     7,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,     5,    43,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,   150,
      -1,   152,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,   942,   943,   944,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,   958,   959,   960,
       3,     4,     5,    44,     7,   196,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,   205,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    35,    -1,    37,    -1,   227,    -1,    -1,   230,
      43,    -1,    45,    46,    47,    48,    49,  1008,  1009,    -1,
    1011,   242,    -1,  1014,  1015,    -1,  1017,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,   285,    29,    30,    31,    32,    -1,
      34,    -1,   293,    37,    -1,   296,     3,     4,     5,    43,
       7,    45,    46,    47,    48,    49,   307,    -1,    -1,    -1,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,   332,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   383,   384,   385,   386,   387,   388,    43,    -1,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,    -1,    -1,   406,   407,   408,   409,   410,
     411,    -1,    -1,   414,    -1,   416,   417,   418,    -1,    -1,
     421,   422,   423,   424,   425,   426,   427,    -1,    -1,    -1,
      -1,    -1,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,    -1,   447,   448,   449,   450,
     451,   452,    -1,    -1,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,    -1,    -1,    -1,
      -1,    -1,   473,   474,   475,    -1,    -1,   478,    -1,    -1,
      -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,
     491,   492,   493,    -1,    -1,    -1,   497,   498,   499,    -1,
      -1,    -1,   503,   504,   505,   506,   507,   508,    -1,    -1,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,    -1,    -1,    -1,   527,   528,   529,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     3,     4,     5,    -1,     7,    -1,    26,
      -1,    -1,   553,    -1,    -1,    -1,    -1,   558,    18,    19,
      20,    21,    22,    23,    24,    25,    43,    27,    45,    29,
      30,    31,    32,    50,    34,    -1,    -1,    37,     3,     4,
       5,    -1,     7,    43,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    31,    32,   609,    34,
      -1,    -1,    37,   614,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     3,     4,     5,
      -1,     7,    -1,    26,    -1,    -1,   647,    -1,    -1,    -1,
      -1,   652,    18,    19,    20,    21,    22,    23,    24,    25,
      43,    27,    45,    29,    30,    31,    32,    50,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,   713,    29,    30,    31,    32,   718,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,   739,   740,
     741,    -1,    -1,    -1,    -1,   746,   747,   748,    -1,    -1,
     751,    -1,   753,   754,   755,    10,    11,    12,    13,    14,
      15,    16,    -1,   764,   765,   766,    -1,    -1,    -1,    -1,
     771,   772,   773,    -1,    -1,   776,    -1,   778,   779,   780,
      -1,    -1,    -1,    -1,   785,   786,   787,    -1,    -1,   790,
      45,    -1,    -1,    -1,    -1,    50,   797,   798,    -1,   800,
     801,   802,   803,    -1,   805,   806,    37,   808,   809,   810,
     811,    -1,    -1,    -1,    -1,   816,   817,   818,    -1,    -1,
     821,    -1,    -1,   824,   825,    -1,   827,     3,     4,     5,
      -1,     7,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,     5,    43,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,   150,
      -1,   152,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,   942,   943,   944,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,   958,   959,   960,
       3,     4,     5,    44,     7,   196,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,   205,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,   227,    -1,    -1,   230,
      43,    -1,    45,    46,    47,    48,    49,  1008,  1009,    -1,
    1011,   242,    -1,  1014,  1015,    -1,  1017,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,   285,    29,    30,    31,    32,    -1,
      34,    -1,   293,    37,    -1,   296,     3,     4,     5,    43,
       7,    45,    46,    47,    48,    49,   307,    -1,    -1,    -1,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,   332,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   383,   384,   385,   386,   387,   388,    43,    -1,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,    -1,    -1,   406,   407,   408,   409,   410,
     411,    -1,    -1,   414,    -1,   416,   417,   418,    -1,    -1,
     421,   422,   423,   424,   425,   426,   427,    -1,    -1,    -1,
      -1,    -1,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,    -1,   447,   448,   449,   450,
     451,   452,    -1,    -1,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,    -1,    -1,    -1,
      -1,    -1,   473,   474,   475,    -1,    -1,   478,    -1,    -1,
      -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,
     491,   492,   493,    -1,    -1,    -1,   497,   498,   499,    -1,
      -1,    -1,   503,   504,   505,   506,   507,   508,    -1,    -1,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,    -1,    -1,    -1,   527,   528,   529,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     3,     4,     5,    -1,     7,    -1,    26,
      -1,    -1,   553,    -1,    -1,    -1,    -1,   558,    18,    19,
      20,    21,    22,    23,    24,    25,    43,    27,    45,    29,
      30,    31,    32,    50,    34,    -1,    -1,    37,     3,     4,
       5,    -1,     7,    43,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    31,    32,   609,    34,
      -1,    -1,    37,   614,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     3,     4,     5,
      -1,     7,    -1,    26,    -1,    -1,   647,    -1,    -1,    -1,
      -1,   652,    18,    19,    20,    21,    22,    23,    24,    25,
      43,    27,    45,    29,    30,    31,    32,    50,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,   713,    29,    30,    31,    32,   718,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,   739,   740,
     741,    -1,    -1,    -1,    -1,   746,   747,   748,    -1,    -1,
     751,    -1,   753,   754,   755,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   764,   765,   766,    -1,    -1,    -1,    -1,
     771,   772,   773,    -1,    -1,   776,    -1,   778,   779,   780,
      -1,    -1,    -1,    -1,   785,   786,   787,    -1,    -1,   790,
      -1,    -1,    -1,    -1,    -1,    -1,   797,   798,    -1,   800,
     801,   802,   803,    -1,   805,   806,    37,   808,   809,   810,
     811,    -1,    -1,    -1,    -1,   816,   817,   818,    -1,    -1,
     821,    -1,    -1,   824,   825,    -1,   827,     3,     4,     5,
      -1,     7,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,     5,    43,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,   150,
      -1,   152,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,   942,   943,   944,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,   958,   959,   960,
       3,     4,     5,    44,     7,   196,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,   205,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,   227,    -1,    -1,   230,
      43,    -1,    45,    46,    47,    48,    49,  1008,  1009,    -1,
    1011,   242,    -1,  1014,  1015,    -1,  1017,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,   285,    29,    30,    31,    32,    -1,
      34,    -1,   293,    37,    -1,   296,     3,     4,     5,    43,
       7,    45,    46,    47,    48,    49,   307,    -1,    -1,    -1,
     311,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,   332,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   366,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   383,   384,   385,   386,   387,   388,    43,    -1,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,    -1,    -1,   406,   407,   408,   409,   410,
     411,    -1,    -1,   414,    -1,   416,   417,   418,    -1,    -1,
     421,   422,   423,   424,   425,   426,   427,    -1,    -1,    -1,
      -1,    -1,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,    -1,   447,   448,   449,   450,
     451,   452,    -1,    -1,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,    -1,    -1,    -1,
      -1,    -1,   473,   474,   475,    -1,    -1,   478,    -1,    -1,
      -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,    -1,
     491,   492,   493,    -1,    -1,    -1,   497,   498,   499,    -1,
      -1,    -1,   503,   504,   505,   506,   507,   508,    -1,    -1,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,    -1,    -1,    -1,   527,   528,   529,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     3,     4,     5,    -1,     7,    -1,    26,
      -1,    -1,   553,    -1,    -1,    -1,    -1,   558,    18,    19,
      20,    21,    22,    23,    24,    25,    43,    27,    45,    29,
      30,    31,    32,    50,    34,    -1,    -1,    37,     3,     4,
       5,    -1,     7,    43,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    31,    32,   609,    34,
      -1,    -1,    37,   614,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     3,     4,     5,
      -1,     7,    -1,    26,    -1,    -1,   647,    -1,    -1,    -1,
      -1,   652,    18,    19,    20,    21,    22,    23,    24,    25,
      43,    27,    45,    29,    30,    31,    32,    50,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,   713,    29,    30,    31,    32,   718,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,   739,   740,
     741,    -1,    -1,    -1,    -1,   746,   747,   748,    -1,    -1,
     751,    -1,   753,   754,   755,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   764,   765,   766,    -1,    -1,    -1,    -1,
     771,   772,   773,    -1,    -1,   776,    -1,   778,   779,   780,
      -1,    -1,    -1,    -1,   785,   786,   787,    -1,    -1,   790,
      -1,    -1,    -1,    -1,    -1,    -1,   797,   798,    -1,   800,
     801,   802,   803,    -1,   805,   806,    37,   808,   809,   810,
     811,    -1,    -1,    -1,    -1,   816,   817,   818,    -1,    -1,
     821,    -1,    -1,   824,   825,    -1,   827,     3,     4,     5,
      -1,     7,    -1,    -1,    65,    66,    67,    -1,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,     5,    43,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,   140,
     141,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,   150,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    10,    11,    12,    13,    14,    15,
      16,   942,   943,   944,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    -1,    -1,   958,   959,   960,
       3,     4,     5,    -1,     7,   196,    -1,    -1,    44,    43,
      -1,    45,    -1,    -1,    50,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,   227,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,  1008,  1009,    -1,
    1011,   242,    -1,  1014,  1015,    -1,  1017,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    -1,   285,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,   296,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,
      -1,    -1,   383,   384,   385,    43,    -1,    45,    46,    -1,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,    -1,    -1,   406,   407,   408,    -1,    -1,
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,
     421,   422,   423,   424,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,    -1,   447,   448,   449,     3,
       4,     5,    -1,     7,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,    -1,    22,    23,
      24,    25,    -1,    27,    -1,    -1,    -1,   478,    -1,    -1,
      -1,   482,   483,   484,    -1,    -1,    -1,    -1,    -1,    43,
     491,   492,   493,    -1,    -1,    -1,   497,   498,   499,    -1,
      -1,    -1,   503,   504,   505,    -1,    -1,    -1,    -1,    -1,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,    -1,    -1,    -1,   527,   528,   529,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,   553,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    -1,     3,     4,     5,    43,
       7,    45,    46,    47,    48,    49,     3,     4,     5,    -1,
       7,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    32,    43,    34,   609,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   112,    -1,    -1,    -1,     3,
       4,     5,    26,     7,    -1,    -1,   647,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,   146,
      34,    -1,   149,    37,    -1,    -1,    -1,    -1,    -1,    43,
      37,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
     167,   168,   169,   170,   171,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    -1,   713,    -1,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,   739,   740,
     741,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
     751,    -1,   753,   754,   755,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   764,   765,   766,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   776,    44,   778,   779,   780,
      -1,    -1,    50,   140,   141,   142,    -1,    -1,    -1,   790,
     147,   148,    -1,   150,    -1,   152,   797,   798,    -1,   800,
     801,   802,   803,    -1,   805,   806,    -1,   808,   809,   810,
     811,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
     821,    -1,    -1,   824,   825,    -1,   827,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,   196,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,   242,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,   258,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,   296,
      -1,   942,   943,   944,    -1,     3,     4,     5,    -1,     7,
     307,    -1,    -1,    -1,    43,    -1,    45,   958,   959,   960,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   358,    -1,    -1,    -1,    -1,    -1,  1008,  1009,    -1,
    1011,    -1,    -1,  1014,  1015,    -1,  1017,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,   383,   384,   385,    -1,
      -1,    -1,    -1,    -1,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,    -1,    -1,   406,
     407,   408,    44,    -1,    -1,    -1,    -1,   414,    50,    -1,
      -1,    -1,    -1,    -1,   421,   422,   423,   424,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,    -1,
     447,   448,   449,    -1,    -1,    -1,    -1,    -1,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   478,    -1,    -1,    -1,   482,   483,   484,    -1,    -1,
      -1,    -1,    -1,    -1,   491,   492,   493,    -1,    -1,    -1,
     497,   498,   499,    -1,    -1,    -1,   503,   504,   505,    -1,
      -1,    -1,    -1,    -1,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,    -1,    -1,    -1,
     527,   528,   529,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,     3,     4,     5,    -1,
       7,    26,    -1,    -1,    -1,    -1,   553,    -1,    -1,   676,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    44,
      27,   688,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,   609,    -1,    -1,    -1,   733,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    49,    -1,
     647,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,   796,
      31,    32,   799,    -1,    37,    -1,    37,   804,    -1,    -1,
     807,    -1,    43,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   823,    -1,    -1,   826,
      -1,    -1,    65,    66,    67,    -1,   713,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,     3,     4,     5,    -1,     7,    -1,    -1,    91,    92,
      93,    94,   739,   740,   741,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,   751,    27,   753,   754,   755,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   764,   765,   766,
      -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    -1,   776,
      -1,   778,   779,   780,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,   790,   147,   148,    -1,   150,    -1,   152,
     797,   798,    -1,   800,   801,   802,   803,    -1,   805,   806,
      -1,   808,   809,   810,   811,    -1,    -1,    -1,    -1,    -1,
     937,   938,   939,    -1,   821,    -1,    -1,   824,   825,    -1,
     827,   948,   949,    -1,    -1,    -1,   953,   954,   955,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,   964,   965,    -1,
      -1,     3,     4,     5,    -1,     7,   973,   974,   975,   976,
     977,    -1,    -1,    -1,    -1,   982,    18,    19,    20,    21,
      22,    23,    24,    25,   227,    27,    -1,   994,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   242,
    1007,    43,    44,  1010,    -1,  1012,  1013,    -1,    -1,  1016,
      -1,  1018,  1019,    33,    -1,   258,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,    -1,    -1,    -1,    -1,
      -1,    33,   285,    -1,    -1,    -1,  1053,  1054,    -1,    -1,
      -1,    -1,    44,   296,    -1,   942,   943,   944,    50,     3,
       4,     5,    -1,     7,   307,    -1,    -1,    -1,    -1,    -1,
      -1,   958,   959,   960,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,
      -1,  1008,  1009,    -1,  1011,    -1,    -1,  1014,  1015,    -1,
    1017,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     383,   384,   385,    -1,    -1,    -1,    -1,    -1,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,    -1,    -1,   406,   407,   408,    -1,    -1,    -1,    -1,
      -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,   421,   422,
     423,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,    -1,   447,   448,   449,    -1,    -1,    -1,
      -1,    -1,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,   482,
     483,   484,    -1,    -1,    -1,    -1,    -1,    -1,   491,   492,
     493,    -1,    -1,    -1,   497,   498,   499,    -1,    -1,    -1,
     503,   504,   505,    -1,    -1,    -1,    -1,    -1,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,    -1,    -1,    -1,   527,   528,   529,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
     553,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,    -1,    -1,     3,     4,     5,    43,     7,    45,
      46,    47,    48,    49,     3,     4,     5,    -1,     7,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    43,    34,   609,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,   647,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,    72,    73,    74,    -1,    -1,    -1,    -1,
     713,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    88,
      89,    90,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,   739,   740,   741,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,   751,    -1,
     753,   754,   755,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,   764,   765,   766,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   776,    -1,   778,   779,   780,   147,   148,
      -1,   150,    -1,   152,    -1,    -1,    -1,   790,    -1,    -1,
      -1,    -1,    -1,    -1,   797,   798,    -1,   800,   801,   802,
     803,    -1,   805,   806,    -1,   808,   809,   810,   811,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,   821,    -1,
      -1,   824,   825,    -1,   827,    -1,    -1,   196,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    29,
      -1,    31,    32,    -1,    -1,    35,    -1,    37,     3,     4,
       5,    -1,     7,    43,    -1,    45,    46,    -1,   227,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,   242,    29,    -1,    31,    32,    -1,    -1,
      35,    -1,    37,     3,     4,     5,    -1,     7,    43,   258,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    29,
      -1,    31,    32,    -1,    -1,    35,   285,    37,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,   942,
     943,   944,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   958,   959,   960,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    29,
      -1,    31,    32,    -1,    -1,    35,    -1,    37,     3,     4,
       5,    -1,     7,    43,    -1,    45,    46,    -1,    -1,   358,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    -1,  1008,  1009,    -1,  1011,    -1,
      -1,  1014,  1015,    -1,  1017,    -1,    -1,    -1,    43,    -1,
      45,    -1,   391,   392,   393,   394,   395,   396,   397,   398,
      -1,    -1,    -1,    -1,   403,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,   414,    -1,    -1,    -1,    -1,
      -1,    -1,   421,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,   433,   434,   435,   436,   437,   438,
     439,   440,    -1,    -1,    -1,    -1,   445,    -1,    43,    -1,
      45,    -1,    -1,    -1,    -1,    -1,   455,   456,   457,   458,
     459,   460,   461,   462,    -1,    -1,    -1,    -1,   467,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,   478,
      -1,    -1,    -1,   482,   483,   484,    -1,    -1,    -1,    -1,
      37,    -1,    33,    -1,    -1,    -1,    -1,    -1,   497,   498,
     499,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,   511,   512,   513,   514,   515,   516,   517,   518,
      -1,    -1,    -1,    -1,   523,    72,    73,    74,   527,   528,
     529,     3,     4,     5,    -1,     7,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,   553,    27,    -1,    29,    -1,    31,
      32,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
     147,   148,    -1,   150,    -1,   152,    33,    -1,    -1,    -1,
     609,     3,     4,     5,    -1,     7,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    29,    -1,    31,
      32,    -1,    -1,    35,    -1,    37,    -1,    -1,   647,   196,
      -1,    43,    -1,    45,    46,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
     227,    27,    -1,    29,    -1,    31,    32,    -1,    -1,    35,
      -1,    37,    -1,    -1,    -1,   242,    -1,    43,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,   112,    -1,     3,     4,
       5,   258,     7,    -1,   713,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    -1,    31,    32,   285,    -1,
     146,    -1,    37,   149,    -1,    -1,    -1,    -1,    43,   296,
      45,    46,   751,    -1,     3,     4,     5,    -1,     7,    -1,
     307,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,   776,    27,    -1,
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,   790,    -1,    -1,    43,    -1,    45,    46,   797,   798,
      -1,   800,    -1,    -1,    -1,    -1,   805,   806,    -1,   808,
      -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   821,    -1,    -1,   824,   825,    -1,   827,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,   391,   392,   393,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,   403,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,   414,    -1,    -1,
      -1,    50,    -1,    -1,   421,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   433,   434,   435,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,   445,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   455,   456,
     457,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
     467,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,   478,    -1,    -1,    -1,   482,   483,   484,    -1,    -1,
      -1,    -1,    37,   942,   943,   944,    33,    -1,    -1,    -1,
     497,   498,   499,    -1,    -1,    -1,    -1,    44,    -1,   958,
     959,   960,    -1,    50,   511,   512,   513,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   523,    72,    73,    74,
     527,   528,   529,    -1,    -1,    -1,    -1,    82,    83,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      95,    -1,    -1,    -1,    -1,    -1,   553,    26,    -1,  1008,
    1009,    -1,  1011,    -1,    33,  1014,  1015,    -1,  1017,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,   112,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,   147,   148,    26,   150,    -1,   152,    -1,    -1,
      -1,    33,   609,    -1,    -1,    -1,    -1,   146,    -1,    -1,
     149,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     647,   196,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    -1,    31,    32,    -1,    -1,    35,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    -1,   227,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,   242,    29,    -1,
      31,    32,    -1,    -1,    35,    -1,    37,     3,     4,     5,
      -1,     7,    43,   258,    45,    46,   713,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    -1,    31,    32,    -1,    -1,    35,
     285,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,   296,    -1,    -1,   751,    -1,     3,     4,     5,    -1,
       7,    -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,   776,
      27,    -1,    29,    -1,    31,    32,    -1,    -1,    35,    -1,
      37,    -1,    -1,   790,    -1,    -1,    43,    -1,    45,    46,
     797,   798,    -1,   800,    -1,    -1,    -1,    -1,   805,   806,
      -1,   808,    -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,
     676,    -1,    -1,    -1,   821,    -1,    -1,   824,   825,    -1,
     827,    -1,   688,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   391,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    37,    -1,    -1,   414,
     146,    -1,    33,   149,    -1,    -1,   421,   733,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,   433,    50,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,
     445,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
     455,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   478,    -1,    -1,    -1,   482,   483,   484,
     796,    -1,    -1,   799,    -1,   942,   943,   944,   804,    -1,
      -1,   807,   497,   498,   499,    -1,    -1,   112,    -1,    -1,
      -1,   958,   959,   960,    -1,    -1,   511,   823,    -1,    -1,
     826,    -1,    -1,    -1,    -1,    -1,   147,   148,   523,   150,
      -1,   152,   527,   528,   529,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,   149,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   553,    -1,
      -1,  1008,  1009,    -1,  1011,    26,   171,  1014,  1015,    -1,
    1017,    -1,    33,    -1,    -1,   196,     3,     4,     5,    -1,
       7,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    -1,    31,    32,   227,    -1,    35,    -1,
      37,    -1,    -1,    -1,   609,    -1,    43,    -1,    45,    46,
      -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   937,   938,   939,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,   948,   949,    -1,    -1,    -1,   953,   954,   955,
      -1,    -1,   647,    -1,    -1,    -1,    -1,    -1,   964,   965,
      -1,    -1,    -1,    -1,   285,    -1,    -1,   973,   974,   975,
     976,   977,    -1,    -1,    -1,   296,   982,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,   994,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   676,    -1,    -1,
      -1,  1007,    -1,    -1,  1010,    -1,  1012,  1013,    -1,   688,
    1016,    -1,  1018,  1019,    -1,    -1,    -1,    -1,   713,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1042,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1053,  1054,    -1,
      -1,    -1,    -1,    -1,   733,    -1,   751,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
     391,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,   776,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   414,    45,   790,    -1,    -1,    -1,    50,
     421,    -1,   797,   798,    -1,   800,    -1,    -1,    -1,    -1,
     805,   806,   433,   808,    -1,    -1,    -1,   796,    -1,    -1,
     799,    -1,    -1,    -1,   445,   804,   821,    -1,   807,   824,
     825,    -1,   827,    -1,   455,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   823,    -1,   467,   826,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,   478,    -1,    -1,
      -1,   482,   483,   484,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,   497,   498,   499,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     511,    43,    44,    -1,     3,     4,     5,    26,     7,    -1,
      -1,    -1,   523,    -1,    33,    -1,   527,   528,   529,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,   553,    -1,    43,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   942,   943,   944,
     676,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   937,   938,
     939,    -1,   688,   958,   959,   960,    -1,    -1,    -1,   948,
     949,    -1,    -1,    -1,   953,   954,   955,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   964,   965,    -1,   609,    -1,
      -1,    -1,    -1,    -1,   973,   974,   975,   976,   977,    -1,
      -1,    -1,    -1,   982,    -1,    -1,    -1,   733,    -1,    -1,
      -1,    -1,    -1,  1008,  1009,   994,  1011,    -1,    -1,  1014,
    1015,    -1,  1017,    -1,    -1,    -1,   647,    -1,  1007,    -1,
      -1,  1010,    -1,  1012,  1013,    -1,    -1,  1016,    -1,  1018,
    1019,    -1,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,    -1,    -1,    -1,    -1,    33,    -1,
     796,   676,    -1,   799,  1053,  1054,    -1,    -1,   804,    44,
      -1,   807,    -1,   688,    -1,    50,    -1,    -1,    -1,     3,
       4,     5,   713,     7,    -1,    -1,    -1,   823,    -1,    -1,
     826,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    -1,    31,    32,    -1,
       3,     4,     5,    37,     7,    -1,    -1,    -1,   733,    43,
     751,    45,    46,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    37,   776,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,   790,
      -1,    -1,    -1,    -1,    -1,    -1,   797,   798,    -1,   800,
      -1,    -1,    -1,    -1,   805,   806,    -1,   808,    -1,    -1,
      -1,   796,    -1,    -1,   799,    -1,    -1,    -1,    -1,   804,
     821,    -1,   807,   824,   825,    -1,   827,    -1,    -1,    -1,
      -1,   937,   938,   939,    -1,    -1,    -1,    -1,   823,    -1,
      -1,   826,   948,   949,    -1,    -1,    -1,   953,   954,   955,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   964,   965,
      -1,    -1,     3,     4,     5,    -1,     7,   973,   974,   975,
     976,   977,    -1,    -1,    -1,    -1,   982,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,   994,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,  1007,    43,    44,  1010,    -1,  1012,  1013,    26,    -1,
    1016,    -1,  1018,  1019,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    43,    44,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1042,    -1,    -1,    33,
      -1,   942,   943,   944,    -1,    -1,    -1,  1053,  1054,    43,
      44,    -1,   937,   938,   939,    -1,    50,   958,   959,   960,
      -1,    -1,    -1,   948,   949,    -1,    -1,    -1,   953,   954,
     955,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   964,
     965,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   973,   974,
     975,   976,   977,    -1,    -1,    -1,    -1,   982,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1008,  1009,   994,
    1011,    -1,    -1,  1014,  1015,    -1,  1017,    -1,    -1,    -1,
      -1,    -1,  1007,    -1,    -1,  1010,    -1,  1012,  1013,    -1,
      -1,  1016,    -1,  1018,  1019,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,  1053,  1054,
      43,    44,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    -1,    31,    32,    -1,     3,
       4,     5,    37,     7,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    -1,    31,    32,    -1,
       3,     4,     5,    37,     7,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    -1,    31,    32,
      -1,     3,     4,     5,    37,     7,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    29,    -1,    31,
      32,    -1,     3,     4,     5,    37,     7,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    -1,
      31,    32,    -1,     3,     4,     5,    37,     7,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    29,
      -1,    31,    32,    -1,     3,     4,     5,    37,     7,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    -1,     3,     4,     5,    37,     7,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,    -1,    31,    32,    -1,     3,     4,     5,    37,
       7,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    -1,    31,    32,    -1,     3,     4,     5,
      37,     7,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    -1,    31,    32,    -1,     3,     4,
       5,    37,     7,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    -1,    31,    32,    -1,     3,
       4,     5,    37,     7,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    -1,    31,    32,    -1,
       3,     4,     5,    37,     7,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    -1,    31,    32,
      -1,     3,     4,     5,    37,     7,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    29,    -1,    31,
      32,    -1,     3,     4,     5,    37,     7,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    -1,
      31,    32,    -1,     3,     4,     5,    37,     7,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    29,
      -1,    31,    32,    -1,     3,     4,     5,    37,     7,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    -1,    31,    32,    -1,     3,     4,     5,    37,     7,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,    -1,    31,    32,    -1,     3,     4,     5,    37,
       7,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    29,    -1,    31,    32,    -1,     3,     4,     5,
      37,     7,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    -1,    31,    32,    -1,     3,     4,
       5,    37,     7,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    -1,    31,    32,    -1,     3,
       4,     5,    37,     7,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    -1,    31,    32,    -1,
       3,     4,     5,    37,     7,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    43,    44,    26,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,
      26,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,    26,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      43,    44,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,
      44,    26,    -1,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    43,    44,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    43,    44,    26,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    43,    44,    26,    -1,    -1,    -1,
      -1,    50,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    33,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    33,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    33,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    26,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    26,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    26,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    26,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    26,    -1,    -1,
      -1,    50,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      26,    50,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      26,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    26,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    26,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    26,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    43,    -1,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    43,    -1,
      45,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    43,    -1,    45,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    26,    -1,    -1,    -1,
      -1,    50,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    44,    -1,    -1,    -1,    -1,    -1,
      50,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    43,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
       3,     4,     5,    50,     7,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,
      26,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,    26,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    43,    44,    26,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    43,    44,    26,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    43,    44,    26,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    43,    44,    26,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    43,    44,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    43,    44,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      26,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    43,    44,    26,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      44,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    43,    44,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    44,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    44,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    44,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    44,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    44,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    44,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      44,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    44,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    33,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    43,    33,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    33,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    34,    47,    48,    49,    53,    54,    56,    59,    60,
      61,    63,     0,    61,    29,    83,    25,    45,    58,    62,
       3,     4,     5,     7,    18,    19,    20,    21,    22,    23,
      24,    25,    27,    30,    31,    32,    37,    43,    45,    46,
      59,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    81,    82,
      83,    84,    43,    45,    50,    43,    43,    43,    43,    43,
      43,    25,    43,    43,    43,    66,    45,    66,    58,    30,
      64,    45,    50,    43,    10,    11,    12,    13,    14,    15,
      16,     8,     9,    17,    18,    26,    78,    25,    44,    55,
      56,    57,    59,    58,    75,    76,    75,    75,    78,    78,
      78,    27,    61,    71,    71,    66,    71,    44,    45,    71,
      44,    71,    80,    73,    73,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    71,    44,    50,    44,    50,    58,
      33,    33,    33,    44,    44,    44,    68,    33,    33,    44,
      33,    44,    50,    25,    56,    75,    75,    75,    68,    71,
      71,    68,    71,    71,    44,    44,    44,    44,    44,    44,
      35,    44,    68,    68,    68,    68,    68,    35,    68,    29,
      34,    47,    48,    49,     3,     4,     5,     7,    19,    20,
      21,    22,    23,    24,    25,    27,    43,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    25,    45,
      62,    34,    47,    48,    49,     3,     4,     5,     7,    19,
      20,    21,    22,    23,    24,    25,    27,    43,    69,    70,
      77,    78,    79,     3,     4,     5,     7,    22,    23,    24,
      25,    27,    43,    69,    70,    79,     3,     4,     5,     7,
      19,    20,    21,    22,    23,    24,    25,    27,    43,    56,
      59,    60,    63,    69,    70,    72,    73,    74,    75,    76,
      77,    78,    79,     3,     4,     5,     7,    19,    20,    21,
      22,    23,    24,    25,    27,    43,    69,    70,    72,    73,
      74,    75,    76,    77,    78,    79,    50,    43,     3,     4,
       5,     7,    22,    23,    24,    25,    27,    43,    69,    70,
      76,    77,    78,    79,    25,    29,    31,    32,    37,    45,
      46,    66,    67,    81,    82,    83,    84,    43,    19,    20,
      21,    76,    77,    78,    29,    31,    32,    37,    45,    46,
      66,    67,    81,    82,    83,    84,     3,     4,     5,     7,
      19,    20,    21,    22,    23,    24,    25,    27,    43,    69,
      70,    72,    73,    74,    75,    76,    77,    78,    79,    29,
      31,    32,    37,    45,    46,    66,    67,    81,    82,    83,
      84,    30,    65,    43,    43,    43,    43,    43,    43,    25,
      66,    43,    10,    11,    12,    13,    14,    15,    16,     8,
       9,    17,    18,    26,    78,    45,    43,    43,    43,    43,
      43,    43,    25,    66,    43,    78,    43,    43,    43,    25,
      66,    43,    43,    43,    43,    43,    43,    43,    25,    66,
      83,    45,    62,    43,    10,    11,    12,    13,    14,    15,
      16,     8,     9,    17,    18,    26,    78,    43,    43,    43,
      43,    43,    43,    25,    66,    43,    10,    11,    12,    13,
      14,    15,    16,     8,     9,    17,    18,    26,    78,    71,
      44,    55,    57,    43,    43,    43,    25,    66,    43,    78,
      30,    65,    43,    43,    43,    45,    66,    45,    44,    55,
      57,    43,    43,    43,    78,    30,    65,    43,    43,    43,
      45,    66,    45,    43,    43,    43,    43,    43,    43,    25,
      66,    43,    10,    11,    12,    13,    14,    15,    16,     8,
       9,    17,    18,    26,    78,    30,    65,    43,    43,    43,
      45,    66,    45,    30,    75,    75,    75,    78,    78,    78,
      27,    44,    44,    80,     3,     4,     5,     7,    22,    23,
      24,    25,    27,    43,    69,    70,    73,    76,    77,    78,
      79,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    71,    75,    75,    75,    78,    78,    78,    27,    44,
      44,    80,    78,    78,    78,    27,    44,    44,    80,    75,
      75,    75,    78,    78,    78,    27,    44,    45,    44,    80,
       3,     4,     5,     7,    22,    23,    24,    25,    27,    43,
      69,    70,    73,    76,    77,    78,    79,    73,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    71,    75,    75,
      75,    78,    78,    78,    27,    44,    44,    80,     3,     4,
       5,     7,    22,    23,    24,    25,    27,    43,    69,    70,
      73,    76,    77,    78,    79,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    71,    44,    44,    78,    78,
      78,    27,    44,    44,    80,    30,    61,    71,    71,    66,
      71,    45,    44,    44,    75,    75,    75,    30,    61,    71,
      71,    66,    71,    45,    75,    75,    75,    78,    78,    78,
      27,    44,    44,    80,     3,     4,     5,     7,    22,    23,
      24,    25,    27,    43,    69,    70,    73,    76,    77,    78,
      79,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    71,    30,    61,    71,    71,    66,    71,    45,    33,
      33,    33,    44,    44,    44,    44,    43,    43,    43,    25,
      66,    43,    78,    33,    33,    33,    44,    44,    44,    44,
      44,    44,    44,    44,    33,    33,    33,    44,    44,    44,
      44,    43,    43,    43,    25,    66,    43,    78,    33,    33,
      33,    44,    44,    44,    44,    43,    43,    43,    25,    66,
      43,    78,    44,    44,    44,    44,    68,    33,    33,    44,
      33,    33,    33,    33,    68,    33,    33,    44,    33,    33,
      33,    33,    44,    44,    44,    44,    43,    43,    43,    25,
      66,    43,    78,    68,    33,    33,    44,    33,    75,    75,
      75,    78,    78,    78,    27,    44,    44,    80,    75,    75,
      75,    75,    75,    75,    78,    78,    78,    27,    44,    44,
      80,    75,    75,    75,    78,    78,    78,    27,    44,    44,
      80,    68,    71,    71,    29,    31,    32,    37,    45,    46,
      66,    67,    68,    81,    82,    83,    84,    71,    75,    75,
      75,    68,    71,    71,    29,    31,    32,    37,    45,    46,
      66,    67,    68,    81,    82,    83,    84,    71,    75,    75,
      75,    78,    78,    78,    27,    44,    44,    80,    68,    71,
      71,    68,    71,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      30,    65,    43,    43,    43,    45,    66,    45,    35,    44,
      44,    44,    44,    44,    44,    44,    30,    65,    43,    43,
      43,    45,    66,    45,    35,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    35,    44,    68,    68,
      68,    30,    61,    71,    71,    66,    71,    45,    68,    68,
      68,    68,    68,    30,    61,    71,    71,    66,    71,    45,
      68,    68,    68,    68,    68,    68,    68,    68,    33,    33,
      44,    33,    35,    68,    33,    33,    44,    33,    35,    35,
      68,    71,    71,    68,    71,    68,    68,    71,    71,    68,
      71,    68,    68,    44,    44,    44,    35,    44,    44,    44,
      44,    35,    44,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    35,    35,    68,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    59,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    72,    73,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    76,    76,    77,
      78,    78,    78,    78,    79,    79,    79,    80,    80,    81,
      81,    81,    81,    82,    82,    82,    83,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     2,     1,     1,
       3,     1,     3,     4,     4,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     2,     3,     1,     1,     1,     2,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     6,     6,     6,     1,     2,     1,
       1,     4,     4,     4,     1,     3,     4,     1,     3,     7,
       5,     9,     7,     7,     7,     7,     2,     3,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* programa: declaracoes  */
#line 67 "parser/clang.y"
                        {
                            liberar_ast((yyvsp[0].no));
                        }
#line 4736 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 73 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 4744 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 77 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 4753 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 88 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 4762 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 92 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 4768 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 96 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 4776 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 100 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 4785 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 107 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 4794 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 112 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4804 "clang.tab.c"
    break;

  case 13: /* def_declaracao: def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D  */
#line 118 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-1].no);
                            (yyvsp[-3].simbolo)->funcao.parametros_no = novo_no->parametros_no;
                            (yyvsp[-3].simbolo)->funcao.parametros = novo_no->parametros;
                            liberar_ast((yyvsp[-1].no));
                            (yyval.simbolo) = (yyvsp[-3].simbolo);
                        }
#line 4816 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 128 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 4822 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 129 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 4828 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 130 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 4834 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 131 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 4840 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 136 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4849 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 144 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4858 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 149 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4867 "clang.tab.c"
    break;

  case 22: /* lista_inicializar_atrib: def_declaracao  */
#line 156 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4875 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA def_declaracao  */
#line 160 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4883 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 165 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4889 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
#line 167 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracao((yyvsp[-2].tipo_dado), simbolos, simbolos_no);
                            simbolos_no = 0;

                            NoAST_Declaracao *novo_no = (NoAST_Declaracao*) (yyval.no);

                            for(int i = 0; i < novo_no->simbolos_no; ++i)
                            {
                                novo_no->simbolos[i]->tag = CONSTANTE;
                                novo_no->simbolos[i]->constante.tipo_dado = (yyvsp[-2].tipo_dado);
                            }

                            simbolos_no = 0;
                            simbolos = NULL;
                        }
#line 4909 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 184 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4915 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 185 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4921 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 189 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4929 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 193 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4938 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 199 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4944 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 200 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4950 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 203 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4956 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 204 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4962 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 207 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4968 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 208 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4974 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 209 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4980 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 210 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4986 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 211 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4992 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 214 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4998 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 215 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 5004 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 216 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 5010 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 220 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 5018 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 224 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 5026 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 228 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 5032 "clang.tab.c"
    break;

  case 45: /* expressao_principal: TOKEN_CADEIA  */
#line 230 "parser/clang.y"
                        { (yyval.no) = novo_no_ast_constante(TIPO_CADEIA, (yyvsp[0].valor)); }
#line 5038 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 231 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 5044 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_logica  */
#line 235 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 5050 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_operacao ATRIBUICAO expressao_atribuicao  */
#line 237 "parser/clang.y"
                        {   
                            // Atribuicao = chamada ou expressao principal = qqr coisa
                            (yyval.no) = novo_no_ast_atribuicao((yyvsp[-2].no), (yyvsp[0].no));
                            // Verificar se são do mesmo tipo / existe
                            Simbolo* simbolo = simbolo_no_ast((yyvsp[-2].no));
                            if(simbolo && simbolo->tag == CONSTANTE)
                            {
                                if(simbolo->constante.tipo_dado == tipo_expressao((yyvsp[0].no)))
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
#line 5078 "clang.tab.c"
    break;

  case 49: /* expressao_logica: expressao_relacional  */
#line 264 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 5084 "clang.tab.c"
    break;

  case 50: /* expressao_logica: expressao_logica OP_E expressao_relacional  */
#line 266 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5092 "clang.tab.c"
    break;

  case 51: /* expressao_logica: expressao_logica OP_OU expressao_relacional  */
#line 270 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5100 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_aritmetica  */
#line 276 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 5106 "clang.tab.c"
    break;

  case 53: /* expressao_relacional: expressao_relacional OP_MENOR_QUE expressao_aritmetica  */
#line 278 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5114 "clang.tab.c"
    break;

  case 54: /* expressao_relacional: expressao_relacional OP_MAIOR_QUE expressao_aritmetica  */
#line 282 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5122 "clang.tab.c"
    break;

  case 55: /* expressao_relacional: expressao_relacional OP_IGUALDADE expressao_aritmetica  */
#line 286 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5130 "clang.tab.c"
    break;

  case 56: /* expressao_relacional: expressao_relacional OP_MAIOR_IGUAL expressao_aritmetica  */
#line 290 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5138 "clang.tab.c"
    break;

  case 57: /* expressao_relacional: expressao_relacional OP_MENOR_IGUAL expressao_aritmetica  */
#line 294 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5146 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto  */
#line 299 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 5152 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_aritmetica OP_SOMA expressao_conjunto  */
#line 301 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5160 "clang.tab.c"
    break;

  case 60: /* expressao_aritmetica: expressao_aritmetica OP_SUBTRACAO expressao_conjunto  */
#line 305 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5168 "clang.tab.c"
    break;

  case 61: /* expressao_aritmetica: expressao_aritmetica OP_DIVISAO expressao_conjunto  */
#line 309 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5176 "clang.tab.c"
    break;

  case 62: /* expressao_aritmetica: expressao_aritmetica OP_MULTIPLICACAO expressao_conjunto  */
#line 313 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 5184 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: expressao_operacao  */
#line 318 "parser/clang.y"
                                                     { (yyval.no) = (yyvsp[0].no); }
#line 5190 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 320 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 5198 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 324 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 5206 "clang.tab.c"
    break;

  case 66: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 328 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 5214 "clang.tab.c"
    break;

  case 68: /* expressao_operacao: operadores_expressao expressao_io  */
#line 336 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_operacao((yyvsp[-1].valor).intval, (yyvsp[0].no));
                        }
#line 5222 "clang.tab.c"
    break;

  case 70: /* expressao_io: expressao_chamada  */
#line 345 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 5228 "clang.tab.c"
    break;

  case 71: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 347 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                            // pular +1 linha
                        }
#line 5242 "clang.tab.c"
    break;

  case 72: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 357 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                        }
#line 5255 "clang.tab.c"
    break;

  case 73: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 366 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5263 "clang.tab.c"
    break;

  case 74: /* expressao_chamada: expressao_principal  */
#line 371 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 5269 "clang.tab.c"
    break;

  case 76: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 374 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *no_parametros = (NoAST_Parametros_Chamada*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_chamada_funcao((yyvsp[-3].no), (yyvsp[-1].no), no_parametros->parametros_no);

                            Simbolo* simbolo = simbolo_no_ast((yyvsp[-3].no));
                            if(simbolo && simbolo->tag == FUNCAO)
                            {
                                if(tipo_parametros_funcao(simbolo, (yyvsp[-1].no)) > 0)
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
#line 5297 "clang.tab.c"
    break;

  case 77: /* expressao_lista_param: expressao_atribuicao  */
#line 400 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 5305 "clang.tab.c"
    break;

  case 78: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 404 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 5314 "clang.tab.c"
    break;

  case 79: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 411 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-4].no), (yyvsp[-2].no), NULL, 0, (yyvsp[0].no));
                            if((yyvsp[0].no)->tipo == NO_IF)
                            {
                                NoAST_If *novo_no = (NoAST_If*) (yyval.no);
                                NoAST_If *no_else = (NoAST_If*) (yyvsp[0].no);
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
                        }
#line 5342 "clang.tab.c"
    break;

  case 80: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 435 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 5350 "clang.tab.c"
    break;

  case 81: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 439 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5358 "clang.tab.c"
    break;

  case 82: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 443 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5366 "clang.tab.c"
    break;

  case 83: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 449 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5374 "clang.tab.c"
    break;

  case 84: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 453 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5382 "clang.tab.c"
    break;

  case 85: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 457 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5390 "clang.tab.c"
    break;

  case 86: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 463 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5398 "clang.tab.c"
    break;

  case 87: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 467 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 5406 "clang.tab.c"
    break;

  case 88: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 473 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5414 "clang.tab.c"
    break;

  case 89: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 477 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 5422 "clang.tab.c"
    break;


#line 5426 "clang.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 482 "parser/clang.y"


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
        tac();
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
