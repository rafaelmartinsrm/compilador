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
  YYSYMBOL_lista_inicializar_atrib = 58,   /* lista_inicializar_atrib  */
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
#define YYLAST   10646

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  959

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
     139,   144,   151,   155,   161,   162,   180,   181,   184,   188,
     195,   196,   199,   200,   203,   204,   205,   206,   207,   210,
     211,   212,   215,   219,   223,   225,   227,   230,   231,   257,
     258,   262,   269,   270,   271,   272,   275,   276,   280,   284,
     285,   288,   289,   293,   297,   303,   304,   308,   312,   318,
     319,   320,   346,   350,   357,   381,   385,   389,   395,   399,
     403,   409,   413,   419,   423
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
  "lista_inicializar_atrib", "declaracao_var", "item_bloco",
  "lista_itens_bloco", "expressao", "expressao_declaracao",
  "tipos_expressao", "valores", "expressao_principal",
  "expressao_atribuicao", "expressao_relacional", "expressao_logica",
  "expressao_aritmetica", "expressao_conjunto", "expressao_io",
  "expressao_chamada", "expressao_lista_param", "expressao_decisao",
  "expressao_iteracao", "expressao_composta", "expressao_return", YY_NULLPTR
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

#define YYPACT_NINF (-363)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     848,    66,   437,   532,   589,    21,    18,    14,   598,    29,
      33,    50,  -363,    56,   294,    59,   118,    65,   157,   599,
     698,  2004,  2524,   -11,    58,    77,  2540,   113,   121,    80,
     103,   140,   149,   151,   158,   183,  9460,  2652,  9103,    25,
    2868,  2911,  2960,   657,  3004,  3136,  2692,  3180,   682,   763,
      41,   449,  5507,  5834,   910,  3297,  3340,  3556,  3599,   652,
      96,   229,  9481,  9481,  9481,   263,   265,   419,  9502,  1205,
    1205,  1205,  9523,   581,  3648,   952,   543,   106,  3692,  3824,
    9544,  6370,  9565,  9565,  9565,  9565,  9565,  9565,  9565,  9565,
    9565,  9544,   713,   442,   836,   838,   881,    -1,   916,   247,
     279,   297,   299,  3222,  3236,  8223,   338,   342,   345,   386,
     398,   921,   -10,  3380,  3985,   994,  4883,   955,   980,  1072,
    1233,    45,   198,   366,   792,  1231,  1407,  1578,  1321,   529,
     508,   592,   854,   -14,  9586,  9586,  9586,  8256,  9607,  9607,
    7202,  7243,  7258,  8289,  9607,  5551,  9460,   992,   993,   440,
     483,   531,   534,   588,   597,   150,   615,   997,  7279,  7294,
    7315,  8322,  8322,  8322,  8322,  8289,  4033,  4244,  4304,  4351,
     215,  8322,  4503,  4546,    79,   167,   168,   211,  3868,  3886,
    3927,   509,   533,   625,  4056,   658,   714,   701,   711,   718,
    9460,  4161,  4418,  1015,  1051,    82,     9,  7330,  7338,  5733,
     919,  4942,  1338,   237,   331,   363,   403,    -2,   163,   182,
     721,   739,   743,   310,   776,   817,   793,   802,   804,  9460,
     389,   409,   826, 10122, 10136, 10170,   815,   849,   855, 10184,
     888,   909,   873,   903,   911,  9460,   949,   645,  8355,  8388,
   10218, 10232,   972,    17,  1263,  2492, 10491,  4267,    98,   160,
     301,   397,  1004,  1029,   966,  1005,  1019,  9460,   886,   899,
    1020,   256,   463,   504,  1034,  1035,  1036,   712,  1046,  1063,
    1059,  1060,  1062,  9460,   777,  1160,   227,   242,   523,  5754,
    5799,  4588,  9460,   762,   518,  1071,  1296,  4739,  1101,  1108,
    9460,  6162,  6260,  7373,   476,  5242,  1089,  1091,  1122,  8421,
    9124,  1382,  8454,  8487,  8520,  8553,  8586,   775,  1133,  1134,
    1136,  1147,  5304,  1149,  1163,  1164,  1172,  9145,  1400,  1192,
    1194,  1203,  1211,  1221,  5652,  6025,  6198,  1206,  1224,  1237,
    6451,  1275,  1284,  1262,  1281,  1283,  9460,  6557,  9709,  1298,
      13,   676,  9926,  9934,  9771,  5442,  1300,  1301,  1302,   376,
    9166,  1417,   575,   631,   751,  1137,  1492,  5710,  5929,  9481,
    9481,  9481,  1340,  1337,  1205,  1205,  1205,  1056,  9229,  9628,
    9628,  9628,  9628,  9628,  9628,  9628,  9628,  9628,  9460,  5974,
    9481,  9481,  9481,  1368,  1347,  1205,  1205,  1205,  1069,  9250,
    9481,  9481,  9481,  1383,  1384,  1205,  1205,  1205,  1083,  8619,
    8652,  1427,  9271,  9649,  9649,  9649,  9649,  9649,  9649,  9649,
    9649,  9649,  9502,  1386,  1429,  1205,  1205,  1205,  1085,  9292,
    9481,  9481,  9481,  1439,  1441,  1205,  1205,  1205,  1086,  9313,
    9670,  9670,  9670,  9670,  9670,  9670,  9670,  9670,  9670,  9523,
    1097,   951,  1105,  1124,  1440,  1451,  1131,  9334,  8685,  6080,
     419,  9502,  9523,  8718,  1428,  8751,   782,  1143,  1145,  9481,
    9481,  9481,  1438,  6327,   419,  9502,  9523,  1450,  1460,  1458,
    9481,  9481,  9481,  1476,  1483,  1205,  1205,  1205,  1146,  9355,
    9691,  9691,  9691,  9691,  9691,  9691,  9691,  9691,  9691,  9607,
    1535,  6613,   419,  9502,  9523,  1584,  1478,  1628,  6656,  1505,
    1508,  1517,  4824,  5004,  1502,  1503,  1504,  5067,  6416,  1158,
    4574,  6521,  6851,  6868,  1487,  1536,  9460,  6886,  6903,  1161,
    7387,  1165,   368,   399,   559,   239,   967,  1846,  1860,  1176,
    1538,  1540,  1541,   467,   480,  1526,  1527,  1528,   481,  1545,
    1177,  1546,  1547,  1548, 10266, 10280,  1533,  1542,  1543, 10314,
    8784, 10458,  1193, 10300, 10334, 10348, 10355,  1562,  1568,  9460,
   10369, 10389,  1566, 10505,  1567,   262,   354,   468,  2009,  2356,
    2396,  2697,  1569,   901,   937,  1552,  1574,  1576,  1017,  1577,
    1196,  1594,  1596,  1597,  1310,  1822,  1582,  1590,  1595,  1836,
    4781,  1212,   177,   319,   975,  5120,  1573,  1621,  9460,  5164,
    5185,   323,  6921,   433,   324,   344,   461,   654,   850,  1087,
    1668,   537,   977,   988,  6944,  6962,  6980,  7395,  1213,  8817,
    8223,  1612,  1613,  1214,   583,  8850,   864,   932,  1618,  1633,
    1634,  1619,  8223,  1636,  1637,  1216,   644,  1622,  1639,  1640,
    1641,  9718,  9727,  1626,  1642,  1643,  9762,  9780,  1225,  1992,
    2680,  3368,  9815,  1655,  1666,  9460,  9823,  9831,  1644,  9969,
    1645,   105,   107,   112,  1288,  1800,  1915,  2266,  1650,  1776,
    8223,  1656,  1657,  1235,   757,  1921,  9586,  9586,  9586,  7409,
    7431,  7445,  6998,  1593,  1675,  1238,  9376,  9586,  9586,  9586,
    1669,  1673,  1674,  1676,  9586,  9586,  9586, 10510, 10524, 10543,
   10472,  1684,  1686,  1253,  9397,  1667,  1672,  1677,  1678,  9586,
    9586,  9586,  7016,  7039,  7058,  5392,  1691,  1697,  1308,  9418,
    7453,  8256,  9607,  9607,  8883,  9607,  9586,  9586,  9586,  8256,
    9607,  9607,  8916,  9607,  9586,  9586,  9586,  9977,  9985, 10020,
    9866,  1700,  1704,  1311,  9439,  8256,  9607,  9607,  8289,  9607,
    1681,  1689,  1692,  7080,  7094,  7102,  7467,  1312,  1698,  1699,
    1701,  1702,  1703,  1705, 10403, 10410, 10424, 10557,  1348,  1708,
    1713,  1714,  5330,  5596,  5638,  7137,  1353,  1721,  1722,  1723,
    6699,  1725,  1726,  1727,  7563,  9187,  1480,  7596,  7629,  7662,
    7695,  7728,  7761,  1728,  1742,  1743,  1744,  1745,  1750,  1760,
    6742,  1764,  1766,  1769,    89,  9208,  1481,   261,   306,   491,
     541,   582,   584,  1770,  1771,  1772,  1773,  9875,  9883,  9918,
   10028,  1378,  1774,  1785,  1798,  1964,  1799,  7489,  7503,  7511,
    7525,  1716,  1792,  1817, 10562, 10576, 10595, 10609,  7145,  7180,
    7188,  7223,  8223,  8223,  8223,  7794,  6785,   419,  9502,  9523,
    7827,  1482,  7860,  8223,  8883,  1811,  1814,  1834,  8256,  8256,
    8256,   640,  6828,   419,  9502,  9523,   641,  1484,   653,  8256,
    8916, 10036, 10071, 10079, 10087,  8289,  8289,  8289,  8289,  8289,
    8949,  8982,  9015,  7893,  8223,  1853,  1856,  1403,   821,  7926,
    9048,  7959,  1844,  1845,  1847,   659,  8223,  1864,  1865,  1416,
     835,   662,  1850,   675,  2180,  2223,  2272,  2316,  2464,  8256,
    9607,  9607,  8883,  9607,  8223,  8256,  9607,  9607,  8916,  9607,
    8256,  8289,  1851,  1854,  1858,  7992,  1859,  9081,  1861,  1862,
    1863,   684,  1868,  1869,  2609,  8883,  8883,  8883,  8883,  8883,
    8916,  8916,  8916,  8916,  8916,  8025,  8058,  8091,  8124,  8157,
     703,   800,   840,   860,   880,  8883,  8916,  8190,   883
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,  -363,  -273,    11,  -151,   -26,     1,   255,    -3,
     -30,     2,   -38,  -168,   110,  3966,   371,  1000,  1688,  5408,
    5160,  4658,  4270,  3752,  3064,  2376,  -362,  5306,  5559,    -7,
    5666
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    94,   236,    96,    18,    39,   238,    10,
      19,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   118,    55,    56,    57,
      58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,     8,    11,    13,    78,   358,   509,     8,    11,   202,
     442,     7,   294,    76,   144,   -52,   -52,     7,    -2,   480,
     481,    12,   -39,   403,   404,   307,    -7,   540,    62,   -20,
     -30,    14,    -7,    -3,   457,    98,   -30,   -39,   200,    -8,
     552,   -49,   371,     1,   372,    -8,   373,    82,    83,   -52,
     -21,   -55,   -55,   -49,   -20,   -52,    -4,   580,    -3,   -19,
      97,     2,     3,     4,   105,   -24,   201,   591,   237,   239,
      95,   133,   -20,   -20,   -20,   -21,    -3,    -3,    -3,   -17,
     -81,    -4,   -49,   -17,   -19,   618,   -55,   -49,   369,   370,
     -24,   -55,   -17,   -21,   -21,   -21,   -25,    63,   305,    -4,
      -4,    -4,   -19,   -19,   -19,   -81,   -82,   -17,   -24,   -24,
     -24,   -55,   -55,   -53,   -53,   -32,    64,   648,   -54,   -54,
     -17,   -25,   -49,   -81,   -81,   -81,    65,   449,   -49,   -32,
     322,   -82,   443,    97,    66,   -11,   355,   -39,   -39,   -25,
     -25,   -25,    67,   148,   463,   -55,    73,   -53,    75,   -82,
     -82,   -82,   -54,   -75,   -75,   -75,   458,   -11,   355,   -11,
     -75,   -75,   -75,   -75,   -11,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,    -7,   -75,   164,   491,   -75,    68,
     -18,   -15,   111,   -39,   -39,   -39,   -39,   -41,    69,   -75,
      70,   -75,   -75,   -75,   -75,   -75,    59,    71,   -22,   -41,
     -41,   -39,   -41,   -22,   -53,   -53,   -40,   401,   -18,   -15,
     -39,   -39,   -39,   -39,   -39,   301,   -39,   -39,   -77,   -77,
     -77,   -40,    72,   -39,   -16,   -77,   -77,   -77,   -77,   399,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -53,
     -77,   171,   200,   -77,   -53,   -57,   -57,   318,   430,   431,
     -17,   -47,   -16,   351,   -77,     9,   -77,   -77,   -77,   -77,
     -77,     9,   -39,   -39,   -39,   -39,   -49,   -47,   -55,   -55,
     -39,   134,   -57,   -47,   -57,   351,   -57,   -17,   103,   -57,
     -39,   104,   -49,   -17,    97,   -57,   -55,   -34,   -49,   -39,
     -39,   -39,   -39,   -39,    95,   -39,   -39,    20,    21,    22,
     367,   -34,   -39,   -65,    23,    24,    25,    26,    97,    27,
      28,   173,    29,    30,    31,    32,    33,    34,    95,   174,
      78,   135,    35,   136,   757,   -41,   -41,   -41,   -41,   388,
     -55,   -55,   869,    36,   -42,    37,    38,   175,   176,   177,
     -40,   -40,   768,   -41,   -18,   398,   -75,   -51,   -55,   -42,
     -53,   -53,   -41,   -41,   -41,   -41,   -41,   776,   -41,   -41,
     -53,   -53,   138,   -51,   -55,   -41,   139,   418,   -53,   -51,
     -55,   -18,   -54,   -54,   -55,   -55,   -15,   -18,   -53,   -32,
     -32,   -32,   821,   428,   -53,   140,   -32,   -32,   -32,   -32,
     -53,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     446,   -32,   -32,   -15,   -32,   -53,   -53,   -54,   -55,   -15,
     454,    78,   -54,   -43,   -55,   -32,   -16,   -32,   -32,   -32,
     -32,   -32,   223,   224,   225,    78,   141,   468,   -43,   226,
     227,   228,   229,   -69,   230,   231,   -42,   -42,   142,   -53,
     232,   233,   234,   -16,     1,   -53,   478,   620,   389,   -16,
     -18,   237,   239,    78,   -18,   -52,   -52,   -50,   235,   -12,
     496,   632,     2,     3,     4,   237,   239,   -54,   -54,   -41,
     -41,   -41,   -41,   -50,   -54,   -54,   137,   -41,   -18,   -50,
     158,   -12,    84,   -12,    85,   -54,    86,   -41,   -12,   670,
     -52,   -44,   -54,   237,   239,   -52,   -41,   -41,   -41,   -41,
     -41,   -54,   -41,   -41,   -45,   -46,   -44,   -54,   152,   -41,
     -40,   -40,   -40,   -40,   155,   -11,   -11,   -35,   -40,   -45,
     -46,   147,   -11,   159,   -39,   -39,   -39,   -39,   -40,   -52,
     -52,   -35,   166,   167,   168,   169,   170,   -40,   -40,   -40,
     -40,   -40,   172,   -40,   -40,   -15,   -14,   -52,   359,   -15,
     -40,   -39,   -39,   -39,   -39,   -39,   432,   -39,   433,   -39,
     434,   -48,   623,   -52,   -39,   -54,   -54,   -38,   -14,   -52,
     -14,   160,   360,   -15,   161,   -14,   635,   -48,   -34,   -34,
     -34,   -38,   283,   -48,   -22,   -34,   -34,   -34,   -34,   -22,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -54,
     -34,   -34,   -16,   -34,   673,   -54,   -16,   725,   -36,   -13,
     -37,    16,   846,   305,   -34,    -8,   -34,   -34,   -34,   -34,
     -34,   113,   -36,   -30,   -37,   305,   685,   282,   162,   -30,
     -16,   -13,   862,   -13,   -35,   -35,   -35,   163,   -13,    17,
      60,   -35,   -35,   -35,   -35,    61,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   165,   -35,   -35,    16,   -35,
     -57,   -57,    -8,   305,   361,    92,   -81,   -83,   733,   703,
     -35,   362,   -35,   -35,   -35,   -35,   -35,   203,   -57,   -33,
     -81,   -83,   -52,   -52,   -30,   -82,   400,   -57,   -84,   -57,
     -30,   -57,    93,   -33,   -57,   204,   205,   206,    79,   -82,
     -57,   920,   -84,    80,   -39,   -39,   -39,   -39,   718,   482,
     943,   483,   -39,   484,   322,   -77,   -52,   791,   -42,   -42,
     -42,   -42,   322,   -30,   -75,   811,   -42,   363,   -30,   -78,
     301,   -39,   -39,   -39,   -39,   -39,   -42,   -39,   322,   -39,
     364,   355,   301,   -78,   -39,   -42,   -42,   -42,   -42,   -42,
     365,   -42,   -42,    -5,   -38,   -38,   -38,   366,   -42,    -5,
     380,   -38,   -38,   -38,   -38,   743,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,    92,   -38,   -38,   381,   -38,
     301,   749,   382,   -43,   -43,   -43,   -43,   203,    92,   383,
     -38,   -43,   -38,   -38,   -38,   -38,   -38,   -30,   -57,   -57,
     203,   -43,   441,   -30,   -47,   204,   205,   206,    78,   -47,
     -43,   -43,   -43,   -43,   -43,   456,   -43,   -43,   204,   205,
     206,   -12,   -12,   -43,    78,   -57,   -79,   -57,   -12,   -57,
     384,   318,   385,   -57,   786,   305,   305,   305,   -57,   318,
     -79,   386,   806,   387,   884,   913,   305,   791,   237,   239,
     -61,   322,   322,   322,   390,   318,   -58,   -58,   351,   919,
     896,   -30,   322,   811,   237,   239,   -80,   -30,   355,   355,
     355,   355,   355,     1,   -58,   -30,   129,   305,    -9,   203,
     -80,   -30,   130,   -58,    -9,   -58,   -74,   -58,   391,   305,
     -58,     2,     3,     4,   392,   851,   -58,   204,   205,   206,
     -74,   393,   322,   -14,   -14,   791,   956,   305,   322,   -76,
     -14,   811,   395,   322,   355,   867,   -65,   -65,   -65,   -65,
     -77,   131,   394,   -76,    91,   -43,   -43,   132,   791,   791,
     791,   791,   791,   811,   811,   811,   811,   811,   419,   -69,
     -44,   -44,   396,   -65,   -65,   -65,   -65,   -65,   791,   811,
     397,   -65,   301,   301,   301,   283,   -65,   -23,   -11,   887,
     -11,   143,   -23,   301,   786,   -11,   295,   282,   318,   318,
     318,   -13,   -13,   -58,   -58,   899,   -45,   -45,   -13,   318,
     806,   -40,   -40,   -40,   -40,   351,   351,   351,   351,   351,
     -12,   721,   -12,   114,   301,   -72,   -47,   -12,    80,   -40,
     -58,   -72,   -58,   729,   -58,   415,   301,   -58,   -40,   -40,
     -40,   -40,   -40,   -58,   -40,   -40,   -14,   413,   -14,   318,
     145,   -40,   786,   -14,   301,   318,   146,   -13,   806,   -13,
     318,   351,    -6,   -10,   -13,   -31,   191,   -73,    -6,   -10,
     -31,   745,   414,   -73,   416,   786,   786,   786,   786,   786,
     806,   806,   806,   806,   806,   -30,   -46,   -46,   417,   423,
     -65,   -30,   220,   220,   220,   786,   806,   240,   240,   258,
     258,   258,   274,   420,   421,   422,   424,   -41,   -41,   -41,
     -41,   191,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   -47,   777,   -59,   -59,   788,   507,   -47,   425,   426,
     797,   427,   282,   808,   -41,   -41,   -41,   -41,   -41,   538,
     -41,   -59,   -41,   -51,   444,   282,   822,   -41,   -51,   825,
     -59,   445,   -59,   549,   -59,   578,   589,   -59,   450,   282,
     451,   282,   282,   -59,   258,   258,   258,   -31,   337,   337,
     -36,   -36,   -36,   -31,   337,   612,   191,   -36,   -36,   -36,
     -36,   130,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   452,   -36,   -36,   613,   -36,   -69,   -69,   -69,   -69,
     132,   616,   459,   460,   -69,   461,   -36,   282,   -36,   -36,
     -36,   -36,   -36,   626,   -69,   627,   646,   -61,   464,   130,
     191,   132,   282,   -69,   -69,   -69,   -69,   -69,   682,   429,
     -69,   -51,   465,   466,   146,   -50,   -69,   -51,   248,   249,
     250,   -50,   -32,   880,   881,   882,   -48,   693,   251,   191,
     252,   253,   -48,   146,   890,   891,   254,   255,   256,   892,
     893,   894,   -34,   700,   -35,   191,   708,   -58,   -58,   146,
     902,   903,   146,   -38,   257,   470,   904,   905,   906,   907,
     908,   -36,   715,   720,   724,   909,   732,   191,   146,   146,
     282,   -37,   282,   471,   -58,   740,   -58,   915,   -58,   -52,
     -52,   146,   -58,   191,   -50,   748,   472,   -58,   755,   -50,
     922,   282,   191,   925,   282,   927,   928,   -52,   473,   931,
     191,   933,   934,   766,   -57,   -57,   405,   474,   406,   282,
     407,   475,   -40,   -40,   -40,   -40,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   -44,   -44,   -44,   -44,
     476,   -57,   477,   -57,   -44,   -57,   957,   958,   -57,   -40,
     -40,   -40,   -40,   -40,   -44,   -40,   191,   -40,   -47,   492,
     493,   494,   -40,   -44,   -44,   -44,   -44,   -44,   774,   -44,
     -44,   819,   830,   503,   282,   502,   -44,   282,   146,   220,
     220,   220,   -48,   534,   258,   258,   258,   -48,   191,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   191,   379,
     220,   220,   220,   533,    61,   258,   258,   258,   837,   191,
     220,   220,   220,   841,   146,   258,   258,   258,   544,   146,
     545,   573,   191,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   240,   -59,   -59,   258,   258,   258,   874,   191,
     220,   220,   220,   455,   146,   258,   258,   258,    80,   191,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   274,
     -59,   469,   -59,   912,   -59,   574,    80,   191,   -59,   282,
     240,   240,   274,   -59,   584,   614,   918,   585,   497,   220,
     220,   220,   282,    80,   240,   240,   274,   615,   550,   625,
     220,   220,   220,    61,    80,   258,   258,   258,   -81,   191,
     656,   656,   656,   656,   656,   656,   656,   656,   656,   337,
     -83,   641,   240,   240,   274,   -37,   -37,   -37,   -33,   642,
     683,   637,   -37,   -37,   -37,   -37,    80,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   191,   -37,   -37,   675,
     -37,   852,   868,   889,    80,   901,    80,    80,    80,   676,
      80,   -37,   677,   -37,   -37,   -37,   -37,   -37,   -81,   -81,
     -81,   678,   679,   680,   681,   -81,   -81,   -81,   -81,   684,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   191,
     -81,   -81,   687,   -81,   688,   689,   690,   691,   692,   -70,
     694,   695,   696,   697,   -81,   701,   -81,   -81,   -81,   -81,
     -81,   702,   698,   699,   -60,   -60,   716,   -83,   -83,   -83,
     -51,   -50,   705,   -48,   -83,   -83,   -83,   -83,   191,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   753,   -83,
     -83,   -60,   -83,   -60,   706,   -60,   707,   -70,   709,   -60,
     710,   711,   712,   -83,   -60,   -83,   -83,   -83,   -83,   -83,
     713,   -33,   -33,   -33,   717,   714,   722,   723,   -33,   -33,
     -33,   -33,   726,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   191,   -33,   727,   728,   -82,
     730,   731,   -84,   734,   735,   736,   737,   -33,   741,   -33,
     -33,   -33,   -33,   -33,   -60,   -60,   258,   258,   258,   742,
     746,   747,   738,   739,   -51,   -50,   191,   258,   258,   258,
     -48,   754,   -60,   -68,   258,   258,   258,   -67,   -66,   764,
     -71,   -60,   765,   -60,   191,   -60,   772,   -68,   -60,   258,
     258,   258,   -67,   773,   -60,   817,     0,   -66,   -71,   191,
     818,   827,   337,   337,   192,   337,   258,   258,   258,   828,
     337,   337,   829,   337,   258,   258,   258,     0,   831,   832,
     -62,   833,   834,   835,   191,   836,   337,   337,   838,   337,
     221,   221,   221,   839,   840,   241,   241,   259,   259,   259,
     275,   842,   843,   844,   847,   848,   849,     0,   854,   192,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   -82,
     -82,   -82,   855,   856,   857,   858,   -82,   -82,   -82,   -82,
     859,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     860,   -82,   -82,   863,   -82,   864,   -58,   -58,   865,     0,
     870,   871,   872,   873,   875,   -82,   -63,   -82,   -82,   -82,
     -82,   -82,   259,   259,   259,   876,   338,   338,   -45,   -45,
     -45,   -45,   338,   -58,   192,   -58,   -45,   -58,   877,   879,
     -58,   -64,   -46,   -46,   -46,   -46,   -45,   240,   240,   274,
     -46,   -62,   -59,   -59,   -63,   -45,   -45,   -45,   -45,   -45,
     -46,   -45,   -45,   240,   240,   274,   -60,   -60,   -45,   -46,
     -46,   -46,   -46,   -46,   -64,   -46,   -46,   910,   192,   -59,
     911,   -59,   -46,   -59,   -78,   -79,   -59,   -80,   916,   917,
     -74,   935,   -59,   -60,   936,   -60,     0,   -60,   937,   939,
     -60,   940,   941,   942,     0,     0,   -60,   192,   944,   -76,
     337,   337,     0,   337,     0,     0,   337,   337,     0,   337,
       0,   -59,   -59,   192,   -84,   -84,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   192,   -84,   -84,   -59,   -84,
     -59,     0,   -59,     0,     0,   -59,     0,     0,     0,     0,
     -84,   192,   -84,   -84,   -84,   -84,   -84,   -75,   -75,   -75,
     192,     0,     0,     0,   -75,   -75,   -75,   -75,   192,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     878,     0,   -75,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -41,   -41,   -41,   -41,     0,   -57,   -57,     0,   -41,     0,
       0,     0,     0,     0,   192,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -57,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -57,   -41,   -57,   -41,   -57,   221,   221,   221,
     -41,     0,   259,   259,   259,     0,   192,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   192,     0,   221,   221,
     221,     0,     0,   259,   259,   259,     0,   192,   221,   221,
     221,     0,     0,   259,   259,   259,     0,     0,     0,     0,
     192,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     241,     0,     0,   259,   259,   259,     0,   192,   221,   221,
     221,     0,     0,   259,   259,   259,     0,   192,   600,   600,
     600,   600,   600,   600,   600,   600,   600,   275,     0,     0,
       0,     0,     0,     0,     0,   192,     0,     0,   241,   241,
     275,     0,     0,     0,     0,     0,     0,   221,   221,   221,
       0,     0,   241,   241,   275,     0,     0,     0,   221,   221,
     221,     0,     0,   259,   259,   259,     0,   192,   657,   657,
     657,   657,   657,   657,   657,   657,   657,   338,     0,     0,
     241,   241,   275,   -78,   -78,   -78,     0,     0,     0,     0,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   192,   -78,   -78,     0,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -79,   -79,   -79,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   192,   -79,   -79,
       0,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,     0,
       0,     0,   -60,   -60,     0,   -80,   -80,   -80,     0,     0,
       0,     0,   -80,   -80,   -80,   -80,   192,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -60,
     -80,   -60,     0,   -60,     0,     0,   -60,     0,     0,     0,
       0,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,   -74,
     -74,   -74,     0,     0,     0,     0,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   192,   -74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -58,   -58,   259,   259,   259,     0,     0,     0,
       0,     0,     0,     0,   192,   259,   259,   259,     0,     0,
     -58,     0,   259,   259,   259,     0,     0,     0,     0,   -58,
       0,   -58,   192,   -58,     0,     0,     0,   259,   259,   259,
       0,     0,   -59,   -59,     0,     0,     0,   192,     0,     0,
     338,   338,   199,   338,   259,   259,   259,     0,   338,   338,
     -59,   338,   259,   259,   259,     0,     0,     0,     0,   -59,
       0,   -59,   192,   -59,   338,   338,     0,   338,   100,   100,
     100,     0,     0,   247,   247,   260,   260,   260,   281,     0,
       0,     0,     0,     0,     0,     0,     0,   199,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   -77,   -77,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     921,     0,   -77,     0,     0,     0,     0,     0,   -56,   -56,
     408,   409,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     260,   260,   260,     0,   344,   344,   -56,     0,     0,     0,
     344,     0,   199,     0,     0,   -56,   410,   -56,   411,   -56,
     -40,   -40,   -40,   -40,     0,   241,   241,   275,   -40,     0,
       0,     0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
       0,   241,   241,   275,   -42,     0,     0,   -40,   -40,   -40,
     -40,   -40,     0,   -40,     0,   -40,   199,     0,     0,     0,
     -40,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
       0,   -42,     0,     0,     0,     0,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,   338,   338,
       0,   338,     0,     0,   338,   338,     0,   338,     0,     0,
       0,   199,   -76,   -76,   -76,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   199,   -76,   -76,     0,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,   199,
     -76,   -76,   -76,   -76,   -76,   -32,   -32,   -32,   199,     0,
       0,     0,   -32,   -32,   -32,   -32,   199,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
     -32,     0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
       0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -43,   -43,
     -43,   -43,     0,   -60,   -60,     0,   -43,     0,     0,     0,
       0,     0,   199,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -60,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -60,   -43,   -60,   -43,   -60,   100,   100,   100,   -43,     0,
     260,   260,   260,     0,   199,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   199,     0,   100,   100,   100,     0,
       0,   260,   260,   260,     0,   199,   100,   100,   100,     0,
       0,   260,   260,   260,     0,     0,     0,     0,   199,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   247,     0,
       0,   260,   260,   260,     0,   199,   100,   100,   100,     0,
       0,   260,   260,   260,     0,   199,   602,   602,   602,   602,
     602,   602,   602,   602,   602,   281,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,   247,   247,   281,     0,
       0,     0,     0,     0,     0,   100,   100,   100,     0,     0,
     247,   247,   281,     0,     0,     0,   100,   100,   100,     0,
       0,   260,   260,   260,     0,   199,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   344,     0,     0,   247,   247,
     281,   -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   199,   -26,     0,     0,   -26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -28,   -28,   -28,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   199,   -28,     0,     0,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,     0,    20,    21,    22,     0,     0,     0,     0,
      23,    24,    25,    26,   199,    27,    28,   173,    77,    30,
      31,    32,    33,    34,     0,   174,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,   175,   176,   177,     0,   -34,   -34,   -34,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,   199,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,     0,   260,   260,   260,     0,     0,     0,     0,     0,
       0,     0,   199,   260,   260,   260,     0,     0,     0,     0,
     260,   260,   260,     0,     0,     0,     0,     0,     0,     0,
     199,     0,     0,     0,     0,   260,   260,   260,     0,     0,
       0,     0,     0,     0,     0,   199,     0,     0,   344,   344,
     198,   344,   260,   260,   260,     0,   344,   344,     0,   344,
     260,   260,   260,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   344,   344,     0,   344,   222,   222,   222,     0,
       0,   246,   246,   108,   109,   110,   280,     0,     0,   -27,
     -27,   -27,     0,     0,     0,   198,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,     0,     0,   -27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -69,     0,     0,     0,   311,   311,
     311,     0,   343,   343,     0,     0,     0,     0,   343,     0,
     198,     0,     0,   -69,   -69,   -69,   -69,   -69,     0,    81,
       0,   -69,     0,   247,   247,   281,   -69,     0,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,   -44,     0,     0,   247,
     247,   281,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
     -45,     0,     0,     0,   198,   -44,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,     0,     0,     0,     0,   -44,   -45,
     -45,   -45,   -45,   -45,     0,   -45,     0,   -45,     0,     0,
       0,     0,   -45,   198,     0,     0,   344,   344,     0,   344,
       0,     0,   344,   344,     0,   344,     0,     0,     0,   198,
     -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   198,   -35,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   198,   -35,   -35,
     -35,   -35,   -35,   -38,   -38,   -38,   198,     0,     0,     0,
     -38,   -38,   -38,   -38,   198,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,     0,   -38,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,   -38,
       0,   -38,   -38,   -38,   -38,   -38,   -46,   -46,   -46,   -46,
       0,     0,     0,     0,   -46,     0,     0,     0,     0,     0,
     198,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,   -46,     0,   222,   222,   222,   -46,     0,   504,   505,
     506,     0,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,     0,   222,   222,   222,     0,     0,   535,
     536,   537,     0,   198,   222,   222,   222,     0,     0,   546,
     547,   548,     0,     0,     0,     0,   198,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,     0,     0,   575,
     576,   577,     0,   198,   222,   222,   222,     0,     0,   586,
     587,   588,     0,   198,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,   246,   246,   280,     0,     0,     0,
       0,     0,     0,   222,   222,   222,     0,     0,   246,   246,
     280,     0,     0,     0,   222,   222,   222,     0,     0,   643,
     644,   645,     0,   198,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,     0,     0,   246,   246,   280,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     198,   -36,     0,     0,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -37,   -37,   -37,     0,     0,     0,     0,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   198,   -37,     0,     0,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,     0,     0,     0,     0,   -83,   -83,
     -83,   -83,   198,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,     0,     0,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,     0,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,   198,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,     0,
     311,   311,   311,     0,     0,     0,     0,     0,     0,     0,
     198,   311,   311,   311,     0,     0,     0,     0,   311,   311,
     311,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,   311,   311,   311,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,   343,   343,   197,   343,
     311,   311,   311,     0,   343,   343,     0,   343,   311,   311,
     311,     0,     0,     0,     0,     0,     0,     0,   198,     0,
     343,   343,     0,   343,    99,   101,   102,     0,     0,   245,
     245,     0,     0,     0,   279,     0,     0,   -33,   -33,   -33,
       0,     0,     0,   197,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,     0,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,   -39,     0,     0,     0,   149,   150,   151,     0,
     342,   342,   -41,   -41,   -41,   -41,   342,     0,   197,     0,
     -41,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,     0,
       0,   246,   246,   280,   -39,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   246,   246,   280,
       0,     0,   -41,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,   -40,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,     0,
       0,   197,     0,   -40,   343,   343,     0,   343,     0,     0,
     343,   343,     0,   343,     0,     0,     0,   197,   -84,   -84,
     -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   197,
     -84,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,   197,   -84,   -84,   -84,   -84,
     -84,     0,     0,     0,   197,     0,   -78,   -78,   -78,     0,
       0,     0,   197,   -78,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,     0,
       0,   -78,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
     -42,   302,   -78,     0,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   319,     0,     0,     0,     0,     0,   352,
       0,   499,   500,   501,     0,     0,     0,     0,     0,     0,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   352,   530,   531,   532,     0,     0,     0,     0,     0,
       0,   197,   541,   542,   543,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   197,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,     0,     0,   -43,   -43,   -43,
     -43,   197,   581,   582,   583,   -43,     0,     0,     0,     0,
       0,   197,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,     0,     0,   -43,   -43,   -43,   -43,   -43,   197,
     -43,   -43,   245,   245,   279,     0,     0,   -43,     0,     0,
       0,   628,   629,   630,     0,     0,   245,   245,   279,     0,
       0,     0,   638,   639,   640,     0,     0,     0,     0,     0,
       0,   197,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,     0,     0,   245,   245,   279,   -79,   -79,   -79,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   197,   -79,
       0,     0,   -79,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   412,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,
       0,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,     0,   196,   -80,   -80,   -80,
       0,   197,     0,     0,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
       0,     0,   -80,     0,     0,     0,     0,   244,   244,     0,
       0,     0,   278,   -80,     0,   -80,   -80,   -80,   -80,   -80,
     197,   196,     0,     0,   -74,   -74,   -74,   124,   125,   126,
     127,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -74,     0,     0,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -74,     0,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   197,   341,   341,
       0,     0,     0,     0,   341,     0,   196,     0,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   750,   751,
     752,     0,   -69,     0,     0,     0,     0,     0,   197,   758,
     759,   760,     0,     0,     0,     0,   761,   762,   763,     0,
       0,   -69,   -69,   -69,   -69,   -69,   197,   368,   -69,     0,
     196,   769,   770,   771,   -69,     0,     0,     0,     0,     0,
       0,   197,     0,     0,   342,   342,     0,   342,   794,   795,
     796,     0,   342,   342,     0,   342,   814,   815,   816,   196,
       0,     0,     0,     0,     0,     0,   197,     0,   342,   342,
       0,   342,     0,     0,     0,   196,   -76,   -76,   -76,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   196,   -76,     0,
       0,   -76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,   196,   -76,   -76,   -76,   -76,   -76,    20,
      21,    22,   196,     0,     0,     0,    23,    24,    25,    26,
     196,    27,    28,   173,   357,    30,    31,    32,    33,    34,
       0,   174,     0,     0,    35,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,     0,    36,   302,    37,    38,   175,
     176,   177,     0,     0,   -65,   -65,   -65,   -65,   302,   245,
     245,   279,   439,     0,     0,     0,   196,   -39,   -39,   -39,
     -39,   -39,   -65,   -39,   -39,   245,   245,   279,     0,     0,
     -39,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,     0,
       0,     0,     0,     0,   -65,     0,   302,     0,   196,   196,
     196,   196,   196,   196,   525,   526,   527,   528,   196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,   342,   342,     0,   342,     0,     0,   342,   342,
       0,   342,   196,   244,   244,   244,   244,   244,   568,   569,
     570,   571,   244,     0,     0,     0,     0,   319,     0,   196,
     787,     0,     0,     0,   195,   319,     0,     0,   807,   196,
     278,   278,   278,   278,   278,   607,   608,   609,   610,   278,
       0,   319,     0,     0,   352,     0,     0,   196,     0,     0,
     244,   244,   278,     0,     0,   243,   243,     0,     0,     0,
     277,     0,     0,     0,   244,   244,   278,     0,     0,   195,
       0,     0,   121,   122,   123,   -42,   -42,   -42,   -42,   196,
     341,   341,   341,   341,   341,   664,   665,   666,   667,   341,
       0,     0,   244,   244,   278,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,
     -42,     0,     0,     0,     0,   -42,   196,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -70,   340,   340,     0,     0,
       0,     0,   340,     0,   195,   -70,     0,     0,   302,   302,
     302,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   302,
     787,   -70,     0,     0,   319,   319,   319,   -70,     0,   196,
     -44,   -44,   -44,   -44,     0,   319,   807,     0,   -44,     0,
       0,   352,   352,   352,   352,   352,     0,     0,   195,     0,
     302,     0,     0,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,   302,   -44,   -44,     0,     0,     0,   196,     0,
     -44,     0,     0,     0,     0,   319,     0,   195,   787,     0,
     302,   319,     0,     0,   807,     0,   319,   352,     0,   -70,
     -70,   -70,   -70,   195,     0,     0,     0,   -70,     0,     0,
       0,   787,   787,   787,   787,   787,   807,   807,   807,   807,
     807,     0,     0,     0,     0,   195,   -70,   -70,   -70,   -70,
     -70,   787,   807,     0,   -70,   196,     0,     0,     0,   -70,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
     195,     0,     0,     0,     0,   -24,   -24,   -24,   195,     0,
       0,     0,   -24,   -24,   -24,   -24,   196,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,
     -24,     0,     0,     0,   196,     0,     0,     0,     0,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   196,
       0,     0,   341,   341,   195,   341,     0,     0,     0,     0,
     341,   341,     0,   341,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,   196,     0,   341,   341,   -45,   341,
       0,     0,     0,     0,     0,     0,   195,   195,   195,   522,
     523,   524,     0,     0,     0,     0,   195,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,     0,     0,   195,     0,     0,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   243,   243,   565,   566,   567,     0,     0,     0,     0,
     243,     0,     0,   -46,   -46,   -46,   -46,   195,     0,     0,
       0,   -46,     0,     0,     0,     0,     0,   195,   277,   277,
     604,   605,   606,     0,     0,     0,     0,   277,     0,     0,
     -46,   -46,   -46,   -46,   -46,   195,   -46,   -46,   243,   243,
     277,     0,     0,   -46,     0,     0,     0,   244,   244,   278,
       0,     0,   243,   243,   277,     0,   -42,   -42,   -42,   -42,
       0,     0,     0,   244,   244,   278,     0,   195,   340,   340,
     661,   662,   663,     0,   -42,     0,     0,   340,     0,     0,
     243,   243,   277,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,     0,     0,     0,   -42,     0,     0,     0,
     -43,   -43,   -43,   -43,   195,     0,     0,     0,     0,     0,
     341,   341,     0,   341,     0,     0,   341,   341,   -43,   341,
       0,   -69,   -69,   -69,   -69,     0,   194,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,     0,     0,     0,     0,   -69,
     -43,     0,     0,     0,     0,     0,     0,   195,   -69,   -69,
     -69,   -69,   -69,     0,   719,   -69,     0,   242,   242,     0,
       0,   -69,   276,     0,     0,     0,     0,     0,     0,     0,
       0,   194,   119,   120,     0,    20,    21,    22,     0,     0,
       0,     0,    23,    24,    25,    26,   195,    27,    28,   173,
     448,    30,    31,    32,    33,    34,     0,   174,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   339,   339,
       0,     0,     0,     0,   339,     0,   194,    20,    21,    22,
       0,     0,     0,   195,    23,    24,    25,    26,     0,    27,
      28,   173,   462,    30,    31,    32,    33,    34,     0,   174,
       0,     0,    35,     0,     0,     0,   -44,   -44,   -44,   -44,
       0,     0,     0,    36,   195,    37,    38,   175,   176,   177,
     194,     0,     0,     0,   -44,     0,     0,     0,     0,     0,
       0,     0,   195,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,     0,     0,     0,     0,     0,   -44,   195,     0,   194,
     340,   340,     0,   340,     0,     0,     0,     0,   340,   340,
       0,   340,     0,     0,     0,   194,     0,     0,   -71,   -71,
     -71,   -71,   195,     0,   340,   340,   -71,   340,     0,     0,
       0,   303,     0,     0,     0,     0,   -71,   194,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -71,   194,     0,     0,     0,     0,   -71,     0,
       0,     0,   194,   320,   193,    20,    21,    22,     0,   353,
     194,     0,    23,    24,    25,    26,     0,    27,    28,   173,
     490,    30,    31,    32,    33,    34,     0,   174,     0,     0,
      35,   353,     0,     0,     0,   106,   107,     0,     0,     0,
     112,    36,     0,    37,    38,   175,   176,   177,   115,   117,
       0,     0,     0,     0,     0,     0,   194,     0,     0,   128,
       0,     0,     0,     0,     0,   243,   243,   277,     0,     0,
       0,     0,     0,   -56,   -56,    87,    88,     0,     0,     0,
       0,   243,   243,   277,     0,     0,     0,     0,   194,   519,
     521,     0,     0,     0,     0,     0,     0,     0,   194,     0,
     -56,    89,   -56,    90,   -56,     0,   153,   154,   -56,   194,
       0,     0,   156,   -56,   157,     0,     0,   -71,   -71,   -71,
     -71,     0,   194,   562,   564,   -71,     0,     0,   340,   340,
       0,   340,   242,     0,   340,   340,     0,   340,     0,   194,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   194,
     601,   603,   -71,     0,     0,     0,     0,   -71,   193,   276,
       0,     0,   -45,   -45,   -45,   -45,     0,   194,     0,     0,
     242,   242,   276,     0,     0,     0,     0,     0,     0,     0,
     -45,     0,     0,     0,   242,   242,   276,   193,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,     0,     0,   194,
     658,   660,   -45,   193,   -46,   -46,   -46,   -46,     0,   339,
       0,     0,   242,   242,   276,     0,     0,     0,   -39,   -39,
     -39,   -39,   -46,     0,   304,   193,   -39,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,   194,   -46,   -46,     0,
       0,   193,     0,     0,   -46,   -39,   -39,   -39,   -39,   -39,
     440,   -39,   -39,     0,     0,     0,   321,     0,   193,     0,
       0,     0,   354,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,     0,     0,     0,   194,
     -81,   -81,   -81,   -81,   354,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,     0,     0,   -81,   -65,
     -65,   -65,   -65,     0,   193,     0,     0,   378,     0,   -81,
       0,   -81,   -81,   -81,   -81,   -81,     0,     0,   194,     0,
     -56,   -56,   435,   436,     0,     0,   -65,   -65,   -65,   -65,
     -65,   306,     0,   -65,     0,     0,   117,     0,   -56,   -65,
       0,     0,     0,     0,     0,     0,   529,   -56,   437,   -56,
     438,   -56,     0,     0,   -56,     0,     0,   117,     0,     0,
     -56,     0,     0,   323,     0,   -61,   -61,   -61,   -61,   356,
     117,     0,     0,     0,     0,   194,     0,     0,     0,     0,
     572,     0,     0,   -61,     0,     0,     0,   117,     0,     0,
       0,   356,   -61,   -61,   -61,   -61,   -61,   117,     0,   -61,
     -61,   -61,   -61,   -61,     0,   -61,   194,   611,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,   621,   622,
     624,     0,     0,     0,   194,     0,     0,   -61,   -61,   -61,
     -61,   -61,   633,   634,   636,   -61,     0,     0,     0,   194,
     -61,     0,   339,   339,     0,   339,     0,   117,     0,     0,
     339,   339,     0,   339,     0,     0,     0,   668,     0,     0,
     671,   672,   674,     0,   194,     0,   339,   339,     0,   339,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   193,     0,   303,     0,     0,     0,
       0,     0,    20,    21,    22,     0,     0,     0,   303,    23,
      24,    25,    26,     0,    27,    28,   173,   498,    30,    31,
      32,    33,    34,     0,   174,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,    36,     0,
      37,    38,   175,   176,   177,     0,   303,   -25,   -25,   -25,
       0,     0,     0,     0,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,     0,   -25,     0,     0,     0,   193,   242,   242,   276,
       0,     0,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,
       0,     0,     0,   242,   242,   276,     0,   320,     0,     0,
     789,   -41,   -41,   -41,   -41,   320,     0,     0,   809,   -41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   320,     0,     0,   353,     0,     0,     0,   -41,   -41,
     -41,   -41,   -41,   193,   -41,   -41,     0,     0,     0,     0,
     339,   339,     0,   339,     0,     0,   339,   339,     0,   339,
       0,     0,     0,    20,    21,    22,     0,     0,     0,     0,
      23,    24,    25,    26,   117,    27,    28,   173,   619,    30,
      31,    32,    33,    34,     0,   174,     0,     0,    35,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,   175,   176,   177,     0,   117,     0,     0,
     778,   779,     0,   793,     0,     0,     0,     0,   798,   799,
       0,   813,     0,     0,     0,     0,     0,     0,   303,   303,
     303,     0,   117,     0,   823,   824,     0,   826,     0,   303,
     789,     0,     0,     0,   320,   320,   320,     0,   -43,   -43,
     -43,   -43,     0,     0,     0,   320,   809,     0,     0,   304,
       0,   353,   353,   353,   353,   353,     0,     0,     0,     0,
     303,   304,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   303,   -43,   -40,   -40,   -40,   -40,   -43,     0,
       0,     0,   -40,     0,     0,   320,     0,     0,   789,     0,
     303,   320,     0,     0,   809,     0,   320,   353,     0,   304,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,
       0,   789,   789,   789,   789,   789,   809,   809,   809,   809,
     809,     0,     0,     0,     0,   885,   886,   888,     0,     0,
       0,   789,   809,     0,     0,     0,   -69,   -69,   -69,   -69,
       0,   897,   898,   900,     0,     0,     0,     0,     0,     0,
     321,     0,     0,   790,     0,     0,   306,     0,   321,     0,
       0,   810,     0,   -69,   -69,   -69,   -69,   -69,   306,   447,
       0,   -69,     0,     0,   321,     0,   -69,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   923,   924,
       0,   926,     0,     0,   929,   930,     0,   932,     0,     0,
      20,    21,    22,     0,     0,     0,   306,    23,    24,    25,
      26,     0,    27,    28,   173,   631,    30,    31,    32,    33,
      34,     0,   174,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    37,    38,
     175,   176,   177,   178,   179,   180,     0,     0,     0,     0,
     181,   182,   183,   184,     0,   185,   186,   323,     0,     0,
     792,   187,   188,   189,     0,   323,     0,     0,   812,     0,
       0,   304,   304,   304,     0,     0,     0,     0,     0,   190,
     116,   323,   304,   790,   356,     0,     0,   321,   321,   321,
       0,     0,   -70,   -70,   -70,   -70,     0,     0,   321,   810,
     -70,     0,     0,     0,   354,   354,   354,   354,   354,     0,
       0,     0,     0,   304,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,     0,   304,   -70,   -42,   -42,   -42,
     -42,     0,   -70,     0,     0,   -42,     0,     0,   321,     0,
       0,   790,     0,   304,   321,     0,     0,   810,     0,   321,
     354,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,     0,     0,   790,   790,   790,   790,   790,   810,
     810,   810,   810,   810,     0,     0,     0,     0,   306,   306,
     306,     0,     0,     0,   790,   810,     0,     0,     0,   306,
     792,     0,     0,     0,   323,   323,   323,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,   323,   812,     0,     0,     0,
       0,   356,   356,   356,   356,   356,     0,     0,     0,     0,
     306,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   306,   -43,   -43,   -43,   -43,   -41,     0,     0,
       0,   -43,     0,     0,     0,   323,     0,     0,   792,     0,
     306,   323,     0,     0,   812,     0,   323,   356,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,
       0,   792,   792,   792,   792,   792,   812,   812,   812,   812,
     812,     0,     0,     0,     0,     0,    20,    21,    22,     0,
       0,   792,   812,    23,    24,    25,    26,     0,    27,    28,
     173,   669,    30,    31,    32,    33,    34,     0,   174,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    37,    38,   175,   176,   177,   -82,
     -82,   -82,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
       0,   -82,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,     0,   -82,   -82,   -82,
     -82,   -82,    20,    21,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,    27,    28,   173,   845,    30,    31,
      32,    33,    34,     0,   174,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      37,    38,   175,   176,   177,    20,    21,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    27,    28,   173,
     861,    30,    31,    32,    33,    34,     0,   174,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,   175,   176,   177,    20,    21,
      22,     0,     0,     0,     0,    23,    24,    25,    26,     0,
      27,    28,   173,   883,    30,    31,    32,    33,    34,     0,
     174,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    37,    38,   175,   176,
     177,    20,    21,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,   173,   895,    30,    31,    32,
      33,    34,     0,   174,     0,     0,    35,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,    36,     0,    37,
      38,   175,   176,   177,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -43,   -43,   -43,   -43,     0,   -40,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -69,
     -69,   -69,   -69,     0,   -42,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -65,   -65,   -65,
     -65,     0,   -43,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,     0,   686,   -69,     0,   -65,     0,     0,     0,   -69,
     -44,   -44,   -44,   -44,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -65,     0,     0,     0,     0,     0,   -65,   -45,   -45,
     -45,   -45,     0,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,     0,   -44,   -46,   -46,   -46,   -46,
     -44,     0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
       0,   -45,     0,   -45,   -71,   -71,   -71,   -71,   -45,     0,
       0,     0,   -71,   -46,   -46,   -46,   -46,   -46,     0,   -46,
       0,   -46,   -68,   -68,   -68,   -68,   -46,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,     0,
     -68,     0,     0,     0,   -71,   -67,   -67,   -67,   -67,   -68,
     -68,   -68,   -68,   -68,     0,     0,   -68,     0,     0,     0,
       0,     0,   -68,   -67,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,     0,     0,   -67,
       0,     0,   -66,     0,     0,   -67,   -44,   -44,   -44,   -44,
       0,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,     0,
     -45,   -45,   -45,   -45,   -66,     0,     0,     0,   -46,   -46,
     -46,   -46,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,     0,     0,     0,     0,     0,   -44,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -46,   -46,   -46,   -46,   -46,
     -45,   -46,   -46,   -70,   -70,   -70,   -70,     0,   -46,     0,
       0,   -62,   -62,   -62,   -62,     0,     0,     0,     0,     0,
       0,   -70,     0,     0,     0,     0,     0,     0,     0,   -62,
     -70,   -70,   -70,   -70,   -70,     0,     0,   -70,   -62,   -62,
     -62,   -62,   -62,   -70,     0,   -62,   -63,   -63,   -63,   -63,
       0,   -62,     0,     0,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -63,     0,     0,     0,   -68,   -68,
     -68,   -68,   -64,   -63,   -63,   -63,   -63,   -63,     0,     0,
     -63,   -64,   -64,   -64,   -64,   -64,   -63,     0,   -64,   -71,
     -71,   -71,   -71,     0,   -64,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -68,     0,     0,     0,   -71,   -68,   -67,
     -67,   -67,   -67,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -71,   -66,   -66,   -66,   -66,     0,   -71,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,   -67,   -62,   -62,   -62,   -62,   -67,
       0,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,   -66,
     -63,   -63,   -63,   -63,   -66,     0,     0,     0,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
     -62,   -64,   -64,   -64,   -64,   -62,     0,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,   -63,   -56,   -56,   374,   375,
     -63,     0,     0,     0,   -61,   -61,   -61,   -61,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -64,     0,     0,     0,
       0,   -64,     0,   -56,   376,   -56,   377,   -56,     0,     0,
     -56,   -61,   -61,   -61,   -61,   -61,   -56,     0,   -61,   -65,
     -65,   -65,   -65,     0,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,     0,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,   -65,   -68,   -68,   -68,   -68,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -65,   -70,   -70,
     -70,   -70,   -70,   -65,     0,     0,   -70,   -67,   -67,   -67,
     -67,   -70,   -68,   -68,   -68,   -68,   -68,     0,     0,   -68,
       0,   -66,   -66,   -66,   -66,   -68,     0,     0,     0,   -71,
     -71,   -71,   -71,     0,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -67,     0,   -70,   -70,   -70,   -70,   -67,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -66,   -71,   -71,   -71,   -71,
     -71,   -66,     0,     0,   -71,   -62,   -62,   -62,   -62,   -71,
     -70,   -70,   -70,   -70,   -70,     0,     0,   -70,     0,   -63,
     -63,   -63,   -63,   -70,     0,     0,     0,   -64,   -64,   -64,
     -64,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
       0,   -71,   -71,   -71,   -71,   -62,   -63,   -63,   -63,   -63,
     -63,     0,     0,   -63,   -64,   -64,   -64,   -64,   -64,   -63,
       0,   -64,     0,     0,     0,     0,     0,   -64,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -71,   -32,   -32,   -32,     0,
       0,   -71,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
       0,   -32,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -32,     0,   -32,   -32,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,     0,   -34,     0,     0,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -34,     0,   -34,   -34,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,     0,   853,     0,   -75,     0,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -75,     0,
     -75,   -75,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,
     -35,     0,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,   -35,     0,   -35,   -35,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,     0,   -38,     0,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,   -38,     0,   -38,   -38,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,     0,   -36,     0,   -36,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,   -36,     0,   -36,
     -36,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -37,     0,   -37,   -37,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,     0,     0,
     -81,     0,   -81,     0,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,   -81,     0,   -81,   -81,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,
     -83,     0,     0,   -83,     0,   -83,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,   -83,     0,   -83,   -83,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,     0,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -33,
       0,   -33,   -33,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,     0,   -82,   -82,   -82,   -82,   -82,     0,     0,   -82,
       0,   -82,     0,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -82,     0,   -82,   -82,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
       0,     0,   -84,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,   -77,   -77,   -77,   -84,     0,   -84,   -84,   -77,
     -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,
     -77,   -77,   -77,     0,     0,   914,     0,   -77,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -77,     0,
     -77,   -77,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,     0,     0,   938,     0,
     -75,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -75,     0,   -75,   -75,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,     0,
       0,   -78,     0,   -78,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -78,     0,   -78,   -78,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,     0,     0,   -79,     0,   -79,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -79,     0,   -79,
     -79,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,     0,     0,   -80,     0,   -80,
       0,     0,     0,     0,     0,     0,     0,   -74,   -74,   -74,
     -80,     0,   -80,   -80,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,     0,     0,
     -74,     0,   -74,     0,     0,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -74,     0,   -74,   -74,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,     0,     0,   955,     0,   -77,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -77,     0,   -77,   -77,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -76,     0,   -76,     0,
       0,     0,     0,     0,     0,     0,    20,    21,    22,   -76,
       0,   -76,   -76,    23,    24,    25,    26,     0,    27,    28,
     295,     0,   296,   297,    32,    33,    34,     0,     0,     0,
       0,   298,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,    36,     0,   299,   300,    23,    24,    25,    26,
       0,    27,    28,   312,     0,   313,   314,    32,    33,    34,
       0,     0,     0,     0,   315,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    36,     0,   316,   317,    23,
      24,    25,    26,     0,    27,    28,   345,     0,   346,   347,
      32,    33,    34,     0,     0,     0,     0,   348,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    36,     0,
     349,   350,    23,    24,    25,    26,     0,    27,    28,   173,
       0,    30,    31,    32,    33,    34,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,   -20,   -20,
     -20,    36,     0,    37,    38,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,   -20,     0,     0,     0,     0,     0,     0,
       0,   -21,   -21,   -21,   -20,     0,   -20,   -20,   -21,   -21,
     -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,     0,     0,     0,     0,   -21,     0,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,   -21,     0,   -21,
     -21,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
       0,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -32,     0,   -32,   -32,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -34,     0,   -34,   -34,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,   -38,   -38,   -38,   -35,     0,   -35,   -35,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,     0,
       0,     0,     0,     0,     0,     0,   -36,   -36,   -36,   -38,
       0,   -38,   -38,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,   -36,     0,     0,     0,     0,     0,     0,     0,   -37,
     -37,   -37,   -36,     0,   -36,   -36,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,   -37,     0,     0,     0,     0,     0,
       0,     0,   -19,   -19,   -19,   -37,     0,   -37,   -37,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,     0,   -19,   -19,
     -19,   -19,   -19,     0,     0,     0,     0,   -19,     0,     0,
       0,     0,     0,     0,     0,   -24,   -24,   -24,   -19,     0,
     -19,   -19,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
     -24,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -24,     0,   -24,   -24,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,   -81,     0,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -81,     0,   -81,   -81,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -83,     0,   -83,
     -83,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,
       0,     0,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -33,     0,   -33,   -33,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -25,     0,   -25,   -25,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -82,     0,   -82,   -82,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,     0,     0,     0,    20,    21,    22,   -84,
       0,   -84,   -84,    23,    24,    25,    26,     0,    27,    28,
     780,     0,   781,   782,    32,    33,    34,     0,     0,     0,
       0,   783,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,    36,     0,   784,   785,    23,    24,    25,    26,
       0,    27,    28,   800,     0,   801,   802,    32,    33,    34,
       0,     0,     0,     0,   803,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,   -78,    36,     0,   804,   805,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,     0,     0,     0,     0,   -78,     0,     0,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -78,     0,
     -78,   -78,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
       0,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,
     -79,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,   -79,     0,   -79,   -79,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -80,     0,   -80,   -80,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,     0,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,   -74,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -74,     0,   -74,
     -74,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,     0,    20,    21,    22,   -76,
       0,     0,     0,    23,    24,    25,    26,     0,    27,    28,
     -76,     0,   -76,   -76,    32,    33,    34,    20,    21,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,     0,    36,     0,    74,    32,    33,    34,    20,    21,
      22,     0,     0,     0,     0,    23,    24,    25,    26,     0,
      27,    28,     0,    36,     0,   453,    32,    33,    34,    20,
      21,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,     0,    36,     0,   467,    32,    33,    34,
      20,    21,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,    27,    28,     0,    36,     0,   495,    32,    33,
      34,    20,    21,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,     0,    36,     0,   850,    32,
      33,    34,   178,   179,   180,     0,     0,     0,     0,   181,
     182,   183,   184,     0,   185,   186,     0,    36,     0,   866,
     187,   188,   189,   178,   179,   180,     0,     0,     0,     0,
     181,   182,   183,   184,     0,   185,   186,     0,   190,   508,
       0,   187,   188,   189,   178,   179,   180,     0,     0,     0,
       0,   181,   182,   183,   184,     0,   185,   186,     0,   190,
     539,     0,   187,   188,   189,   178,   179,   180,     0,     0,
       0,     0,   181,   182,   183,   184,     0,   185,   186,     0,
     190,   551,     0,   187,   188,   189,   178,   179,   180,     0,
       0,     0,     0,   181,   182,   183,   184,     0,   185,   186,
       0,   190,   579,     0,   187,   188,   189,   178,   179,   180,
       0,     0,     0,     0,   181,   182,   183,   184,     0,   185,
     186,     0,   190,   590,     0,   187,   188,   189,   178,   179,
     180,     0,     0,     0,     0,   181,   182,   183,   184,     0,
     185,   186,     0,   190,   617,     0,   187,   188,   189,   178,
     179,   180,     0,     0,     0,     0,   181,   182,   183,   184,
       0,   185,   186,     0,   190,   647,     0,   187,   188,   189,
     178,   179,   180,     0,     0,     0,     0,   181,   182,   183,
     184,     0,   185,   186,     0,   190,   756,     0,   187,   188,
     189,   178,   179,   180,     0,     0,     0,     0,   181,   182,
     183,   184,     0,   185,   186,     0,   190,   767,     0,   187,
     188,   189,   178,   179,   180,     0,     0,     0,     0,   181,
     182,   183,   184,     0,   185,   186,     0,   190,   775,     0,
     187,   188,   189,   178,   179,   180,     0,     0,     0,     0,
     181,   182,   183,   184,     0,   185,   186,     0,   190,   820,
       0,   187,   188,   189,   207,   208,   209,     0,     0,     0,
       0,   210,   211,   212,   213,     0,   214,   215,     0,   190,
       0,     0,   216,   217,   218,   223,   224,   225,     0,     0,
       0,     0,   226,   227,   228,   229,     0,   230,   231,     0,
     219,     0,     0,   232,   233,   234,   261,   262,   263,     0,
       0,     0,     0,   264,   265,   266,   267,     0,   268,   269,
       0,   235,     0,     0,   270,   271,   272,    20,    21,    22,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,     0,   273,     0,     0,    32,    33,    34,   284,   285,
     286,     0,     0,     0,     0,    23,    24,    25,   287,     0,
     288,   289,     0,    36,     0,     0,    32,    33,    34,   248,
     249,   250,     0,     0,     0,     0,   308,   309,   310,   251,
       0,   252,   253,     0,   290,     0,     0,   254,   255,   256,
     324,   325,   326,     0,     0,     0,     0,   327,   328,   329,
     330,     0,   331,   332,     0,   257,     0,     0,   333,   334,
     335,   510,   511,   512,     0,     0,     0,     0,   181,   182,
     183,   513,     0,   514,   515,     0,   336,     0,     0,   187,
     188,   189,   553,   554,   555,     0,     0,     0,     0,   226,
     227,   228,   556,     0,   557,   558,     0,   516,     0,     0,
     232,   233,   234,   592,   593,   594,     0,     0,     0,     0,
     264,   265,   266,   595,     0,   596,   597,     0,   559,     0,
       0,   270,   271,   272,   649,   650,   651,     0,     0,     0,
       0,   327,   328,   329,   652,     0,   653,   654,     0,   598,
       0,     0,   333,   334,   335,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,   -69,   -44,   -44,   -44,   -44,     0,     0,
     655,     0,   -44,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,   -45,   -69,   -69,   -69,   -69,   -69,     0,   479,   -69,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,   -46,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   489,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -70,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,     0,   -65,   -65,   -65,   -65,   -65,     0,
       0,   -65,     0,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -70,   -42,   -42,   -42,   -42,     0,     0,     0,     0,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -69,   -69,   -69,   -69,   -69,     0,
     744,   -69,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
     -71,   -44,   -44,   -44,   -44,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -71,     0,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,   -56,   -56,   485,   486,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,     0,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -56,
     487,   -56,   488,   -56,     0,     0,   -56,   -61,   -61,   -61,
     -61,   -61,     0,     0,   -61,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,
     -68,   -68,   -68,   -68,   -68,     0,     0,   -68,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -66,   -70,   -70,   -70,   -70,   -70,     0,     0,   -70,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -62,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,   -64,   -64,   -64,   -64,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -64,   -64,   -64,   -64,   -64,     0,     0,   -64,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,   -39,     0,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -39,     0,     0,     0,
     -41,     0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -41,   -39,     0,     0,     0,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,   -40,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -40,     0,     0,     0,   -42,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   -42,   -40,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,   -43,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -43,     0,     0,     0,   -69,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -69,   -43,     0,     0,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
       0,   402,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
     -44,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
     -44,     0,     0,     0,   -45,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -45,   -44,   -39,   -39,   -39,   -39,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -46,   -46,   -46,   -46,   -39,     0,     0,     0,   -46,     0,
       0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -46,   -39,
     -41,   -41,   -41,   -41,     0,     0,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -40,   -40,   -40,   -40,   -41,     0,
       0,   -42,   -42,   -42,   -42,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -40,   -41,     0,   -43,   -43,   -43,   -43,   -42,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -42,   -42,
     -42,   -42,   -42,   -43,   -42,   -69,   -69,   -69,   -69,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -44,
     -44,   -44,   -44,   -69,     0,     0,   -45,   -45,   -45,   -45,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -44,   704,     0,
     -46,   -46,   -46,   -46,   -45,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -45,   -45,   -45,   -45,   -45,   -46,   -45,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -70,     0,     0,     0,   -71,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -71,   -61,   -61,   -61,
     -61,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
       0,   -65,   -65,   -65,   -65,   -61,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -65,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -68,   -68,   -68,   -68,   -68,   -67,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,     0,   -70,   -70,   -70,   -70,   -66,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -70,   -63,   -63,   -63,   -63,   -62,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -62,   -62,   -62,   -62,   -62,
     -63,   -64,   -64,   -64,   -64,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,     0,   -71,   -71,   -71,   -71,   -64,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71
};

