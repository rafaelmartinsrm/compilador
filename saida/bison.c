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

#line 94 "clang.tab.c"

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
  YYSYMBOL_OP_IGUALDADE = 6,               /* OP_IGUALDADE  */
  YYSYMBOL_OP_MAIOR_QUE = 7,               /* OP_MAIOR_QUE  */
  YYSYMBOL_OP_SOMA = 8,                    /* OP_SOMA  */
  YYSYMBOL_OP_SUBTRACAO = 9,               /* OP_SUBTRACAO  */
  YYSYMBOL_CONJUNTO_ADD = 10,              /* CONJUNTO_ADD  */
  YYSYMBOL_CONJUNTO_REMOVE = 11,           /* CONJUNTO_REMOVE  */
  YYSYMBOL_CONJUNTO_EXISTS = 12,           /* CONJUNTO_EXISTS  */
  YYSYMBOL_TOKEN_ID = 13,                  /* TOKEN_ID  */
  YYSYMBOL_ATRIBUICAO = 14,                /* ATRIBUICAO  */
  YYSYMBOL_ASPAS_SIMPLES = 15,             /* ASPAS_SIMPLES  */
  YYSYMBOL_ASPAS_DUPLAS = 16,              /* ASPAS_DUPLAS  */
  YYSYMBOL_CHAVE_E = 17,                   /* CHAVE_E  */
  YYSYMBOL_CHAVE_D = 18,                   /* CHAVE_D  */
  YYSYMBOL_COMANDO_FOR = 19,               /* COMANDO_FOR  */
  YYSYMBOL_COMANDO_FORALL = 20,            /* COMANDO_FORALL  */
  YYSYMBOL_COMANDO_READ = 21,              /* COMANDO_READ  */
  YYSYMBOL_COMANDO_WRITE = 22,             /* COMANDO_WRITE  */
  YYSYMBOL_COMANDO_WRITELN = 23,           /* COMANDO_WRITELN  */
  YYSYMBOL_CONJUNTO_IN = 24,               /* CONJUNTO_IN  */
  YYSYMBOL_TIPO_ELEM = 25,                 /* TIPO_ELEM  */
  YYSYMBOL_COMANDO_ELSE = 26,              /* COMANDO_ELSE  */
  YYSYMBOL_EMPTY = 27,                     /* EMPTY  */
  YYSYMBOL_COMANDO_IF = 28,                /* COMANDO_IF  */
  YYSYMBOL_IN = 29,                        /* IN  */
  YYSYMBOL_IS_FLOAT = 30,                  /* IS_FLOAT  */
  YYSYMBOL_IS_INT = 31,                    /* IS_INT  */
  YYSYMBOL_IS_SET = 32,                    /* IS_SET  */
  YYSYMBOL_OP_COMPARACAO = 33,             /* OP_COMPARACAO  */
  YYSYMBOL_OP_DIVISAO = 34,                /* OP_DIVISAO  */
  YYSYMBOL_OP_E = 35,                      /* OP_E  */
  YYSYMBOL_OP_MULTIPLICACAO = 36,          /* OP_MULTIPLICACAO  */
  YYSYMBOL_OP_NEGACAO = 37,                /* OP_NEGACAO  */
  YYSYMBOL_OP_OU = 38,                     /* OP_OU  */
  YYSYMBOL_PARENTESE_E = 39,               /* PARENTESE_E  */
  YYSYMBOL_PARENTESE_D = 40,               /* PARENTESE_D  */
  YYSYMBOL_PONTO_E_VIRGULA = 41,           /* PONTO_E_VIRGULA  */
  YYSYMBOL_RETURN = 42,                    /* RETURN  */
  YYSYMBOL_TIPO_SET = 43,                  /* TIPO_SET  */
  YYSYMBOL_TIPO_INT = 44,                  /* TIPO_INT  */
  YYSYMBOL_TIPO_FLOAT = 45,                /* TIPO_FLOAT  */
  YYSYMBOL_VIRGULA = 46,                   /* VIRGULA  */
  YYSYMBOL_THEN = 47,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_programa = 49,                  /* programa  */
  YYSYMBOL_declaracoes = 50,               /* declaracoes  */
  YYSYMBOL_lista_identificadores = 51,     /* lista_identificadores  */
  YYSYMBOL_declaracao_parametro = 52,      /* declaracao_parametro  */
  YYSYMBOL_lista_tipo_parametro = 53,      /* lista_tipo_parametro  */
  YYSYMBOL_def_declaracao = 54,            /* def_declaracao  */
  YYSYMBOL_def_declaracao_tipo = 55,       /* def_declaracao_tipo  */
  YYSYMBOL_declaracao_func = 56,           /* declaracao_func  */
  YYSYMBOL_declaracao = 57,                /* declaracao  */
  YYSYMBOL_inicializar_atrib = 58,         /* inicializar_atrib  */
  YYSYMBOL_declaracao_var = 59,            /* declaracao_var  */
  YYSYMBOL_item_bloco = 60,                /* item_bloco  */
  YYSYMBOL_lista_itens_bloco = 61,         /* lista_itens_bloco  */
  YYSYMBOL_expressao = 62,                 /* expressao  */
  YYSYMBOL_expressao_declaracao = 63,      /* expressao_declaracao  */
  YYSYMBOL_tipos_expressao = 64,           /* tipos_expressao  */
  YYSYMBOL_valores = 65,                   /* valores  */
  YYSYMBOL_expressao_principal = 66,       /* expressao_principal  */
  YYSYMBOL_expressao_atribuicao = 67,      /* expressao_atribuicao  */
  YYSYMBOL_expressao_relacional = 68,      /* expressao_relacional  */
  YYSYMBOL_expressao_logica = 69,          /* expressao_logica  */
  YYSYMBOL_expressao_aritmetica = 70,      /* expressao_aritmetica  */
  YYSYMBOL_expressao_conjunto = 71,        /* expressao_conjunto  */
  YYSYMBOL_expressao_io = 72,              /* expressao_io  */
  YYSYMBOL_expressao_chamada = 73,         /* expressao_chamada  */
  YYSYMBOL_expressao_lista_param = 74,     /* expressao_lista_param  */
  YYSYMBOL_expressao_decisao = 75,         /* expressao_decisao  */
  YYSYMBOL_expressao_iteracao = 76,        /* expressao_iteracao  */
  YYSYMBOL_expressao_composta = 77,        /* expressao_composta  */
  YYSYMBOL_expressao_return = 78           /* expressao_return  */
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
#define YYLAST   11591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1054

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    68,    72,    79,    80,    83,    88,    91,
      95,   102,   107,   113,   121,   124,   125,   126,   127,   131,
     139,   144,   151,   152,   161,   162,   170,   171,   174,   178,
     185,   186,   189,   190,   193,   194,   195,   196,   197,   200,
     201,   202,   205,   209,   213,   215,   217,   220,   221,   247,
     248,   252,   259,   260,   261,   262,   265,   266,   270,   274,
     275,   278,   279,   283,   287,   293,   294,   298,   302,   308,
     309,   310,   336,   340,   347,   371,   375,   379,   385,   389,
     393,   399,   403,   409,   413
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
  "TOKEN_EMPTY", "TOKEN_PONTO_FLUTUANTE", "OP_IGUALDADE", "OP_MAIOR_QUE",
  "OP_SOMA", "OP_SUBTRACAO", "CONJUNTO_ADD", "CONJUNTO_REMOVE",
  "CONJUNTO_EXISTS", "TOKEN_ID", "ATRIBUICAO", "ASPAS_SIMPLES",
  "ASPAS_DUPLAS", "CHAVE_E", "CHAVE_D", "COMANDO_FOR", "COMANDO_FORALL",
  "COMANDO_READ", "COMANDO_WRITE", "COMANDO_WRITELN", "CONJUNTO_IN",
  "TIPO_ELEM", "COMANDO_ELSE", "EMPTY", "COMANDO_IF", "IN", "IS_FLOAT",
  "IS_INT", "IS_SET", "OP_COMPARACAO", "OP_DIVISAO", "OP_E",
  "OP_MULTIPLICACAO", "OP_NEGACAO", "OP_OU", "PARENTESE_E", "PARENTESE_D",
  "PONTO_E_VIRGULA", "RETURN", "TIPO_SET", "TIPO_INT", "TIPO_FLOAT",
  "VIRGULA", "THEN", "$accept", "programa", "declaracoes",
  "lista_identificadores", "declaracao_parametro", "lista_tipo_parametro",
  "def_declaracao", "def_declaracao_tipo", "declaracao_func", "declaracao",
  "inicializar_atrib", "declaracao_var", "item_bloco", "lista_itens_bloco",
  "expressao", "expressao_declaracao", "tipos_expressao", "valores",
  "expressao_principal", "expressao_atribuicao", "expressao_relacional",
  "expressao_logica", "expressao_aritmetica", "expressao_conjunto",
  "expressao_io", "expressao_chamada", "expressao_lista_param",
  "expressao_decisao", "expressao_iteracao", "expressao_composta",
  "expressao_return", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302
};
#endif

#define YYPACT_NINF (-387)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     573,    92,   122,   365,   368,    32,     8,     6,   439,    15,
      37,    42,  -387,    48,  2504,    63,   470,    69,   505,    -6,
     118,  1487,  2039,    60,    62,    71,  2262,   102,   137,    75,
     169,   178,   196,   203,   229,   249,  9901,  2547,  2666,    -3,
    2593,  2789,  2883,   -10,  2943,  2998,  2815,  3038,   447,   538,
      20,   276,  6868,  7356,  3573,  3234,  3280,  3323,  3369,  9922,
     894,    78,  9943,  9943,  9943,   280,   101,   281,  9964,  1378,
    1378,  1378,  9985,   -12,  3549,   555,     2,   104,  3659,  3719,
   10006,  6763, 10027, 10027, 10027, 10027, 10027, 10027, 10027, 10027,
   10027, 10006,   277,   492,   556,   710,   715,   823,   225,   307,
     356,   367,   384,  3591,  3814,  8706,   405,   407,   400,   441,
     451,   887,   288,  4367,  3774,   587,  4349,   935,   937,   903,
     955,    49,    70,   191,   506,   661,  1217,  1470,  1106,   672,
     308,   689,   582,   800, 10048, 10048, 10048,  8739, 10069, 10069,
    7714,  7728,  7750,  8772, 10069,  5948,  9901,   959,  1002,   461,
     464,   474,   500,   502,   513,   162,   520,  1033,  7764,  7786,
    7800,  8805,  8805,  8805,  8805,  8772,  4010,  4056,  4099,  4145,
     236,  8805,  4325,  4435,   115,   127,   148,   173,  1402,  4590,
    4703,   542,   604,   607,  5339,   434,   656,   641,   653,   688,
    9901,  5605,  5647,  1037,  1054,    43,  1722,  7822,  7836,  6469,
     305,  4495,   654,   980,  5235,  5701,   709,   720,   728, 10192,
     674,   703,   735,   738,   753,  9901, 10201, 10210,   773,    13,
     370, 10408, 10417, 10300,   230,   287,   297,   301,   189,   248,
     250,   776,   779,   791,   266,   818,   828,   820,   831,   846,
    9901,   284,   306,   694,  4982, 11097, 11131,   866,   878,   879,
   11145,   880,   927,   914,   979,  1014,  9901,   850,   469,  8838,
    8871, 11179, 11193,   949,   472,   855, 11431, 11445,  6976,   130,
     176,   312,   379,  1022,  1041,  1016,  1039,  1047,  9901,   410,
     420,  1006,   185,   388,   437,  1056,  1057,  1058,   491,  1092,
    1093,  1083,  1084,  1086,  9901,   569,   642,   669,   220,   483,
    6488,  6524,  5782,  9901,  1842,  6143,  6345,  6543,  6559,  1113,
    1127,  9901,  6601,  6619,  7844,   826,  4550,  1112,  1128,  1151,
    8904,  3442,  1108,  8937,  8970,  9003,  9036,  9069,  2606,  1166,
    1167,  1168,  1125,  4786,  1170,  1186,  1187,  1189,  4218,  1147,
    1207,  1208,  1215,  1225,  1238, 10588, 10623, 10632,  1188,  1240,
    1283, 10641,  1323,  1324,  1305,  1327,  1331,  9901, 10676, 10685,
    1336,     7,  1965,  1438, 10936, 10747,  4832,  1341,  1353,  1356,
     345,  7627,  1216,   546,   619,   721,   768,   832,  4875,  4924,
    9943,  9943,  9943,  1362,  1391,  1378,  1378,  1378,  1064,  9628,
   10090, 10090, 10090, 10090, 10090, 10090, 10090, 10090, 10090,  9901,
    5095,  9943,  9943,  9943,  1400,  1417,  1378,  1378,  1378,  1081,
    9649, 10111, 10111, 10111, 10111, 10111, 10111, 10111, 10111, 10111,
    9922,  9943,  9943,  9943,  1403,  1435,  1378,  1378,  1378,  1099,
    9670,  9943,  9943,  9943,  1442,  1453,  1378,  1378,  1378,  1116,
    9102,  9135,  1426,  9691, 10132, 10132, 10132, 10132, 10132, 10132,
   10132, 10132, 10132,  9964,  1455,  1473,  1378,  1378,  1378,  1126,
    9712,  9943,  9943,  9943,  1475,  1482,  1378,  1378,  1378,  1129,
    9733, 10153, 10153, 10153, 10153, 10153, 10153, 10153, 10153, 10153,
    9985,  1136,   416,  1138,  1141,  1476,  1486,  1143,  9754,  9168,
    5143,   281,  9964,  9985,  9201,  1388,  9234,   916,  1146,  1164,
    9943,  9943,  9943,  1468,  5211,   281,  9964,  9985,  1472,  1408,
    1474,  9943,  9943,  9943,  1495,  1497,  1378,  1378,  1378,  1182,
    9775, 10174, 10174, 10174, 10174, 10174, 10174, 10174, 10174, 10174,
   10069,  1046,  5422,   281,  9964,  9985,  1286,  1409,  1330,  5480,
    1491,  1493,  1494,  6033,  6047,  1479,  1485,  1492,  6094,  6663,
    1200,  5834,  6708,  6716,  6799,  1514,  1524,  9901,  6851,  7008,
    1205,  7858,  1220,   227,   292,   408,  1898,  1940,  2044,  2161,
    1227,  1525,  1529,  1530, 10246, 10255,  1518,  1533,  1534, 10264,
   10309,  1236,  2250,  3026,  3802,  4578,  1565,  1570,  9901,  5168,
    5287,  1543, 10426,  1547,    23,    90,   135,  1004,  1109,  1597,
    1859,  1548,  1566,  1567,  1584,   335,   374,  1573,  1574,  1578,
     509,  1607,  1246,  1609,  1611,  1612, 11227, 11241,  1599,  1603,
    1604, 11275,  9267, 11398,  1254,  5875,  6335, 11261, 11295,  1632,
    1633,  9901, 11309, 11316,  1623, 11450,  1624,   646,   648,   667,
    3492,  3596,  4268,  4372,  1628,   560,   718,  1613,  1617,  1618,
     763,  1619,  1270,  1639,  1640,  1644,   875,   889,  1641,  1648,
    1649,  1235,  6129,  1273,  1124,  1844,  2620,  3396,  1667,  1677,
    9901,  4172,  6185,   705,  6941,   729,   329,   386,   393,   677,
     792,   945,  1074,   730,   541,   580,  7027,  7043,  7097,  7880,
    1275,  9300,  8706,  1672,  1685,  1277,   777,  9333,  1036,  1053,
    1687,  1688,  1689,  1651,  8706,  1690,  1691,  1278,   780,  1676,
    1693,  1694,  1695, 10694, 10729,  1680,  1696,  1702, 10738, 10782,
    1280,   429,  2741, 10791, 10799,  1709,  1717,  9901, 10834, 10842,
    1712, 10944,  1718,   131,   205,   223,  2061,  2498,  2820,  2837,
    1720,  1682,  8706,  1710,  1711,  1292,   782,  1728, 10048, 10048,
   10048,  7894,  7902,  7916,  7115,  1746,  1747,  1314,  9796, 10048,
   10048, 10048, 10462, 10471, 10480, 10318,  1749,  1750,  1317,  9817,
   10048, 10048, 10048,  1741,  1753,  1754,  1755, 10048, 10048, 10048,
   11464, 11483, 11497, 11412,  1770,  1779,  1319,  9838,  1758,  1760,
    1761,  1762, 10048, 10048, 10048,  7156,  7239,  7333,  6230,  1788,
    1789,  1321,  9859,  7937,  8739, 10069, 10069,  9366, 10069, 10048,
   10048, 10048,  8739, 10069, 10069,  9399, 10069, 10048, 10048, 10048,
   10952, 10987, 10995, 10850,  1791,  1792,  1322,  9880,  8739, 10069,
   10069,  8772, 10069,  1764,  1767,  1769,  7341,  7440,  7499,  7951,
    1338,  1777,  1778,  1783, 10354, 10363, 10372, 10516,  1339,  1784,
    1785,  1786,  1801,  1804,  1806, 11330, 11350, 11364, 11502,  1350,
    1807,  1808,  1809,  6273,  6294,  6408,  7516,  1366,  1814,  1823,
    1824,  5529,  1772,  1818,  1830,  8046,  9586,  1420,  8079,  8112,
    8145,  8178,  8211,  8244,  1831,  1832,  1833,  1834,  1835,  1848,
    1849,  5582,  1852,  1854,  1856,    -1,  9607,  1422,   120,   170,
     664,   679,   682,   742,  1861,  1862,  1863,  1866, 10885, 10893,
   10901, 11003,  1384,  1871,  1872,  1873,  1771,  1874,  7959,  7973,
    7994,  8008, 10525, 10534, 10570, 10579,  1846,  1891,  1892, 11516,
   11535, 11549, 11554,  7535,  7577,  7673,  7692,  8706,  8706,  8706,
    8277,  5742,   281,  9964,  9985,  8310,  1451,  8343,  8706,  9366,
    1877,  1882,  1883,  8739,  8739,  8739,   793,  5993,   281,  9964,
    9985,   861,  1463,   876,  8739,  9399, 11038, 11046, 11054, 11089,
    8772,  8772,  8772,  8772,  8772,  9432,  9465,  9498,  8376,  8706,
    1900,  1901,  1385,   840,  8409,  9531,  8442,  1889,  1890,  1894,
     910,  8706,  1908,  1913,  1386,   854,   934,  1899,   964,  1817,
    2013,  2107,  2167,  2222,  8739, 10069, 10069,  9366, 10069,  8706,
    8739, 10069, 10069,  9399, 10069,  8739,  8772,  1905,  1909,  1910,
    8475,  1912,  9564,  1916,  1924,  1929,   967,  1930,  1934,  2458,
    9366,  9366,  9366,  9366,  9366,  9399,  9399,  9399,  9399,  9399,
    8508,  8541,  8574,  8607,  8640,   972,   994,   996,  1007,  1012,
    9366,  9399,  8673,  1044
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -387,  -387,  -387,  -283,    11,  -282,   -33,    12,   659,     3,
     -35,     1,   -37,  -171,   164,  5989,   449,  1149,  1925,  6401,
    5905,  5445,  4889,  4253,  3477,  2701,  -386,  6287,  6480,    -7,
    6654
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    95,   257,    97,    18,    39,   259,    10,
      19,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   118,    55,    56,    57,
      58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    11,   379,   550,   202,    78,    76,    11,    -2,    13,
     200,     7,     8,   521,   522,   -20,    59,     7,     8,   411,
     412,   483,   484,    14,   581,   -32,    82,    83,   113,   -55,
     -55,    79,    12,     1,   303,    61,    80,    -3,   201,   -32,
     -20,   304,   -21,   -22,   612,   498,   499,   -49,    -4,   390,
     391,     2,     3,     4,   -49,   -55,   -55,   624,   -20,   -20,
     -20,   -49,    -3,   -19,   -55,   133,   -49,   -21,   260,   -24,
     105,    96,    98,    -4,   652,   -81,   -53,   -53,   -25,   258,
      -3,    -3,    -3,   -49,   663,   -21,   -21,   -21,   -19,   -49,
     -55,    -4,    -4,    -4,   -24,   -55,   -53,   -53,   326,    62,
     -81,    63,   690,   -25,   -82,   -17,   -19,   -19,   -19,   -17,
      64,   -53,   -24,   -24,   -24,    65,   -53,   104,   -81,   -81,
     -81,   -25,   -25,   -25,   -39,   -39,   -39,   -39,   -17,   -82,
     343,   -53,   -39,   -17,   720,   -18,   376,   -55,   -55,   -18,
     -18,   -54,   -54,   148,    98,   490,   -34,   -82,   -82,   -82,
      66,   -39,   -39,   -39,   -39,   -39,   -17,   -39,   376,   -39,
     -34,   -15,   504,   -18,   -39,   -75,   -75,   -75,   -18,   -39,
     -39,   -55,   -75,   -75,   -75,   -75,   -54,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -16,   -75,   164,   -15,
     -75,   -39,   -39,   -39,   -39,   532,   964,   -54,   -54,   -39,
      73,   -75,    75,   -75,   -75,   -75,   -75,   -75,    67,   -39,
     -75,   -53,   -53,   -39,   -16,   -41,   -41,    68,   -39,   -39,
     -39,   -39,   -39,   442,   -39,   -39,   471,   472,   -39,   -54,
     -54,   -39,   -54,   -55,   -55,    69,   111,   -54,   315,   -77,
     -77,   -77,    70,   -17,   -49,   -53,   -77,   -77,   -77,   -77,
     440,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -49,   -77,   171,   -54,   -77,    -8,   -49,   -55,    71,   322,
     -17,    -8,   -41,   -55,   -40,   -77,   -17,   -77,   -77,   -77,
     -77,   -77,   -52,   -52,   244,   245,   246,   -41,    72,   -40,
     -42,   247,   248,   249,   250,   103,   251,   252,   -53,   -53,
     -18,   339,   253,   254,   255,   -42,     1,   372,   -43,    84,
     -15,    85,   144,    86,   -16,    96,    98,   -52,   -23,   -11,
     256,   147,   -52,   -43,     2,     3,     4,   -18,   -30,   372,
     -69,   134,   -53,   -18,   -30,   -55,   -55,   -15,   -53,    96,
      98,   -16,    78,   -15,   -11,   430,   -11,   -16,   -32,   -32,
     -32,   -40,   -40,   -55,   388,   -32,   -32,   -32,   -32,   -44,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -55,
     -32,   -32,   840,   -32,   -44,   -55,   -52,   -52,   -15,   409,
     -65,   -16,   -15,   848,   -32,   -16,   -32,   -32,   -32,   -32,
     -32,   135,   -53,   -53,   -41,   -41,   -41,   -41,   -45,   -54,
     -54,   859,   -41,   413,   429,   414,   -15,   415,   136,   -16,
     -53,   -52,   -41,   -45,   -54,   -54,   867,   -54,   -42,   -42,
     439,   -41,   -41,   -41,   -41,   -41,   -53,   -41,   -41,   138,
     -12,   139,   -53,   -54,   -41,   -39,   -39,   -39,   -39,   -54,
     140,   912,   459,   -40,   -40,   -40,   -40,   383,   -54,   -43,
     -43,   -40,    16,    78,   -54,   -12,    -8,   -12,   469,   460,
     -69,   -40,   -39,   -39,   -39,   -39,   -39,    78,   -39,   -39,
     -40,   -40,   -40,   -40,   -40,   487,   -40,   -40,   444,   445,
      17,   141,    16,   -40,   -11,   495,    -8,   -11,   -30,   -52,
     -52,   142,   260,   -30,   692,    78,   -49,   -42,   -42,   -42,
     -42,   158,   509,   258,   159,   -42,   260,   -52,   704,   -11,
     441,   -11,   -57,   -57,   160,   -42,   473,   258,   474,    59,
     475,   519,    -7,   -52,   -42,   -42,   -42,   -42,   -42,   -52,
     -42,   -42,    -5,   -46,   260,   537,   742,   -42,    -5,   -57,
     161,   -57,   162,   -57,    60,   258,   -22,   -57,   -46,   -34,
     -34,   -34,   -57,   163,   137,   -14,   -34,   -34,   -34,   -34,
     165,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -12,   -34,   -34,   -12,   -34,   -43,   -43,   -43,   -43,   -47,
     -14,   380,   -14,   -43,   -47,   -34,   152,   -34,   -34,   -34,
     -34,   -34,   155,   -43,   -13,   -12,   114,   -12,     1,   -44,
     -44,    80,   -43,   -43,   -43,   -43,   -43,   224,   -43,   -43,
     166,   167,   168,   169,   170,   -43,     2,     3,     4,   -13,
     172,   -13,   -35,   -35,   -35,   225,   226,   227,   -31,   -35,
     -35,   -35,   -35,   -31,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   381,   -35,   -35,   382,   -35,   -69,   -69,
     -69,   -69,   -55,   -55,   -53,   -53,   -69,   695,   -35,     9,
     -35,   -35,   -35,   -35,   -35,     9,   -69,   -58,   -58,   384,
     -55,   707,   -53,   -54,   -54,   -69,   -69,   -69,   -69,   -69,
     385,   470,   -69,   -57,   -57,   326,   -14,   404,   -69,   -14,
     -35,   -54,   386,   -47,   -58,   400,   -58,   326,   -58,   745,
     941,   -57,   -58,   -13,   -35,   -38,   -13,   -58,   -36,   -47,
     -57,   -14,   -57,   -14,   -57,   -47,   405,   -57,   -61,   -38,
     957,   757,   -36,   -57,   -38,   -38,   -38,   387,   -13,   -51,
     -13,   -38,   -38,   -38,   -38,   326,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -51,   -38,   -38,   401,   -38,
     129,   -51,   768,   -50,   -48,    -9,   130,   -45,   -45,   402,
     -38,    -9,   -38,   -38,   -38,   -38,   -38,   403,   -37,   -50,
     -48,   -36,   -36,   -36,   406,   -50,   -48,   407,   -36,   -36,
     -36,   -36,   -37,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   408,   -36,   -36,   786,   -36,   343,   -58,   -58,
     882,   808,   -46,   -46,   816,   343,   832,   -36,   902,   -36,
     -36,   -36,   -36,   -36,   -47,   421,   -58,   -30,   422,   -81,
     -30,   343,   -30,   -30,   376,   -58,   -30,   -58,   -30,   -58,
     423,   424,   -58,   -81,   801,   -37,   -37,   -37,   -58,   328,
      -7,   425,   -37,   -37,   -37,   -37,    -7,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   322,   -37,   -37,   426,
     -37,   -52,   -52,   131,  1008,   -11,   -11,   316,   322,   132,
     427,   -37,   -11,   -37,   -37,   -37,   -37,   -37,  1014,   -52,
     -30,   -44,   -44,   -44,   -44,   428,   -30,   -83,   446,   -44,
     447,   826,   448,   434,   -30,   -45,   -45,   -45,   -45,   -44,
     -30,   -83,   -33,   -45,    78,   431,   322,    93,   -44,   -44,
     -44,   -44,   -44,   -45,   -44,   -44,   -33,   432,   433,   224,
      78,   -44,   -45,   -45,   -45,   -45,   -45,   143,   -45,   -45,
     326,   326,   326,   303,    94,   -45,   -82,   225,   226,   227,
     435,   326,   882,   260,   -51,   979,   343,   343,   343,   -51,
     -82,   -59,   -59,   436,   258,   -12,   -12,   343,   902,   260,
     -84,   991,   -12,   376,   376,   376,   376,   376,   339,   -59,
     258,   877,   326,   -47,   -84,   -72,   339,   145,   -59,   897,
     -59,   -72,   -59,   146,   326,   -59,   -39,   -39,   -39,   -39,
    1015,   -59,   339,  1038,   -39,   372,   -50,   343,   -78,    -6,
     882,   -50,   326,   343,   -77,    -6,   902,   -75,   343,   376,
     -57,   -57,   -78,   -39,   -39,   -39,   -39,   -39,   437,   -39,
     -79,   -39,   -80,   882,   882,   882,   882,   882,   902,   902,
     902,   902,   902,   -74,   -79,   454,   -80,   -57,  1051,   -57,
     946,   -57,   -10,   882,   902,   -57,   -65,   -74,   -10,   -81,
     -81,   -81,   -77,   438,   455,   456,   -81,   -81,   -81,   -81,
     962,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -76,   -81,   -81,   -73,   -81,   -14,   -14,   -30,   457,   -73,
     -60,   -60,   -14,   -30,   -76,   -81,   458,   -81,   -81,   -81,
     -81,   -81,   -13,   -13,   -47,   461,   462,   463,   -60,   -13,
     -47,   322,   322,   322,   548,   464,   465,   -60,   982,   -60,
     303,   -60,   322,   877,   -60,   -58,   -58,   339,   339,   339,
     -60,   579,   466,   467,   994,   468,   485,   303,   339,   897,
     -39,   -39,   -39,   -39,   372,   372,   372,   372,   372,   610,
     486,   804,   -58,   322,   -58,   303,   -58,   -48,   -39,   496,
     -58,   491,   -48,   812,    80,   322,   621,   -39,   -39,   -39,
     -39,   -39,   303,   -39,   -39,   -61,   650,   492,   339,   661,
     -39,   877,   303,   322,   339,   303,   -31,   897,   684,   339,
     372,   685,   -31,   688,   130,   191,   698,   132,   510,   303,
     493,   828,   130,    80,   877,   877,   877,   877,   877,   897,
     897,   897,   897,   897,   699,   500,   501,   502,   216,   505,
     132,   241,   241,   241,   877,   897,   261,   261,   279,   279,
     279,   295,   718,   -59,   -59,   506,   507,   511,   303,   -32,
     191,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     754,   -46,   -46,   -46,   -46,   -51,   146,   -34,   -35,   -46,
     -59,   -51,   -59,   868,   -59,   -38,   879,   538,   -59,   -46,
     -50,   888,    80,   -59,   899,   -36,   -50,   -48,   -46,   -46,
     -46,   -46,   -46,   -48,   -46,   -46,   765,   913,   -37,   512,
     916,   -46,   146,   279,   279,   279,   776,   358,   358,   -83,
     -83,   -83,   146,   358,   783,   191,   -83,   -83,   -83,   -83,
     146,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     791,   -83,   -83,   798,   -83,   803,   146,   807,   815,   146,
     823,   146,   513,   303,   303,   -83,   146,   -83,   -83,   -83,
     -83,   -83,   831,   -33,   -33,   -33,   514,   515,   303,   191,
     -33,   -33,   -33,   -33,   516,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   838,   -33,   -33,   846,   -33,   857,
     303,   865,   910,   303,   191,   303,   517,   303,   303,   -33,
     518,   -33,   -33,   -33,   -33,   -33,   -47,   543,   921,   925,
     533,   269,   270,   271,   146,   146,   975,   976,   977,   191,
     932,   272,   534,   273,   274,   535,   146,   985,   986,   275,
     276,   277,   987,   988,   989,   191,   936,   544,   -39,   -39,
     -39,   -39,   146,   997,   998,   574,   -39,   278,   605,   999,
    1000,  1001,  1002,  1003,   969,  1007,  1013,   191,  1004,   697,
     146,   303,   303,   575,    80,   -39,   -39,   -39,   -39,   -39,
    1010,   -39,   -39,   191,   -56,   -56,   526,   527,   -39,   709,
     747,   606,   191,  1017,    80,    80,  1020,   616,  1022,  1023,
     191,   947,  1026,   963,  1028,  1029,    80,   622,    80,   617,
     645,   -56,   528,   -56,   529,   -56,   -60,   -60,   -56,  1040,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,   646,
     656,   686,   984,   -41,   -41,   -41,   -41,    80,   657,  1052,
    1053,   -41,   687,   -60,   996,   -60,   191,   -60,   -81,    80,
     713,   -60,   -83,   714,   -33,   748,   -60,   749,   750,   751,
     -41,   -41,   -41,   -41,   -41,   752,   -41,   755,   -41,   241,
     241,   241,   753,   -41,   279,   279,   279,   756,   191,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   191,   759,
     241,   241,   241,   760,   761,   279,   279,   279,   762,   191,
     589,   589,   589,   589,   589,   589,   589,   589,   589,   216,
     241,   241,   241,   763,   764,   279,   279,   279,   766,   191,
     241,   241,   241,   767,   -51,   279,   279,   279,   -50,   -48,
     770,   771,   191,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   261,   -59,   -59,   279,   279,   279,   772,   191,
     241,   241,   241,   773,   774,   279,   279,   279,   775,   191,
     671,   671,   671,   671,   671,   671,   671,   671,   671,   295,
     -59,   -70,   -59,   777,   -59,   778,   779,   191,   -59,   780,
     261,   261,   295,   781,   782,   784,   785,   -51,   -50,   241,
     241,   241,   -48,   788,   261,   261,   295,   789,   790,   -70,
     241,   241,   241,   792,   793,   279,   279,   279,   794,   191,
     728,   728,   728,   728,   728,   728,   728,   728,   728,   358,
     799,   795,   261,   261,   295,   -82,   -82,   -82,   796,   797,
     800,   -82,   -82,   -82,   -82,   -82,   805,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   191,   -82,   -82,   806,
     -82,   809,   810,   811,   813,   814,   -84,   817,   818,   819,
     820,   -82,   824,   -82,   -82,   -82,   -82,   -82,   -52,   -52,
     825,   -84,   -84,   -84,   829,   830,   821,   191,   -84,   -84,
     -84,   -84,   822,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -51,   -84,   -84,   392,   -84,   393,   -50,   394,
     -48,   836,   -52,   837,   844,   -68,   845,   -84,   -52,   -84,
     -84,   -84,   -84,   -84,   -75,   -75,   -75,   -67,   -66,   -71,
     191,   -75,   -75,   -75,   -75,   855,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   856,   -75,   973,   -68,   -75,
     -67,   -66,   -71,   863,   918,   864,   908,   919,   909,   920,
     -75,   942,   -75,   -75,   -75,   -75,   -75,   922,   923,   191,
     -78,   -78,   -78,   924,   926,   927,   928,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   929,   -78,   -78,   930,   -78,   931,   933,   934,   935,
     -41,   -41,   -41,   -41,   937,    93,   -78,   943,   -78,   -78,
     -78,   -78,   -78,   938,   939,   -60,   -60,   224,   -41,   944,
     -62,   949,   950,   951,   952,   953,   191,   -41,   -41,   -41,
     -41,   -41,   482,   -41,   -41,   225,   226,   227,   954,   955,
     -41,   958,   -60,   959,   -60,   960,   -60,   279,   279,   279,
     -60,   965,   966,   967,   -57,   -57,   968,   191,   279,   279,
     279,   970,   971,   972,   974,   -63,   -64,   -62,   191,   279,
     279,   279,   -63,   -64,  1005,  1006,   279,   279,   279,   -78,
     -79,   -57,  1011,   -57,   -80,   -57,   191,  1012,   -57,   -74,
       0,   279,   279,   279,   -57,  1030,   -58,   -58,     0,  1031,
    1032,   191,  1034,     0,   358,   358,  1035,   358,   279,   279,
     279,   192,   358,   358,  1036,   358,   279,   279,   279,  1037,
    1039,   -52,   -52,   -58,   -76,   -58,   191,   -58,   358,   358,
     -58,   358,     0,     0,   217,     0,   -58,   242,   242,   242,
       0,     0,   262,   262,   280,   280,   280,   296,   523,     0,
     524,     0,   525,     0,     0,   -52,   192,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   -79,   -79,   -79,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,   -79,     0,     0,     0,   -40,   -40,   -40,   -40,     0,
     -59,   -59,   -79,   -40,   -79,   -79,   -79,   -79,   -79,   280,
     280,   280,     0,   359,   359,     0,     0,   -57,   -57,   359,
       0,   192,   -40,   -40,   -40,   -40,   -40,   -59,   -40,   -59,
     -40,   -59,     0,     0,   -59,   -40,     0,     0,     0,     0,
     -59,   261,   261,   295,   -57,     0,   -57,     0,   -57,     0,
       0,   -57,     0,     0,     0,     0,     0,   261,   261,   295,
     -80,   -80,   -80,     0,     0,   192,     0,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,   -80,     0,   -80,     0,     0,     0,     0,
     192,     0,     0,     0,     0,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,     0,   358,   358,     0,   358,     0,     0,
     358,   358,     0,   358,     0,   192,     0,   -60,   -60,     0,
     -74,   -74,   -74,     0,     0,     0,     0,   -74,   -74,   -74,
     -74,   192,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -60,   -74,   -60,     0,   -60,     0,
       0,   -60,     0,   192,     0,     0,   -74,   -60,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,   192,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   192,     0,
       0,     0,   -77,   -77,   -77,   -77,   192,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,  1016,     0,
     -77,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
       0,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,   -42,     0,     0,     0,
       0,     0,   192,   -39,   -39,   -39,   -39,   -39,     0,   -39,
       0,   -39,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
       0,   -42,     0,   -42,     0,   242,   242,   242,   -42,     0,
     280,   280,   280,     0,   192,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   192,     0,   242,   242,   242,     0,
       0,   280,   280,   280,     0,   192,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   217,   242,   242,   242,     0,
       0,   280,   280,   280,     0,   192,   242,   242,   242,     0,
       0,   280,   280,   280,     0,     0,     0,     0,   192,   633,
     633,   633,   633,   633,   633,   633,   633,   633,   262,     0,
       0,   280,   280,   280,     0,   192,   242,   242,   242,     0,
       0,   280,   280,   280,     0,   192,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   296,     0,     0,     0,     0,
       0,     0,     0,   192,     0,     0,   262,   262,   296,     0,
       0,     0,     0,     0,     0,   242,   242,   242,     0,     0,
     262,   262,   296,     0,     0,     0,   242,   242,   242,     0,
       0,   280,   280,   280,     0,   192,   729,   729,   729,   729,
     729,   729,   729,   729,   729,   359,     0,     0,   262,   262,
     296,   -76,   -76,   -76,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   192,   -76,   -76,     0,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -58,   -58,     0,    20,    21,    22,
       0,     0,     0,   192,    23,    24,    25,    26,     0,    27,
      28,   173,    29,    30,    31,    32,    33,    34,     0,   174,
       0,   -58,    35,   -58,     0,   -58,     0,     0,   -58,     0,
       0,     0,     0,    36,     0,    37,    38,   175,   176,   177,
     -32,   -32,   -32,     0,     0,     0,   192,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,     0,     0,   -32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,     0,   192,   -26,   -26,   -26,     0,
       0,     0,     0,   -26,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,    93,
       0,   -26,     0,     0,     0,     0,   -40,   -40,   -40,   -40,
       0,   224,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,   -40,     0,   497,     0,     0,   225,
     226,   227,   192,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,     0,     0,     0,     0,     0,   -40,     0,     0,    20,
      21,    22,     0,   280,   280,   280,    23,    24,    25,    26,
       0,    27,    28,   192,   280,   280,   280,    32,    33,    34,
       0,     0,     0,     0,   192,   280,   280,   280,     0,     0,
       0,     0,   280,   280,   280,    36,     0,    74,     0,     0,
       0,     0,   192,     0,     0,     0,     0,   280,   280,   280,
       0,     0,     0,     0,     0,     0,     0,   192,     0,     0,
     359,   359,     0,   359,   280,   280,   280,   199,   359,   359,
       0,   359,   280,   280,   280,     0,     0,   -41,   -41,   -41,
     -41,     0,   192,     0,   359,   359,     0,   359,     0,     0,
     223,     0,     0,   100,   100,   100,     0,     0,   268,   268,
     281,   281,   281,   302,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   199,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   -28,   -28,   -28,     0,     0,     0,     0,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,     0,     0,   -28,     0,     0,
       0,   -43,   -43,   -43,   -43,     0,   -59,   -59,   -28,   -43,
     -28,   -28,   -28,   -28,   -28,   281,   281,   281,     0,   365,
     365,     0,     0,   -60,   -60,   365,     0,   199,   -43,   -43,
     -43,   -43,   -43,   -59,   -43,   -59,   -43,   -59,     0,     0,
     -59,   -43,     0,     0,     0,     0,     0,   262,   262,   296,
     -60,     0,   -60,     0,   -60,     0,     0,   -60,     0,     0,
       0,     0,     0,   262,   262,   296,    20,    21,    22,     0,
       0,   199,     0,    23,    24,    25,    26,     0,    27,    28,
     173,    77,    30,    31,    32,    33,    34,     0,   174,     0,
       0,    35,     0,     0,     0,     0,   199,     0,     0,     0,
       0,     0,    36,     0,    37,    38,   175,   176,   177,     0,
     359,   359,     0,   359,     0,     0,   359,   359,     0,   359,
       0,   199,     0,     0,     0,     0,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   199,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
       0,   -34,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   199,     0,     0,     0,   -27,   -27,
     -27,   -27,   199,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,     0,   -27,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,   -69,     0,     0,     0,     0,     0,   199,   -41,
     -41,   -41,   -41,   -41,     0,   -41,     0,   -41,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,     0,    81,     0,   -69,
       0,   100,   100,   100,   -69,     0,   281,   281,   281,     0,
     199,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     199,     0,   100,   100,   100,     0,     0,   281,   281,   281,
       0,   199,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   223,   100,   100,   100,     0,     0,   281,   281,   281,
       0,   199,   100,   100,   100,     0,     0,   281,   281,   281,
       0,     0,     0,     0,   199,   635,   635,   635,   635,   635,
     635,   635,   635,   635,   268,     0,     0,   281,   281,   281,
       0,   199,   100,   100,   100,     0,     0,   281,   281,   281,
       0,   199,   674,   674,   674,   674,   674,   674,   674,   674,
     674,   302,     0,     0,     0,     0,     0,     0,     0,   199,
       0,     0,   268,   268,   302,     0,     0,     0,     0,     0,
       0,   100,   100,   100,     0,     0,   268,   268,   302,     0,
       0,     0,   100,   100,   100,     0,     0,   281,   281,   281,
       0,   199,   731,   731,   731,   731,   731,   731,   731,   731,
     731,   365,     0,     0,   268,   268,   302,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   199,   -35,
       0,     0,   -35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,   -38,   -38,   -38,     0,     0,     0,   199,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,     0,   -38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -36,   -36,   -36,     0,
       0,     0,   199,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,
       0,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,
       0,   199,   -37,   -37,   -37,     0,     0,     0,     0,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,     0,   -37,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,     0,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,     0,   199,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,     0,     0,    20,    21,    22,     0,   281,
     281,   281,    23,    24,    25,    26,     0,    27,    28,   199,
     281,   281,   281,    32,    33,    34,     0,     0,     0,     0,
     199,   281,   281,   281,     0,     0,     0,     0,   281,   281,
     281,    36,     0,   494,     0,     0,     0,     0,   199,     0,
       0,     0,     0,   281,   281,   281,     0,     0,   -57,   -57,
       0,     0,     0,   199,     0,     0,   365,   365,     0,   365,
     281,   281,   281,   198,   365,   365,   -57,   365,   281,   281,
     281,     0,     0,     0,     0,   -57,     0,   -57,   199,   -57,
     365,   365,     0,   365,     0,     0,   222,     0,     0,   243,
     243,   243,     0,     0,   267,   267,   108,   109,   110,   301,
       0,     0,   -83,   -83,   -83,     0,     0,     0,   198,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,     0,   -83,     0,     0,   -83,     0,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,    91,   -83,     0,
     -83,   -83,   -83,   -83,   -83,     0,     0,   -44,   -44,   -44,
     -44,     0,   -58,   -58,     0,   -44,   -65,   -65,   -65,   -65,
     -65,   332,   332,   332,   -65,   364,   364,     0,     0,   -65,
     -58,   364,     0,   198,   -44,   -44,   -44,   -44,   -44,   -58,
     -44,   -58,   -44,   -58,     0,     0,     0,   -44,     0,     0,
       0,     0,     0,   268,   268,   302,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
     268,   302,   -29,   -29,   -29,     0,     0,   198,     0,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,   -29,     0,     0,   -29,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,   -29,     0,
     -29,   -29,   -29,   -29,   -29,     0,   365,   365,     0,   365,
       0,     0,   365,   365,     0,   365,     0,   198,     0,     0,
       0,     0,   -33,   -33,   -33,     0,     0,     0,     0,   -33,
     -33,   -33,   -33,   198,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,   -33,     0,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     198,     0,     0,     0,   -84,   -84,   -84,   -84,   198,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
       0,     0,   -84,     0,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,     0,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -45,   -45,   -45,   -45,     0,     0,     0,     0,   -45,     0,
       0,     0,     0,     0,   198,   -40,   -40,   -40,   -40,   -40,
       0,   -40,     0,   -40,     0,     0,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,     0,   -45,     0,   243,   243,   243,
     -45,     0,   545,   546,   547,     0,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,     0,   243,   243,
     243,     0,     0,   576,   577,   578,     0,   198,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   243,   243,
     243,     0,     0,   607,   608,   609,     0,   198,   243,   243,
     243,     0,     0,   618,   619,   620,     0,     0,     0,     0,
     198,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,     0,     0,   647,   648,   649,     0,   198,   243,   243,
     243,     0,     0,   658,   659,   660,     0,   198,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,   267,   267,
     301,     0,     0,     0,     0,     0,     0,   243,   243,   243,
       0,     0,   267,   267,   301,     0,     0,     0,   243,   243,
     243,     0,     0,   715,   716,   717,     0,   198,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,     0,     0,
     267,   267,   301,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   198,   -78,     0,     0,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
       0,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,   -79,
     -79,   -79,     0,     0,     0,   198,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,     0,     0,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -80,   -80,   -80,     0,     0,     0,   198,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,     0,     0,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,     0,     0,   198,   -74,   -74,
     -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
     -74,     0,     0,   -74,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,   -43,     0,     0,     0,
       0,     0,     0,     0,   198,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,     0,     0,     0,     0,     0,   -43,     0,
       0,    20,    21,    22,     0,   332,   332,   332,    23,    24,
      25,    26,     0,    27,    28,   198,   332,   332,   332,    32,
      33,    34,     0,     0,     0,     0,   198,   332,   332,   332,
       0,     0,     0,     0,   332,   332,   332,    36,     0,   508,
       0,     0,     0,     0,   198,     0,     0,     0,     0,   332,
     332,   332,     0,     0,   -59,   -59,     0,     0,     0,   198,
       0,     0,   364,   364,     0,   364,   332,   332,   332,   197,
     364,   364,   -59,   364,   332,   332,   332,     0,     0,     0,
       0,   -59,     0,   -59,   198,   -59,   364,   364,     0,   364,
       0,     0,   221,     0,     0,    99,   101,   102,     0,     0,
     266,   266,     0,     0,     0,   300,     0,     0,   -76,   -76,
     -76,     0,     0,     0,   197,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,     0,     0,   -76,     0,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   -70,   -76,     0,   -76,   -76,   -76,   -76,
     -76,     0,     0,   -46,   -46,   -46,   -46,     0,   -60,   -60,
       0,   -46,   -70,   -70,   -70,   -70,   -70,   149,   150,   151,
     -70,   363,   363,     0,     0,   -70,   -60,   363,     0,   197,
     -46,   -46,   -46,   -46,   -46,   -60,   -46,   -60,   -46,   -60,
       0,     0,     0,   -46,     0,     0,     0,     0,     0,   267,
     267,   301,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,   267,   301,    20,    21,
      22,     0,     0,   197,     0,    23,    24,    25,    26,     0,
      27,    28,   173,   378,    30,    31,    32,    33,    34,     0,
     174,     0,     0,    35,     0,     0,     0,     0,   197,     0,
       0,     0,     0,     0,    36,     0,    37,    38,   175,   176,
     177,     0,   364,   364,     0,   364,     0,     0,   364,   364,
       0,   364,     0,   197,     0,     0,     0,     0,   -24,   -24,
     -24,     0,     0,     0,     0,   -24,   -24,   -24,   -24,   197,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,     0,     0,   -24,     0,     0,     0,     0,     0,     0,
       0,   197,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,     0,     0,     0,   197,     0,     0,
       0,     0,     0,    20,    21,    22,   197,     0,     0,     0,
      23,    24,    25,    26,   197,    27,    28,   173,   489,    30,
      31,    32,    33,    34,     0,   174,     0,     0,    35,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,    36,
       0,    37,    38,   175,   176,   177,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,   -41,     0,     0,     0,     0,     0,
     197,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,     0,     0,   540,   541,   542,   -41,     0,     0,     0,
       0,     0,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,     0,   571,   572,   573,     0,     0,     0,
       0,     0,     0,   197,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   602,   603,   604,     0,     0,     0,
       0,     0,     0,   197,   613,   614,   615,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   197,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,     0,     0,   -40,
     -40,   -40,   -40,   197,   653,   654,   655,   -40,     0,     0,
       0,     0,     0,   197,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,     0,     0,   -40,   -40,   -40,   -40,
     -40,   197,   -40,   -40,   266,   266,   300,     0,     0,   -40,
       0,     0,     0,   700,   701,   702,     0,     0,   266,   266,
     300,     0,     0,     0,   710,   711,   712,     0,     0,     0,
       0,     0,     0,   197,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,     0,     0,   266,   266,   300,    20,
      21,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,   173,   503,    30,    31,    32,    33,    34,
     197,   174,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,    37,    38,   175,
     176,   177,     0,     0,     0,    20,    21,    22,     0,     0,
       0,   197,    23,    24,    25,    26,     0,    27,    28,   173,
     531,    30,    31,    32,    33,    34,     0,   174,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,   175,   176,   177,   -81,   -81,
     -81,     0,     0,     0,   197,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,     0,     0,   -81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -81,     0,   -81,   -81,   -81,   -81,
     -81,     0,     0,   197,     0,   196,     0,    20,    21,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,   173,   539,    30,    31,    32,    33,    34,   220,   174,
       0,     0,    35,     0,     0,     0,   265,   265,     0,     0,
       0,   299,     0,    36,     0,    37,    38,   175,   176,   177,
     196,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     197,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,   -39,     0,     0,     0,
       0,   833,   834,   835,     0,     0,   -39,     0,     0,     0,
       0,   197,   841,   842,   843,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   197,   849,   850,   851,     0,   362,   362,     0,
     852,   853,   854,   362,     0,   196,     0,     0,     0,     0,
     197,     0,     0,     0,     0,   860,   861,   862,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,   363,   363,
       0,   363,   885,   886,   887,     0,   363,   363,     0,   363,
     905,   906,   907,     0,     0,     0,     0,     0,     0,   196,
     197,     0,   363,   363,     0,   363,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -25,   -25,
     -25,     0,     0,     0,   196,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,     0,     0,   -25,     0,     0,     0,     0,     0,   196,
       0,     0,     0,     0,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,     0,   196,    20,    21,    22,     0,
       0,     0,     0,    23,    24,    25,    26,     0,    27,    28,
     173,   691,    30,    31,    32,    33,    34,   196,   174,     0,
       0,    35,     0,     0,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,    36,   196,    37,    38,   175,   176,   177,     0,
       0,     0,   196,     0,     0,   266,   266,   300,     0,     0,
     196,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,
       0,   266,   266,   300,    20,    21,    22,     0,     0,     0,
       0,    23,    24,    25,    26,     0,    27,    28,   173,   703,
      30,    31,    32,    33,    34,     0,   174,     0,     0,    35,
       0,   -41,   -41,   -41,   -41,     0,   196,     0,     0,   -41,
      36,     0,    37,    38,   175,   176,   177,     0,   363,   363,
       0,   363,     0,     0,   363,   363,     0,   363,   -41,   -41,
     -41,   -41,   -41,     0,   -41,     0,   -41,     0,   196,   196,
     196,   196,   196,   196,   566,   567,   568,   569,   196,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,     0,     0,   196,
     220,   220,   220,   220,   220,   597,   598,   599,   600,   220,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
     -69,   -69,   -69,   -69,   -69,     0,   769,     0,   -69,     0,
       0,     0,   196,   265,   265,   265,   265,   265,   640,   641,
     642,   643,   265,     0,     0,   -42,   -42,   -42,   -42,   196,
       0,     0,     0,   -42,     0,     0,     0,     0,     0,   196,
     299,   299,   299,   299,   299,   679,   680,   681,   682,   299,
       0,     0,   -42,   -42,   -42,   -42,   -42,   196,   -42,   -42,
     265,   265,   299,     0,     0,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,   265,   265,   299,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
     362,   362,   362,   362,   362,   736,   737,   738,   739,   362,
       0,     0,   265,   265,   299,    20,    21,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    27,    28,   173,
     741,    30,    31,    32,    33,    34,   196,   174,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   196,     0,     0,
       0,   195,     0,   -82,   -82,   -82,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   219,   -82,     0,     0,   -82,     0,
       0,     0,   264,   264,     0,     0,     0,   298,     0,   -82,
     196,   -82,   -82,   -82,   -82,   -82,   195,     0,     0,   121,
     122,   123,    20,    21,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,    27,    28,   173,   940,    30,    31,
      32,    33,    34,     0,   174,     0,     0,    35,     0,   196,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      37,    38,   175,   176,   177,     0,     0,     0,     0,     0,
       0,     0,     0,   361,   361,    20,    21,    22,     0,   361,
       0,   195,    23,    24,    25,    26,     0,    27,    28,   173,
     956,    30,    31,    32,    33,    34,     0,   174,     0,     0,
      35,   -43,   -43,   -43,   -43,     0,   196,     0,     0,   -43,
       0,    36,     0,    37,    38,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,   195,     0,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,     0,   196,     0,     0,
       0,   -43,     0,   -69,   -69,   -69,   -69,     0,   196,     0,
     195,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   195,   389,   -69,     0,     0,
       0,   196,     0,   -69,   362,   362,     0,   362,     0,     0,
       0,   195,   362,   362,     0,   362,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,   -40,   196,     0,   362,   362,
       0,   362,     0,   195,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,   195,
     -40,     0,   -40,     0,     0,    20,    21,    22,   195,     0,
       0,     0,    23,    24,    25,    26,   195,    27,    28,   173,
     978,    30,    31,    32,    33,    34,     0,   174,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,   175,   176,   177,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,   480,     0,     0,     0,
       0,     0,   195,     0,     0,     0,   -65,     0,     0,     0,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
       0,     0,   -65,     0,     0,     0,     0,     0,   -65,     0,
       0,   265,   265,   299,   195,   195,   195,   563,   564,   565,
     -39,   -39,   -39,   -39,   195,     0,     0,   265,   265,   299,
       0,     0,     0,     0,     0,   195,   219,   219,   594,   595,
     596,     0,     0,     0,     0,   219,     0,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   195,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,   195,   264,
     264,   637,   638,   639,   362,   362,     0,   362,   264,   -39,
     362,   362,     0,   362,     0,   195,     0,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   195,   298,   298,   676,   677,
     678,     0,     0,     0,     0,   298,     0,     0,     0,     0,
       0,     0,     0,   195,     0,     0,   264,   264,   298,     0,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
     264,   264,   298,     0,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -71,     0,   218,   195,   361,   361,   733,   734,
     735,     0,   263,   263,     0,   361,     0,   297,   264,   264,
     298,   -71,   -71,   -71,   -71,   -71,   194,   119,   120,   -71,
       0,     0,     0,     0,   -71,     0,    20,    21,    22,     0,
       0,     0,   195,    23,    24,    25,    26,     0,    27,    28,
     173,   990,    30,    31,    32,    33,    34,     0,   174,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,   195,    37,    38,   175,   176,   177,   -44,
     -44,   -44,   -44,   360,   360,     0,     0,   -44,     0,   360,
       0,   194,     0,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,   -45,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,     0,     0,   195,     0,     0,   -44,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,     0,     0,
       0,     0,     0,   -45,   323,   194,     0,     0,     0,     0,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,   -46,     0,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
     194,     0,     0,     0,     0,     0,   340,   -46,   -46,   -46,
     -46,   -46,   373,   -46,   -46,   -70,   -70,   -70,   -70,     0,
     -46,     0,     0,   -70,     0,   194,     0,     0,     0,   -39,
     -39,   -39,   -39,   -70,   373,     0,     0,     0,     0,     0,
       0,   194,   -70,   -70,   -70,   -70,   -70,     0,     0,   -70,
       0,     0,   195,     0,     0,   -70,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   194,   -39,     0,     0,     0,     0,   -39,
       0,   -69,   -69,   -69,   -69,     0,     0,     0,     0,   194,
       0,     0,     0,   195,     0,     0,     0,     0,   194,   -69,
       0,     0,     0,     0,   195,     0,   194,     0,   -69,   -69,
     -69,   -69,   -69,     0,   802,   -69,     0,     0,     0,     0,
       0,   -69,   195,     0,     0,     0,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,   -71,     0,     0,   195,     0,     0,
     361,   361,     0,   361,   -71,     0,     0,     0,   361,   361,
       0,   361,   194,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,     0,   195,     0,   361,   361,   -71,   361,     0,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,   560,   562,   -44,     0,     0,
     -45,   -45,   -45,   -45,   194,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,     0,   194,   591,   593,   -45,   -44,
       0,     0,     0,     0,     0,   218,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   194,     0,     0,     0,     0,
     -45,   -41,   -41,   -41,   -41,     0,     0,     0,   194,   634,
     636,   -41,   -41,   -41,   -41,     0,     0,     0,   263,   -41,
       0,     0,     0,     0,     0,   194,     0,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   194,   673,   675,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   297,   -41,   264,   264,   298,
       0,   -41,   324,   194,     0,     0,   263,   263,   297,     0,
       0,     0,     0,   264,   264,   298,     0,     0,     0,     0,
     263,   263,   297,     0,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,   341,   194,   730,   732,     0,     0,
     374,     0,   -46,     0,     0,   360,     0,   193,   263,   263,
     297,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,     0,
     361,   361,   374,   361,   -46,     0,   361,   361,     0,   361,
      92,     0,   194,     0,     0,     0,     0,     0,   106,   107,
       0,     0,     0,   112,     0,   -65,   -65,   -65,   -65,     0,
       0,   115,   117,   399,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   194,   -56,   -56,   476,   477,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,
       0,     0,   -56,     0,     0,   -65,     0,     0,     0,     0,
       0,   -56,   478,   -56,   479,   -56,     0,     0,   -56,     0,
     -61,   -61,   -61,   -61,   -56,     0,   194,     0,     0,   153,
     154,     0,     0,     0,     0,   156,     0,   157,   -61,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,     0,     0,   -61,   -42,   -42,   -42,   -42,     0,
     -61,     0,     0,     0,     0,   194,   -40,   -40,   -40,   -40,
     -40,     0,   -40,     0,   -40,   325,     0,     0,     0,   -40,
       0,   193,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,
     -42,     0,     0,     0,     0,   -42,     0,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,     0,   193,   342,     0,     0,
       0,     0,     0,   375,     0,   -69,   -69,   -69,   -69,     0,
       0,     0,   194,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   193,   -43,     0,     0,   375,     0,   -43,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   193,   488,     0,
     -69,     0,     0,   194,     0,   -69,     0,     0,     0,   -70,
     -70,   -70,   -70,     0,   194,     0,     0,   -70,     0,   193,
       0,   323,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   194,   323,     0,   193,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -70,   481,     0,     0,   194,     0,   -70,
     360,   360,   193,   360,   -41,   -41,   -41,   -41,   360,   360,
       0,   360,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,   323,   194,     0,   360,   360,     0,   360,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -40,
     -40,   -40,   -40,   -40,   -41,   -40,   -40,     0,   193,   327,
       0,     0,   -40,     0,     0,     0,   178,   179,   180,     0,
       0,     0,     0,   181,   182,   183,   184,     0,   185,   186,
       0,     0,     0,     0,   187,   188,   189,     0,     0,     0,
     117,   344,     0,   340,     0,     0,   878,   377,     0,     0,
     570,   340,   190,   116,   898,   -42,   -42,   -42,   -42,     0,
       0,   117,     0,     0,     0,     0,     0,   340,     0,   377,
     373,   601,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
       0,     0,     0,     0,   117,   -42,     0,   263,   263,   297,
       0,     0,     0,     0,   644,     0,     0,   -43,   -43,   -43,
     -43,   117,     0,   263,   263,   297,     0,     0,     0,     0,
       0,   117,     0,     0,   -56,   -56,    87,    88,     0,     0,
       0,   683,     0,     0,   -43,   -43,   -43,   -43,   -43,   117,
     -43,   -43,   693,   694,   696,     0,     0,   -43,     0,     0,
       0,   -56,    89,   -56,    90,   -56,   705,   706,   708,   -56,
     360,   360,     0,   360,   -56,     0,   360,   360,     0,   360,
       0,   117,     0,     0,     0,     0,   323,   323,   323,     0,
       0,   740,     0,     0,   743,   744,   746,   323,   878,     0,
       0,     0,   340,   340,   340,     0,     0,   -65,   -65,   -65,
     -65,     0,     0,   340,   898,     0,     0,     0,   193,   373,
     373,   373,   373,   373,     0,   -65,     0,     0,   323,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   324,
     323,   -65,   -65,   -65,   -65,   -65,     0,   -65,     0,   193,
     453,   324,     0,   340,     0,     0,   878,     0,   323,   340,
     -65,     0,   898,     0,   340,   373,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -69,   -69,   -69,   -69,     0,   878,
     878,   878,   878,   878,   898,   898,   898,   898,   898,   324,
       0,     0,   193,   -44,   -44,   -44,   -44,     0,     0,   878,
     898,   -69,   -69,   -69,   -69,   -69,     0,   758,   -69,   -45,
     -45,   -45,   -45,     0,   -69,     0,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,     0,
       0,   193,     0,   -44,     0,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,     0,   -45,     0,     0,     0,     0,   -45,
       0,   341,     0,     0,   880,     0,     0,     0,     0,   341,
       0,     0,   900,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,   341,     0,     0,   374,     0,
       0,   -71,   -71,   -71,   -71,     0,     0,     0,   193,   -71,
     -46,   -46,   -46,   -46,   -46,     0,   -46,     0,   -46,     0,
       0,     0,     0,   -46,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -71,     0,     0,     0,   117,
       0,   -71,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     117,     0,   325,     0,     0,     0,     0,     0,     0,     0,
     -68,     0,     0,     0,   325,     0,     0,     0,   117,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -68,     0,     0,     0,
       0,     0,   -68,   117,     0,     0,   869,   870,     0,   884,
       0,     0,     0,     0,   889,   890,     0,   904,     0,     0,
       0,     0,   325,     0,   324,   324,   324,     0,   117,     0,
     914,   915,     0,   917,     0,   324,   880,     0,     0,     0,
     341,   341,   341,     0,     0,   -67,   -67,   -67,   -67,     0,
       0,   341,   900,     0,     0,     0,     0,   374,   374,   374,
     374,   374,     0,   -67,     0,     0,   324,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,     0,   324,   -67,
       0,     0,     0,     0,   342,   -67,     0,   881,     0,     0,
       0,   341,   342,     0,   880,   901,   324,   341,     0,     0,
     900,     0,   341,   374,     0,     0,     0,     0,   342,     0,
       0,   375,     0,     0,     0,     0,     0,   880,   880,   880,
     880,   880,   900,   900,   900,   900,   900,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   880,   900,   -66,
     -66,   -66,   -66,   980,   981,   983,   327,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,   -66,   327,   992,
     993,   995,   -61,   -61,   -61,   -61,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -66,   -44,   -44,   -44,   -44,   -44,   -66,
     -44,   -44,     0,     0,     0,     0,     0,   -44,     0,   -61,
     -61,   -61,   -61,   -61,     0,     0,   327,   -61,     0,     0,
       0,     0,   -61,     0,     0,     0,  1018,  1019,     0,  1021,
       0,     0,  1024,  1025,     0,  1027,     0,   325,   325,   325,
       0,     0,     0,     0,     0,     0,     0,     0,   325,   881,
       0,     0,     0,   342,   342,   342,     0,     0,     0,     0,
       0,     0,     0,     0,   342,   901,   -45,   -45,   -45,   -45,
     375,   375,   375,   375,   375,     0,     0,     0,   344,   325,
       0,   883,     0,     0,     0,     0,   344,     0,     0,   903,
       0,   325,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,     0,   344,     0,   342,   377,   -45,   881,     0,   325,
     342,     0,     0,   901,     0,   342,   375,     0,     0,     0,
       0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,     0,
     881,   881,   881,   881,   881,   901,   901,   901,   901,   901,
       0,     0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
     881,   901,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -70,   -62,   -62,   -62,   -62,   -46,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -70,     0,     0,   -62,
       0,     0,   -70,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,     0,     0,   -62,     0,     0,     0,     0,
       0,   -62,     0,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,   327,   327,   327,     0,     0,     0,     0,     0,     0,
       0,   -63,   327,   883,     0,     0,     0,   344,   344,   344,
     -63,   -63,   -63,   -63,   -63,     0,     0,   -63,   344,   903,
       0,     0,     0,   -63,   377,   377,   377,   377,   377,     0,
      20,    21,    22,   327,     0,     0,     0,    23,    24,    25,
      26,     0,    27,    28,     0,   327,     0,     0,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,   344,     0,
       0,   883,     0,   327,   344,     0,    36,   903,   536,   344,
     377,     0,     0,     0,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,     0,   883,   883,   883,   883,   883,   903,
     903,   903,   903,   903,     0,     0,     0,   -64,   -71,   -71,
     -71,   -71,     0,     0,   883,   903,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -64,     0,     0,   -71,     0,     0,   -64,
     -68,   -68,   -68,   -68,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -71,     0,   -67,   -67,   -67,   -67,   -71,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,   -68,   -66,   -66,   -66,   -66,
     -68,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,
     -62,   -62,   -62,   -62,   -67,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,   -63,   -63,   -63,   -63,   -66,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,   -62,   -64,   -64,   -64,   -64,
     -62,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,   -63,   -56,   -56,
     395,   396,   -63,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,   -61,   -61,   -61,   -61,   -64,     0,     0,     0,
     -65,   -65,   -65,   -65,     0,   -56,   397,   -56,   398,   -56,
       0,     0,   -56,     0,   -65,   -65,   -65,   -65,   -56,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -61,   -65,   -65,   -65,
     -65,   -65,   -61,     0,     0,   -65,   -70,   -70,   -70,   -70,
     -65,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,     0,
     -68,   -68,   -68,   -68,   -65,     0,     0,     0,   -67,   -67,
     -67,   -67,     0,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,   -70,   -66,   -66,   -66,   -66,   -70,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -68,   -67,   -67,   -67,   -67,   -67,
     -68,     0,   -67,   -71,   -71,   -71,   -71,     0,   -67,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -66,   -70,   -70,   -70,
     -70,     0,   -66,     0,     0,   -62,   -62,   -62,   -62,     0,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,   -63,
     -63,   -63,   -63,   -71,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -70,   -62,   -62,   -62,   -62,   -62,   -70,     0,   -62,
     -64,   -64,   -64,   -64,     0,   -62,   -63,   -63,   -63,   -63,
     -63,     0,     0,   -63,   -71,   -71,   -71,   -71,     0,   -63,
       0,     0,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -64,     0,     0,     0,     0,     0,
     -64,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -32,
     -32,   -32,     0,     0,   -71,     0,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,     0,   -32,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,   -34,   -32,     0,   -32,   -32,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,     0,   -34,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -34,     0,
     -34,   -34,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,     0,     0,   948,     0,
     -75,     0,     0,     0,     0,     0,     0,     0,   -35,   -35,
     -35,   -75,     0,   -75,   -75,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,     0,   -35,     0,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -35,     0,   -35,   -35,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,     0,     0,   -38,     0,   -38,     0,     0,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -38,     0,   -38,
     -38,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,   -36,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -36,     0,   -36,   -36,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,   -37,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -37,     0,   -37,   -37,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,     0,     0,   -81,     0,   -81,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -81,     0,   -81,   -81,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,     0,     0,   -83,     0,   -83,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -83,
       0,   -83,   -83,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,   -33,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -33,     0,   -33,   -33,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -82,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -82,     0,   -82,   -82,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,     0,   -84,     0,   -84,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -84,     0,
     -84,   -84,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,     0,     0,  1009,     0,
     -77,     0,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -77,     0,   -77,   -77,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,     0,
       0,  1033,     0,   -75,     0,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,   -75,     0,   -75,   -75,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,     0,     0,   -78,     0,   -78,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -78,     0,   -78,
     -78,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,     0,     0,   -79,     0,   -79,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -79,     0,   -79,   -79,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,     0,
     -80,     0,   -80,     0,     0,     0,     0,     0,     0,     0,
     -74,   -74,   -74,   -80,     0,   -80,   -80,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,     0,     0,   -74,     0,   -74,     0,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -74,     0,   -74,   -74,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,     0,     0,  1050,     0,   -77,     0,
       0,     0,     0,     0,     0,     0,   -76,   -76,   -76,   -77,
       0,   -77,   -77,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,     0,     0,   -76,
       0,   -76,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,   -76,     0,   -76,   -76,    23,    24,    25,    26,
       0,    27,    28,   316,     0,   317,   318,    32,    33,    34,
       0,     0,     0,     0,   319,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    36,     0,   320,   321,    23,
      24,    25,    26,     0,    27,    28,   333,     0,   334,   335,
      32,    33,    34,     0,     0,     0,     0,   336,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    36,     0,
     337,   338,    23,    24,    25,    26,     0,    27,    28,   366,
       0,   367,   368,    32,    33,    34,     0,     0,     0,     0,
     369,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      22,    36,     0,   370,   371,    23,    24,    25,    26,     0,
      27,    28,   173,     0,    30,    31,    32,    33,    34,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,   -20,   -20,   -20,    36,     0,    37,    38,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,     0,     0,     0,     0,   -20,     0,     0,     0,
       0,     0,     0,     0,   -21,   -21,   -21,   -20,     0,   -20,
     -20,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -21,     0,   -21,   -21,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -32,     0,   -32,   -32,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,     0,     0,     0,     0,
       0,     0,     0,   -35,   -35,   -35,   -34,     0,   -34,   -34,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,   -35,     0,
       0,     0,     0,     0,     0,     0,   -38,   -38,   -38,   -35,
       0,   -35,   -35,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,   -38,     0,     0,     0,     0,     0,     0,     0,   -36,
     -36,   -36,   -38,     0,   -38,   -38,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,   -36,     0,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -36,     0,   -36,   -36,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,   -37,     0,     0,
       0,     0,     0,     0,     0,   -19,   -19,   -19,   -37,     0,
     -37,   -37,   -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,     0,     0,     0,
     -19,     0,     0,     0,     0,     0,     0,     0,   -24,   -24,
     -24,   -19,     0,   -19,   -19,   -24,   -24,   -24,   -24,     0,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
       0,     0,     0,   -24,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -24,     0,   -24,   -24,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -83,   -81,     0,   -81,
     -81,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -83,     0,   -83,   -83,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   -33,     0,     0,     0,     0,     0,     0,     0,
     -25,   -25,   -25,   -33,     0,   -33,   -33,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,   -82,   -82,   -82,   -25,     0,   -25,   -25,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,     0,     0,     0,     0,   -82,     0,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -82,
       0,   -82,   -82,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,   -84,     0,   -84,   -84,    23,    24,    25,    26,
       0,    27,    28,   871,     0,   872,   873,    32,    33,    34,
       0,     0,     0,     0,   874,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    36,     0,   875,   876,    23,
      24,    25,    26,     0,    27,    28,   891,     0,   892,   893,
      32,    33,    34,     0,     0,     0,     0,   894,     0,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,    36,     0,
     895,   896,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -78,     0,   -78,   -78,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,   -79,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -79,     0,   -79,   -79,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,     0,     0,     0,     0,   -80,     0,     0,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -80,     0,   -80,
     -80,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,   -74,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -74,     0,   -74,   -74,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,    20,
      21,    22,   -76,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,   -76,     0,   -76,   -76,    32,    33,    34,
      20,    21,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,    27,    28,     0,    36,     0,   945,    32,    33,
      34,   178,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,   185,   186,     0,    36,     0,   961,   187,
     188,   189,   178,   179,   180,     0,     0,     0,     0,   181,
     182,   183,   184,     0,   185,   186,     0,   190,   549,     0,
     187,   188,   189,   178,   179,   180,     0,     0,     0,     0,
     181,   182,   183,   184,     0,   185,   186,     0,   190,   580,
       0,   187,   188,   189,   178,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,   185,   186,     0,   190,
     611,     0,   187,   188,   189,   178,   179,   180,     0,     0,
       0,     0,   181,   182,   183,   184,     0,   185,   186,     0,
     190,   623,     0,   187,   188,   189,   178,   179,   180,     0,
       0,     0,     0,   181,   182,   183,   184,     0,   185,   186,
       0,   190,   651,     0,   187,   188,   189,   178,   179,   180,
       0,     0,     0,     0,   181,   182,   183,   184,     0,   185,
     186,     0,   190,   662,     0,   187,   188,   189,   178,   179,
     180,     0,     0,     0,     0,   181,   182,   183,   184,     0,
     185,   186,     0,   190,   689,     0,   187,   188,   189,   178,
     179,   180,     0,     0,     0,     0,   181,   182,   183,   184,
       0,   185,   186,     0,   190,   719,     0,   187,   188,   189,
     178,   179,   180,     0,     0,     0,     0,   181,   182,   183,
     184,     0,   185,   186,     0,   190,   839,     0,   187,   188,
     189,   178,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,   185,   186,     0,   190,   847,     0,   187,
     188,   189,   178,   179,   180,     0,     0,     0,     0,   181,
     182,   183,   184,     0,   185,   186,     0,   190,   858,     0,
     187,   188,   189,   178,   179,   180,     0,     0,     0,     0,
     181,   182,   183,   184,     0,   185,   186,     0,   190,   866,
       0,   187,   188,   189,   178,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,   185,   186,     0,   190,
     911,     0,   187,   188,   189,   203,   204,   205,     0,     0,
       0,     0,   206,   207,   208,   209,     0,   210,   211,     0,
     190,     0,     0,   212,   213,   214,   228,   229,   230,     0,
       0,     0,     0,   231,   232,   233,   234,     0,   235,   236,
       0,   215,     0,     0,   237,   238,   239,   244,   245,   246,
       0,     0,     0,     0,   247,   248,   249,   250,     0,   251,
     252,     0,   240,     0,     0,   253,   254,   255,   282,   283,
     284,     0,     0,     0,     0,   285,   286,   287,   288,     0,
     289,   290,     0,   256,     0,     0,   291,   292,   293,    20,
      21,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,     0,   294,     0,     0,    32,    33,    34,
     305,   306,   307,     0,     0,     0,     0,    23,    24,    25,
     308,     0,   309,   310,     0,    36,     0,     0,    32,    33,
      34,   269,   270,   271,     0,     0,     0,     0,   329,   330,
     331,   272,     0,   273,   274,     0,   311,     0,     0,   275,
     276,   277,   345,   346,   347,     0,     0,     0,     0,   348,
     349,   350,   351,     0,   352,   353,     0,   278,     0,     0,
     354,   355,   356,   551,   552,   553,     0,     0,     0,     0,
     181,   182,   183,   554,     0,   555,   556,     0,   357,     0,
       0,   187,   188,   189,   582,   583,   584,     0,     0,     0,
       0,   206,   207,   208,   585,     0,   586,   587,     0,   557,
       0,     0,   212,   213,   214,   625,   626,   627,     0,     0,
       0,     0,   247,   248,   249,   628,     0,   629,   630,     0,
     588,     0,     0,   253,   254,   255,   664,   665,   666,     0,
       0,     0,     0,   285,   286,   287,   667,     0,   668,   669,
       0,   631,     0,     0,   291,   292,   293,   721,   722,   723,
       0,     0,     0,     0,   348,   349,   350,   724,     0,   725,
     726,     0,   670,     0,     0,   354,   355,   356,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,   -42,   -43,   -43,   -43,
     -43,     0,     0,   727,     0,   -43,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -69,   -42,   -42,   -42,   -42,   -42,
       0,   -42,     0,   -42,   -43,   -43,   -43,   -43,   -43,     0,
     -43,     0,   -43,   -69,   -69,   -69,   -69,   -69,     0,   410,
       0,   -69,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
     -44,   -45,   -45,   -45,   -45,     0,     0,     0,     0,   -45,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,   -46,   -44,
     -44,   -44,   -44,   -44,     0,   -44,     0,   -44,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,   -46,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,   420,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   -70,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -71,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -65,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
     -70,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,     0,   -44,   -45,   -45,   -45,   -45,
     -45,     0,   -45,     0,   -45,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,   -56,   -56,   416,   417,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,   -56,   418,   -56,   419,   -56,     0,     0,     0,   -56,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,   -61,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,   -65,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -68,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,   -67,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,   -70,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,   -62,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,   -63,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,   -39,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,   -64,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
     -71,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,   -41,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,   -40,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,   -42,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,     0,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,     0,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
     -43,   -69,   -69,   -69,   -69,     0,     0,     0,     0,   -69,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,   -44,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,     0,   -69,   -69,
     -69,   -69,   -69,     0,   520,   -69,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -45,   -45,   -45,   -45,     0,
       0,     0,     0,   -45,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,   -46,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   530,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,     0,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -65,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
       0,     0,   -70,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,   -71,     0,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -69,   -69,   -69,   -69,   -69,
       0,   827,   -69,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,   -44,   -44,   -44,   -44,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,   -46,   -46,   -46,
     -46,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -46,   -61,   -61,   -61,   -61,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -61,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -68,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -67,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -66,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -70,   -62,   -62,   -62,   -62,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,   -63,
     -63,   -63,   -63,   -63,     0,     0,   -63,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -64,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,   -40,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -40,     0,     0,     0,   -42,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -42,
     -40,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,   -43,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -43,     0,     0,     0,   -69,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -69,   -43,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,     0,   443,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,   -44,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -45,   -44,     0,     0,     0,   -45,     0,     0,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -45,   -44,   -40,   -40,   -40,
     -40,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -46,   -46,   -46,   -46,   -40,     0,     0,     0,   -46,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -46,
     -40,   -42,   -42,   -42,   -42,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -43,   -43,   -43,   -43,   -42,
       0,     0,   -69,   -69,   -69,   -69,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -43,   -42,     0,   -44,   -44,   -44,   -44,
     -69,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -69,
     -69,   -69,   -69,   -69,   -44,   787,   -45,   -45,   -45,   -45,
       0,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -46,   -46,   -46,   -46,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -46,   -45,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -70,     0,     0,     0,   -71,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -71,   -56,   -56,   449,
     450,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
       0,   -61,   -61,   -61,   -61,   -56,   -65,   -65,   -65,   -65,
       0,     0,     0,     0,   -56,   451,   -56,   452,   -56,   -61,
     -68,   -68,   -68,   -68,   -65,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -65,   -65,   -65,   -65,   -65,   -68,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,     0,   -66,   -66,   -66,   -66,   -67,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -66,   -62,   -62,   -62,   -62,   -70,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -70,   -70,   -70,   -70,   -70,
     -62,   -63,   -63,   -63,   -63,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,     0,   -64,   -64,   -64,   -64,   -63,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -64,     0,     0,     0,     0,   -71,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -71,   -71,   -71,
     -71,   -71
};