static const yytype_int16 yycheck[] =
{
       7,     0,     0,     6,    42,   173,   368,     6,     6,    39,
     283,     0,    13,    39,    24,     6,     7,     6,     0,     6,
       7,     0,    24,     6,     7,    39,    40,   389,    39,     0,
      40,    17,    46,     0,   307,    61,    46,    39,    13,    40,
     402,    24,    33,    25,    35,    46,    37,     6,     7,    40,
       0,     6,     7,    40,    25,    46,     0,   419,    25,     0,
      59,    43,    44,    45,    67,     0,    41,   429,    67,    67,
      59,    97,    43,    44,    45,    25,    43,    44,    45,    13,
       0,    25,    41,    17,    25,   447,    41,    46,     6,     7,
      25,    46,    13,    43,    44,    45,     0,    39,   105,    43,
      44,    45,    43,    44,    45,    25,     0,    41,    43,    44,
      45,     6,     7,     6,     7,    26,    39,   479,     6,     7,
      41,    25,    40,    43,    44,    45,    13,   295,    46,    40,
     137,    25,   283,   132,    13,    17,   143,    39,    40,    43,
      44,    45,    39,   132,   312,    40,    36,    40,    38,    43,
      44,    45,    40,     3,     4,     5,   307,    39,   165,    41,
      10,    11,    12,    13,    46,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    17,    25,    26,   345,    28,    39,
      13,    13,    72,     6,     7,     8,     9,    24,    39,    39,
      39,    41,    42,    43,    44,    45,    39,    39,    41,    39,
      40,    24,    39,    46,     6,     7,    24,   237,    41,    41,
      33,    34,    35,    36,    37,   105,    39,    40,     3,     4,
       5,    39,    39,    46,    13,    10,    11,    12,    13,   236,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    41,
      25,    26,    13,    28,    46,     6,     7,   137,     6,     7,
      13,    24,    41,   143,    39,     0,    41,    42,    43,    44,
      45,     6,     6,     7,     8,     9,    24,    40,     6,     7,
      14,    24,    33,    46,    35,   165,    37,    40,    15,    40,
      24,    16,    40,    46,   283,    46,    24,    26,    46,    33,
      34,    35,    36,    37,   283,    39,    40,     3,     4,     5,
     190,    40,    46,    24,    10,    11,    12,    13,   307,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   307,    25,
     358,    24,    28,    24,   686,     6,     7,     8,     9,   219,
       6,     7,    26,    39,    24,    41,    42,    43,    44,    45,
      39,    40,   704,    24,    13,   235,    40,    24,    24,    39,
       6,     7,    33,    34,    35,    36,    37,   719,    39,    40,
       6,     7,    24,    40,    40,    46,    24,   257,    24,    46,
      46,    40,     6,     7,     6,     7,    13,    46,    24,     3,
       4,     5,   744,   273,    40,    40,    10,    11,    12,    13,
      46,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     290,    25,    26,    40,    28,     6,     7,    41,    40,    46,
     300,   449,    46,    24,    46,    39,    13,    41,    42,    43,
      44,    45,     3,     4,     5,   463,    40,   317,    39,    10,
      11,    12,    13,    24,    15,    16,    39,    40,    40,    40,
      21,    22,    23,    40,    25,    46,   336,   450,    39,    46,
      13,   450,   450,   491,    17,     6,     7,    24,    39,    17,
     350,   464,    43,    44,    45,   464,   464,     6,     7,     6,
       7,     8,     9,    40,     6,     7,   105,    14,    41,    46,
      40,    39,    33,    41,    35,    24,    37,    24,    46,   492,
      41,    24,    24,   492,   492,    46,    33,    34,    35,    36,
      37,    40,    39,    40,    24,    24,    39,    46,   137,    46,
       6,     7,     8,     9,   143,    39,    40,    26,    14,    39,
      39,    13,    46,    40,     6,     7,     8,     9,    24,     6,
       7,    40,   161,   162,   163,   164,   165,    33,    34,    35,
      36,    37,   171,    39,    40,    13,    17,    24,    39,    17,
      46,    33,    34,    35,    36,    37,    33,    39,    35,    41,
      37,    24,   452,    40,    46,     6,     7,    26,    39,    46,
      41,    40,    39,    41,    40,    46,   466,    40,     3,     4,
       5,    40,    39,    46,    41,    10,    11,    12,    13,    46,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    40,
      25,    26,    13,    28,   494,    46,    17,    24,    26,    17,
      26,    13,   780,   620,    39,    17,    41,    42,    43,    44,
      45,    40,    40,    40,    40,   632,   516,    46,    40,    46,
      41,    39,   800,    41,     3,     4,     5,    40,    46,    41,
      41,    10,    11,    12,    13,    46,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    40,    25,    26,    13,    28,
       6,     7,    17,   670,    39,    13,    26,    26,    24,   559,
      39,    13,    41,    42,    43,    44,    45,    25,    24,    26,
      40,    40,     6,     7,    40,    26,    41,    33,    26,    35,
      46,    37,    40,    40,    40,    43,    44,    45,    41,    40,
      46,    26,    40,    46,     6,     7,     8,     9,   598,    33,
      26,    35,    14,    37,   721,    40,    40,   724,     6,     7,
       8,     9,   729,    41,    40,   732,    14,    13,    46,    26,
     620,    33,    34,    35,    36,    37,    24,    39,   745,    41,
      39,   748,   632,    40,    46,    33,    34,    35,    36,    37,
      39,    39,    40,    40,     3,     4,     5,    39,    46,    46,
      39,    10,    11,    12,    13,   655,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    13,    25,    26,    39,    28,
     670,    24,    39,     6,     7,     8,     9,    25,    13,    13,
      39,    14,    41,    42,    43,    44,    45,    40,     6,     7,
      25,    24,    40,    46,    41,    43,    44,    45,   846,    46,
      33,    34,    35,    36,    37,    40,    39,    40,    43,    44,
      45,    39,    40,    46,   862,    33,    26,    35,    46,    37,
      13,   721,    39,    41,   724,   842,   843,   844,    46,   729,
      40,    39,   732,    39,   847,    24,   853,   854,   847,   847,
      24,   858,   859,   860,    39,   745,     6,     7,   748,    24,
     863,    40,   869,   870,   863,   863,    26,    46,   875,   876,
     877,   878,   879,    25,    24,    40,    40,   884,    40,    25,
      40,    46,    46,    33,    46,    35,    26,    37,    39,   896,
      40,    43,    44,    45,    39,   785,    46,    43,    44,    45,
      40,    13,   909,    39,    40,   912,    26,   914,   915,    26,
      46,   918,    39,   920,   921,   805,     6,     7,     8,     9,
      40,    40,    13,    40,    14,    39,    40,    46,   935,   936,
     937,   938,   939,   940,   941,   942,   943,   944,    39,    40,
      39,    40,    39,    33,    34,    35,    36,    37,   955,   956,
      39,    41,   842,   843,   844,    39,    46,    41,    39,   849,
      41,    40,    46,   853,   854,    46,    17,    46,   858,   859,
     860,    39,    40,     6,     7,   865,    39,    40,    46,   869,
     870,     6,     7,     8,     9,   875,   876,   877,   878,   879,
      39,   620,    41,    41,   884,    40,    24,    46,    46,    24,
      33,    46,    35,   632,    37,    39,   896,    40,    33,    34,
      35,    36,    37,    46,    39,    40,    39,    13,    41,   909,
      40,    46,   912,    46,   914,   915,    46,    39,   918,    41,
     920,   921,    40,    40,    46,    41,    36,    40,    46,    46,
      46,   670,    13,    46,    39,   935,   936,   937,   938,   939,
     940,   941,   942,   943,   944,    40,    39,    40,    39,    13,
      40,    46,    62,    63,    64,   955,   956,    67,    68,    69,
      70,    71,    72,    39,    39,    39,    13,     6,     7,     8,
       9,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    40,   721,     6,     7,   724,    40,    46,    39,    39,
     729,    39,    46,   732,    33,    34,    35,    36,    37,    40,
      39,    24,    41,    41,    13,    46,   745,    46,    46,   748,
      33,    13,    35,    40,    37,    40,    40,    40,    39,    46,
      39,    46,    46,    46,   134,   135,   136,    40,   138,   139,
       3,     4,     5,    46,   144,    40,   146,    10,    11,    12,
      13,    46,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    39,    25,    26,    40,    28,     6,     7,     8,     9,
      46,    40,    39,    39,    14,    39,    39,    46,    41,    42,
      43,    44,    45,    40,    24,    40,    40,    40,    39,    46,
     190,    46,    46,    33,    34,    35,    36,    37,    40,    39,
      40,    40,    39,    39,    46,    40,    46,    46,     3,     4,
       5,    46,    40,   842,   843,   844,    40,    40,    13,   219,
      15,    16,    46,    46,   853,   854,    21,    22,    23,   858,
     859,   860,    40,    40,    40,   235,    40,     6,     7,    46,
     869,   870,    46,    40,    39,    39,   875,   876,   877,   878,
     879,    40,    40,    40,    40,   884,    40,   257,    46,    46,
      46,    40,    46,    39,    33,    40,    35,   896,    37,     6,
       7,    46,    41,   273,    41,    40,    39,    46,    40,    46,
     909,    46,   282,   912,    46,   914,   915,    24,    13,   918,
     290,   920,   921,    40,     6,     7,    33,    13,    35,    46,
      37,    39,     6,     7,     8,     9,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,     6,     7,     8,     9,
      39,    33,    39,    35,    14,    37,   955,   956,    40,    33,
      34,    35,    36,    37,    24,    39,   336,    41,    40,    39,
      39,    39,    46,    33,    34,    35,    36,    37,    40,    39,
      40,    40,    40,    16,    46,    15,    46,    46,    46,   359,
     360,   361,    41,    16,   364,   365,   366,    46,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,    41,
     380,   381,   382,    15,    46,   385,   386,   387,    40,   389,
     390,   391,   392,    40,    46,   395,   396,   397,    15,    46,
      16,    15,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,     6,     7,   415,   416,   417,    40,   419,
     420,   421,   422,    41,    46,   425,   426,   427,    46,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
      33,    41,    35,    40,    37,    16,    46,   447,    41,    46,
     450,   451,   452,    46,    15,    15,    40,    16,    41,   459,
     460,   461,    46,    46,   464,   465,   466,    16,    41,    41,
     470,   471,   472,    46,    46,   475,   476,   477,    40,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
      40,    15,   492,   493,   494,     3,     4,     5,    40,    16,
      13,    41,    10,    11,    12,    13,    46,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   516,    25,    26,    41,
      28,    41,    41,    41,    46,    41,    46,    46,    46,    24,
      46,    39,    24,    41,    42,    43,    44,    45,     3,     4,
       5,    24,    40,    40,    40,    10,    11,    12,    13,    13,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   559,
      25,    26,    24,    28,    24,    24,    40,    40,    40,    24,
      24,    24,    24,    40,    39,    13,    41,    42,    43,    44,
      45,    13,    40,    40,     6,     7,    13,     3,     4,     5,
      24,    24,    40,    24,    10,    11,    12,    13,   598,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    15,    25,
      26,    33,    28,    35,    40,    37,    40,    40,    24,    41,
      24,    24,    40,    39,    46,    41,    42,    43,    44,    45,
      40,     3,     4,     5,    13,    40,    24,    24,    10,    11,
      12,    13,    24,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,   655,    28,    24,    24,    40,
      24,    24,    40,    24,    24,    24,    40,    39,    13,    41,
      42,    43,    44,    45,     6,     7,   676,   677,   678,    13,
      24,    24,    40,    40,    40,    40,   686,   687,   688,   689,
      40,    16,    24,    24,   694,   695,   696,    24,    24,    15,
      24,    33,    16,    35,   704,    37,    15,    40,    40,   709,
     710,   711,    40,    16,    46,    15,    -1,    40,    40,   719,
      16,    40,   722,   723,    36,   725,   726,   727,   728,    40,
     730,   731,    40,   733,   734,   735,   736,    -1,    40,    40,
      24,    40,    40,    40,   744,    40,   746,   747,    40,   749,
      62,    63,    64,    40,    40,    67,    68,    69,    70,    71,
      72,    40,    40,    40,    39,    39,    39,    -1,    40,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     3,
       4,     5,    40,    40,    40,    40,    10,    11,    12,    13,
      40,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      40,    25,    26,    39,    28,    39,     6,     7,    39,    -1,
      40,    40,    40,    40,    40,    39,    24,    41,    42,    43,
      44,    45,   134,   135,   136,    40,   138,   139,     6,     7,
       8,     9,   144,    33,   146,    35,    14,    37,    40,    40,
      40,    24,     6,     7,     8,     9,    24,   847,   848,   849,
      14,    40,     6,     7,    40,    33,    34,    35,    36,    37,
      24,    39,    40,   863,   864,   865,     6,     7,    46,    33,
      34,    35,    36,    37,    40,    39,    40,    24,   190,    33,
      24,    35,    46,    37,    40,    40,    40,    40,    24,    24,
      40,    40,    46,    33,    40,    35,    -1,    37,    40,    40,
      40,    40,    40,    40,    -1,    -1,    46,   219,    40,    40,
     910,   911,    -1,   913,    -1,    -1,   916,   917,    -1,   919,
      -1,     6,     7,   235,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   257,    25,    26,    33,    28,
      35,    -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      39,   273,    41,    42,    43,    44,    45,     3,     4,     5,
     282,    -1,    -1,    -1,    10,    11,    12,    13,   290,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    39,    -1,    41,    42,    43,    44,    45,
       6,     7,     8,     9,    -1,     6,     7,    -1,    14,    -1,
      -1,    -1,    -1,    -1,   336,    33,    34,    35,    36,    37,
      -1,    39,    40,    24,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    33,    39,    35,    41,    37,   359,   360,   361,
      46,    -1,   364,   365,   366,    -1,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,    -1,   380,   381,
     382,    -1,    -1,   385,   386,   387,    -1,   389,   390,   391,
     392,    -1,    -1,   395,   396,   397,    -1,    -1,    -1,    -1,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,    -1,    -1,   415,   416,   417,    -1,   419,   420,   421,
     422,    -1,    -1,   425,   426,   427,    -1,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,   450,   451,
     452,    -1,    -1,    -1,    -1,    -1,    -1,   459,   460,   461,
      -1,    -1,   464,   465,   466,    -1,    -1,    -1,   470,   471,
     472,    -1,    -1,   475,   476,   477,    -1,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,    -1,    -1,
     492,   493,   494,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   516,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   559,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,     6,     7,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,   598,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,    33,
      28,    35,    -1,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    26,   655,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     6,     7,   676,   677,   678,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   686,   687,   688,   689,    -1,    -1,
      24,    -1,   694,   695,   696,    -1,    -1,    -1,    -1,    33,
      -1,    35,   704,    37,    -1,    -1,    -1,   709,   710,   711,
      -1,    -1,     6,     7,    -1,    -1,    -1,   719,    -1,    -1,
     722,   723,    36,   725,   726,   727,   728,    -1,   730,   731,
      24,   733,   734,   735,   736,    -1,    -1,    -1,    -1,    33,
      -1,    35,   744,    37,   746,   747,    -1,   749,    62,    63,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    39,    -1,    41,    42,    43,    44,    45,
     134,   135,   136,    -1,   138,   139,    24,    -1,    -1,    -1,
     144,    -1,   146,    -1,    -1,    33,    34,    35,    36,    37,
       6,     7,     8,     9,    -1,   847,   848,   849,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,   863,   864,   865,    14,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,   190,    -1,    -1,    -1,
      46,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,   910,   911,
      -1,   913,    -1,    -1,   916,   917,    -1,   919,    -1,    -1,
      -1,   235,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   257,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,   273,
      41,    42,    43,    44,    45,     3,     4,     5,   282,    -1,
      -1,    -1,    10,    11,    12,    13,   290,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    39,    -1,    41,    42,    43,    44,    45,     6,     7,
       8,     9,    -1,     6,     7,    -1,    14,    -1,    -1,    -1,
      -1,    -1,   336,    33,    34,    35,    36,    37,    -1,    39,
      40,    24,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      33,    39,    35,    41,    37,   359,   360,   361,    46,    -1,
     364,   365,   366,    -1,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,    -1,   380,   381,   382,    -1,
      -1,   385,   386,   387,    -1,   389,   390,   391,   392,    -1,
      -1,   395,   396,   397,    -1,    -1,    -1,    -1,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,    -1,
      -1,   415,   416,   417,    -1,   419,   420,   421,   422,    -1,
      -1,   425,   426,   427,    -1,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   447,    -1,    -1,   450,   451,   452,    -1,
      -1,    -1,    -1,    -1,    -1,   459,   460,   461,    -1,    -1,
     464,   465,   466,    -1,    -1,    -1,   470,   471,   472,    -1,
      -1,   475,   476,   477,    -1,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,    -1,    -1,   492,   493,
     494,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   516,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   559,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,   598,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,   655,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,   676,   677,   678,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   686,   687,   688,   689,    -1,    -1,    -1,    -1,
     694,   695,   696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     704,    -1,    -1,    -1,    -1,   709,   710,   711,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   719,    -1,    -1,   722,   723,
      36,   725,   726,   727,   728,    -1,   730,   731,    -1,   733,
     734,   735,   736,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     744,    -1,   746,   747,    -1,   749,    62,    63,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    81,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,   134,   135,
     136,    -1,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
     146,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    -1,   847,   848,   849,    46,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,   863,
     864,   865,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,   190,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    46,   219,    -1,    -1,   910,   911,    -1,   913,
      -1,    -1,   916,   917,    -1,   919,    -1,    -1,    -1,   235,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   257,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,   273,    41,    42,
      43,    44,    45,     3,     4,     5,   282,    -1,    -1,    -1,
      10,    11,    12,    13,   290,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    39,
      -1,    41,    42,    43,    44,    45,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
     336,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    -1,   359,   360,   361,    46,    -1,   364,   365,
     366,    -1,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,    -1,   380,   381,   382,    -1,    -1,   385,
     386,   387,    -1,   389,   390,   391,   392,    -1,    -1,   395,
     396,   397,    -1,    -1,    -1,    -1,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,    -1,    -1,   415,
     416,   417,    -1,   419,   420,   421,   422,    -1,    -1,   425,
     426,   427,    -1,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   447,    -1,    -1,   450,   451,   452,    -1,    -1,    -1,
      -1,    -1,    -1,   459,   460,   461,    -1,    -1,   464,   465,
     466,    -1,    -1,    -1,   470,   471,   472,    -1,    -1,   475,
     476,   477,    -1,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,    -1,    -1,   492,   493,   494,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     516,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   559,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,   598,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,   655,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
     676,   677,   678,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     686,   687,   688,   689,    -1,    -1,    -1,    -1,   694,   695,
     696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   704,    -1,
      -1,    -1,    -1,   709,   710,   711,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   719,    -1,    -1,   722,   723,    36,   725,
     726,   727,   728,    -1,   730,   731,    -1,   733,   734,   735,
     736,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   744,    -1,
     746,   747,    -1,   749,    62,    63,    64,    -1,    -1,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    81,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,   134,   135,   136,    -1,
     138,   139,     6,     7,     8,     9,   144,    -1,   146,    -1,
      14,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,   847,   848,   849,    46,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,   863,   864,   865,
      -1,    -1,    46,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,   219,    -1,    46,   910,   911,    -1,   913,    -1,    -1,
     916,   917,    -1,   919,    -1,    -1,    -1,   235,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   257,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,   273,    41,    42,    43,    44,
      45,    -1,    -1,    -1,   282,    -1,     3,     4,     5,    -1,
      -1,    -1,   290,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    28,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,   105,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    46,   137,    -1,    -1,    -1,    -1,    -1,   143,
      -1,   359,   360,   361,    -1,    -1,    -1,    -1,    -1,    -1,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   165,   380,   381,   382,    -1,    -1,    -1,    -1,    -1,
      -1,   389,   390,   391,   392,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,    -1,    -1,     6,     7,     8,
       9,   419,   420,   421,   422,    14,    -1,    -1,    -1,    -1,
      -1,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,    -1,    -1,    33,    34,    35,    36,    37,   447,
      39,    40,   450,   451,   452,    -1,    -1,    46,    -1,    -1,
      -1,   459,   460,   461,    -1,    -1,   464,   465,   466,    -1,
      -1,    -1,   470,   471,   472,    -1,    -1,    -1,    -1,    -1,
      -1,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,    -1,    -1,   492,   493,   494,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   516,    25,
      -1,    -1,    28,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    36,     3,     4,     5,
      -1,   559,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    39,    -1,    41,    42,    43,    44,    45,
     598,    81,    -1,    -1,     3,     4,     5,    87,    88,    89,
      90,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   655,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,   676,   677,
     678,    -1,    14,    -1,    -1,    -1,    -1,    -1,   686,   687,
     688,   689,    -1,    -1,    -1,    -1,   694,   695,   696,    -1,
      -1,    33,    34,    35,    36,    37,   704,    39,    40,    -1,
     190,   709,   710,   711,    46,    -1,    -1,    -1,    -1,    -1,
      -1,   719,    -1,    -1,   722,   723,    -1,   725,   726,   727,
     728,    -1,   730,   731,    -1,   733,   734,   735,   736,   219,
      -1,    -1,    -1,    -1,    -1,    -1,   744,    -1,   746,   747,
      -1,   749,    -1,    -1,    -1,   235,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   257,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,   273,    41,    42,    43,    44,    45,     3,
       4,     5,   282,    -1,    -1,    -1,    10,    11,    12,    13,
     290,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    39,   620,    41,    42,    43,
      44,    45,    -1,    -1,     6,     7,     8,     9,   632,   847,
     848,   849,    14,    -1,    -1,    -1,   336,    33,    34,    35,
      36,    37,    24,    39,    40,   863,   864,   865,    -1,    -1,
      46,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    46,    -1,   670,    -1,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   389,
      -1,    -1,   910,   911,    -1,   913,    -1,    -1,   916,   917,
      -1,   919,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,    -1,    -1,    -1,    -1,   721,    -1,   419,
     724,    -1,    -1,    -1,    36,   729,    -1,    -1,   732,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
      -1,   745,    -1,    -1,   748,    -1,    -1,   447,    -1,    -1,
     450,   451,   452,    -1,    -1,    67,    68,    -1,    -1,    -1,
      72,    -1,    -1,    -1,   464,   465,   466,    -1,    -1,    81,
      -1,    -1,    84,    85,    86,     6,     7,     8,     9,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
      -1,    -1,   492,   493,   494,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    -1,    46,   516,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,   146,    24,    -1,    -1,   842,   843,
     844,    -1,    -1,    -1,    33,    34,    35,    36,    37,   853,
     854,    40,    -1,    -1,   858,   859,   860,    46,    -1,   559,
       6,     7,     8,     9,    -1,   869,   870,    -1,    14,    -1,
      -1,   875,   876,   877,   878,   879,    -1,    -1,   190,    -1,
     884,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,   896,    39,    40,    -1,    -1,    -1,   598,    -1,
      46,    -1,    -1,    -1,    -1,   909,    -1,   219,   912,    -1,
     914,   915,    -1,    -1,   918,    -1,   920,   921,    -1,     6,
       7,     8,     9,   235,    -1,    -1,    -1,    14,    -1,    -1,
      -1,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     944,    -1,    -1,    -1,    -1,   257,    33,    34,    35,    36,
      37,   955,   956,    -1,    41,   655,    -1,    -1,    -1,    46,
      -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     282,    -1,    -1,    -1,    -1,     3,     4,     5,   290,    -1,
      -1,    -1,    10,    11,    12,    13,   686,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,   704,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,   719,
      -1,    -1,   722,   723,   336,   725,    -1,    -1,    -1,    -1,
     730,   731,    -1,   733,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,   744,    -1,   746,   747,    14,   749,
      -1,    -1,    -1,    -1,    -1,    -1,   368,   369,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,   378,    33,    34,    35,
      36,    37,    -1,    39,    40,    -1,    -1,   389,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     402,   403,   404,   405,   406,   407,    -1,    -1,    -1,    -1,
     412,    -1,    -1,     6,     7,     8,     9,   419,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,   429,   430,   431,
     432,   433,   434,    -1,    -1,    -1,    -1,   439,    -1,    -1,
      33,    34,    35,    36,    37,   447,    39,    40,   450,   451,
     452,    -1,    -1,    46,    -1,    -1,    -1,   847,   848,   849,
      -1,    -1,   464,   465,   466,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,   863,   864,   865,    -1,   479,   480,   481,
     482,   483,   484,    -1,    24,    -1,    -1,   489,    -1,    -1,
     492,   493,   494,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
       6,     7,     8,     9,   516,    -1,    -1,    -1,    -1,    -1,
     910,   911,    -1,   913,    -1,    -1,   916,   917,    24,   919,
      -1,     6,     7,     8,     9,    -1,    36,    33,    34,    35,
      36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,    24,
      46,    -1,    -1,    -1,    -1,    -1,    -1,   559,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    67,    68,    -1,
      -1,    46,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,   598,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,   146,     3,     4,     5,
      -1,    -1,    -1,   655,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    39,   686,    41,    42,    43,    44,    45,
     190,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   704,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    46,   719,    -1,   219,
     722,   723,    -1,   725,    -1,    -1,    -1,    -1,   730,   731,
      -1,   733,    -1,    -1,    -1,   235,    -1,    -1,     6,     7,
       8,     9,   744,    -1,   746,   747,    14,   749,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    24,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,   273,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,   282,   137,    36,     3,     4,     5,    -1,   143,
     290,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,   165,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      72,    39,    -1,    41,    42,    43,    44,    45,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,   847,   848,   849,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,   863,   864,   865,    -1,    -1,    -1,    -1,   368,   369,
     370,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,
      33,    34,    35,    36,    37,    -1,   138,   139,    41,   389,
      -1,    -1,   144,    46,   146,    -1,    -1,     6,     7,     8,
       9,    -1,   402,   403,   404,    14,    -1,    -1,   910,   911,
      -1,   913,   412,    -1,   916,   917,    -1,   919,    -1,   419,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,   429,
     430,   431,    41,    -1,    -1,    -1,    -1,    46,   190,   439,
      -1,    -1,     6,     7,     8,     9,    -1,   447,    -1,    -1,
     450,   451,   452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,   464,   465,   466,   219,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,   479,
     480,   481,    46,   235,     6,     7,     8,     9,    -1,   489,
      -1,    -1,   492,   493,   494,    -1,    -1,    -1,     6,     7,
       8,     9,    24,    -1,   105,   257,    14,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,   516,    39,    40,    -1,
      -1,   273,    -1,    -1,    46,    33,    34,    35,    36,    37,
     282,    39,    40,    -1,    -1,    -1,   137,    -1,   290,    -1,
      -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,   559,
      10,    11,    12,    13,   165,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,     6,
       7,     8,     9,    -1,   336,    -1,    -1,    14,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,   598,    -1,
       6,     7,     8,     9,    -1,    -1,    33,    34,    35,    36,
      37,   105,    -1,    40,    -1,    -1,   368,    -1,    24,    46,
      -1,    -1,    -1,    -1,    -1,    -1,   378,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,   389,    -1,    -1,
      46,    -1,    -1,   137,    -1,     6,     7,     8,     9,   143,
     402,    -1,    -1,    -1,    -1,   655,    -1,    -1,    -1,    -1,
     412,    -1,    -1,    24,    -1,    -1,    -1,   419,    -1,    -1,
      -1,   165,    33,    34,    35,    36,    37,   429,    -1,    40,
       6,     7,     8,     9,    -1,    46,   686,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,   450,   451,
     452,    -1,    -1,    -1,   704,    -1,    -1,    33,    34,    35,
      36,    37,   464,   465,   466,    41,    -1,    -1,    -1,   719,
      46,    -1,   722,   723,    -1,   725,    -1,   479,    -1,    -1,
     730,   731,    -1,   733,    -1,    -1,    -1,   489,    -1,    -1,
     492,   493,   494,    -1,   744,    -1,   746,   747,    -1,   749,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   516,    -1,   620,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,   632,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   559,    39,    -1,
      41,    42,    43,    44,    45,    -1,   670,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,   598,   847,   848,   849,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,   863,   864,   865,    -1,   721,    -1,    -1,
     724,     6,     7,     8,     9,   729,    -1,    -1,   732,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   745,    -1,    -1,   748,    -1,    -1,    -1,    33,    34,
      35,    36,    37,   655,    39,    40,    -1,    -1,    -1,    -1,
     910,   911,    -1,   913,    -1,    -1,   916,   917,    -1,   919,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,   686,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,   704,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,   719,    -1,    -1,
     722,   723,    -1,   725,    -1,    -1,    -1,    -1,   730,   731,
      -1,   733,    -1,    -1,    -1,    -1,    -1,    -1,   842,   843,
     844,    -1,   744,    -1,   746,   747,    -1,   749,    -1,   853,
     854,    -1,    -1,    -1,   858,   859,   860,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,   869,   870,    -1,    -1,   620,
      -1,   875,   876,   877,   878,   879,    -1,    -1,    -1,    -1,
     884,   632,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,   896,    41,     6,     7,     8,     9,    46,    -1,
      -1,    -1,    14,    -1,    -1,   909,    -1,    -1,   912,    -1,
     914,   915,    -1,    -1,   918,    -1,   920,   921,    -1,   670,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     944,    -1,    -1,    -1,    -1,   847,   848,   849,    -1,    -1,
      -1,   955,   956,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,   863,   864,   865,    -1,    -1,    -1,    -1,    -1,    -1,
     721,    -1,    -1,   724,    -1,    -1,   620,    -1,   729,    -1,
      -1,   732,    -1,    33,    34,    35,    36,    37,   632,    39,
      -1,    41,    -1,    -1,   745,    -1,    46,   748,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   910,   911,
      -1,   913,    -1,    -1,   916,   917,    -1,   919,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,   670,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,   721,    -1,    -1,
     724,    21,    22,    23,    -1,   729,    -1,    -1,   732,    -1,
      -1,   842,   843,   844,    -1,    -1,    -1,    -1,    -1,    39,
      40,   745,   853,   854,   748,    -1,    -1,   858,   859,   860,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,   869,   870,
      14,    -1,    -1,    -1,   875,   876,   877,   878,   879,    -1,
      -1,    -1,    -1,   884,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,   896,    40,     6,     7,     8,
       9,    -1,    46,    -1,    -1,    14,    -1,    -1,   909,    -1,
      -1,   912,    -1,   914,   915,    -1,    -1,   918,    -1,   920,
     921,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,    -1,    -1,   935,   936,   937,   938,   939,   940,
     941,   942,   943,   944,    -1,    -1,    -1,    -1,   842,   843,
     844,    -1,    -1,    -1,   955,   956,    -1,    -1,    -1,   853,
     854,    -1,    -1,    -1,   858,   859,   860,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,   869,   870,    -1,    -1,    -1,
      -1,   875,   876,   877,   878,   879,    -1,    -1,    -1,    -1,
     884,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,   896,     6,     7,     8,     9,    46,    -1,    -1,
      -1,    14,    -1,    -1,    -1,   909,    -1,    -1,   912,    -1,
     914,   915,    -1,    -1,   918,    -1,   920,   921,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     944,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,   955,   956,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    46,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,     6,
       7,     8,     9,    -1,    46,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,     6,     7,     8,
       9,    -1,    46,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    24,    -1,    -1,    -1,    46,
       6,     7,     8,     9,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,     6,     7,     8,     9,
      46,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,     6,     7,     8,     9,    46,    -1,
      -1,    -1,    14,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,     6,     7,     8,     9,    46,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      24,    -1,    -1,    -1,    46,     6,     7,     8,     9,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,    24,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    24,    -1,    -1,    46,     6,     7,     8,     9,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
       6,     7,     8,     9,    46,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    46,    33,    34,    35,
      36,    37,    -1,    39,    40,    33,    34,    35,    36,    37,
      46,    39,    40,     6,     7,     8,     9,    -1,    46,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      33,    34,    35,    36,    37,    -1,    -1,    40,    33,    34,
      35,    36,    37,    46,    -1,    40,     6,     7,     8,     9,
      -1,    46,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,     6,     7,
       8,     9,    24,    33,    34,    35,    36,    37,    -1,    -1,
      40,    33,    34,    35,    36,    37,    46,    -1,    40,     6,
       7,     8,     9,    -1,    46,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    24,    46,     6,
       7,     8,     9,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,     6,     7,     8,     9,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,     6,     7,     8,     9,    46,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       6,     7,     8,     9,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,     6,     7,     8,     9,    46,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    41,     6,     7,     8,     9,
      46,    -1,    -1,    -1,     6,     7,     8,     9,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    33,    34,    35,    36,    37,    46,    -1,    40,     6,
       7,     8,     9,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,     6,     7,     8,     9,    46,
      33,    34,    35,    36,    37,    -1,    -1,    40,    33,    34,
      35,    36,    37,    46,    -1,    -1,    41,     6,     7,     8,
       9,    46,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,     6,     7,     8,     9,    46,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,     6,     7,     8,     9,    46,    33,    34,
      35,    36,    37,    -1,    -1,    40,    33,    34,    35,    36,
      37,    46,    -1,    -1,    41,     6,     7,     8,     9,    46,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,     6,
       7,     8,     9,    46,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,     6,     7,     8,     9,    46,    33,    34,    35,    36,
      37,    -1,    -1,    40,    33,    34,    35,    36,    37,    46,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    33,    34,
      35,    36,    37,    -1,    -1,    40,     3,     4,     5,    -1,
      -1,    46,    -1,    10,    11,    12,    13,    -1,    15,    16,
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
      19,    20,    21,    22,    23,    -1,     3,     4,     5,    28,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      39,    -1,    41,    42,    21,    22,    23,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    -1,    39,    -1,    41,    21,    22,    23,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    -1,    39,    -1,    41,    21,    22,    23,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,    39,    -1,    41,    21,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,    39,    -1,    41,    21,    22,
      23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    -1,    39,    -1,    41,    21,
      22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    -1,    39,    -1,    41,
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
      -1,    -1,    21,    22,    23,     3,     4,     5,    -1,    -1,
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
      -1,    -1,    21,    22,    23,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,     6,     7,     8,     9,    -1,    -1,
      39,    -1,    14,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    33,    34,    35,    36,    37,
      -1,    39,    40,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    33,    34,    35,    36,
      37,    -1,    39,    40,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,     6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    33,    34,    35,    36,
      37,    -1,    39,    40,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    33,
      34,    35,    36,    37,    -1,    -1,    40,    33,    34,    35,
      36,    37,    -1,    -1,    40,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      33,    34,    35,    36,    37,    -1,    -1,    40,    33,    34,
      35,    36,    37,    -1,    -1,    40,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    33,    34,    35,    36,    37,    -1,    -1,    40,    33,
      34,    35,    36,    37,    -1,    -1,    40,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    33,    34,    35,    36,    37,    -1,    -1,    40,
      33,    34,    35,    36,    37,    -1,    -1,    40,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    24,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      24,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    24,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    24,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    24,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    24,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      24,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    24,    39,     6,     7,     8,     9,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
       6,     7,     8,     9,    24,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    24,    39,
       6,     7,     8,     9,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,     6,     7,     8,     9,    24,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    33,    34,    35,
      36,    37,    24,    39,    -1,     6,     7,     8,     9,    24,
      -1,    33,    34,    35,    36,    37,    -1,    39,    33,    34,
      35,    36,    37,    24,    39,     6,     7,     8,     9,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,     6,
       7,     8,     9,    24,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    33,    34,    35,    36,    37,    24,    39,    -1,
       6,     7,     8,     9,    24,    -1,    33,    34,    35,    36,
      37,    -1,    39,    33,    34,    35,    36,    37,    24,    39,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37
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
      69,    70,    71,    72,    73,    75,    76,    77,    78,    39,
      41,    46,    39,    39,    39,    13,    13,    39,    39,    39,
      39,    39,    39,    62,    41,    62,    54,    18,    60,    41,
      46,    39,     6,     7,    33,    35,    37,     8,     9,    34,
      36,    14,    13,    40,    51,    52,    53,    55,    54,    71,
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
      13,    41,    58,    25,    43,    44,    45,     3,     4,     5,
      10,    11,    12,    13,    15,    16,    21,    22,    23,    39,
      65,    66,    72,     3,     4,     5,    10,    11,    12,    13,
      15,    16,    21,    22,    23,    39,    52,    55,    56,    59,
      65,    66,    68,    69,    70,    71,    72,    73,     3,     4,
       5,    13,    15,    16,    21,    22,    23,    39,    65,    66,
      73,     3,     4,     5,    10,    11,    12,    13,    15,    16,
      21,    22,    23,    39,    65,    66,    68,    69,    70,    71,
      72,    73,    46,    39,     3,     4,     5,    13,    15,    16,
      39,    65,    66,    73,    13,    17,    19,    20,    28,    41,
      42,    62,    63,    75,    76,    77,    78,    39,    10,    11,
      12,    72,    17,    19,    20,    28,    41,    42,    62,    63,
      75,    76,    77,    78,     3,     4,     5,    10,    11,    12,
      13,    15,    16,    21,    22,    23,    39,    65,    66,    68,
      69,    70,    71,    72,    73,    17,    19,    20,    28,    41,
      42,    62,    63,    75,    76,    77,    78,    18,    61,    39,
      39,    39,    13,    13,    39,    39,    39,    62,    39,     6,
       7,    33,    35,    37,     8,     9,    34,    36,    14,    41,
      39,    39,    39,    13,    13,    39,    39,    39,    62,    39,
      39,    39,    39,    13,    13,    39,    39,    39,    62,    77,
      41,    58,    39,     6,     7,    33,    35,    37,     8,     9,
      34,    36,    14,    13,    13,    39,    39,    39,    62,    39,
      39,    39,    39,    13,    13,    39,    39,    39,    62,    39,
       6,     7,    33,    35,    37,     8,     9,    34,    36,    14,
      67,    40,    51,    53,    13,    13,    62,    39,    18,    61,
      39,    39,    39,    41,    62,    41,    40,    51,    53,    39,
      39,    39,    18,    61,    39,    39,    39,    41,    62,    41,
      39,    39,    39,    13,    13,    39,    39,    39,    62,    39,
       6,     7,    33,    35,    37,     8,     9,    34,    36,    14,
      18,    61,    39,    39,    39,    41,    62,    41,    18,    71,
      71,    71,    15,    16,    72,    72,    72,    40,    40,    74,
       3,     4,     5,    13,    15,    16,    39,    65,    66,    68,
      73,    68,    69,    69,    69,    70,    70,    70,    70,    67,
      71,    71,    71,    15,    16,    72,    72,    72,    40,    40,
      74,    71,    71,    71,    15,    16,    72,    72,    72,    40,
      41,    40,    74,     3,     4,     5,    13,    15,    16,    39,
      65,    66,    68,    73,    68,    69,    69,    69,    70,    70,
      70,    70,    67,    15,    16,    72,    72,    72,    40,    40,
      74,    71,    71,    71,    15,    16,    72,    72,    72,    40,
      40,    74,     3,     4,     5,    13,    15,    16,    39,    65,
      66,    68,    73,    68,    69,    69,    69,    70,    70,    70,
      70,    67,    40,    40,    15,    16,    40,    40,    74,    18,
      57,    67,    67,    62,    67,    41,    40,    40,    71,    71,
      71,    18,    57,    67,    67,    62,    67,    41,    71,    71,
      71,    15,    16,    72,    72,    72,    40,    40,    74,     3,
       4,     5,    13,    15,    16,    39,    65,    66,    68,    73,
      68,    69,    69,    69,    70,    70,    70,    70,    67,    18,
      57,    67,    67,    62,    67,    41,    24,    24,    24,    40,
      40,    40,    40,    13,    13,    62,    39,    24,    24,    24,
      40,    40,    40,    40,    24,    24,    24,    40,    40,    40,
      40,    13,    13,    62,    39,    40,    40,    40,    40,    24,
      24,    24,    40,    40,    40,    40,    13,    13,    62,    39,
      40,    64,    24,    24,    40,    24,    24,    24,    24,    64,
      24,    24,    40,    24,    24,    24,    24,    40,    40,    40,
      40,    13,    13,    62,    39,    64,    24,    24,    40,    24,
      71,    71,    71,    15,    16,    40,    40,    74,    71,    71,
      71,    71,    71,    71,    15,    16,    40,    40,    74,    71,
      71,    71,    15,    16,    40,    40,    74,    64,    67,    67,
      17,    19,    20,    28,    41,    42,    62,    63,    64,    75,
      76,    77,    78,    67,    71,    71,    71,    64,    67,    67,
      17,    19,    20,    28,    41,    42,    62,    63,    64,    75,
      76,    77,    78,    67,    71,    71,    71,    15,    16,    40,
      40,    74,    64,    67,    67,    64,    67,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    18,    61,    39,    39,    39,
      41,    62,    41,    26,    40,    40,    40,    40,    40,    40,
      40,    18,    61,    39,    39,    39,    41,    62,    41,    26,
      40,    40,    40,    40,    40,    40,    40,    40,    26,    40,
      64,    64,    64,    18,    57,    67,    67,    62,    67,    41,
      64,    64,    64,    64,    64,    18,    57,    67,    67,    62,
      67,    41,    64,    64,    64,    64,    64,    64,    64,    64,
      24,    24,    40,    24,    26,    64,    24,    24,    40,    24,
      26,    26,    64,    67,    67,    64,    67,    64,    64,    67,
      67,    64,    67,    64,    64,    40,    40,    40,    26,    40,
      40,    40,    40,    26,    40,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    26,    26,    64,    64
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
#line 3894 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 69 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 3902 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 73 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 3911 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 84 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 3920 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 88 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 3926 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 92 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 3934 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 96 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 3943 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 103 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 3952 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 108 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 3962 "clang.tab.c"
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
#line 3974 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 124 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 3980 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 125 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 3986 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 126 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 3992 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 127 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 3998 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 132 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4007 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 140 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 4016 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 145 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 4025 "clang.tab.c"
    break;

  case 22: /* lista_inicializar_atrib: def_declaracao  */
#line 152 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4033 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA def_declaracao  */
#line 156 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4041 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 161 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4047 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
#line 163 "parser/clang.y"
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
                            free(simbolos);
                        }