static const yytype_int16 yycheck[] =
{
       7,     0,   173,   389,    39,    42,    39,     6,     0,     6,
      13,     0,     0,     6,     7,     0,    14,     6,     6,     6,
       7,   304,   304,    17,   410,    26,     6,     7,    40,     6,
       7,    41,     0,    25,    46,    41,    46,     0,    41,    40,
      25,    39,     0,    41,   430,   328,   328,    40,     0,     6,
       7,    43,    44,    45,    41,     6,     7,   443,    43,    44,
      45,    41,    25,     0,    41,    98,    46,    25,    67,     0,
      67,    60,    60,    25,   460,     0,     6,     7,     0,    67,
      43,    44,    45,    40,   470,    43,    44,    45,    25,    46,
      41,    43,    44,    45,    25,    46,     6,     7,   105,    39,
      25,    39,   488,    25,     0,    13,    43,    44,    45,    17,
      39,    41,    43,    44,    45,    13,    46,    16,    43,    44,
      45,    43,    44,    45,     6,     7,     8,     9,    13,    25,
     137,    41,    14,    41,   520,    13,   143,     6,     7,    17,
      13,     6,     7,   132,   132,   316,    26,    43,    44,    45,
      13,    33,    34,    35,    36,    37,    41,    39,   165,    41,
      40,    13,   333,    41,    46,     3,     4,     5,    41,    39,
      40,    40,    10,    11,    12,    13,    41,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    13,    25,    26,    41,
      28,     6,     7,     8,     9,   366,    26,     6,     7,    14,
      36,    39,    38,    41,    42,    43,    44,    45,    39,    24,
      40,     6,     7,    24,    41,    39,    40,    39,    33,    34,
      35,    36,    37,   258,    39,    40,     6,     7,    39,     6,
       7,    46,    41,     6,     7,    39,    72,    46,    13,     3,
       4,     5,    39,    13,    24,    40,    10,    11,    12,    13,
     257,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      40,    25,    26,    40,    28,    40,    46,    40,    39,   105,
      40,    46,    24,    46,    24,    39,    46,    41,    42,    43,
      44,    45,     6,     7,     3,     4,     5,    39,    39,    39,
      24,    10,    11,    12,    13,    15,    15,    16,     6,     7,
      13,   137,    21,    22,    23,    39,    25,   143,    24,    33,
      13,    35,    24,    37,    13,   304,   304,    41,    41,    14,
      39,    13,    46,    39,    43,    44,    45,    40,    40,   165,
      24,    24,    40,    46,    46,     6,     7,    40,    46,   328,
     328,    40,   379,    46,    39,    39,    41,    46,     3,     4,
       5,    39,    40,    24,   190,    10,    11,    12,    13,    24,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    40,
      25,    26,   758,    28,    39,    46,     6,     7,    13,   215,
      24,    13,    17,   769,    39,    17,    41,    42,    43,    44,
      45,    24,     6,     7,     6,     7,     8,     9,    24,     6,
       7,   787,    14,    33,   240,    35,    41,    37,    24,    41,
      24,    41,    24,    39,     6,     7,   802,    24,    39,    40,
     256,    33,    34,    35,    36,    37,    40,    39,    40,    24,
      14,    24,    46,    40,    46,     6,     7,     8,     9,    46,
      40,   827,   278,     6,     7,     8,     9,    13,    40,    39,
      40,    14,    13,   490,    46,    39,    17,    41,   294,    39,
      40,    24,    33,    34,    35,    36,    37,   504,    39,    40,
      33,    34,    35,    36,    37,   311,    39,    40,     6,     7,
      41,    40,    13,    46,    14,   321,    17,    17,    41,     6,
       7,    40,   491,    46,   491,   532,    24,     6,     7,     8,
       9,    40,   338,   491,    40,    14,   505,    24,   505,    39,
      41,    41,     6,     7,    40,    24,    33,   505,    35,    14,
      37,   357,    17,    40,    33,    34,    35,    36,    37,    46,
      39,    40,    40,    24,   533,   371,   533,    46,    46,    33,
      40,    35,    40,    37,    39,   533,    41,    41,    39,     3,
       4,     5,    46,    40,   105,    14,    10,    11,    12,    13,
      40,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      14,    25,    26,    17,    28,     6,     7,     8,     9,    41,
      39,    39,    41,    14,    46,    39,   137,    41,    42,    43,
      44,    45,   143,    24,    14,    39,    41,    41,    25,    39,
      40,    46,    33,    34,    35,    36,    37,    25,    39,    40,
     161,   162,   163,   164,   165,    46,    43,    44,    45,    39,
     171,    41,     3,     4,     5,    43,    44,    45,    41,    10,
      11,    12,    13,    46,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    39,    25,    26,    39,    28,     6,     7,
       8,     9,     6,     7,     6,     7,    14,   493,    39,     0,
      41,    42,    43,    44,    45,     6,    24,     6,     7,    13,
      24,   507,    24,     6,     7,    33,    34,    35,    36,    37,
      39,    39,    40,     6,     7,   692,    14,    13,    46,    17,
      26,    24,    39,    24,    33,    41,    35,   704,    37,   535,
     871,    24,    41,    14,    40,    26,    17,    46,    26,    40,
      33,    39,    35,    41,    37,    46,    13,    40,    24,    40,
     891,   557,    40,    46,     3,     4,     5,    39,    39,    24,
      41,    10,    11,    12,    13,   742,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    40,    25,    26,    39,    28,
      40,    46,   588,    24,    24,    40,    46,    39,    40,    39,
      39,    46,    41,    42,    43,    44,    45,    39,    26,    40,
      40,     3,     4,     5,    39,    46,    46,    39,    10,    11,
      12,    13,    40,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    39,    25,    26,   631,    28,   804,     6,     7,
     807,    24,    39,    40,    24,   812,    24,    39,   815,    41,
      42,    43,    44,    45,    41,    39,    24,    40,    39,    26,
      40,   828,    40,    46,   831,    33,    46,    35,    46,    37,
      39,    13,    40,    40,   670,     3,     4,     5,    46,    39,
      40,    13,    10,    11,    12,    13,    46,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   692,    25,    26,    39,
      28,     6,     7,    40,    24,    39,    40,    17,   704,    46,
      39,    39,    46,    41,    42,    43,    44,    45,    24,    24,
      40,     6,     7,     8,     9,    39,    46,    26,    33,    14,
      35,   727,    37,    13,    40,     6,     7,     8,     9,    24,
      46,    40,    26,    14,   941,    39,   742,    13,    33,    34,
      35,    36,    37,    24,    39,    40,    40,    39,    39,    25,
     957,    46,    33,    34,    35,    36,    37,    40,    39,    40,
     937,   938,   939,    46,    40,    46,    26,    43,    44,    45,
      13,   948,   949,   942,    41,   942,   953,   954,   955,    46,
      40,     6,     7,    39,   942,    39,    40,   964,   965,   958,
      26,   958,    46,   970,   971,   972,   973,   974,   804,    24,
     958,   807,   979,    24,    40,    40,   812,    40,    33,   815,
      35,    46,    37,    46,   991,    40,     6,     7,     8,     9,
      26,    46,   828,    26,    14,   831,    41,  1004,    26,    40,
    1007,    46,  1009,  1010,    40,    46,  1013,    40,  1015,  1016,
       6,     7,    40,    33,    34,    35,    36,    37,    39,    39,
      26,    41,    26,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,    26,    40,    13,    40,    33,    26,    35,
     876,    37,    40,  1050,  1051,    41,    40,    40,    46,     3,
       4,     5,    40,    39,    13,    39,    10,    11,    12,    13,
     896,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      26,    25,    26,    40,    28,    39,    40,    40,    39,    46,
       6,     7,    46,    46,    40,    39,    39,    41,    42,    43,
      44,    45,    39,    40,    40,    39,    39,    39,    24,    46,
      46,   937,   938,   939,    40,    13,    13,    33,   944,    35,
      46,    37,   948,   949,    40,     6,     7,   953,   954,   955,
      46,    40,    39,    39,   960,    39,    13,    46,   964,   965,
       6,     7,     8,     9,   970,   971,   972,   973,   974,    40,
      13,   692,    33,   979,    35,    46,    37,    41,    24,    41,
      41,    39,    46,   704,    46,   991,    40,    33,    34,    35,
      36,    37,    46,    39,    40,    40,    40,    39,  1004,    40,
      46,  1007,    46,  1009,  1010,    46,    40,  1013,    40,  1015,
    1016,    40,    46,    40,    46,    36,    40,    46,    41,    46,
      39,   742,    46,    46,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,    40,    39,    39,    39,    59,    39,
      46,    62,    63,    64,  1050,  1051,    67,    68,    69,    70,
      71,    72,    40,     6,     7,    39,    39,    39,    46,    40,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      40,     6,     7,     8,     9,    40,    46,    40,    40,    14,
      33,    46,    35,   804,    37,    40,   807,    41,    41,    24,
      40,   812,    46,    46,   815,    40,    46,    40,    33,    34,
      35,    36,    37,    46,    39,    40,    40,   828,    40,    39,
     831,    46,    46,   134,   135,   136,    40,   138,   139,     3,
       4,     5,    46,   144,    40,   146,    10,    11,    12,    13,
      46,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      40,    25,    26,    40,    28,    40,    46,    40,    40,    46,
      40,    46,    39,    46,    46,    39,    46,    41,    42,    43,
      44,    45,    40,     3,     4,     5,    13,    13,    46,   190,
      10,    11,    12,    13,    39,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    40,    25,    26,    40,    28,    40,
      46,    40,    40,    46,   215,    46,    39,    46,    46,    39,
      39,    41,    42,    43,    44,    45,    40,    15,    40,    40,
      39,     3,     4,     5,    46,    46,   937,   938,   939,   240,
      40,    13,    39,    15,    16,    39,    46,   948,   949,    21,
      22,    23,   953,   954,   955,   256,    40,    16,     6,     7,
       8,     9,    46,   964,   965,    15,    14,    39,    15,   970,
     971,   972,   973,   974,    40,    40,    40,   278,   979,    41,
      46,    46,    46,    16,    46,    33,    34,    35,    36,    37,
     991,    39,    40,   294,     6,     7,     8,     9,    46,    41,
      41,    16,   303,  1004,    46,    46,  1007,    15,  1009,  1010,
     311,    41,  1013,    41,  1015,  1016,    46,    41,    46,    16,
      15,    33,    34,    35,    36,    37,     6,     7,    40,  1030,
    1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,    16,
      15,    15,    41,     6,     7,     8,     9,    46,    16,  1050,
    1051,    14,    16,    33,    41,    35,   357,    37,    40,    46,
      15,    41,    40,    16,    40,    24,    46,    24,    24,    40,
      33,    34,    35,    36,    37,    40,    39,    13,    41,   380,
     381,   382,    40,    46,   385,   386,   387,    13,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,    24,
     401,   402,   403,    24,    24,   406,   407,   408,    40,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,    40,    40,   426,   427,   428,    13,   430,
     431,   432,   433,    13,    41,   436,   437,   438,    41,    41,
      24,    24,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,     6,     7,   456,   457,   458,    24,   460,
     461,   462,   463,    40,    40,   466,   467,   468,    40,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
      33,    24,    35,    24,    37,    24,    24,   488,    41,    40,
     491,   492,   493,    40,    40,    13,    13,    24,    24,   500,
     501,   502,    24,    40,   505,   506,   507,    40,    40,    40,
     511,   512,   513,    24,    24,   516,   517,   518,    24,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
      13,    40,   533,   534,   535,     3,     4,     5,    40,    40,
      13,    40,    10,    11,    12,    13,    24,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   557,    25,    26,    24,
      28,    24,    24,    24,    24,    24,    40,    24,    24,    24,
      40,    39,    13,    41,    42,    43,    44,    45,     6,     7,
      13,     3,     4,     5,    24,    24,    40,   588,    10,    11,
      12,    13,    40,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    40,    25,    26,    33,    28,    35,    40,    37,
      40,    15,    40,    16,    15,    24,    16,    39,    46,    41,
      42,    43,    44,    45,     3,     4,     5,    24,    24,    24,
     631,    10,    11,    12,    13,    15,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    16,    25,    26,    40,    28,
      40,    40,    40,    15,    40,    16,    15,    40,    16,    40,
      39,    39,    41,    42,    43,    44,    45,    40,    40,   670,
       3,     4,     5,    40,    40,    40,    40,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    40,    25,    26,    40,    28,    40,    40,    40,    40,
       6,     7,     8,     9,    40,    13,    39,    39,    41,    42,
      43,    44,    45,    40,    40,     6,     7,    25,    24,    39,
      24,    40,    40,    40,    40,    40,   727,    33,    34,    35,
      36,    37,    40,    39,    40,    43,    44,    45,    40,    40,
      46,    39,    33,    39,    35,    39,    37,   748,   749,   750,
      41,    40,    40,    40,     6,     7,    40,   758,   759,   760,
     761,    40,    40,    40,    40,    24,    24,    40,   769,   770,
     771,   772,    40,    40,    24,    24,   777,   778,   779,    40,
      40,    33,    24,    35,    40,    37,   787,    24,    40,    40,
      -1,   792,   793,   794,    46,    40,     6,     7,    -1,    40,
      40,   802,    40,    -1,   805,   806,    40,   808,   809,   810,
     811,    36,   813,   814,    40,   816,   817,   818,   819,    40,
      40,     6,     7,    33,    40,    35,   827,    37,   829,   830,
      40,   832,    -1,    -1,    59,    -1,    46,    62,    63,    64,
      -1,    -1,    67,    68,    69,    70,    71,    72,    33,    -1,
      35,    -1,    37,    -1,    -1,    40,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
       6,     7,    39,    14,    41,    42,    43,    44,    45,   134,
     135,   136,    -1,   138,   139,    -1,    -1,     6,     7,   144,
      -1,   146,    33,    34,    35,    36,    37,    33,    39,    35,
      41,    37,    -1,    -1,    40,    46,    -1,    -1,    -1,    -1,
      46,   942,   943,   944,    33,    -1,    35,    -1,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,   958,   959,   960,
       3,     4,     5,    -1,    -1,   190,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
     215,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,  1005,  1006,    -1,  1008,    -1,    -1,
    1011,  1012,    -1,  1014,    -1,   240,    -1,     6,     7,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,   256,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    26,    33,    28,    35,    -1,    37,    -1,
      -1,    40,    -1,   278,    -1,    -1,    39,    46,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,   294,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,   303,    -1,
      -1,    -1,    10,    11,    12,    13,   311,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    39,    -1,    41,    42,    43,    44,    45,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,   357,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,   380,   381,   382,    46,    -1,
     385,   386,   387,    -1,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,    -1,   401,   402,   403,    -1,
      -1,   406,   407,   408,    -1,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,    -1,
      -1,   426,   427,   428,    -1,   430,   431,   432,   433,    -1,
      -1,   436,   437,   438,    -1,    -1,    -1,    -1,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,    -1,
      -1,   456,   457,   458,    -1,   460,   461,   462,   463,    -1,
      -1,   466,   467,   468,    -1,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   488,    -1,    -1,   491,   492,   493,    -1,
      -1,    -1,    -1,    -1,    -1,   500,   501,   502,    -1,    -1,
     505,   506,   507,    -1,    -1,    -1,   511,   512,   513,    -1,
      -1,   516,   517,   518,    -1,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,    -1,    -1,   533,   534,
     535,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   557,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,     6,     7,    -1,     3,     4,     5,
      -1,    -1,    -1,   588,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    33,    28,    35,    -1,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       3,     4,     5,    -1,    -1,    -1,   631,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,   670,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    13,
      -1,    28,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    25,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    40,    -1,    -1,    43,
      44,    45,   727,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,     3,
       4,     5,    -1,   748,   749,   750,    10,    11,    12,    13,
      -1,    15,    16,   758,   759,   760,   761,    21,    22,    23,
      -1,    -1,    -1,    -1,   769,   770,   771,   772,    -1,    -1,
      -1,    -1,   777,   778,   779,    39,    -1,    41,    -1,    -1,
      -1,    -1,   787,    -1,    -1,    -1,    -1,   792,   793,   794,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   802,    -1,    -1,
     805,   806,    -1,   808,   809,   810,   811,    36,   813,   814,
      -1,   816,   817,   818,   819,    -1,    -1,     6,     7,     8,
       9,    -1,   827,    -1,   829,   830,    -1,   832,    -1,    -1,
      59,    -1,    -1,    62,    63,    64,    -1,    -1,    67,    68,
      69,    70,    71,    72,    33,    34,    35,    36,    37,    -1,
      39,    40,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,     6,     7,    39,    14,
      41,    42,    43,    44,    45,   134,   135,   136,    -1,   138,
     139,    -1,    -1,     6,     7,   144,    -1,   146,    33,    34,
      35,    36,    37,    33,    39,    35,    41,    37,    -1,    -1,
      40,    46,    -1,    -1,    -1,    -1,    -1,   942,   943,   944,
      33,    -1,    35,    -1,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,   958,   959,   960,     3,     4,     5,    -1,
      -1,   190,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
    1005,  1006,    -1,  1008,    -1,    -1,  1011,  1012,    -1,  1014,
      -1,   240,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,   256,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,   303,    -1,    -1,    -1,    10,    11,
      12,    13,   311,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    39,    -1,    41,
      42,    43,    44,    45,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,   357,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      -1,   380,   381,   382,    46,    -1,   385,   386,   387,    -1,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,    -1,   401,   402,   403,    -1,    -1,   406,   407,   408,
      -1,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,    -1,    -1,   426,   427,   428,
      -1,   430,   431,   432,   433,    -1,    -1,   436,   437,   438,
      -1,    -1,    -1,    -1,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,    -1,    -1,   456,   457,   458,
      -1,   460,   461,   462,   463,    -1,    -1,   466,   467,   468,
      -1,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,
      -1,    -1,   491,   492,   493,    -1,    -1,    -1,    -1,    -1,
      -1,   500,   501,   502,    -1,    -1,   505,   506,   507,    -1,
      -1,    -1,   511,   512,   513,    -1,    -1,   516,   517,   518,
      -1,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,    -1,    -1,   533,   534,   535,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   557,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,   588,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,     3,     4,     5,    -1,
      -1,    -1,   631,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,   670,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   727,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,     3,     4,     5,    -1,   748,
     749,   750,    10,    11,    12,    13,    -1,    15,    16,   758,
     759,   760,   761,    21,    22,    23,    -1,    -1,    -1,    -1,
     769,   770,   771,   772,    -1,    -1,    -1,    -1,   777,   778,
     779,    39,    -1,    41,    -1,    -1,    -1,    -1,   787,    -1,
      -1,    -1,    -1,   792,   793,   794,    -1,    -1,     6,     7,
      -1,    -1,    -1,   802,    -1,    -1,   805,   806,    -1,   808,
     809,   810,   811,    36,   813,   814,    24,   816,   817,   818,
     819,    -1,    -1,    -1,    -1,    33,    -1,    35,   827,    37,
     829,   830,    -1,   832,    -1,    -1,    59,    -1,    -1,    62,
      63,    64,    -1,    -1,    67,    68,    69,    70,    71,    72,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,    81,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,     6,     7,     8,
       9,    -1,     6,     7,    -1,    14,    33,    34,    35,    36,
      37,   134,   135,   136,    41,   138,   139,    -1,    -1,    46,
      24,   144,    -1,   146,    33,    34,    35,    36,    37,    33,
      39,    35,    41,    37,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,   942,   943,   944,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   958,
     959,   960,     3,     4,     5,    -1,    -1,   190,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,  1005,  1006,    -1,  1008,
      -1,    -1,  1011,  1012,    -1,  1014,    -1,   240,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,   256,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,   294,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
     303,    -1,    -1,    -1,    10,    11,    12,    13,   311,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    39,    -1,    41,    42,    43,    44,    45,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,   357,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    -1,   380,   381,   382,
      46,    -1,   385,   386,   387,    -1,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,    -1,   401,   402,
     403,    -1,    -1,   406,   407,   408,    -1,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,    -1,    -1,   426,   427,   428,    -1,   430,   431,   432,
     433,    -1,    -1,   436,   437,   438,    -1,    -1,    -1,    -1,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,    -1,    -1,   456,   457,   458,    -1,   460,   461,   462,
     463,    -1,    -1,   466,   467,   468,    -1,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   488,    -1,    -1,   491,   492,
     493,    -1,    -1,    -1,    -1,    -1,    -1,   500,   501,   502,
      -1,    -1,   505,   506,   507,    -1,    -1,    -1,   511,   512,
     513,    -1,    -1,   516,   517,   518,    -1,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,    -1,    -1,
     533,   534,   535,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   557,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,   588,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,   631,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,   670,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   727,    33,    34,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,     3,     4,     5,    -1,   748,   749,   750,    10,    11,
      12,    13,    -1,    15,    16,   758,   759,   760,   761,    21,
      22,    23,    -1,    -1,    -1,    -1,   769,   770,   771,   772,
      -1,    -1,    -1,    -1,   777,   778,   779,    39,    -1,    41,
      -1,    -1,    -1,    -1,   787,    -1,    -1,    -1,    -1,   792,
     793,   794,    -1,    -1,     6,     7,    -1,    -1,    -1,   802,
      -1,    -1,   805,   806,    -1,   808,   809,   810,   811,    36,
     813,   814,    24,   816,   817,   818,   819,    -1,    -1,    -1,
      -1,    33,    -1,    35,   827,    37,   829,   830,    -1,   832,
      -1,    -1,    59,    -1,    -1,    62,    63,    64,    -1,    -1,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    81,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,     6,     7,     8,     9,    -1,     6,     7,
      -1,    14,    33,    34,    35,    36,    37,   134,   135,   136,
      41,   138,   139,    -1,    -1,    46,    24,   144,    -1,   146,
      33,    34,    35,    36,    37,    33,    39,    35,    41,    37,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,   942,
     943,   944,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   958,   959,   960,     3,     4,
       5,    -1,    -1,   190,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,   215,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,  1005,  1006,    -1,  1008,    -1,    -1,  1011,  1012,
      -1,  1014,    -1,   240,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,   256,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   278,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,   303,    -1,    -1,    -1,
      10,    11,    12,    13,   311,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    39,
      -1,    41,    42,    43,    44,    45,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
     357,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    -1,   380,   381,   382,    46,    -1,    -1,    -1,
      -1,    -1,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,    -1,   401,   402,   403,    -1,    -1,    -1,
      -1,    -1,    -1,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,    -1,    -1,    -1,
      -1,    -1,    -1,   430,   431,   432,   433,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   443,   444,   445,   446,
     447,   448,   449,   450,   451,   452,   453,    -1,    -1,     6,
       7,     8,     9,   460,   461,   462,   463,    14,    -1,    -1,
      -1,    -1,    -1,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,    -1,    -1,    33,    34,    35,    36,
      37,   488,    39,    40,   491,   492,   493,    -1,    -1,    46,
      -1,    -1,    -1,   500,   501,   502,    -1,    -1,   505,   506,
     507,    -1,    -1,    -1,   511,   512,   513,    -1,    -1,    -1,
      -1,    -1,    -1,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,    -1,    -1,   533,   534,   535,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     557,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,   588,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,     3,     4,
       5,    -1,    -1,    -1,   631,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,   670,    -1,    36,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    59,    25,
      -1,    -1,    28,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    72,    -1,    39,    -1,    41,    42,    43,    44,    45,
      81,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
     727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,   748,   749,   750,    -1,    -1,    24,    -1,    -1,    -1,
      -1,   758,   759,   760,   761,    33,    34,    35,    36,    37,
      -1,    39,   769,   770,   771,   772,    -1,   138,   139,    -1,
     777,   778,   779,   144,    -1,   146,    -1,    -1,    -1,    -1,
     787,    -1,    -1,    -1,    -1,   792,   793,   794,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   802,    -1,    -1,   805,   806,
      -1,   808,   809,   810,   811,    -1,   813,   814,    -1,   816,
     817,   818,   819,    -1,    -1,    -1,    -1,    -1,    -1,   190,
     827,    -1,   829,   830,    -1,   832,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,   215,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,   240,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,   256,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   278,    25,    -1,
      -1,    28,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    39,   294,    41,    42,    43,    44,    45,    -1,
      -1,    -1,   303,    -1,    -1,   942,   943,   944,    -1,    -1,
     311,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      -1,   958,   959,   960,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,     6,     7,     8,     9,    -1,   357,    -1,    -1,    14,
      39,    -1,    41,    42,    43,    44,    45,    -1,  1005,  1006,
      -1,  1008,    -1,    -1,  1011,  1012,    -1,  1014,    33,    34,
      35,    36,    37,    -1,    39,    -1,    41,    -1,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,    -1,    -1,     6,     7,     8,     9,   460,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
      -1,    -1,    33,    34,    35,    36,    37,   488,    39,    40,
     491,   492,   493,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   505,   506,   507,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
      -1,    -1,   533,   534,   535,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   557,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   588,    -1,    -1,
      -1,    36,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    59,    25,    -1,    -1,    28,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    72,    -1,    39,
     631,    41,    42,    43,    44,    45,    81,    -1,    -1,    84,
      85,    86,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,   670,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,   139,     3,     4,     5,    -1,   144,
      -1,   146,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,     6,     7,     8,     9,    -1,   727,    -1,    -1,    14,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,   758,    -1,    -1,
      -1,    46,    -1,     6,     7,     8,     9,    -1,   769,    -1,
     215,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   787,    -1,    -1,    -1,
      33,    34,    35,    36,    37,   240,    39,    40,    -1,    -1,
      -1,   802,    -1,    46,   805,   806,    -1,   808,    -1,    -1,
      -1,   256,   813,   814,    -1,   816,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,   827,    -1,   829,   830,
      -1,   832,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,   294,
      39,    -1,    41,    -1,    -1,     3,     4,     5,   303,    -1,
      -1,    -1,    10,    11,    12,    13,   311,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,   357,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,   942,   943,   944,   389,   390,   391,   392,   393,   394,
       6,     7,     8,     9,   399,    -1,    -1,   958,   959,   960,
      -1,    -1,    -1,    -1,    -1,   410,   411,   412,   413,   414,
     415,    -1,    -1,    -1,    -1,   420,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,   430,    -1,    -1,    -1,    -1,
      46,     6,     7,     8,     9,    -1,    -1,    -1,   443,   444,
     445,   446,   447,   448,  1005,  1006,    -1,  1008,   453,    24,
    1011,  1012,    -1,  1014,    -1,   460,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   470,   471,   472,   473,   474,
     475,    -1,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   488,    -1,    -1,   491,   492,   493,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     505,   506,   507,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    59,   520,   521,   522,   523,   524,
     525,    -1,    67,    68,    -1,   530,    -1,    72,   533,   534,
     535,    33,    34,    35,    36,    37,    81,    82,    83,    41,
      -1,    -1,    -1,    -1,    46,    -1,     3,     4,     5,    -1,
      -1,    -1,   557,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,   588,    41,    42,    43,    44,    45,     6,
       7,     8,     9,   138,   139,    -1,    -1,    14,    -1,   144,
      -1,   146,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,   631,    -1,    -1,    46,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    46,   105,   190,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,   670,    -1,    -1,    -1,    -1,
     215,    -1,    -1,    -1,    -1,    -1,   137,    33,    34,    35,
      36,    37,   143,    39,    40,     6,     7,     8,     9,    -1,
      46,    -1,    -1,    14,    -1,   240,    -1,    -1,    -1,     6,
       7,     8,     9,    24,   165,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,   727,    -1,    -1,    46,    33,    34,    35,    36,
      37,    -1,    39,   278,    41,    -1,    -1,    -1,    -1,    46,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,   294,
      -1,    -1,    -1,   758,    -1,    -1,    -1,    -1,   303,    24,
      -1,    -1,    -1,    -1,   769,    -1,   311,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,   787,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,   802,    -1,    -1,
     805,   806,    -1,   808,    24,    -1,    -1,    -1,   813,   814,
      -1,   816,   357,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,   827,    -1,   829,   830,    46,   832,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   389,   390,   391,    24,    -1,    -1,
       6,     7,     8,     9,   399,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,   410,   411,   412,    24,    46,
      -1,    -1,    -1,    -1,    -1,   420,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,   430,    -1,    -1,    -1,    -1,
      46,     6,     7,     8,     9,    -1,    -1,    -1,   443,   444,
     445,     6,     7,     8,     9,    -1,    -1,    -1,   453,    24,
      -1,    -1,    -1,    -1,    -1,   460,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   470,   471,   472,    33,    34,
      35,    36,    37,    -1,    39,   480,    41,   942,   943,   944,
      -1,    46,   105,   488,    -1,    -1,   491,   492,   493,    -1,
      -1,    -1,    -1,   958,   959,   960,    -1,    -1,    -1,    -1,
     505,   506,   507,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   520,   521,   522,    -1,    -1,
     143,    -1,    24,    -1,    -1,   530,    -1,    36,   533,   534,
     535,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
    1005,  1006,   165,  1008,    46,    -1,  1011,  1012,    -1,  1014,
      59,    -1,   557,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    72,    -1,     6,     7,     8,     9,    -1,
      -1,    80,    81,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,   588,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    24,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
       6,     7,     8,     9,    46,    -1,   631,    -1,    -1,   138,
     139,    -1,    -1,    -1,    -1,   144,    -1,   146,    24,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,     6,     7,     8,     9,    -1,
      46,    -1,    -1,    -1,    -1,   670,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,   105,    -1,    -1,    -1,    46,
      -1,   190,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    -1,    46,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,   215,   137,    -1,    -1,
      -1,    -1,    -1,   143,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,   727,    -1,    33,    34,    35,    36,    37,    -1,
      39,   240,    41,    -1,    -1,   165,    -1,    46,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   256,    39,    -1,
      41,    -1,    -1,   758,    -1,    46,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,   769,    -1,    -1,    14,    -1,   278,
      -1,   692,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   787,   704,    -1,   294,    33,    34,    35,    36,
      37,    -1,    -1,    40,   303,    -1,    -1,   802,    -1,    46,
     805,   806,   311,   808,     6,     7,     8,     9,   813,   814,
      -1,   816,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,   742,   827,    -1,   829,   830,    -1,   832,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    33,
      34,    35,    36,    37,    46,    39,    40,    -1,   357,   105,
      -1,    -1,    46,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,
     389,   137,    -1,   804,    -1,    -1,   807,   143,    -1,    -1,
     399,   812,    39,    40,   815,     6,     7,     8,     9,    -1,
      -1,   410,    -1,    -1,    -1,    -1,    -1,   828,    -1,   165,
     831,   420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   430,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,   443,    46,    -1,   942,   943,   944,
      -1,    -1,    -1,    -1,   453,    -1,    -1,     6,     7,     8,
       9,   460,    -1,   958,   959,   960,    -1,    -1,    -1,    -1,
      -1,   470,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,   480,    -1,    -1,    33,    34,    35,    36,    37,   488,
      39,    40,   491,   492,   493,    -1,    -1,    46,    -1,    -1,
      -1,    33,    34,    35,    36,    37,   505,   506,   507,    41,
    1005,  1006,    -1,  1008,    46,    -1,  1011,  1012,    -1,  1014,
      -1,   520,    -1,    -1,    -1,    -1,   937,   938,   939,    -1,
      -1,   530,    -1,    -1,   533,   534,   535,   948,   949,    -1,
      -1,    -1,   953,   954,   955,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,   964,   965,    -1,    -1,    -1,   557,   970,
     971,   972,   973,   974,    -1,    24,    -1,    -1,   979,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,   692,
     991,    40,     6,     7,     8,     9,    -1,    46,    -1,   588,
      14,   704,    -1,  1004,    -1,    -1,  1007,    -1,  1009,  1010,
      24,    -1,  1013,    -1,  1015,  1016,    -1,    -1,    -1,    33,
      34,    35,    36,    37,     6,     7,     8,     9,    -1,  1030,
    1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,   742,
      -1,    -1,   631,     6,     7,     8,     9,    -1,    -1,  1050,
    1051,    33,    34,    35,    36,    37,    -1,    39,    40,     6,
       7,     8,     9,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      -1,   670,    -1,    46,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,
      -1,   804,    -1,    -1,   807,    -1,    -1,    -1,    -1,   812,
      -1,    -1,   815,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   828,    -1,    -1,   831,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,   727,    14,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,   758,
      -1,    46,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
     769,    -1,   692,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,   704,    -1,    -1,    -1,   787,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,   802,    -1,    -1,   805,   806,    -1,   808,
      -1,    -1,    -1,    -1,   813,   814,    -1,   816,    -1,    -1,
      -1,    -1,   742,    -1,   937,   938,   939,    -1,   827,    -1,
     829,   830,    -1,   832,    -1,   948,   949,    -1,    -1,    -1,
     953,   954,   955,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,   964,   965,    -1,    -1,    -1,    -1,   970,   971,   972,
     973,   974,    -1,    24,    -1,    -1,   979,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,   991,    40,
      -1,    -1,    -1,    -1,   804,    46,    -1,   807,    -1,    -1,
      -1,  1004,   812,    -1,  1007,   815,  1009,  1010,    -1,    -1,
    1013,    -1,  1015,  1016,    -1,    -1,    -1,    -1,   828,    -1,
      -1,   831,    -1,    -1,    -1,    -1,    -1,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,  1037,  1038,  1039,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1050,  1051,     6,
       7,     8,     9,   942,   943,   944,   692,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    24,   704,   958,
     959,   960,     6,     7,     8,     9,    33,    34,    35,    36,
      37,    -1,    -1,    40,    33,    34,    35,    36,    37,    46,
      39,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    33,
      34,    35,    36,    37,    -1,    -1,   742,    41,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,  1005,  1006,    -1,  1008,
      -1,    -1,  1011,  1012,    -1,  1014,    -1,   937,   938,   939,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   948,   949,
      -1,    -1,    -1,   953,   954,   955,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   964,   965,     6,     7,     8,     9,
     970,   971,   972,   973,   974,    -1,    -1,    -1,   804,   979,
      -1,   807,    -1,    -1,    -1,    -1,   812,    -1,    -1,   815,
      -1,   991,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,   828,    -1,  1004,   831,    46,  1007,    -1,  1009,
    1010,    -1,    -1,  1013,    -1,  1015,  1016,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
    1050,  1051,    33,    34,    35,    36,    37,    -1,    39,    40,
      24,     6,     7,     8,     9,    46,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    24,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,   937,   938,   939,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,   948,   949,    -1,    -1,    -1,   953,   954,   955,
      33,    34,    35,    36,    37,    -1,    -1,    40,   964,   965,
      -1,    -1,    -1,    46,   970,   971,   972,   973,   974,    -1,
       3,     4,     5,   979,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,   991,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1004,    -1,
      -1,  1007,    -1,  1009,  1010,    -1,    39,  1013,    41,  1015,
    1016,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,    -1,    -1,    -1,    24,     6,     7,
       8,     9,    -1,    -1,  1050,  1051,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    24,    -1,    -1,    46,
       6,     7,     8,     9,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,     6,     7,     8,     9,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     6,     7,     8,     9,
      46,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       6,     7,     8,     9,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     6,     7,     8,     9,    46,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     6,     7,     8,     9,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     6,     7,
       8,     9,    46,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     6,     7,     8,     9,    46,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,     6,     7,     8,     9,    46,    33,
      34,    35,    36,    37,    -1,    -1,    40,    33,    34,    35,
      36,    37,    46,    -1,    -1,    41,     6,     7,     8,     9,
      46,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
       6,     7,     8,     9,    46,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     6,     7,     8,     9,    46,    33,    34,    35,
      36,    37,    -1,    -1,    40,    33,    34,    35,    36,    37,
      46,    -1,    40,     6,     7,     8,     9,    -1,    46,    33,
      34,    35,    36,    37,    -1,    -1,    40,     6,     7,     8,
       9,    -1,    46,    -1,    -1,     6,     7,     8,     9,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,     6,
       7,     8,     9,    46,    33,    34,    35,    36,    37,    -1,
      -1,    40,    33,    34,    35,    36,    37,    46,    -1,    40,
       6,     7,     8,     9,    -1,    46,    33,    34,    35,    36,
      37,    -1,    -1,    40,     6,     7,     8,     9,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      46,    33,    34,    35,    36,    37,    -1,    -1,    40,     3,
       4,     5,    -1,    -1,    46,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    39,    -1,    41,    42,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,
      41,    42,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    39,    -1,    41,    42,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    39,    -1,    41,    42,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,
      42,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      39,    -1,    41,    42,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    39,    -1,    41,    42,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,    42,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,
      -1,    41,    42,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    39,    -1,    41,    42,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    39,    -1,    41,    42,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,
      41,    42,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    39,    -1,    41,    42,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    39,    -1,    41,    42,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,
      42,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      39,    -1,    41,    42,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    39,    -1,    41,    42,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,    42,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,
      -1,    41,    42,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    39,    -1,    41,    42,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    39,    -1,    41,    42,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,
      41,    42,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    39,    -1,    41,    42,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    39,    -1,    41,    42,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,
      42,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      39,    -1,    41,    42,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    39,    -1,    41,    42,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,    42,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,
      -1,    41,    42,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    39,    -1,    41,    42,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    39,    -1,    41,    42,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,
      41,    42,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    39,    -1,    41,    42,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    39,    -1,    41,    42,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,
      42,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      39,    -1,    41,    42,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    39,    -1,    41,    42,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,    42,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,
      -1,    41,    42,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    39,    -1,    41,    42,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    39,    -1,    41,    42,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,
      41,    42,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    39,    -1,    41,    42,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    39,    -1,    41,    42,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    39,    -1,    41,
      42,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      39,    -1,    41,    42,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    -1,     3,
       4,     5,    28,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    39,    -1,    41,    42,    21,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,    39,    -1,    41,    21,    22,
      23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    -1,    39,    -1,    41,    21,
      22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    -1,    39,    40,    -1,
      21,    22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    -1,    39,    40,
      -1,    21,    22,    23,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    -1,    39,
      40,    -1,    21,    22,    23,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    -1,
      39,    40,    -1,    21,    22,    23,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      -1,    39,    40,    -1,    21,    22,    23,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    -1,    39,    40,    -1,    21,    22,    23,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    -1,    39,    40,    -1,    21,    22,    23,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,    39,    40,    -1,    21,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,    39,    40,    -1,    21,    22,
      23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    -1,    39,    40,    -1,    21,
      22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    -1,    39,    40,    -1,
      21,    22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    -1,    39,    40,
      -1,    21,    22,    23,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    -1,    39,
      40,    -1,    21,    22,    23,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    -1,
      39,    -1,    -1,    21,    22,    23,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      -1,    39,    -1,    -1,    21,    22,    23,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    -1,    39,    -1,    -1,    21,    22,    23,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    -1,    39,    -1,    -1,    21,    22,    23,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,    39,    -1,    -1,    21,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,    39,    -1,    -1,    21,    22,
      23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    -1,    39,    -1,    -1,    21,
      22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    -1,    39,    -1,    -1,
      21,    22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    -1,    39,    -1,
      -1,    21,    22,    23,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    -1,    39,
      -1,    -1,    21,    22,    23,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    -1,
      39,    -1,    -1,    21,    22,    23,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      -1,    39,    -1,    -1,    21,    22,    23,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    -1,    39,    -1,    -1,    21,    22,    23,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,
       9,    -1,    -1,    39,    -1,    14,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    33,    34,
      35,    36,    37,    -1,    39,    -1,    41,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    41,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,    33,    34,    35,    36,    37,    -1,    39,    40,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    33,    34,    35,    36,    37,
      -1,    39,    40,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,    33,    34,    35,    36,    37,    -1,    39,    40,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,    33,    34,    35,    36,    37,
      -1,    39,    40,    33,    34,    35,    36,    37,    -1,    -1,
      40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    33,    34,    35,    36,
      37,    -1,    39,    40,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    33,    34,    35,
      36,    37,    -1,    -1,    40,    33,    34,    35,    36,    37,
      -1,    -1,    40,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    33,    34,
      35,    36,    37,    -1,    -1,    40,    33,    34,    35,    36,
      37,    -1,    -1,    40,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    33,
      34,    35,    36,    37,    -1,    -1,    40,    33,    34,    35,
      36,    37,    -1,    -1,    40,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    33,    34,    35,    36,    37,    -1,    -1,    40,
      33,    34,    35,    36,    37,    -1,    39,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    24,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    24,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    24,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    24,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    24,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    24,    39,     6,     7,     8,
       9,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,     6,     7,     8,     9,    24,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    24,
      39,     6,     7,     8,     9,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,     6,     7,     8,     9,    24,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    33,    34,
      35,    36,    37,    24,    39,    -1,     6,     7,     8,     9,
      24,    -1,    33,    34,    35,    36,    37,    -1,    39,    33,
      34,    35,    36,    37,    24,    39,     6,     7,     8,     9,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
       6,     7,     8,     9,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    24,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    24,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    24,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,     6,     7,     8,     9,    24,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    24,
       6,     7,     8,     9,    24,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    33,    34,    35,    36,    37,    24,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,     6,     7,     8,     9,    24,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    24,     6,     7,     8,     9,    24,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    33,    34,    35,    36,    37,
      24,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,     6,     7,     8,     9,    24,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    33,    34,    35,
      36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    43,    44,    45,    49,    50,    52,    55,    56,
      57,    59,     0,    57,    17,    77,    13,    41,    54,    58,
       3,     4,     5,    10,    11,    12,    13,    15,    16,    18,
      19,    20,    21,    22,    23,    28,    39,    41,    42,    55,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    75,    76,    77,    78,    14,
      39,    41,    39,    39,    39,    13,    13,    39,    39,    39,
      39,    39,    39,    62,    41,    62,    54,    18,    60,    41,
      46,    39,     6,     7,    33,    35,    37,     8,     9,    34,
      36,    14,    67,    13,    40,    51,    52,    53,    55,    71,
      73,    71,    71,    15,    16,    57,    67,    67,    72,    72,
      72,    62,    67,    40,    41,    67,    40,    67,    74,    68,
      68,    69,    69,    69,    70,    70,    70,    70,    67,    40,
      46,    40,    46,    54,    24,    24,    24,    64,    24,    24,
      40,    40,    40,    40,    24,    40,    46,    13,    52,    71,
      71,    71,    64,    67,    67,    64,    67,    67,    40,    40,
      40,    40,    40,    40,    26,    40,    64,    64,    64,    64,
      64,    26,    64,    17,    25,    43,    44,    45,     3,     4,
       5,    10,    11,    12,    13,    15,    16,    21,    22,    23,
      39,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      13,    41,    58,     3,     4,     5,    10,    11,    12,    13,
      15,    16,    21,    22,    23,    39,    65,    66,    68,    69,
      70,    71,    72,    73,    25,    43,    44,    45,     3,     4,
       5,    10,    11,    12,    13,    15,    16,    21,    22,    23,
      39,    65,    66,    72,     3,     4,     5,    10,    11,    12,
      13,    15,    16,    21,    22,    23,    39,    52,    55,    56,
      59,    65,    66,    68,    69,    70,    71,    72,    73,     3,
       4,     5,    13,    15,    16,    21,    22,    23,    39,    65,
      66,    73,     3,     4,     5,    10,    11,    12,    13,    15,
      16,    21,    22,    23,    39,    65,    66,    68,    69,    70,
      71,    72,    73,    46,    39,     3,     4,     5,    13,    15,
      16,    39,    65,    66,    73,    13,    17,    19,    20,    28,
      41,    42,    62,    63,    75,    76,    77,    78,    39,    10,
      11,    12,    72,    17,    19,    20,    28,    41,    42,    62,
      63,    75,    76,    77,    78,     3,     4,     5,    10,    11,
      12,    13,    15,    16,    21,    22,    23,    39,    65,    66,
      68,    69,    70,    71,    72,    73,    17,    19,    20,    28,
      41,    42,    62,    63,    75,    76,    77,    78,    18,    61,
      39,    39,    39,    13,    13,    39,    39,    39,    62,    39,
       6,     7,    33,    35,    37,     8,     9,    34,    36,    14,
      41,    39,    39,    39,    13,    13,    39,    39,    39,    62,
      39,     6,     7,    33,    35,    37,     8,     9,    34,    36,
      14,    39,    39,    39,    13,    13,    39,    39,    39,    62,
      39,    39,    39,    39,    13,    13,    39,    39,    39,    62,
      77,    41,    58,    39,     6,     7,    33,    35,    37,     8,
       9,    34,    36,    14,    13,    13,    39,    39,    39,    62,
      39,    39,    39,    39,    13,    13,    39,    39,    39,    62,
      39,     6,     7,    33,    35,    37,     8,     9,    34,    36,
      14,    67,    40,    51,    53,    13,    13,    62,    39,    18,
      61,    39,    39,    39,    41,    62,    41,    40,    51,    53,
      39,    39,    39,    18,    61,    39,    39,    39,    41,    62,
      41,    39,    39,    39,    13,    13,    39,    39,    39,    62,
      39,     6,     7,    33,    35,    37,     8,     9,    34,    36,
      14,    18,    61,    39,    39,    39,    41,    62,    41,    18,
      71,    71,    71,    15,    16,    72,    72,    72,    40,    40,
      74,     3,     4,     5,    13,    15,    16,    39,    65,    66,
      68,    73,    68,    69,    69,    69,    70,    70,    70,    70,
      67,    71,    71,    71,    15,    16,    72,    72,    72,    40,
      40,    74,     3,     4,     5,    13,    15,    16,    39,    65,
      66,    68,    73,    68,    69,    69,    69,    70,    70,    70,
      70,    67,    71,    71,    71,    15,    16,    72,    72,    72,
      40,    40,    74,    71,    71,    71,    15,    16,    72,    72,
      72,    40,    41,    40,    74,     3,     4,     5,    13,    15,
      16,    39,    65,    66,    68,    73,    68,    69,    69,    69,
      70,    70,    70,    70,    67,    15,    16,    72,    72,    72,
      40,    40,    74,    71,    71,    71,    15,    16,    72,    72,
      72,    40,    40,    74,     3,     4,     5,    13,    15,    16,
      39,    65,    66,    68,    73,    68,    69,    69,    69,    70,
      70,    70,    70,    67,    40,    40,    15,    16,    40,    40,
      74,    18,    57,    67,    67,    62,    67,    41,    40,    40,
      71,    71,    71,    18,    57,    67,    67,    62,    67,    41,
      71,    71,    71,    15,    16,    72,    72,    72,    40,    40,
      74,     3,     4,     5,    13,    15,    16,    39,    65,    66,
      68,    73,    68,    69,    69,    69,    70,    70,    70,    70,
      67,    18,    57,    67,    67,    62,    67,    41,    24,    24,
      24,    40,    40,    40,    40,    13,    13,    62,    39,    24,
      24,    24,    40,    40,    40,    40,    13,    13,    62,    39,
      24,    24,    24,    40,    40,    40,    40,    24,    24,    24,
      40,    40,    40,    40,    13,    13,    62,    39,    40,    40,
      40,    40,    24,    24,    24,    40,    40,    40,    40,    13,
      13,    62,    39,    40,    64,    24,    24,    40,    24,    24,
      24,    24,    64,    24,    24,    40,    24,    24,    24,    24,
      40,    40,    40,    40,    13,    13,    62,    39,    64,    24,
      24,    40,    24,    71,    71,    71,    15,    16,    40,    40,
      74,    71,    71,    71,    15,    16,    40,    40,    74,    71,
      71,    71,    71,    71,    71,    15,    16,    40,    40,    74,
      71,    71,    71,    15,    16,    40,    40,    74,    64,    67,
      67,    17,    19,    20,    28,    41,    42,    62,    63,    64,
      75,    76,    77,    78,    67,    71,    71,    71,    64,    67,
      67,    17,    19,    20,    28,    41,    42,    62,    63,    64,
      75,    76,    77,    78,    67,    71,    71,    71,    15,    16,
      40,    40,    74,    64,    67,    67,    64,    67,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      18,    61,    39,    39,    39,    41,    62,    41,    26,    40,
      40,    40,    40,    40,    40,    40,    18,    61,    39,    39,
      39,    41,    62,    41,    26,    40,    40,    40,    40,    40,
      40,    40,    40,    26,    40,    64,    64,    64,    18,    57,
      67,    67,    62,    67,    41,    64,    64,    64,    64,    64,
      18,    57,    67,    67,    62,    67,    41,    64,    64,    64,
      64,    64,    64,    64,    64,    24,    24,    40,    24,    26,
      64,    24,    24,    40,    24,    26,    26,    64,    67,    67,
      64,    67,    64,    64,    67,    67,    64,    67,    64,    64,
      40,    40,    40,    26,    40,    40,    40,    40,    26,    40,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      26,    26,    64,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    55,    55,    55,    55,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    64,    64,    64,    65,
      65,    65,    66,    66,    66,    66,    66,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    72,    73,
      73,    73,    74,    74,    75,    75,    75,    75,    76,    76,
      76,    77,    77,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     2,     1,     1,
       3,     1,     3,     4,     4,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     2,     3,     1,     1,     1,     2,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     6,     6,     6,     1,     4,     4,     4,     1,
       3,     4,     1,     3,     7,     5,     9,     7,     7,     7,
       7,     2,     3,     2,     3
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
#line 63 "parser/clang.y"
                        {
                            liberar_ast((yyvsp[0].no));
                        }
#line 4114 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 69 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 4122 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 73 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 4131 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 84 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 4140 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 88 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 4146 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 92 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 4154 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 96 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 4163 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 103 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 4172 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 108 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4182 "clang.tab.c"
    break;

  case 13: /* def_declaracao: def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D  */
#line 114 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-1].no);
                            (yyvsp[-3].simbolo)->funcao.parametros_no = novo_no->parametros_no;
                            (yyvsp[-3].simbolo)->funcao.parametros = novo_no->parametros;
                            liberar_ast((yyvsp[-1].no));
                            (yyval.simbolo) = (yyvsp[-3].simbolo);
                        }