#line 4067 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 180 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4073 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 181 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4079 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 185 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4087 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 189 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4096 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 195 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4102 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 196 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4108 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 199 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4114 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 200 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4120 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 203 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4126 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 204 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4132 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 205 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4138 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 206 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4144 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 207 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4150 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 210 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4156 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 211 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4162 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 212 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4168 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 216 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4176 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 220 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4184 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 224 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4190 "clang.tab.c"
    break;

  case 45: /* expressao_principal: ASPAS_DUPLAS TOKEN_ID ASPAS_DUPLAS  */
#line 226 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4196 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 227 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4202 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_relacional  */
#line 230 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4208 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_chamada ATRIBUICAO expressao_atribuicao  */
#line 232 "parser/clang.y"
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
#line 4236 "clang.tab.c"
    break;

  case 49: /* expressao_relacional: expressao_logica  */
#line 257 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4242 "clang.tab.c"
    break;

  case 50: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 259 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4250 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 263 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4258 "clang.tab.c"
    break;

  case 52: /* expressao_logica: expressao_aritmetica  */
#line 269 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4264 "clang.tab.c"
    break;

  case 56: /* expressao_aritmetica: expressao_conjunto  */
#line 275 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4270 "clang.tab.c"
    break;

  case 57: /* expressao_aritmetica: expressao_conjunto OP_SOMA expressao_aritmetica  */