#line 4194 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 124 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 4200 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 125 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 4206 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 126 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 4212 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 127 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 4218 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 132 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4227 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 140 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 4236 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 145 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 4245 "clang.tab.c"
    break;

  case 22: /* inicializar_atrib: def_declaracao  */
#line 151 "parser/clang.y"
                                                 { (yyval.simbolo) = (yyvsp[0].simbolo); }
#line 4251 "clang.tab.c"
    break;

  case 23: /* inicializar_atrib: def_declaracao ATRIBUICAO expressao_atribuicao  */
#line 153 "parser/clang.y"
                        {
                            NoAST_Constante *novo_no = (NoAST_Constante*) (yyvsp[0].no);
                            (yyvsp[-2].simbolo)->constante.valor = novo_no->valor;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4261 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 161 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4267 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo inicializar_atrib PONTO_E_VIRGULA  */
#line 163 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracao((yyvsp[-2].tipo_dado), (yyvsp[-1].simbolo));
                            (yyvsp[-1].simbolo)->tag = CONSTANTE;
                            (yyvsp[-1].simbolo)->constante.tipo_dado = (yyvsp[-2].tipo_dado);
                        }
#line 4277 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 170 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4283 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 171 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4289 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 175 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4297 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 179 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4306 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 185 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4312 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 186 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4318 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 189 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4324 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 190 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4330 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 193 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4336 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 194 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4342 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 195 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4348 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 196 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4354 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 197 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4360 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 200 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4366 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 201 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4372 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 202 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4378 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 206 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4386 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 210 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4394 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 214 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4400 "clang.tab.c"
    break;

  case 45: /* expressao_principal: ASPAS_DUPLAS TOKEN_ID ASPAS_DUPLAS  */