#line 277 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4278 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto OP_SUBTRACAO expressao_aritmetica  */
#line 281 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4286 "clang.tab.c"
    break;

  case 61: /* expressao_conjunto: expressao_io  */
#line 288 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4292 "clang.tab.c"
    break;

  case 62: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 290 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4300 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 294 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4308 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 298 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4316 "clang.tab.c"
    break;

  case 65: /* expressao_io: expressao_chamada  */
#line 303 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4322 "clang.tab.c"
    break;

  case 66: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 305 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4330 "clang.tab.c"
    break;

  case 67: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 309 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4338 "clang.tab.c"
    break;

  case 68: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 313 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4346 "clang.tab.c"
    break;

  case 69: /* expressao_chamada: expressao_principal  */
#line 318 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4352 "clang.tab.c"
    break;

  case 71: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 321 "parser/clang.y"
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
#line 4380 "clang.tab.c"
    break;

  case 72: /* expressao_lista_param: expressao_atribuicao  */
#line 347 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4388 "clang.tab.c"
    break;

  case 73: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 351 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4397 "clang.tab.c"
    break;

  case 74: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 358 "parser/clang.y"
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
#line 4425 "clang.tab.c"
    break;

  case 75: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 382 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4433 "clang.tab.c"
    break;

  case 76: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 386 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4441 "clang.tab.c"
    break;

  case 77: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 390 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4449 "clang.tab.c"
    break;

  case 78: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 396 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4457 "clang.tab.c"
    break;

  case 79: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 400 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4465 "clang.tab.c"
    break;

  case 80: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 404 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4473 "clang.tab.c"
    break;

  case 81: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 410 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4481 "clang.tab.c"
    break;

  case 82: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 414 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4489 "clang.tab.c"
    break;

  case 83: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 420 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4497 "clang.tab.c"
    break;

  case 84: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 424 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4505 "clang.tab.c"
    break;


#line 4509 "clang.tab.c"

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

#line 429 "parser/clang.y"


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