#line 216 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4406 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 217 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4412 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_relacional  */
#line 220 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4418 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_chamada ATRIBUICAO expressao_atribuicao  */
#line 222 "parser/clang.y"
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
#line 4446 "clang.tab.c"
    break;

  case 49: /* expressao_relacional: expressao_logica  */
#line 247 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4452 "clang.tab.c"
    break;

  case 50: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 249 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4460 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 253 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4468 "clang.tab.c"
    break;

  case 52: /* expressao_logica: expressao_aritmetica  */
#line 259 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4474 "clang.tab.c"
    break;

  case 56: /* expressao_aritmetica: expressao_conjunto  */
#line 265 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4480 "clang.tab.c"
    break;

  case 57: /* expressao_aritmetica: expressao_conjunto OP_SOMA expressao_aritmetica  */
#line 267 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4488 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto OP_SUBTRACAO expressao_aritmetica  */
#line 271 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4496 "clang.tab.c"
    break;

  case 61: /* expressao_conjunto: expressao_io  */
#line 278 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4502 "clang.tab.c"
    break;

  case 62: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 280 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4510 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 284 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4518 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 288 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4526 "clang.tab.c"
    break;

  case 65: /* expressao_io: expressao_chamada  */
#line 293 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4532 "clang.tab.c"
    break;

  case 66: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 295 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4540 "clang.tab.c"
    break;

  case 67: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 299 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4548 "clang.tab.c"
    break;

  case 68: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 303 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4556 "clang.tab.c"
    break;

  case 69: /* expressao_chamada: expressao_principal  */
#line 308 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4562 "clang.tab.c"
    break;

  case 71: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 311 "parser/clang.y"
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
#line 4590 "clang.tab.c"
    break;

  case 72: /* expressao_lista_param: expressao_atribuicao  */
#line 337 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4598 "clang.tab.c"
    break;

  case 73: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 341 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4607 "clang.tab.c"
    break;

  case 74: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 348 "parser/clang.y"
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
#line 4635 "clang.tab.c"
    break;

  case 75: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 372 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4643 "clang.tab.c"
    break;

  case 76: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 376 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4651 "clang.tab.c"
    break;

  case 77: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 380 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4659 "clang.tab.c"
    break;

  case 78: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 386 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4667 "clang.tab.c"
    break;

  case 79: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 390 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4675 "clang.tab.c"
    break;

  case 80: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 394 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4683 "clang.tab.c"
    break;

  case 81: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 400 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4691 "clang.tab.c"
    break;

  case 82: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 404 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4699 "clang.tab.c"
    break;

  case 83: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 410 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4707 "clang.tab.c"
    break;

  case 84: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 414 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4715 "clang.tab.c"
    break;


#line 4719 "clang.tab.c"

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

#line 419 "parser/clang.y"



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
