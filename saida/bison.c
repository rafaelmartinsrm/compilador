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

Simbolo **simbolos;
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
  YYSYMBOL_lista_identificadores = 50,     /* lista_identificadores  */
  YYSYMBOL_declaracao_parametro = 51,      /* declaracao_parametro  */
  YYSYMBOL_lista_tipo_parametro = 52,      /* lista_tipo_parametro  */
  YYSYMBOL_def_declaracao = 53,            /* def_declaracao  */
  YYSYMBOL_def_declaracao_tipo = 54,       /* def_declaracao_tipo  */
  YYSYMBOL_declaracao_func = 55,           /* declaracao_func  */
  YYSYMBOL_declaracao = 56,                /* declaracao  */
  YYSYMBOL_inicializar_atrib = 57,         /* inicializar_atrib  */
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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10529

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  961

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
       0,    62,    62,    67,    75,    76,    79,    84,    87,    91,
      98,   103,   109,   117,   120,   121,   122,   123,   127,   135,
     140,   147,   148,   156,   160,   166,   167,   182,   183,   186,
     190,   197,   198,   201,   202,   205,   206,   207,   208,   209,
     212,   213,   214,   217,   221,   225,   227,   229,   232,   233,
     259,   260,   264,   271,   272,   273,   274,   277,   278,   282,
     286,   287,   290,   291,   295,   299,   305,   306,   310,   314,
     320,   321,   322,   348,   352,   359,   383,   387,   391,   397,
     401,   405,   411,   415,   421,   425
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
  "VIRGULA", "THEN", "$accept", "programa", "lista_identificadores",
  "declaracao_parametro", "lista_tipo_parametro", "def_declaracao",
  "def_declaracao_tipo", "declaracao_func", "declaracao",
  "inicializar_atrib", "lista_inicializar_atrib", "declaracao_var",
  "item_bloco", "lista_itens_bloco", "expressao", "expressao_declaracao",
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

#define YYPACT_NINF (-358)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     291,   305,   374,   377,   379,    14,    15,   380,    36,    40,
      43,  -358,    50,  2550,    53,   546,    77,   786,   296,   449,
     701,  2010,  2700,    37,    66,   126,  2991,    28,    69,   107,
     175,   198,   234,   282,   286,   308,  5376,  2611,  8975,    -3,
    2660,  2876,  2919,   531,  2968,  3132,  3221,  3273,   564,   685,
      84,   334,  3615,  5396,   913,  3176,  3480,  3523,  3572,  9353,
     765,   110,   103,  9374,  9374,  9374,   163,   125,   285,  9395,
    1209,  1209,  1209,  9416,   231,  3736,   850,   572,   113,  3780,
    4084,  9353,  9101,  9437,  9437,  9437,  9437,  9437,  9437,  9437,
    9437,  9437,  9353,   919,   465,   960,   467,   503,   534,     8,
     922,   352,   378,   390,   399,  3595,  3825,  8095,   417,   446,
     443,   470,   483,   594,   280,  3878,  4155,   998,  3309,   657,
     716,  1234,  1237,   164,   268,   366,   402,  1095,  1235,  1411,
    1311,   991,   548,  1223,   523,    72,  9458,  9458,  9458,  8128,
    9479,  9479,  5482,  6282,  7139,  8161,  9479,  4728,  5376,   748,
     795,   519,   562,   575,   598,   619,   638,   178,   653,   867,
    7153,  7175,  7189,  8194,  8194,  8194,  8194,  8161,  4207,  4341,
    4391,  4787,   223,  8194,  5038,  5087,    76,   118,   151,   174,
    4001,  4107,  4258,   691,   704,   714,  4461,   750,   768,   752,
     787,   814,  5376,  4669,  4849,   884,   918,    23,  1582,  7211,
    7225,  5857,   600,  5157,  1315,    60,   167,   217,   259,    95,
     136,   192,   824,   837,   845,   245,   833,   893,   876,   906,
     914,  5376,   278,   299,   901, 10047, 10061, 10095,   937,   940,
     941, 10109,   948,  1003,   954,   981,  1004,  5376,  1030,   423,
    8227,  8260, 10143, 10157,  1035,    13,  1267, 10369, 10383,  1735,
     -15,    75,   185,   273,  1047,  1048,  1023,  1024,  1039,  5376,
     628,   864,  1041,   246,   392,   452,  1056,  1059,  1078,   495,
    1101,  1111,  1098,  1108,  1126,  5376,   655,   715,   410,   102,
       9,  5871,  6065,  4626,  5376,   776,  1300,  3205,  4583,  5942,
    1113,  1121,  5376,  6432,  6761,  7233,   127,  5281,  1137,  1138,
    1140,  8293,  8996,  1321,  8326,  8359,  8392,  8425,  8458,   857,
    1152,  1153,  1167,  1176,  5530,  1168,  1197,  1199,  1206,  9017,
    1325,  1207,  1215,  1216,  1218,  1225,  5978,  6229,  6468,  1228,
    1253,  1262,  9581,  1313,  1329,  1266,  1285,  1304,  5376,  9590,
    9599,  1305,    11,   679,  9851,  9859,  9687,  5576,  1316,  1319,
    1320,   340,  9038,  1342,   578,   632,   754,  1141,  1496,  5620,
    6041,  9374,  9374,  9374,  1389,  1328,  1209,  1209,  1209,   935,
    9122,  9500,  9500,  9500,  9500,  9500,  9500,  9500,  9500,  9500,
    5376,  6156,  9374,  9374,  9374,  1390,  1416,  1209,  1209,  1209,
     964,  9143,  9374,  9374,  9374,  1413,  1431,  1209,  1209,  1209,
     983,  8491,  8524,  1346,  9164,  9521,  9521,  9521,  9521,  9521,
    9521,  9521,  9521,  9521,  9395,  1434,  1443,  1209,  1209,  1209,
     995,  9185,  9374,  9374,  9374,  1445,  1455,  1209,  1209,  1209,
     996,  9206,  9542,  9542,  9542,  9542,  9542,  9542,  9542,  9542,
    9542,  9416,  1000,   790,  1018,  1036,  1458,  1462,  1037,  9227,
    8557,  6206,   285,  9395,  9416,  8590,  1356,  8623,   530,  1054,
    1063,  9374,  9374,  9374,  1442,  6364,   285,  9395,  9416,  1454,
    1357,  1463,  9374,  9374,  9374,  1480,  1486,  1209,  1209,  1209,
    1065,  9248,  9563,  9563,  9563,  9563,  9563,  9563,  9563,  9563,
    9563,  9479,  1539,  6523,   285,  9395,  9416,  1588,  1381,  1632,
    6566,  1481,  1499,  1501,  4912,  4967,  1464,  1470,  1487,  5323,
    6778,  1072,  3808,  6797,  6813,  6832,  1513,  1515,  5376,  6848,
    6867,  1075,  7247,  1076,    97,   287,   510,  1672,  1854,  1964,
    1996,  1085,  1505,  1506,  1507,   315,   418,  1492,  1493,  1494,
     455,  1512,  1087,  1521,  1522,  1523, 10191, 10205,  1508,  1526,
    1528, 10239,  8656,  2425,  1089, 10225, 10259, 10273, 10280,  1540,
    1556,  5376, 10294, 10314,  1546, 10388,  1547,   205,   252,   398,
    2015,  2705,  2996,  3298,  1548,   889,   902,  1533,  1534,  1535,
     904,  1536,  1109,  1553,  1555,  1561,   778,  1164,  1550,  1554,
    1557,  1314,  5468,  1128,   438,   518,   978,  1810,  1573,  1574,
    5376,  2500,  5235,   584,  6391,   585,   162,   371,   475,   139,
     538,   853,  1073,   641,   848,   980,  6883,  6902,  6919,  7269,
    1135,  8689,  8095,  1571,  1572,  1147,   656,  8722,   587,   839,
    1594,  1596,  1597,  1583,  8095,  1600,  1601,  1149,   658,  1586,
    1610,  1614,  1615,  9634,  9643,  1606,  1616,  1621,  9652,  9696,
    1150,  2688,  3008,  9705,  9740,  1599,  1627,  5376,  9748,  9756,
    1622,  9894,  1623,    16,    20,   122,   963,  1292,  2272,  2362,
    1624,  1781,  8095,  1617,  1641,  1162,   659,  1860,  9458,  9458,
    9458,  7283,  7291,  7305,  6955,  1651,  1652,  1165,  9269,  9458,
    9458,  9458,  1643,  1645,  1646,  1648,  9458,  9458,  9458, 10402,
   10421, 10435,  6121,  1668,  1669,  1169,  9290,  1644,  1647,  1649,
    1654,  9458,  9458,  9458,  6969,  6990,  7004,  5662,  1671,  1679,
    1180,  9311,  7326,  8128,  9479,  9479,  8755,  9479,  9458,  9458,
    9458,  8128,  9479,  9479,  8788,  9479,  9458,  9458,  9458,  9902,
    9910,  9945,  9791,  1673,  1680,  1181,  9332,  8128,  9479,  9479,
    8161,  9479,  1657,  1661,  1662,  7012,  7026,  7047,  7340,  1203,
    1663,  1664,  1666,  1670,  1676,  1677, 10328, 10335, 10349, 10440,
    1217,  1681,  1682,  1684,  5309,  5739,  5790,  7061,  1220,  1685,
    1693,  1696,  6609,  1706,  1707,  1708,  7435,  9059,  1404,  7468,
    7501,  7534,  7567,  7600,  7633,  1712,  1714,  1718,  1726,  1727,
    1733,  1747,  6652,  1749,  1750,  1751,     5,  9080,  1412,   221,
     348,   393,   427,   474,   480,  1755,  1765,  1768,  1770,  9800,
    9808,  9843,  9953,  1239,  1771,  1772,  1773,  1921,  1774,  7348,
    7362,  7383,  7397,  1687,  1695,  1791, 10454, 10473, 10487, 10492,
    7082,  7096,  7117,  7131,  8095,  8095,  8095,  7666,  6695,   285,
    9395,  9416,  7699,  1420,  7732,  8095,  8755,  1787,  1795,  1796,
    8128,  8128,  8128,   482,  6738,   285,  9395,  9416,   507,  1421,
     630,  8128,  8788,  9961,  9996, 10004, 10012,  8161,  8161,  8161,
    8161,  8161,  8821,  8854,  8887,  7765,  8095,  1797,  1807,  1242,
     660,  7798,  8920,  7831,  1799,  1801,  1802,   687,  8095,  1813,
    1824,  1257,   782,   692,  1814,   720,  1970,  2186,  2229,  2278,
    2322,  8128,  9479,  9479,  8755,  9479,  8095,  8128,  9479,  9479,
    8788,  9479,  8128,  8161,  1815,  1817,  1818,  7864,  1819,  8953,
    1822,  1826,  1834,   804,  1850,  1852,  2471,  8755,  8755,  8755,
    8755,  8755,  8788,  8788,  8788,  8788,  8788,  7897,  7930,  7963,
    7996,  8029,   807,   817,   843,   855,   883,  8755,  8788,  8062,
     886
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -358,  -358,  -257,     6,  -186,   -27,     2,  1472,    -1,  1658,
     -30,     3,   -41,  -170,   111,  3809,   373,  1002,  1692,  5391,
    5003,  4501,  4113,  3590,  2986,  2382,  -357,  5084,  5415,    -6,
    5574
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,    96,   238,    98,    17,    39,   240,     9,    18,
      19,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   120,    55,    56,    57,
      58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    79,     7,    10,    12,   360,     6,     7,    10,   204,
     202,     6,    77,   511,    11,   -53,   -53,   482,   483,   405,
     406,   296,   -56,   -56,   -40,   -40,   -54,   -54,   444,   371,
     372,   -33,    13,   -53,   542,    77,   -19,   -50,   203,     1,
      -2,    66,   434,   -20,   435,   -33,   436,   554,    -7,   -53,
      -3,   -50,   459,   -18,    -7,   -53,   -56,     2,     3,     4,
     -54,   -19,    99,   -50,   582,    -2,    97,   107,   -20,   -50,
     239,   241,   135,   -16,   593,    -3,    63,   -25,   -18,   -19,
     -19,   -19,    67,    -2,    -2,    -2,   -20,   -20,   -20,   -16,
      83,    84,   620,    -3,    -3,    -3,   -18,   -18,   -18,   445,
     -16,   307,   -25,   -56,   -56,    64,   -16,   -82,   432,   433,
     -26,   309,    -6,   -83,   -42,   -42,   202,   -16,    -6,   -40,
     -25,   -25,   -25,   460,   650,   -50,   -50,   451,   -55,   -55,
     -50,   -17,   -82,   324,   -40,   -26,    99,   -56,   -83,   357,
     150,   106,   -50,   -56,   465,   -58,   -58,    74,   -50,    76,
     -82,   -82,   -82,   -26,   -26,   -26,   -83,   -83,   -83,   -17,
     -42,   357,   -55,   -58,   -14,    65,   -10,   -10,   -56,   -56,
     -56,   -56,   -58,   -10,   -58,   -42,   -58,   493,   105,   -58,
     -17,   -76,   -76,   -76,   113,   -58,   -56,   -15,   -76,   -76,
     -76,   -76,   -14,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -56,   -76,   166,   -56,   -76,   -17,   -56,   403,
     -56,   -56,   -56,   -17,    68,   -15,   -41,   -76,   303,   -76,
     -76,   -76,   -76,   -76,   -41,   -41,   -78,   -78,   -78,   -56,
     -14,   -41,   401,   -78,   -78,   -78,   -78,    69,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -35,   -78,   173,
     320,   -78,   -40,   -40,   -40,   -40,   353,   -14,   -54,   -54,
     -40,   -35,   -78,   -14,   -78,   -78,   -78,   -78,   -78,   -43,
     -40,   115,   -15,    70,   -54,   -54,   -54,   284,   353,   -40,
     -40,   -40,   -40,   -40,   -43,   -40,   -40,    99,   225,   226,
     227,    97,   -40,   -54,   -54,   228,   229,   230,   231,   -15,
     232,   233,   -44,   369,   146,   -15,   234,   235,   236,   -54,
       1,    99,   -43,   -43,   -54,    97,     1,   -44,   -16,    79,
     -31,    71,   -16,   -70,   237,    72,   -31,   -54,     2,     3,
       4,   759,   390,   -54,     2,     3,     4,   -23,   391,   -45,
     -53,   -53,   -23,   -33,   -33,   -33,   -16,    73,   400,   770,
     -33,   -33,   -33,   -33,   -45,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   778,   -33,   -33,    85,   -33,    86,
     420,    87,   -55,   -55,   871,   -53,   136,   -54,   -54,   -33,
     -53,   -33,   -33,   -33,   -33,   -33,   430,   -17,   -76,   823,
     -14,   -17,   -15,    15,   -14,   -54,   -15,    -7,   -42,   -42,
     -42,   -42,   -66,   448,   -55,   -55,   -42,   -55,   -58,   -58,
      79,   -54,   -55,   456,   137,   -17,   -42,   -54,   -14,   -36,
     -15,    16,   -55,   138,    79,   -42,   -42,   -42,   -42,   -42,
     470,   -42,   -42,   -36,   -48,   -58,    15,   -58,   -42,   -58,
      -7,   140,   -46,   -58,   -40,   -40,   -40,   -40,   -58,   480,
     -48,   622,    79,   -39,   239,   241,   -48,   -46,   -41,   -41,
     -41,   -41,   -40,   498,   402,   634,   -41,   -39,   239,   241,
     141,   -40,   -40,   -40,   -40,   -40,   -41,   -40,   -40,   -47,
     139,   -55,   -55,   142,   -40,   -41,   -41,   -41,   -41,   -41,
      61,   -41,   -41,   672,   -47,    62,   239,   241,   -41,   -55,
     -37,   -43,   -43,   -43,   -43,    -4,   -38,   131,   -82,   -43,
     143,    -4,   154,   132,   -37,   -55,   -55,   -55,   157,   -43,
     -38,   -55,   -82,   144,   -42,   -42,   -42,   -42,   -43,   -43,
     -43,   -43,   -43,   -84,   -43,   -43,   168,   169,   170,   171,
     172,   -43,   -42,    -8,   -59,   -59,   174,   -84,   205,    -8,
     -55,   -42,   -42,   -42,   -42,   -42,   -55,   -42,   -42,   160,
     -10,   149,   -59,   -10,   -42,   625,   206,   207,   208,   -11,
     -11,   -59,    80,   -59,   133,   -59,   -11,    81,   -59,   637,
     134,   -35,   -35,   -35,   -59,   -10,    59,   -10,   -35,   -35,
     -35,   -35,   -10,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   161,   -35,   -35,   -31,   -35,   675,   -52,   -51,
     -31,   285,   848,   -21,   -10,   162,   307,   -35,   -21,   -35,
     -35,   -35,   -35,   -35,   -52,   -51,   -13,   -13,   307,   687,
     -52,   -51,   864,   -13,   145,   -36,   -36,   -36,   163,   -10,
     284,   -10,   -36,   -36,   -36,   -36,   -10,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -34,   -36,   -36,   164,
     -36,   -44,   -44,   -44,   -44,   -49,   307,   -44,   -44,   -44,
     -34,   -36,   705,   -36,   -36,   -36,   -36,   -36,   165,   -44,
     727,   -49,   735,   751,   915,   -53,   -53,   -49,   -44,   -44,
     -44,   -44,   -44,   167,   -44,   -44,   -31,   -73,   -31,   -31,
     -31,   -44,   -31,   -73,   -31,   -31,   -31,   -40,   -40,   -40,
     -40,   720,   484,   -83,   485,   -40,   486,   324,   -85,   -53,
     793,   -70,   -70,   -70,   -70,   324,   -48,   -83,   813,   -70,
     361,   -48,   -85,   303,   -40,   -40,   -40,   -40,   -40,   -70,
     -40,   324,   -40,   362,   357,   303,   922,   -40,   -70,   -70,
     -70,   -70,   -70,   363,   431,   -70,   147,   -39,   -39,   -39,
     -78,   -70,   148,   364,   -39,   -39,   -39,   -39,   745,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,    94,   -39,
     -39,   365,   -39,   303,   -45,   -45,   -45,   -45,    -5,    94,
     205,   366,   -45,   -39,    -5,   -39,   -39,   -39,   -39,   -39,
      59,   205,   -45,    -6,   -11,    95,   921,    79,   206,   207,
     208,   -45,   -45,   -45,   -45,   -45,   443,   -45,   -45,   206,
     207,   208,   -31,    79,   -45,    60,   367,   -21,   -31,   -11,
     945,   -11,   -21,   -79,   320,    -9,   -11,   788,   307,   307,
     307,    -9,   320,   -80,   -76,   808,   385,   -79,   886,   307,
     793,   239,   241,   368,   324,   324,   324,   -80,   320,   -60,
     -60,   353,   -13,   382,   898,   324,   813,   239,   241,   -81,
      94,   357,   357,   357,   357,   357,   383,   -60,   -12,   -12,
     307,   -75,   205,   -81,   384,   -12,   -60,   -13,   -60,   -13,
     -60,   116,   307,   -60,   -13,   -75,    81,   458,   853,   -60,
     206,   207,   208,   421,   -70,   324,   386,   -74,   793,   958,
     307,   324,   -77,   -74,   813,   387,   324,   357,   869,   -66,
     -66,   -66,   -66,   -78,   -31,   -62,   -77,    92,   -45,   -45,
     -31,   793,   793,   793,   793,   793,   813,   813,   813,   813,
     813,   -46,   -46,   -47,   -47,   388,   -66,   -66,   -66,   -66,
     -66,   793,   813,   389,   -66,   303,   303,   303,   -48,   -66,
     -22,   395,   889,   -24,   -48,   -22,   303,   788,   -24,   -58,
     -58,   320,   320,   320,   -11,   509,   392,   -11,   901,   393,
     394,   284,   320,   808,   -41,   -41,   -41,   -41,   353,   353,
     353,   353,   353,   397,   -12,   723,   -58,   303,   -58,   -11,
     -58,   -11,   -41,   -58,   540,   -13,   -11,   731,   -13,   303,
     284,   -41,   -41,   -41,   -41,   -41,   396,   -41,   -41,   -12,
     398,   -12,   320,   551,   -41,   788,   -12,   303,   320,   284,
     -13,   808,   -13,   320,   353,   580,   591,   -13,   193,   -32,
     -32,   284,   284,   399,   -32,   747,   -32,   297,   788,   788,
     788,   788,   788,   808,   808,   808,   808,   808,   614,   -48,
     415,   416,   417,   418,   132,   222,   222,   222,   788,   808,
     242,   242,   260,   260,   260,   276,   615,   618,   419,   -61,
     -61,   -66,   134,   284,   193,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   628,   422,   779,   -61,   423,   790,
     132,   -59,   -59,   629,   799,   648,   -61,   810,   -61,   134,
     -61,   284,   684,   -61,   425,   -52,   -51,   424,   148,   -61,
     824,   -52,   -51,   827,   426,   -49,   446,   695,   -59,   702,
     -59,   -49,   -59,   148,   447,   148,   -59,   427,   260,   260,
     260,   -59,   339,   339,   -37,   -37,   -37,   428,   339,   710,
     193,   -37,   -37,   -37,   -37,   148,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   429,   -37,   -37,   717,   -37,
     -46,   -46,   -46,   -46,   148,   722,   452,   453,   -46,   454,
     -37,   148,   -37,   -37,   -37,   -37,   -37,   726,   -46,   734,
     742,   461,   462,   284,   193,   284,   148,   -46,   -46,   -46,
     -46,   -46,   750,   -46,   -46,   757,   463,   466,   284,   768,
     -46,   284,   250,   251,   252,   284,   -62,   882,   883,   884,
     776,   821,   253,   193,   254,   255,   284,   284,   892,   893,
     256,   257,   258,   894,   895,   896,   467,   -12,   468,   193,
     -12,   -60,   -60,   832,   904,   905,   -33,   -35,   259,   148,
     906,   907,   908,   909,   910,   -36,   -39,   839,   -37,   911,
     843,   193,   -12,   148,   -12,   -38,   148,   472,   -60,   -12,
     -60,   917,   -60,   -53,   -53,   -52,   -60,   193,   -51,   876,
     -52,   -60,   914,   -51,   924,   148,   193,   927,   284,   929,
     930,   -53,   473,   933,   193,   935,   936,   920,   -59,   -59,
     407,   474,   408,   284,   409,   477,   -40,   -40,   -40,   -40,
     947,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     -47,   -47,   -47,   -47,   478,   -59,   475,   -59,   -47,   -59,
     959,   960,   -59,   -40,   -40,   -40,   -40,   -40,   -47,   -40,
     193,   -40,   476,   479,   505,   -48,   -40,   -47,   -47,   -47,
     -47,   -47,   -49,   -47,   -47,   494,   381,   -49,   495,   496,
     -47,    62,   457,   222,   222,   222,   471,    81,   260,   260,
     260,    81,   193,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   193,   499,   222,   222,   222,   552,    81,   260,
     260,   260,    62,   193,   222,   222,   222,   627,   639,   260,
     260,   260,    81,    81,   504,   535,   193,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   242,   -61,   -61,   260,
     260,   260,   677,   193,   222,   222,   222,    81,   546,   260,
     260,   260,   536,   193,   601,   601,   601,   601,   601,   601,
     601,   601,   601,   276,   -61,   854,   -61,   547,   -61,   575,
      81,   193,   -61,   870,   242,   242,   276,   -61,    81,   576,
     586,   891,   903,   222,   222,   222,    81,    81,   242,   242,
     276,   587,     8,   616,   222,   222,   222,     8,   617,   260,
     260,   260,   -82,   193,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   339,   -84,   643,   242,   242,   276,   -38,
     -38,   -38,   644,   -34,   681,   678,   -38,   -38,   -38,   -38,
     682,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     193,   -38,   -38,   679,   -38,   680,   685,   683,   686,   689,
     690,   691,   692,   693,   694,   -38,   -71,   -38,   -38,   -38,
     -38,   -38,   -82,   -82,   -82,   696,   697,   698,   699,   -82,
     -82,   -82,   -82,   703,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   193,   -82,   -82,   700,   -82,   701,   704,
     -52,   -51,   -49,   707,   708,   709,   -71,   711,   -82,   712,
     -82,   -82,   -82,   -82,   -82,   713,   718,   719,   -53,   -53,
     714,   -84,   -84,   -84,   715,   724,   725,   716,   -84,   -84,
     -84,   -84,   193,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   743,   -84,   -84,   373,   -84,   374,   728,   375,
     729,   730,   -53,   -83,   732,   733,   -85,   -84,   -53,   -84,
     -84,   -84,   -84,   -84,   736,   -34,   -34,   -34,   737,   738,
     744,   748,   -34,   -34,   -34,   -34,   739,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   740,   -34,   -34,   193,
     -34,   741,   -52,   -51,   -49,   749,   755,   -69,   756,   -68,
     -67,   -34,   -72,   -34,   -34,   -34,   -34,   -34,   -58,   -58,
     260,   260,   260,   766,   -69,   767,   774,   -68,   819,   -67,
     193,   260,   260,   260,   -72,   775,   820,   829,   260,   260,
     260,   830,   831,   833,   834,   -58,   835,   -58,   193,   -58,
     836,   -63,   -58,   260,   260,   260,   837,   838,   -58,   -64,
     100,   840,   841,   193,   842,   844,   339,   339,   194,   339,
     260,   260,   260,   845,   339,   339,   846,   339,   260,   260,
     260,   -66,   -66,   -66,   -66,   849,   850,   851,   193,   414,
     339,   339,   856,   339,   857,   223,   223,   223,   858,   -66,
     243,   243,   261,   261,   261,   277,   859,   860,   -66,   -66,
     -66,   -66,   -66,   861,   194,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   -83,   -83,   -83,   862,   865,   866,
     867,   -83,   -83,   -83,   -83,   872,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   873,   -83,   -83,   874,   -83,
     875,   877,   878,   879,   881,   -65,   -43,   -43,   -43,   -43,
     -83,   912,   -83,   -83,   -83,   -83,   -83,   -63,   261,   261,
     261,   913,   340,   340,   -43,   -64,   -65,   918,   340,   -79,
     194,   -80,   -81,   -43,   -43,   -43,   -43,   -43,   919,   -43,
     -43,   242,   242,   276,   -75,   937,   -43,   938,   939,   941,
     -59,   -59,   942,   -85,   -85,   -85,   943,   242,   242,   276,
     -85,   -85,   -85,   -85,   944,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   194,   -85,   -85,   -59,   -85,   -59,
     946,   -59,   -77,     0,   -59,     0,     0,     0,     0,   -85,
     -59,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
       0,     0,     0,   194,   339,   339,     0,   339,     0,     0,
     339,   339,     0,   339,   -76,   -76,   -76,     0,     0,   194,
       0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   880,     0,   -76,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   194,     0,     0,
     -60,   -60,     0,   -79,   -79,   -79,   194,     0,     0,     0,
     -79,   -79,   -79,   -79,   194,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -60,   -79,   -60,
       0,   -60,   -61,   -61,   -60,     0,     0,     0,     0,   -79,
     -60,   -79,   -79,   -79,   -79,   -79,   -42,   -42,   -42,   -42,
       0,   -58,   -58,     0,   -42,     0,     0,     0,     0,   -61,
     194,   -61,     0,   -61,     0,     0,   -61,     0,     0,   -58,
       0,     0,   -61,   -42,   -42,   -42,   -42,   -42,   -58,   -42,
     -58,   -42,   -58,   223,   223,   223,   -42,     0,   261,   261,
     261,     0,   194,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   194,     0,   223,   223,   223,     0,     0,   261,
     261,   261,     0,   194,   223,   223,   223,     0,     0,   261,
     261,   261,     0,     0,     0,     0,   194,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   243,     0,     0,   261,
     261,   261,     0,   194,   223,   223,   223,     0,     0,   261,
     261,   261,     0,   194,   602,   602,   602,   602,   602,   602,
     602,   602,   602,   277,     0,     0,     0,     0,     0,     0,
       0,   194,     0,     0,   243,   243,   277,     0,     0,     0,
       0,     0,     0,   223,   223,   223,     0,     0,   243,   243,
     277,     0,     0,     0,   223,   223,   223,     0,     0,   261,
     261,   261,     0,   194,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   340,     0,     0,   243,   243,   277,   -80,
     -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     194,   -80,   -80,     0,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -81,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   194,   -81,   -81,     0,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -60,   -60,
       0,   -75,   -75,   -75,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   194,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -60,   -75,   -60,     0,   -60,
       0,     0,   -60,     0,     0,     0,     0,   -75,     0,   -75,
     -75,   -75,   -75,   -75,     0,   -78,   -78,   -78,     0,     0,
       0,     0,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,   923,   194,
     -78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -61,   -61,
     261,   261,   261,     0,     0,     0,     0,     0,     0,     0,
     194,   261,   261,   261,     0,     0,     0,     0,   261,   261,
     261,     0,     0,     0,     0,   -61,     0,   -61,   194,   -61,
       0,     0,   -61,   261,   261,   261,     0,     0,     0,     0,
       0,     0,     0,   194,     0,     0,   340,   340,   201,   340,
     261,   261,   261,     0,   340,   340,     0,   340,   261,   261,
     261,   -71,   -71,   -71,   -71,     0,     0,     0,   194,   -71,
     340,   340,     0,   340,     0,   102,   102,   102,     0,   -71,
     249,   249,   262,   262,   262,   283,     0,     0,   -71,   -71,
     -71,   -71,   -71,     0,   201,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   -77,   -77,   -77,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,     0,   -77,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -77,     0,   -77,   -77,   -77,   -77,   -77,     0,   262,   262,
     262,     0,   346,   346,   -44,     0,     0,     0,   346,     0,
     201,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   243,   243,   277,     0,     0,   -44,     0,     0,     0,
       0,     0,     0,    20,    21,    22,     0,   243,   243,   277,
      23,    24,    25,    26,     0,    27,    28,   175,    29,    30,
      31,    32,    33,    34,   201,   176,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,   177,   178,   179,     0,     0,     0,     0,
       0,     0,     0,   201,   340,   340,     0,   340,     0,     0,
     340,   340,     0,   340,   -33,   -33,   -33,     0,     0,   201,
       0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,   -33,
       0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   201,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   201,     0,     0,     0,
     -27,   -27,   -27,   -27,   201,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,     0,   -27,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,     0,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -41,   -41,   -41,   -41,
       0,   -59,   -59,     0,   -41,     0,     0,     0,     0,     0,
     201,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -59,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -59,   -41,
     -59,   -41,   -59,   102,   102,   102,   -41,     0,   262,   262,
     262,     0,   201,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   201,     0,   102,   102,   102,     0,     0,   262,
     262,   262,     0,   201,   102,   102,   102,     0,     0,   262,
     262,   262,     0,     0,     0,     0,   201,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   249,     0,     0,   262,
     262,   262,     0,   201,   102,   102,   102,     0,     0,   262,
     262,   262,     0,   201,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   283,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,   249,   249,   283,     0,     0,     0,
       0,     0,     0,   102,   102,   102,     0,     0,   249,   249,
     283,     0,     0,     0,   102,   102,   102,     0,     0,   262,
     262,   262,     0,   201,   661,   661,   661,   661,   661,   661,
     661,   661,   661,   346,     0,     0,   249,   249,   283,   -29,
     -29,   -29,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     201,   -29,     0,     0,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,     0,   -29,   -29,   -29,
     -29,   -29,    20,    21,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,    27,    28,   175,    78,    30,    31,
      32,    33,    34,   201,   176,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      37,    38,   177,   178,   179,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   201,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,     0,   -35,   -43,   -43,   -43,
     -43,     0,   -60,   -60,     0,   -43,     0,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -42,   -42,   -42,   -42,     0,     0,
     -60,     0,   200,     0,   -43,   -43,   -43,   -43,   -43,   -60,
     -43,   -60,   -43,   -60,     0,     0,     0,   -43,     0,   201,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   224,
     224,   224,     0,     0,   248,   248,   110,   111,   112,   282,
     262,   262,   262,     0,     0,     0,     0,     0,   200,     0,
     201,   262,   262,   262,     0,     0,     0,     0,   262,   262,
     262,     0,     0,     0,     0,     0,     0,     0,   201,     0,
       0,     0,     0,   262,   262,   262,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,   346,   346,     0,   346,
     262,   262,   262,     0,   346,   346,     0,   346,   262,   262,
     262,     0,   313,   313,   313,     0,   345,   345,   201,     0,
     346,   346,   345,   346,   200,   -28,   -28,   -28,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -28,     0,   -28,   -28,   -28,   -28,   -28,   200,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,     0,   -36,     0,     0,   200,     0,     0,
       0,   -42,   -42,   -42,   -42,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,   200,     0,     0,     0,   -44,   -44,   -44,
     -44,   249,   249,   283,     0,   -44,     0,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   200,   -42,   249,   249,   283,
       0,   -42,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   200,   -44,     0,     0,     0,     0,   -44,     0,     0,
     200,     0,     0,     0,     0,     0,     0,     0,   200,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,   -70,     0,     0,
       0,     0,     0,     0,   346,   346,     0,   346,     0,     0,
     346,   346,     0,   346,   -61,   -61,   -70,   -70,   -70,   -70,
     -70,     0,    82,     0,   -70,   -71,   -71,   -71,   -71,   -70,
       0,     0,   -61,   -71,   200,     0,     0,     0,     0,     0,
       0,   -61,     0,   -61,     0,   -61,     0,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   224,   224,   224,
     -71,     0,   506,   507,   508,   -71,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,     0,   224,   224,
     224,     0,     0,   537,   538,   539,     0,   200,   224,   224,
     224,     0,     0,   548,   549,   550,     0,     0,     0,     0,
     200,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,     0,     0,   577,   578,   579,     0,   200,   224,   224,
     224,     0,     0,   588,   589,   590,     0,   200,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,   248,   248,
     282,     0,     0,     0,     0,     0,     0,   224,   224,   224,
       0,     0,   248,   248,   282,     0,     0,     0,   224,   224,
     224,     0,     0,   645,   646,   647,     0,   200,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,     0,     0,
     248,   248,   282,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   200,   -39,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -37,   -37,   -37,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   200,   -37,     0,
       0,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,   -38,   -38,   -38,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   200,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,     0,
     -38,   -45,   -45,   -45,   -45,     0,     0,     0,     0,   -45,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,     0,
       0,   -57,   -57,    88,    89,     0,   199,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,     0,     0,     0,
       0,   -45,     0,   200,     0,     0,     0,     0,   -57,    90,
     -57,    91,   -57,   101,   103,   104,   -57,     0,   247,   247,
       0,   -57,     0,   281,   313,   313,   313,     0,     0,     0,
       0,     0,   199,     0,   200,   313,   313,   313,     0,     0,
       0,     0,   313,   313,   313,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,   313,   313,   313,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
     345,   345,     0,   345,   313,   313,   313,     0,   345,   345,
       0,   345,   313,   313,   313,     0,   151,   152,   153,     0,
     344,   344,   200,     0,   345,   345,   344,   345,   199,   -84,
     -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,     0,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   199,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,     0,     0,   -30,     0,
       0,   199,     0,     0,   -40,   -40,   -40,   -40,     0,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,   199,     0,     0,
       0,   -46,   -46,   -46,   -46,   248,   248,   282,     0,   -46,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   199,
       0,   248,   248,   282,   -40,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   199,   -46,     0,     0,     0,
       0,   -46,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,   199,     0,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,   -47,     0,     0,     0,     0,     0,   345,   345,
       0,   345,     0,     0,   345,   345,     0,   345,     0,     0,
       0,   -47,   -47,   -47,   -47,   -47,   304,   -47,     0,   -47,
       0,     0,     0,     0,   -47,     0,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,     0,
       0,   501,   502,   503,   354,     0,     0,     0,     0,     0,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,     0,   532,   533,   534,     0,   354,     0,     0,     0,
       0,   199,   543,   544,   545,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   199,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,     0,     0,   -40,   -40,   -40,
     -40,   199,   583,   584,   585,   -40,     0,     0,     0,     0,
       0,   199,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,     0,     0,   -40,   -40,   -40,   -40,   -40,   199,
     -40,   -40,   247,   247,   281,     0,     0,   -40,     0,     0,
       0,   630,   631,   632,     0,     0,   247,   247,   281,     0,
       0,     0,   640,   641,   642,     0,     0,     0,     0,     0,
       0,   199,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,     0,     0,   247,   247,   281,   -34,   -34,   -34,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   199,   -34,
       0,     0,   -34,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,   -42,     0,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,     0,   198,
       0,   199,     0,   -42,     0,     0,     0,     0,   -85,   -85,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   246,   246,   -85,     0,     0,   280,     0,     0,     0,
     199,     0,     0,     0,   -85,   198,   -85,   -85,   -85,   -85,
     -85,   126,   127,   128,   129,     0,     0,     0,     0,     0,
     -79,   -79,   -79,     0,     0,     0,     0,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,     0,     0,   -79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -79,   199,   -79,   -79,
     -79,   -79,   -79,   343,   343,     0,     0,     0,     0,   343,
       0,   198,     0,     0,   -41,   -41,   -41,   -41,   752,   753,
     754,     0,   -41,     0,     0,     0,     0,     0,   199,   760,
     761,   762,     0,     0,     0,     0,   763,   764,   765,     0,
       0,   -41,   -41,   -41,   -41,   -41,   199,   -41,   -41,     0,
       0,   771,   772,   773,   -41,   198,     0,     0,     0,     0,
       0,   199,     0,     0,   344,   344,     0,   344,   796,   797,
     798,     0,   344,   344,     0,   344,   816,   817,   818,     0,
       0,     0,     0,     0,   198,     0,   199,     0,   344,   344,
       0,   344,     0,     0,   -80,   -80,   -80,     0,     0,     0,
     198,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -80,     0,     0,   -80,
       0,     0,   198,     0,     0,     0,     0,     0,     0,     0,
     -80,     0,   -80,   -80,   -80,   -80,   -80,     0,   198,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   198,     0,     0,
       0,   -81,   -81,   -81,   -81,   198,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,     0,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   304,   -81,   -81,   -81,   -81,   -81,     0,     0,   247,
     247,   281,     0,   304,     0,     0,     0,     0,     0,     0,
       0,   198,     0,     0,     0,   247,   247,   281,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,   -43,     0,     0,     0,     0,
       0,   304,     0,   198,   198,   198,   198,   198,   198,   527,
     528,   529,   530,   198,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   344,   344,   198,   344,     0,   -43,   344,   344,
       0,   344,     0,     0,     0,     0,     0,   198,   246,   246,
     246,   246,   246,   570,   571,   572,   573,   246,     0,     0,
       0,     0,   321,     0,   198,   789,     0,   197,     0,     0,
     321,     0,     0,   809,   198,   280,   280,   280,   280,   280,
     609,   610,   611,   612,   280,     0,   321,     0,     0,   354,
       0,     0,   198,     0,     0,   246,   246,   280,     0,   245,
     245,     0,     0,     0,   279,     0,     0,     0,     0,   246,
     246,   280,     0,   197,     0,     0,   123,   124,   125,   -41,
     -41,   -41,   -41,     0,   198,   343,   343,   343,   343,   343,
     666,   667,   668,   669,   343,     0,     0,   246,   246,   280,
       0,     0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,     0,   -41,     0,     0,     0,     0,   -41,
       0,   198,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
     441,   342,   342,     0,     0,     0,     0,   342,     0,   197,
     -66,     0,     0,   304,   304,   304,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,   304,   789,   -66,     0,     0,   321,
     321,   321,   -66,     0,   198,   -44,   -44,   -44,   -44,     0,
     321,   809,     0,   -44,     0,     0,   354,   354,   354,   354,
     354,     0,     0,   197,     0,   304,     0,     0,     0,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,   304,   -44,   -44,
       0,     0,     0,   198,     0,   -44,     0,     0,     0,     0,
     321,     0,   197,   789,     0,   304,   321,     0,     0,   809,
       0,   321,   354,     0,   -72,   -72,   -72,   -72,   197,     0,
       0,     0,   -72,     0,     0,     0,   789,   789,   789,   789,
     789,   809,   809,   809,   809,   809,     0,     0,     0,     0,
     197,   -72,   -72,   -72,   -72,   -72,   789,   809,     0,   -72,
     198,     0,     0,     0,   -72,     0,   197,     0,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,     0,     0,
     -75,   -75,   -75,   197,     0,     0,     0,   -75,   -75,   -75,
     -75,   198,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,   -75,     0,     0,   -75,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,   198,     0,     0,   343,   343,   197,
     343,     0,     0,     0,     0,   343,   343,     0,   343,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   198,
       0,   343,   343,   -70,   343,     0,     0,     0,     0,     0,
       0,   197,   197,   197,   524,   525,   526,     0,     0,     0,
       0,   197,   -70,   -70,   -70,   -70,   -70,     0,   370,   -70,
       0,     0,   197,     0,     0,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   245,   245,   567,   568,
     569,     0,     0,     0,     0,   245,     0,     0,   -45,   -45,
     -45,   -45,   197,     0,     0,     0,   -45,     0,     0,     0,
       0,     0,   197,   279,   279,   606,   607,   608,     0,     0,
       0,     0,   279,     0,     0,   -45,   -45,   -45,   -45,   -45,
     197,   -45,   -45,   245,   245,   279,     0,     0,   -45,     0,
       0,     0,   246,   246,   280,     0,     0,   245,   245,   279,
       0,     0,     0,   -46,   -46,   -46,   -46,     0,   246,   246,
     280,   -46,   197,   342,   342,   663,   664,   665,     0,     0,
       0,     0,   342,     0,     0,   245,   245,   279,     0,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,
       0,     0,     0,   -46,     0,     0,     0,     0,     0,   197,
       0,     0,     0,     0,     0,   343,   343,     0,   343,     0,
       0,   343,   343,     0,   343,     0,     0,     0,     0,   196,
       0,   -77,   -77,   -77,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   197,   -77,     0,     0,   -77,     0,     0,     0,
       0,   244,   244,     0,     0,     0,   278,   -77,     0,   -77,
     -77,   -77,   -77,   -77,     0,   196,   121,   122,     0,     0,
      20,    21,    22,     0,     0,     0,     0,    23,    24,    25,
      26,   197,    27,    28,   175,   359,    30,    31,    32,    33,
      34,     0,   176,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    37,    38,
     177,   178,   179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,   341,     0,     0,     0,     0,   341,
       0,   196,     0,     0,     0,     0,     0,     0,   197,     0,
     -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,     0,     0,   -25,     0,     0,     0,   197,
       0,   305,     0,     0,     0,   196,   -25,     0,   -25,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   322,   196,   342,   342,     0,   342,   355,
       0,     0,     0,   342,   342,     0,   342,     0,     0,     0,
     196,   -70,   -70,   -70,   -70,     0,     0,   197,     0,   342,
     342,   355,   342,     0,     0,     0,     0,     0,     0,   -70,
       0,     0,   196,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,     0,   721,   -70,     0,     0,   196,     0,
       0,   -70,     0,     0,    20,    21,    22,   196,     0,     0,
       0,    23,    24,    25,    26,   196,    27,    28,   175,   450,
      30,    31,    32,    33,    34,     0,   176,     0,     0,    35,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,     0,
      36,     0,    37,    38,   177,   178,   179,     0,     0,   -47,
     -47,   -47,   -47,   -45,     0,     0,     0,   -47,     0,     0,
       0,   196,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     245,   245,   279,     0,     0,   -45,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,     0,     0,   245,   245,   279,   -47,
       0,     0,     0,   196,   521,   523,     0,     0,     0,   180,
     181,   182,     0,   196,     0,     0,   183,   184,   185,   186,
       0,   187,   188,     0,   196,     0,     0,   189,   190,   191,
       0,     0,   -62,   -62,   -62,   -62,     0,   196,   564,   566,
       0,     0,     0,   342,   342,   192,   342,   244,     0,   342,
     342,     0,   342,     0,   196,     0,     0,   195,     0,   -62,
     -62,   -62,   -62,   -62,   196,   603,   605,   -62,     0,     0,
       0,     0,   -62,     0,   278,     0,     0,     0,     0,     0,
      93,     0,   196,     0,     0,   244,   244,   278,     0,   108,
     109,     0,     0,     0,   114,     0,     0,     0,     0,   244,
     244,   278,   117,   119,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -71,   130,   196,   660,   662,     0,   -69,   -69,
     -69,   -69,   -71,     0,   341,     0,     0,   244,   244,   278,
       0,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,     0,
       0,     0,     0,     0,   -71,   -69,   -69,   -69,   -69,   -69,
       0,   196,   306,   -69,     0,     0,     0,     0,   -69,     0,
       0,   155,   156,    20,    21,    22,     0,   158,     0,   159,
      23,    24,    25,    26,     0,    27,    28,   175,   464,    30,
      31,    32,    33,    34,   323,   176,     0,     0,    35,     0,
     356,     0,     0,     0,   196,     0,     0,     0,     0,    36,
       0,    37,    38,   177,   178,   179,     0,     0,     0,    20,
      21,    22,   356,   195,     0,     0,    23,    24,    25,    26,
       0,    27,    28,   175,   492,    30,    31,    32,    33,    34,
       0,   176,     0,   196,    35,     0,     0,     0,     0,     0,
       0,     0,   195,     0,     0,    36,     0,    37,    38,   177,
     178,   179,     0,   -82,   -82,   -82,     0,     0,   195,     0,
     -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,     0,     0,   -82,     0,
     195,     0,     0,     0,     0,     0,     0,     0,     0,   -82,
     196,   -82,   -82,   -82,   -82,   -82,   195,     0,   -72,   -72,
     -72,   -72,     0,     0,     0,   442,   -72,     0,     0,     0,
       0,   308,     0,   195,     0,     0,   -72,     0,     0,     0,
       0,   196,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -72,     0,     0,     0,   305,     0,   -72,   196,
       0,     0,     0,   325,     0,     0,     0,     0,   305,   358,
       0,     0,     0,     0,   196,     0,     0,   341,   341,   195,
     341,     0,     0,     0,     0,   341,   341,     0,   341,     0,
       0,   358,     0,     0,     0,   -46,   -46,   -46,   -46,   196,
       0,   341,   341,     0,   341,     0,   305,     0,     0,     0,
       0,   119,     0,   -46,     0,     0,     0,     0,     0,     0,
       0,   531,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
       0,     0,   119,     0,     0,   -46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,   574,     0,   322,     0,     0,
     791,     0,   119,     0,   -47,   322,     0,     0,   811,     0,
       0,     0,   119,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   322,   613,     0,   355,     0,   -47,     0,     0,     0,
     119,     0,     0,   623,   624,   626,     0,     0,     0,     0,
       0,     0,   244,   244,   278,     0,     0,   635,   636,   638,
       0,     0,     0,   -66,   -66,   -66,   -66,     0,   244,   244,
     278,   380,   119,     0,     0,     0,     0,   -57,   -57,   437,
     438,     0,   670,     0,     0,   673,   674,   676,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -57,     0,   -66,     0,     0,
       0,     0,     0,   -66,   -57,   439,   -57,   440,   -57,   195,
       0,   -57,     0,     0,     0,   341,   341,   -57,   341,     0,
       0,   341,   341,     0,   341,     0,     0,     0,   305,   305,
     305,     0,     0,     0,     0,     0,     0,     0,     0,   305,
     791,     0,     0,     0,   322,   322,   322,     0,   -43,   -43,
     -43,   -43,   195,     0,     0,   322,   811,     0,     0,     0,
       0,   355,   355,   355,   355,   355,     0,     0,     0,     0,
     305,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   305,   -43,   -40,   -40,   -40,   -40,   -43,     0,
       0,   195,   -40,     0,     0,   322,     0,     0,   791,     0,
     305,   322,     0,     0,   811,     0,   322,   355,     0,     0,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,
       0,   791,   791,   791,   791,   791,   811,   811,   811,   811,
     811,     0,     0,     0,     0,     0,     0,   306,     0,     0,
       0,   791,   811,     0,    20,    21,    22,     0,   195,   306,
       0,    23,    24,    25,    26,     0,    27,    28,   175,   500,
      30,    31,    32,    33,    34,     0,   176,     0,     0,    35,
       0,   -62,   -62,   -62,   -62,     0,     0,     0,     0,   119,
      36,     0,    37,    38,   177,   178,   179,   306,     0,   -62,
       0,     0,     0,     0,     0,     0,     0,   119,   -62,   -62,
     -62,   -62,   -62,     0,     0,   -62,     0,     0,     0,     0,
       0,   -62,   119,     0,     0,   780,   781,     0,   795,     0,
       0,     0,     0,   800,   801,     0,   815,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,     0,   119,   323,   825,
     826,   792,   828,     0,     0,   -72,   323,     0,     0,   812,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -26,
     -26,   -26,   323,     0,     0,   356,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,     0,     0,   -26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -26,   308,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,     0,     0,   308,    20,
      21,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,   175,   621,    30,    31,    32,    33,    34,
       0,   176,     0,     0,    35,   -42,   -42,   -42,   -42,     0,
     887,   888,   890,   -42,     0,    36,   308,    37,    38,   177,
     178,   179,     0,     0,     0,     0,   899,   900,   902,   306,
     306,   306,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     306,   792,     0,     0,     0,   323,   323,   323,     0,     0,
       0,     0,     0,     0,     0,     0,   323,   812,   -68,   -68,
     -68,   -68,   356,   356,   356,   356,   356,   325,     0,     0,
     794,   306,     0,   925,   926,   325,   928,     0,   814,   931,
     932,     0,   934,   306,     0,   -68,   -68,   -68,   -68,   -68,
       0,   325,     0,   -68,   358,     0,   323,     0,   -68,   792,
       0,   306,   323,     0,     0,   812,     0,   323,   356,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   792,   792,   792,   792,   792,   812,   812,   812,
     812,   812,     0,     0,     0,     0,     0,    20,    21,    22,
       0,     0,   792,   812,    23,    24,    25,    26,     0,    27,
      28,   175,   633,    30,    31,    32,    33,    34,     0,   176,
       0,     0,    35,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,     0,     0,    36,     0,    37,    38,   177,   178,   179,
       0,     0,     0,     0,     0,   -66,     0,     0,   308,   308,
     308,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   308,
     794,   -66,     0,     0,   325,   325,   325,   -66,   -44,   -44,
     -44,   -44,     0,     0,     0,   325,   814,     0,     0,     0,
       0,   358,   358,   358,   358,   358,     0,     0,     0,     0,
     308,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   308,   -44,   -41,   -41,   -41,   -41,   -44,     0,
       0,     0,   -41,     0,     0,   325,     0,     0,   794,     0,
     308,   325,     0,     0,   814,     0,   325,   358,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,     0,
       0,   794,   794,   794,   794,   794,   814,   814,   814,   814,
     814,     0,     0,     0,     0,     0,    20,    21,    22,     0,
       0,   794,   814,    23,    24,    25,    26,     0,    27,    28,
     175,   671,    30,    31,    32,    33,    34,     0,   176,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    37,    38,   177,   178,   179,   -83,
     -83,   -83,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,     0,     0,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,     0,   -83,   -83,   -83,
     -83,   -83,    20,    21,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,    27,    28,   175,   847,    30,    31,
      32,    33,    34,     0,   176,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      37,    38,   177,   178,   179,    20,    21,    22,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    27,    28,   175,
     863,    30,    31,    32,    33,    34,     0,   176,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,   177,   178,   179,    20,    21,
      22,     0,     0,     0,     0,    23,    24,    25,    26,     0,
      27,    28,   175,   885,    30,    31,    32,    33,    34,     0,
     176,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    37,    38,   177,   178,
     179,    20,    21,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,   175,   897,    30,    31,    32,
      33,    34,     0,   176,     0,     0,    35,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,    36,     0,    37,
      38,   177,   178,   179,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -71,     0,   -70,   -70,   -70,   -70,   -70,     0,
     449,     0,   -70,   -42,   -42,   -42,   -42,   -70,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -41,
     -41,   -41,   -41,     0,   -71,     0,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -43,   -43,
     -43,   -43,     0,   -42,     0,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -44,   -44,   -44,   -44,     0,   -41,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -70,   -70,   -70,   -70,     0,   -43,     0,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -45,
     -45,   -45,   -45,     0,   -44,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,     0,   688,   -70,   -46,   -46,
     -46,   -46,     0,   -70,     0,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,     0,   -45,   -47,   -47,   -47,   -47,   -45,
       0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,     0,     0,     0,     0,   -46,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,     0,
     -47,   -72,   -72,   -72,   -72,   -47,     0,     0,     0,   -72,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -69,     0,   -72,   -68,   -68,   -68,   -68,
       0,   -72,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,
     -67,   -67,   -67,   -67,   -68,   -69,     0,     0,   -45,   -45,
     -45,   -45,     0,   -68,   -68,   -68,   -68,   -68,   -67,     0,
     -68,     0,   -46,   -46,   -46,   -46,   -68,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -67,   -45,   -45,   -45,   -45,   -45,
     -67,   -45,   -45,   -47,   -47,   -47,   -47,     0,   -45,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -71,   -71,   -71,
     -71,     0,   -46,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -71,   -47,   -47,   -63,   -63,
     -63,   -63,     0,   -47,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -71,   -64,   -64,   -64,   -64,   -63,   -71,     0,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -64,     0,   -63,   -65,   -65,   -65,   -65,     0,   -63,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -64,   -72,   -72,   -72,
     -72,   -65,   -64,     0,     0,   -67,   -67,   -67,   -67,     0,
     -65,   -65,   -65,   -65,   -65,   -72,     0,   -65,     0,   -63,
     -63,   -63,   -63,   -65,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -72,   -67,   -67,   -67,   -67,   -67,   -72,     0,     0,
     -67,   -64,   -64,   -64,   -64,   -67,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,   -63,   -65,   -65,   -65,   -65,   -63,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -64,   -57,   -57,   376,
     377,   -64,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
     -65,   -62,   -62,   -62,   -62,   -65,     0,     0,     0,   -66,
     -66,   -66,   -66,     0,   -57,   378,   -57,   379,   -57,     0,
       0,   -57,     0,   -66,   -66,   -66,   -66,   -57,   -62,   -62,
     -62,   -62,   -62,     0,     0,   -62,   -66,   -66,   -66,   -66,
     -66,   -62,     0,     0,   -66,   -71,   -71,   -71,   -71,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,   -66,     0,   -69,
     -69,   -69,   -69,   -66,     0,     0,     0,   -68,   -68,   -68,
     -68,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
     -71,   -67,   -67,   -67,   -67,   -71,   -69,   -69,   -69,   -69,
     -69,     0,     0,   -69,   -68,   -68,   -68,   -68,   -68,   -69,
       0,   -68,   -72,   -72,   -72,   -72,     0,   -68,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -71,   -71,   -71,   -71,
       0,   -67,     0,     0,   -63,   -63,   -63,   -63,     0,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,   -72,   -64,   -64,
     -64,   -64,   -72,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,   -63,   -63,   -63,   -63,   -63,   -71,     0,   -63,   -65,
     -65,   -65,   -65,     0,   -63,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -64,   -72,   -72,   -72,   -72,     0,   -64,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -65,     0,     0,     0,     0,     0,   -65,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -72,   -33,   -33,
     -33,     0,     0,   -72,     0,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,
       0,   -33,     0,   -33,     0,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,   -33,     0,   -33,   -33,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,     0,   -35,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -35,     0,   -35,
     -35,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,     0,     0,   855,     0,   -76,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
     -76,     0,   -76,   -76,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,     0,   -36,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -36,     0,   -36,   -36,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,     0,   -39,     0,   -39,     0,     0,     0,     0,
       0,     0,     0,   -37,   -37,   -37,   -39,     0,   -39,   -39,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,     0,
       0,     0,     0,     0,     0,     0,   -38,   -38,   -38,   -37,
       0,   -37,   -37,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
       0,   -38,     0,     0,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -38,     0,   -38,   -38,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
       0,     0,   -82,     0,   -82,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -82,     0,   -82,   -82,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,     0,   -84,     0,   -84,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -84,     0,
     -84,   -84,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
     -34,     0,     0,     0,     0,     0,     0,     0,   -83,   -83,
     -83,   -34,     0,   -34,   -34,   -83,   -83,   -83,   -83,     0,
     -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
       0,   -83,     0,   -83,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -83,     0,   -83,   -83,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,     0,     0,   -85,     0,   -85,     0,     0,     0,
       0,     0,     0,     0,   -78,   -78,   -78,   -85,     0,   -85,
     -85,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,     0,     0,   916,     0,   -78,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -78,     0,   -78,   -78,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,     0,
     940,     0,   -76,     0,     0,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -76,     0,   -76,   -76,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -79,     0,   -79,     0,     0,     0,     0,
       0,     0,     0,   -80,   -80,   -80,   -79,     0,   -79,   -79,
     -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,     0,     0,   -80,     0,   -80,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -80,
       0,   -80,   -80,   -81,   -81,   -81,   -81,     0,   -81,   -81,
     -81,     0,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,
       0,   -81,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -81,     0,   -81,   -81,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
       0,     0,   -75,     0,   -75,     0,     0,     0,     0,     0,
       0,     0,   -78,   -78,   -78,   -75,     0,   -75,   -75,   -78,
     -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,
     -78,   -78,   -78,     0,     0,   957,     0,   -78,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -78,     0,
     -78,   -78,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,     0,     0,   -77,     0,
     -77,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      22,   -77,     0,   -77,   -77,    23,    24,    25,    26,     0,
      27,    28,   297,     0,   298,   299,    32,    33,    34,     0,
       0,     0,     0,   300,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    36,     0,   301,   302,    23,    24,
      25,    26,     0,    27,    28,   314,     0,   315,   316,    32,
      33,    34,     0,     0,     0,     0,   317,     0,     0,     0,
       0,     0,     0,     0,    20,    21,    22,    36,     0,   318,
     319,    23,    24,    25,    26,     0,    27,    28,   347,     0,
     348,   349,    32,    33,    34,     0,     0,     0,     0,   350,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      36,     0,   351,   352,    23,    24,    25,    26,     0,    27,
      28,   175,     0,    30,    31,    32,    33,    34,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
     -19,   -19,   -19,    36,     0,    37,    38,   -19,   -19,   -19,
     -19,     0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,     0,     0,     0,     0,   -19,     0,     0,     0,     0,
       0,     0,     0,   -20,   -20,   -20,   -19,     0,   -19,   -19,
     -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -20,
       0,   -20,   -20,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,   -33,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -33,     0,   -33,   -33,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,   -36,   -35,     0,   -35,   -35,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,   -36,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -36,     0,
     -36,   -36,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
     -37,   -39,     0,   -39,   -39,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,   -37,     0,     0,     0,     0,     0,     0,
       0,   -38,   -38,   -38,   -37,     0,   -37,   -37,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,   -38,     0,     0,     0,
       0,     0,     0,     0,   -18,   -18,   -18,   -38,     0,   -38,
     -38,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,     0,
     -18,   -18,   -18,   -18,   -18,     0,     0,     0,     0,   -18,
       0,     0,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -18,     0,   -18,   -18,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,   -25,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -25,     0,   -25,   -25,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,     0,   -82,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -82,     0,   -82,   -82,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -84,
       0,   -84,   -84,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,     0,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,   -34,     0,     0,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -34,     0,   -34,   -34,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -26,     0,   -26,   -26,   -83,
     -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,   -83,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -83,     0,
     -83,   -83,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,
     -85,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      22,   -85,     0,   -85,   -85,    23,    24,    25,    26,     0,
      27,    28,   782,     0,   783,   784,    32,    33,    34,     0,
       0,     0,     0,   785,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    36,     0,   786,   787,    23,    24,
      25,    26,     0,    27,    28,   802,     0,   803,   804,    32,
      33,    34,     0,     0,     0,     0,   805,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,    36,     0,   806,
     807,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,   -79,
       0,     0,     0,     0,     0,     0,     0,   -80,   -80,   -80,
     -79,     0,   -79,   -79,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,   -80,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -80,     0,   -80,   -80,   -81,   -81,   -81,
     -81,     0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -81,     0,   -81,   -81,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,   -75,     0,
       0,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -75,
       0,   -75,   -75,   -77,   -77,   -77,   -77,     0,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,     0,    20,    21,
      22,   -77,     0,     0,     0,    23,    24,    25,    26,     0,
      27,    28,   -77,     0,   -77,   -77,    32,    33,    34,    20,
      21,    22,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,     0,    36,     0,    75,    32,    33,    34,
      20,    21,    22,     0,     0,     0,     0,    23,    24,    25,
      26,     0,    27,    28,     0,    36,     0,   455,    32,    33,
      34,    20,    21,    22,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,     0,    36,     0,   469,    32,
      33,    34,    20,    21,    22,     0,     0,     0,     0,    23,
      24,    25,    26,     0,    27,    28,     0,    36,     0,   497,
      32,    33,    34,    20,    21,    22,     0,     0,     0,     0,
      23,    24,    25,    26,     0,    27,    28,     0,    36,     0,
     852,    32,    33,    34,   180,   181,   182,     0,     0,     0,
       0,   183,   184,   185,   186,     0,   187,   188,     0,    36,
       0,   868,   189,   190,   191,   180,   181,   182,     0,     0,
       0,     0,   183,   184,   185,   186,     0,   187,   188,     0,
     192,   118,     0,   189,   190,   191,   180,   181,   182,     0,
       0,     0,     0,   183,   184,   185,   186,     0,   187,   188,
       0,   192,   510,     0,   189,   190,   191,   180,   181,   182,
       0,     0,     0,     0,   183,   184,   185,   186,     0,   187,
     188,     0,   192,   541,     0,   189,   190,   191,   180,   181,
     182,     0,     0,     0,     0,   183,   184,   185,   186,     0,
     187,   188,     0,   192,   553,     0,   189,   190,   191,   180,
     181,   182,     0,     0,     0,     0,   183,   184,   185,   186,
       0,   187,   188,     0,   192,   581,     0,   189,   190,   191,
     180,   181,   182,     0,     0,     0,     0,   183,   184,   185,
     186,     0,   187,   188,     0,   192,   592,     0,   189,   190,
     191,   180,   181,   182,     0,     0,     0,     0,   183,   184,
     185,   186,     0,   187,   188,     0,   192,   619,     0,   189,
     190,   191,   180,   181,   182,     0,     0,     0,     0,   183,
     184,   185,   186,     0,   187,   188,     0,   192,   649,     0,
     189,   190,   191,   180,   181,   182,     0,     0,     0,     0,
     183,   184,   185,   186,     0,   187,   188,     0,   192,   758,
       0,   189,   190,   191,   180,   181,   182,     0,     0,     0,
       0,   183,   184,   185,   186,     0,   187,   188,     0,   192,
     769,     0,   189,   190,   191,   180,   181,   182,     0,     0,
       0,     0,   183,   184,   185,   186,     0,   187,   188,     0,
     192,   777,     0,   189,   190,   191,    20,    21,    22,     0,
       0,     0,     0,    23,    24,    25,    26,     0,    27,    28,
       0,   192,   822,     0,    32,    33,    34,   209,   210,   211,
       0,     0,     0,     0,   212,   213,   214,   215,     0,   216,
     217,     0,    36,     0,     0,   218,   219,   220,   225,   226,
     227,     0,     0,     0,     0,   228,   229,   230,   231,     0,
     232,   233,     0,   221,     0,     0,   234,   235,   236,   263,
     264,   265,     0,     0,     0,     0,   266,   267,   268,   269,
       0,   270,   271,     0,   237,     0,     0,   272,   273,   274,
     286,   287,   288,     0,     0,     0,     0,    23,    24,    25,
     289,     0,   290,   291,     0,   275,     0,     0,    32,    33,
      34,   250,   251,   252,     0,     0,     0,     0,   310,   311,
     312,   253,     0,   254,   255,     0,   292,     0,     0,   256,
     257,   258,   326,   327,   328,     0,     0,     0,     0,   329,
     330,   331,   332,     0,   333,   334,     0,   259,     0,     0,
     335,   336,   337,   512,   513,   514,     0,     0,     0,     0,
     183,   184,   185,   515,     0,   516,   517,     0,   338,     0,
       0,   189,   190,   191,   555,   556,   557,     0,     0,     0,
       0,   228,   229,   230,   558,     0,   559,   560,     0,   518,
       0,     0,   234,   235,   236,   594,   595,   596,     0,     0,
       0,     0,   266,   267,   268,   597,     0,   598,   599,     0,
     561,     0,     0,   272,   273,   274,   651,   652,   653,     0,
       0,     0,     0,   329,   330,   331,   654,     0,   655,   656,
       0,   600,     0,     0,   335,   336,   337,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,   -43,   -44,   -44,   -44,   -44,
       0,     0,   657,     0,   -44,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   -70,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,     0,   -70,   -70,   -70,   -70,   -70,     0,   481,   -70,
     -45,   -45,   -45,   -45,     0,     0,     0,     0,   -45,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,   -46,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,   -47,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,     0,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   491,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
     -71,   -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,     0,     0,   -66,     0,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -71,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -70,
     -70,   -70,   -70,   -70,     0,   746,   -70,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -72,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,   -57,   -57,   487,
     488,     0,     0,     0,     0,   -62,   -62,   -62,   -62,     0,
       0,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -57,   489,   -57,   490,   -57,     0,
       0,   -57,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,     0,     0,   -66,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -69,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -68,   -67,   -67,   -67,   -67,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -71,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,     0,     0,   -64,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -72,   -40,   -40,   -40,   -40,     0,     0,     0,
       0,   -40,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -40,     0,     0,     0,   -42,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -42,   -40,     0,     0,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -41,   -41,   -41,   -41,     0,     0,     0,     0,   -41,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -41,
       0,     0,     0,   -43,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -43,   -41,     0,     0,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,   -44,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -44,     0,     0,
       0,   -70,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -70,   -44,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,     0,   404,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,   -45,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,   -45,     0,     0,     0,   -46,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -46,
     -45,   -40,   -40,   -40,   -40,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -47,   -47,   -47,   -47,   -40,
       0,     0,     0,   -47,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -47,   -40,   -42,   -42,   -42,   -42,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -41,
     -41,   -41,   -41,   -42,     0,     0,   -43,   -43,   -43,   -43,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -41,   -42,     0,
     -44,   -44,   -44,   -44,   -43,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -43,   -43,   -43,   -43,   -43,   -44,   -43,
     -70,   -70,   -70,   -70,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -45,   -45,   -45,   -45,   -70,     0,
       0,   -46,   -46,   -46,   -46,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -45,   706,     0,   -47,   -47,   -47,   -47,   -46,
       0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -46,   -46,
     -46,   -46,   -46,   -47,   -46,   -57,   -57,   410,   411,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -62,
     -62,   -62,   -62,   -57,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -57,   412,   -57,   413,   -57,   -62,   -69,   -69,
     -69,   -69,   -66,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -66,   -66,   -66,   -66,   -66,   -69,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
       0,   -67,   -67,   -67,   -67,   -68,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -67,
     -63,   -63,   -63,   -63,   -71,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -71,   -71,   -71,   -71,   -71,   -63,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,     0,   -65,   -65,   -65,   -65,   -64,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -65,     0,     0,     0,     0,   -72,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -72,   -72,   -72,   -72,   -72
};

static const yytype_int16 yycheck[] =
{
       6,    42,     0,     0,     5,   175,     0,     5,     5,    39,
      13,     5,    39,   370,     0,     6,     7,     6,     7,     6,
       7,    13,     6,     7,    39,    40,     6,     7,   285,     6,
       7,    26,    17,    24,   391,    62,     0,    24,    41,    25,
       0,    13,    33,     0,    35,    40,    37,   404,    40,    40,
       0,    40,   309,     0,    46,    46,    40,    43,    44,    45,
      40,    25,    60,    40,   421,    25,    60,    68,    25,    46,
      68,    68,    99,    13,   431,    25,    39,     0,    25,    43,
      44,    45,    13,    43,    44,    45,    43,    44,    45,    13,
       6,     7,   449,    43,    44,    45,    43,    44,    45,   285,
      40,   107,    25,     6,     7,    39,    46,     0,     6,     7,
       0,    39,    40,     0,    39,    40,    13,    41,    46,    24,
      43,    44,    45,   309,   481,    41,    24,   297,     6,     7,
      46,    13,    25,   139,    39,    25,   134,    40,    25,   145,
     134,    16,    40,    46,   314,     6,     7,    36,    46,    38,
      43,    44,    45,    43,    44,    45,    43,    44,    45,    41,
      24,   167,    40,    24,    13,    39,    39,    40,     6,     7,
       6,     7,    33,    46,    35,    39,    37,   347,    15,    40,
      13,     3,     4,     5,    73,    46,    24,    13,    10,    11,
      12,    13,    41,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    40,    25,    26,    41,    28,    40,    46,   239,
      46,     6,     7,    46,    39,    41,    24,    39,   107,    41,
      42,    43,    44,    45,    39,    40,     3,     4,     5,    24,
      13,    39,   238,    10,    11,    12,    13,    39,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    26,    25,    26,
     139,    28,     6,     7,     8,     9,   145,    40,     6,     7,
      14,    40,    39,    46,    41,    42,    43,    44,    45,    24,
      24,    40,    13,    39,     6,     7,    24,    46,   167,    33,
      34,    35,    36,    37,    39,    39,    40,   285,     3,     4,
       5,   285,    46,     6,     7,    10,    11,    12,    13,    40,
      15,    16,    24,   192,    24,    46,    21,    22,    23,    41,
      25,   309,    39,    40,    46,   309,    25,    39,    13,   360,
      40,    39,    17,    24,    39,    39,    46,    40,    43,    44,
      45,   688,   221,    46,    43,    44,    45,    41,    39,    24,
       6,     7,    46,     3,     4,     5,    41,    39,   237,   706,
      10,    11,    12,    13,    39,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   721,    25,    26,    33,    28,    35,
     259,    37,     6,     7,    26,    41,    24,     6,     7,    39,
      46,    41,    42,    43,    44,    45,   275,    13,    40,   746,
      13,    17,    13,    13,    17,    24,    17,    17,     6,     7,
       8,     9,    24,   292,     6,     7,    14,    41,     6,     7,
     451,    40,    46,   302,    24,    41,    24,    46,    41,    26,
      41,    41,    24,    24,   465,    33,    34,    35,    36,    37,
     319,    39,    40,    40,    24,    33,    13,    35,    46,    37,
      17,    24,    24,    41,     6,     7,     8,     9,    46,   338,
      40,   452,   493,    26,   452,   452,    46,    39,     6,     7,
       8,     9,    24,   352,    41,   466,    14,    40,   466,   466,
      24,    33,    34,    35,    36,    37,    24,    39,    40,    24,
     107,     6,     7,    40,    46,    33,    34,    35,    36,    37,
      41,    39,    40,   494,    39,    46,   494,   494,    46,    24,
      26,     6,     7,     8,     9,    40,    26,    40,    26,    14,
      40,    46,   139,    46,    40,    40,     6,     7,   145,    24,
      40,    46,    40,    40,     6,     7,     8,     9,    33,    34,
      35,    36,    37,    26,    39,    40,   163,   164,   165,   166,
     167,    46,    24,    40,     6,     7,   173,    40,    25,    46,
      40,    33,    34,    35,    36,    37,    46,    39,    40,    40,
      14,    13,    24,    17,    46,   454,    43,    44,    45,    39,
      40,    33,    41,    35,    40,    37,    46,    46,    40,   468,
      46,     3,     4,     5,    46,    39,    14,    41,    10,    11,
      12,    13,    46,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    40,    25,    26,    41,    28,   496,    24,    24,
      46,    39,   782,    41,    14,    40,   622,    39,    46,    41,
      42,    43,    44,    45,    40,    40,    39,    40,   634,   518,
      46,    46,   802,    46,    40,     3,     4,     5,    40,    39,
      46,    41,    10,    11,    12,    13,    46,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    26,    25,    26,    40,
      28,     6,     7,     8,     9,    24,   672,    39,    40,    14,
      40,    39,   561,    41,    42,    43,    44,    45,    40,    24,
      24,    40,    24,    24,    24,     6,     7,    46,    33,    34,
      35,    36,    37,    40,    39,    40,    40,    40,    40,    40,
      40,    46,    46,    46,    46,    46,    46,     6,     7,     8,
       9,   600,    33,    26,    35,    14,    37,   723,    26,    40,
     726,     6,     7,     8,     9,   731,    41,    40,   734,    14,
      39,    46,    40,   622,    33,    34,    35,    36,    37,    24,
      39,   747,    41,    39,   750,   634,    26,    46,    33,    34,
      35,    36,    37,    39,    39,    40,    40,     3,     4,     5,
      40,    46,    46,    13,    10,    11,    12,    13,   657,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    13,    25,
      26,    13,    28,   672,     6,     7,     8,     9,    40,    13,
      25,    39,    14,    39,    46,    41,    42,    43,    44,    45,
      14,    25,    24,    17,    14,    40,    24,   848,    43,    44,
      45,    33,    34,    35,    36,    37,    40,    39,    40,    43,
      44,    45,    40,   864,    46,    39,    39,    41,    46,    39,
      26,    41,    46,    26,   723,    40,    46,   726,   844,   845,
     846,    46,   731,    26,    40,   734,    13,    40,   849,   855,
     856,   849,   849,    39,   860,   861,   862,    40,   747,     6,
       7,   750,    14,    39,   865,   871,   872,   865,   865,    26,
      13,   877,   878,   879,   880,   881,    39,    24,    39,    40,
     886,    26,    25,    40,    39,    46,    33,    39,    35,    41,
      37,    41,   898,    40,    46,    40,    46,    40,   787,    46,
      43,    44,    45,    39,    40,   911,    13,    40,   914,    26,
     916,   917,    26,    46,   920,    39,   922,   923,   807,     6,
       7,     8,     9,    40,    40,    24,    40,    14,    39,    40,
      46,   937,   938,   939,   940,   941,   942,   943,   944,   945,
     946,    39,    40,    39,    40,    39,    33,    34,    35,    36,
      37,   957,   958,    39,    41,   844,   845,   846,    40,    46,
      41,    13,   851,    41,    46,    46,   855,   856,    46,     6,
       7,   860,   861,   862,    14,    40,    39,    17,   867,    39,
      39,    46,   871,   872,     6,     7,     8,     9,   877,   878,
     879,   880,   881,    39,    14,   622,    33,   886,    35,    39,
      37,    41,    24,    40,    40,    14,    46,   634,    17,   898,
      46,    33,    34,    35,    36,    37,    13,    39,    40,    39,
      39,    41,   911,    40,    46,   914,    46,   916,   917,    46,
      39,   920,    41,   922,   923,    40,    40,    46,    36,    41,
      40,    46,    46,    39,    46,   672,    46,    17,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   946,    40,    24,
      13,    13,    39,    39,    46,    63,    64,    65,   957,   958,
      68,    69,    70,    71,    72,    73,    40,    40,    39,     6,
       7,    40,    46,    46,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    40,    39,   723,    24,    39,   726,
      46,     6,     7,    40,   731,    40,    33,   734,    35,    46,
      37,    46,    40,    40,    13,    40,    40,    39,    46,    46,
     747,    46,    46,   750,    13,    40,    13,    40,    33,    40,
      35,    46,    37,    46,    13,    46,    41,    39,   136,   137,
     138,    46,   140,   141,     3,     4,     5,    39,   146,    40,
     148,    10,    11,    12,    13,    46,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    39,    25,    26,    40,    28,
       6,     7,     8,     9,    46,    40,    39,    39,    14,    39,
      39,    46,    41,    42,    43,    44,    45,    40,    24,    40,
      40,    39,    39,    46,   192,    46,    46,    33,    34,    35,
      36,    37,    40,    39,    40,    40,    39,    39,    46,    40,
      46,    46,     3,     4,     5,    46,    40,   844,   845,   846,
      40,    40,    13,   221,    15,    16,    46,    46,   855,   856,
      21,    22,    23,   860,   861,   862,    39,    14,    39,   237,
      17,     6,     7,    40,   871,   872,    40,    40,    39,    46,
     877,   878,   879,   880,   881,    40,    40,    40,    40,   886,
      40,   259,    39,    46,    41,    40,    46,    39,    33,    46,
      35,   898,    37,     6,     7,    41,    41,   275,    41,    40,
      46,    46,    40,    46,   911,    46,   284,   914,    46,   916,
     917,    24,    39,   920,   292,   922,   923,    40,     6,     7,
      33,    39,    35,    46,    37,    39,     6,     7,     8,     9,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
       6,     7,     8,     9,    39,    33,    13,    35,    14,    37,
     957,   958,    40,    33,    34,    35,    36,    37,    24,    39,
     338,    41,    13,    39,    16,    40,    46,    33,    34,    35,
      36,    37,    41,    39,    40,    39,    41,    46,    39,    39,
      46,    46,    41,   361,   362,   363,    41,    46,   366,   367,
     368,    46,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,    41,   382,   383,   384,    41,    46,   387,
     388,   389,    46,   391,   392,   393,   394,    41,    41,   397,
     398,   399,    46,    46,    15,    15,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,     6,     7,   417,
     418,   419,    41,   421,   422,   423,   424,    46,    15,   427,
     428,   429,    16,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,    33,    41,    35,    16,    37,    15,
      46,   449,    41,    41,   452,   453,   454,    46,    46,    16,
      15,    41,    41,   461,   462,   463,    46,    46,   466,   467,
     468,    16,     0,    15,   472,   473,   474,     5,    16,   477,
     478,   479,    40,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,    40,    15,   494,   495,   496,     3,
       4,     5,    16,    40,    40,    24,    10,    11,    12,    13,
      40,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     518,    25,    26,    24,    28,    24,    13,    40,    13,    24,
      24,    24,    40,    40,    40,    39,    24,    41,    42,    43,
      44,    45,     3,     4,     5,    24,    24,    24,    40,    10,
      11,    12,    13,    13,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   561,    25,    26,    40,    28,    40,    13,
      24,    24,    24,    40,    40,    40,    40,    24,    39,    24,
      41,    42,    43,    44,    45,    24,    13,    13,     6,     7,
      40,     3,     4,     5,    40,    24,    24,    40,    10,    11,
      12,    13,   600,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    13,    25,    26,    33,    28,    35,    24,    37,
      24,    24,    40,    40,    24,    24,    40,    39,    46,    41,
      42,    43,    44,    45,    24,     3,     4,     5,    24,    24,
      13,    24,    10,    11,    12,    13,    40,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    40,    25,    26,   657,
      28,    40,    40,    40,    40,    24,    15,    24,    16,    24,
      24,    39,    24,    41,    42,    43,    44,    45,     6,     7,
     678,   679,   680,    15,    40,    16,    15,    40,    15,    40,
     688,   689,   690,   691,    40,    16,    16,    40,   696,   697,
     698,    40,    40,    40,    40,    33,    40,    35,   706,    37,
      40,    24,    40,   711,   712,   713,    40,    40,    46,    24,
      62,    40,    40,   721,    40,    40,   724,   725,    36,   727,
     728,   729,   730,    40,   732,   733,    40,   735,   736,   737,
     738,     6,     7,     8,     9,    39,    39,    39,   746,    14,
     748,   749,    40,   751,    40,    63,    64,    65,    40,    24,
      68,    69,    70,    71,    72,    73,    40,    40,    33,    34,
      35,    36,    37,    40,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     3,     4,     5,    40,    39,    39,
      39,    10,    11,    12,    13,    40,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    40,    25,    26,    40,    28,
      40,    40,    40,    40,    40,    24,     6,     7,     8,     9,
      39,    24,    41,    42,    43,    44,    45,    40,   136,   137,
     138,    24,   140,   141,    24,    40,    40,    24,   146,    40,
     148,    40,    40,    33,    34,    35,    36,    37,    24,    39,
      40,   849,   850,   851,    40,    40,    46,    40,    40,    40,
       6,     7,    40,     3,     4,     5,    40,   865,   866,   867,
      10,    11,    12,    13,    40,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   192,    25,    26,    33,    28,    35,
      40,    37,    40,    -1,    40,    -1,    -1,    -1,    -1,    39,
      46,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   912,   913,    -1,   915,    -1,    -1,
     918,   919,    -1,   921,     3,     4,     5,    -1,    -1,   237,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,   275,    -1,    -1,
       6,     7,    -1,     3,     4,     5,   284,    -1,    -1,    -1,
      10,    11,    12,    13,   292,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    33,    28,    35,
      -1,    37,     6,     7,    40,    -1,    -1,    -1,    -1,    39,
      46,    41,    42,    43,    44,    45,     6,     7,     8,     9,
      -1,     6,     7,    -1,    14,    -1,    -1,    -1,    -1,    33,
     338,    35,    -1,    37,    -1,    -1,    40,    -1,    -1,    24,
      -1,    -1,    46,    33,    34,    35,    36,    37,    33,    39,
      35,    41,    37,   361,   362,   363,    46,    -1,   366,   367,
     368,    -1,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,    -1,   382,   383,   384,    -1,    -1,   387,
     388,   389,    -1,   391,   392,   393,   394,    -1,    -1,   397,
     398,   399,    -1,    -1,    -1,    -1,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,    -1,    -1,   417,
     418,   419,    -1,   421,   422,   423,   424,    -1,    -1,   427,
     428,   429,    -1,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   449,    -1,    -1,   452,   453,   454,    -1,    -1,    -1,
      -1,    -1,    -1,   461,   462,   463,    -1,    -1,   466,   467,
     468,    -1,    -1,    -1,   472,   473,   474,    -1,    -1,   477,
     478,   479,    -1,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,    -1,    -1,   494,   495,   496,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     518,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   561,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,     6,     7,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,   600,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    33,    28,    35,    -1,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,   657,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,     6,     7,
     678,   679,   680,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     688,   689,   690,   691,    -1,    -1,    -1,    -1,   696,   697,
     698,    -1,    -1,    -1,    -1,    33,    -1,    35,   706,    37,
      -1,    -1,    40,   711,   712,   713,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   721,    -1,    -1,   724,   725,    36,   727,
     728,   729,   730,    -1,   732,   733,    -1,   735,   736,   737,
     738,     6,     7,     8,     9,    -1,    -1,    -1,   746,    14,
     748,   749,    -1,   751,    -1,    63,    64,    65,    -1,    24,
      68,    69,    70,    71,    72,    73,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      39,    -1,    41,    42,    43,    44,    45,    -1,   136,   137,
     138,    -1,   140,   141,    24,    -1,    -1,    -1,   146,    -1,
     148,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,   849,   850,   851,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,   865,   866,   867,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   192,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   912,   913,    -1,   915,    -1,    -1,
     918,   919,    -1,   921,     3,     4,     5,    -1,    -1,   237,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,   275,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,   284,    -1,    -1,    -1,
      10,    11,    12,    13,   292,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    39,
      -1,    41,    42,    43,    44,    45,     6,     7,     8,     9,
      -1,     6,     7,    -1,    14,    -1,    -1,    -1,    -1,    -1,
     338,    33,    34,    35,    36,    37,    -1,    39,    40,    24,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    33,    39,
      35,    41,    37,   361,   362,   363,    46,    -1,   366,   367,
     368,    -1,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,    -1,   382,   383,   384,    -1,    -1,   387,
     388,   389,    -1,   391,   392,   393,   394,    -1,    -1,   397,
     398,   399,    -1,    -1,    -1,    -1,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,    -1,    -1,   417,
     418,   419,    -1,   421,   422,   423,   424,    -1,    -1,   427,
     428,   429,    -1,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   449,    -1,    -1,   452,   453,   454,    -1,    -1,    -1,
      -1,    -1,    -1,   461,   462,   463,    -1,    -1,   466,   467,
     468,    -1,    -1,    -1,   472,   473,   474,    -1,    -1,   477,
     478,   479,    -1,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,    -1,    -1,   494,   495,   496,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     518,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   561,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,   600,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,     6,     7,     8,
       9,    -1,     6,     7,    -1,    14,    -1,    39,    -1,    41,
      42,    43,    44,    45,     6,     7,     8,     9,    -1,    -1,
      24,    -1,    36,    -1,    33,    34,    35,    36,    37,    33,
      39,    35,    41,    37,    -1,    -1,    -1,    46,    -1,   657,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    63,
      64,    65,    -1,    -1,    68,    69,    70,    71,    72,    73,
     678,   679,   680,    -1,    -1,    -1,    -1,    -1,    82,    -1,
     688,   689,   690,   691,    -1,    -1,    -1,    -1,   696,   697,
     698,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   706,    -1,
      -1,    -1,    -1,   711,   712,   713,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   721,    -1,    -1,   724,   725,    -1,   727,
     728,   729,   730,    -1,   732,   733,    -1,   735,   736,   737,
     738,    -1,   136,   137,   138,    -1,   140,   141,   746,    -1,
     748,   749,   146,   751,   148,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,   192,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,   221,    -1,    -1,
      -1,     6,     7,     8,     9,    39,    -1,    41,    42,    43,
      44,    45,    -1,   237,    -1,    -1,    -1,     6,     7,     8,
       9,   849,   850,   851,    -1,    14,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   259,    41,   865,   866,   867,
      -1,    46,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,   275,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,
     284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,   912,   913,    -1,   915,    -1,    -1,
     918,   919,    -1,   921,     6,     7,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,     6,     7,     8,     9,    46,
      -1,    -1,    24,    14,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   361,   362,   363,
      41,    -1,   366,   367,   368,    46,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,    -1,   382,   383,
     384,    -1,    -1,   387,   388,   389,    -1,   391,   392,   393,
     394,    -1,    -1,   397,   398,   399,    -1,    -1,    -1,    -1,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,    -1,    -1,   417,   418,   419,    -1,   421,   422,   423,
     424,    -1,    -1,   427,   428,   429,    -1,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   449,    -1,    -1,   452,   453,
     454,    -1,    -1,    -1,    -1,    -1,    -1,   461,   462,   463,
      -1,    -1,   466,   467,   468,    -1,    -1,    -1,   472,   473,
     474,    -1,    -1,   477,   478,   479,    -1,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,    -1,    -1,
     494,   495,   496,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   518,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   561,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,   600,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    36,    -1,    33,    34,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,   657,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    63,    64,    65,    41,    -1,    68,    69,
      -1,    46,    -1,    73,   678,   679,   680,    -1,    -1,    -1,
      -1,    -1,    82,    -1,   688,   689,   690,   691,    -1,    -1,
      -1,    -1,   696,   697,   698,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   706,    -1,    -1,    -1,    -1,   711,   712,   713,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   721,    -1,    -1,
     724,   725,    -1,   727,   728,   729,   730,    -1,   732,   733,
      -1,   735,   736,   737,   738,    -1,   136,   137,   138,    -1,
     140,   141,   746,    -1,   748,   749,   146,   751,   148,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,   192,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,   221,    -1,    -1,     6,     7,     8,     9,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,   237,    -1,    -1,
      -1,     6,     7,     8,     9,   849,   850,   851,    -1,    14,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,   259,
      -1,   865,   866,   867,    46,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   275,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   292,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,   912,   913,
      -1,   915,    -1,    -1,   918,   919,    -1,   921,    -1,    -1,
      -1,    33,    34,    35,    36,    37,   107,    39,    -1,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,   361,   362,   363,   145,    -1,    -1,    -1,    -1,    -1,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,    -1,   382,   383,   384,    -1,   167,    -1,    -1,    -1,
      -1,   391,   392,   393,   394,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,    -1,    -1,     6,     7,     8,
       9,   421,   422,   423,   424,    14,    -1,    -1,    -1,    -1,
      -1,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,    -1,    -1,    33,    34,    35,    36,    37,   449,
      39,    40,   452,   453,   454,    -1,    -1,    46,    -1,    -1,
      -1,   461,   462,   463,    -1,    -1,   466,   467,   468,    -1,
      -1,    -1,   472,   473,   474,    -1,    -1,    -1,    -1,    -1,
      -1,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,    -1,    -1,   494,   495,   496,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   518,    25,
      -1,    -1,    28,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    36,
      -1,   561,    -1,    46,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    68,    69,    28,    -1,    -1,    73,    -1,    -1,    -1,
     600,    -1,    -1,    -1,    39,    82,    41,    42,    43,    44,
      45,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,   657,    41,    42,
      43,    44,    45,   140,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,    -1,    -1,     6,     7,     8,     9,   678,   679,
     680,    -1,    14,    -1,    -1,    -1,    -1,    -1,   688,   689,
     690,   691,    -1,    -1,    -1,    -1,   696,   697,   698,    -1,
      -1,    33,    34,    35,    36,    37,   706,    39,    40,    -1,
      -1,   711,   712,   713,    46,   192,    -1,    -1,    -1,    -1,
      -1,   721,    -1,    -1,   724,   725,    -1,   727,   728,   729,
     730,    -1,   732,   733,    -1,   735,   736,   737,   738,    -1,
      -1,    -1,    -1,    -1,   221,    -1,   746,    -1,   748,   749,
      -1,   751,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
     237,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,   275,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,   284,    -1,    -1,
      -1,    10,    11,    12,    13,   292,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,   622,    41,    42,    43,    44,    45,    -1,    -1,   849,
     850,   851,    -1,   634,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,   865,   866,   867,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,   672,    -1,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,    33,    34,    35,    36,    37,    -1,
      39,    40,   912,   913,   391,   915,    -1,    46,   918,   919,
      -1,   921,    -1,    -1,    -1,    -1,    -1,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,    -1,    -1,
      -1,    -1,   723,    -1,   421,   726,    -1,    36,    -1,    -1,
     731,    -1,    -1,   734,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,    -1,   747,    -1,    -1,   750,
      -1,    -1,   449,    -1,    -1,   452,   453,   454,    -1,    68,
      69,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,   466,
     467,   468,    -1,    82,    -1,    -1,    85,    86,    87,     6,
       7,     8,     9,    -1,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,    -1,    -1,   494,   495,   496,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,
      -1,   518,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,   140,   141,    -1,    -1,    -1,    -1,   146,    -1,   148,
      24,    -1,    -1,   844,   845,   846,    -1,    -1,    -1,    33,
      34,    35,    36,    37,   855,   856,    40,    -1,    -1,   860,
     861,   862,    46,    -1,   561,     6,     7,     8,     9,    -1,
     871,   872,    -1,    14,    -1,    -1,   877,   878,   879,   880,
     881,    -1,    -1,   192,    -1,   886,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   898,    39,    40,
      -1,    -1,    -1,   600,    -1,    46,    -1,    -1,    -1,    -1,
     911,    -1,   221,   914,    -1,   916,   917,    -1,    -1,   920,
      -1,   922,   923,    -1,     6,     7,     8,     9,   237,    -1,
      -1,    -1,    14,    -1,    -1,    -1,   937,   938,   939,   940,
     941,   942,   943,   944,   945,   946,    -1,    -1,    -1,    -1,
     259,    33,    34,    35,    36,    37,   957,   958,    -1,    41,
     657,    -1,    -1,    -1,    46,    -1,   275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,
       3,     4,     5,   292,    -1,    -1,    -1,    10,    11,    12,
      13,   688,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,   706,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,   721,    -1,    -1,   724,   725,   338,
     727,    -1,    -1,    -1,    -1,   732,   733,    -1,   735,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,   746,
      -1,   748,   749,    14,   751,    -1,    -1,    -1,    -1,    -1,
      -1,   370,   371,   372,   373,   374,   375,    -1,    -1,    -1,
      -1,   380,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    -1,   391,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   404,   405,   406,   407,   408,
     409,    -1,    -1,    -1,    -1,   414,    -1,    -1,     6,     7,
       8,     9,   421,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,   431,   432,   433,   434,   435,   436,    -1,    -1,
      -1,    -1,   441,    -1,    -1,    33,    34,    35,    36,    37,
     449,    39,    40,   452,   453,   454,    -1,    -1,    46,    -1,
      -1,    -1,   849,   850,   851,    -1,    -1,   466,   467,   468,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,   865,   866,
     867,    14,   481,   482,   483,   484,   485,   486,    -1,    -1,
      -1,    -1,   491,    -1,    -1,   494,   495,   496,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,   518,
      -1,    -1,    -1,    -1,    -1,   912,   913,    -1,   915,    -1,
      -1,   918,   919,    -1,   921,    -1,    -1,    -1,    -1,    36,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   561,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    68,    69,    -1,    -1,    -1,    73,    39,    -1,    41,
      42,    43,    44,    45,    -1,    82,    83,    84,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,   600,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,   657,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,   688,
      -1,   107,    -1,    -1,    -1,   192,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,   706,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   721,   139,   221,   724,   725,    -1,   727,   145,
      -1,    -1,    -1,   732,   733,    -1,   735,    -1,    -1,    -1,
     237,     6,     7,     8,     9,    -1,    -1,   746,    -1,   748,
     749,   167,   751,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,   259,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,   275,    -1,
      -1,    46,    -1,    -1,     3,     4,     5,   284,    -1,    -1,
      -1,    10,    11,    12,    13,   292,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,     6,
       7,     8,     9,    24,    -1,    -1,    -1,    14,    -1,    -1,
      -1,   338,    33,    34,    35,    36,    37,    -1,    39,    40,
     849,   850,   851,    -1,    -1,    46,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,   865,   866,   867,    46,
      -1,    -1,    -1,   370,   371,   372,    -1,    -1,    -1,     3,
       4,     5,    -1,   380,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,   391,    -1,    -1,    21,    22,    23,
      -1,    -1,     6,     7,     8,     9,    -1,   404,   405,   406,
      -1,    -1,    -1,   912,   913,    39,   915,   414,    -1,   918,
     919,    -1,   921,    -1,   421,    -1,    -1,    36,    -1,    33,
      34,    35,    36,    37,   431,   432,   433,    41,    -1,    -1,
      -1,    -1,    46,    -1,   441,    -1,    -1,    -1,    -1,    -1,
      59,    -1,   449,    -1,    -1,   452,   453,   454,    -1,    68,
      69,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,   466,
     467,   468,    81,    82,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    92,   481,   482,   483,    -1,     6,     7,
       8,     9,    24,    -1,   491,    -1,    -1,   494,   495,   496,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    46,    33,    34,    35,    36,    37,
      -1,   518,   107,    41,    -1,    -1,    -1,    -1,    46,    -1,
      -1,   140,   141,     3,     4,     5,    -1,   146,    -1,   148,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   139,    25,    -1,    -1,    28,    -1,
     145,    -1,    -1,    -1,   561,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,     3,
       4,     5,   167,   192,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,   600,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,    -1,     3,     4,     5,    -1,    -1,   237,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
     259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
     657,    41,    42,    43,    44,    45,   275,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,   284,    14,    -1,    -1,    -1,
      -1,   107,    -1,   292,    -1,    -1,    24,    -1,    -1,    -1,
      -1,   688,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,   622,    -1,    46,   706,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,   634,   145,
      -1,    -1,    -1,    -1,   721,    -1,    -1,   724,   725,   338,
     727,    -1,    -1,    -1,    -1,   732,   733,    -1,   735,    -1,
      -1,   167,    -1,    -1,    -1,     6,     7,     8,     9,   746,
      -1,   748,   749,    -1,   751,    -1,   672,    -1,    -1,    -1,
      -1,   370,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   380,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    -1,   391,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   404,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,   414,    -1,   723,    -1,    -1,
     726,    -1,   421,    -1,    24,   731,    -1,    -1,   734,    -1,
      -1,    -1,   431,    33,    34,    35,    36,    37,    -1,    39,
      40,   747,   441,    -1,   750,    -1,    46,    -1,    -1,    -1,
     449,    -1,    -1,   452,   453,   454,    -1,    -1,    -1,    -1,
      -1,    -1,   849,   850,   851,    -1,    -1,   466,   467,   468,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,   865,   866,
     867,    14,   481,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,   491,    -1,    -1,   494,   495,   496,    -1,    -1,
      33,    34,    35,    36,    37,    24,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    33,    34,    35,    36,    37,   518,
      -1,    40,    -1,    -1,    -1,   912,   913,    46,   915,    -1,
      -1,   918,   919,    -1,   921,    -1,    -1,    -1,   844,   845,
     846,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   855,
     856,    -1,    -1,    -1,   860,   861,   862,    -1,     6,     7,
       8,     9,   561,    -1,    -1,   871,   872,    -1,    -1,    -1,
      -1,   877,   878,   879,   880,   881,    -1,    -1,    -1,    -1,
     886,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,   898,    41,     6,     7,     8,     9,    46,    -1,
      -1,   600,    14,    -1,    -1,   911,    -1,    -1,   914,    -1,
     916,   917,    -1,    -1,   920,    -1,   922,   923,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,   937,   938,   939,   940,   941,   942,   943,   944,   945,
     946,    -1,    -1,    -1,    -1,    -1,    -1,   622,    -1,    -1,
      -1,   957,   958,    -1,     3,     4,     5,    -1,   657,   634,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,   688,
      39,    -1,    41,    42,    43,    44,    45,   672,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   706,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    46,   721,    -1,    -1,   724,   725,    -1,   727,    -1,
      -1,    -1,    -1,   732,   733,    -1,   735,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,   746,   723,   748,
     749,   726,   751,    -1,    -1,    24,   731,    -1,    -1,   734,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,     3,
       4,     5,   747,    -1,    -1,   750,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,   622,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,   634,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,     6,     7,     8,     9,    -1,
     849,   850,   851,    14,    -1,    39,   672,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,   865,   866,   867,   844,
     845,   846,    33,    34,    35,    36,    37,    -1,    39,    40,
     855,   856,    -1,    -1,    -1,   860,   861,   862,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   871,   872,     6,     7,
       8,     9,   877,   878,   879,   880,   881,   723,    -1,    -1,
     726,   886,    -1,   912,   913,   731,   915,    -1,   734,   918,
     919,    -1,   921,   898,    -1,    33,    34,    35,    36,    37,
      -1,   747,    -1,    41,   750,    -1,   911,    -1,    46,   914,
      -1,   916,   917,    -1,    -1,   920,    -1,   922,   923,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   937,   938,   939,   940,   941,   942,   943,   944,
     945,   946,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,   957,   958,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,   844,   845,
     846,    -1,    -1,    -1,    33,    34,    35,    36,    37,   855,
     856,    40,    -1,    -1,   860,   861,   862,    46,     6,     7,
       8,     9,    -1,    -1,    -1,   871,   872,    -1,    -1,    -1,
      -1,   877,   878,   879,   880,   881,    -1,    -1,    -1,    -1,
     886,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,   898,    41,     6,     7,     8,     9,    46,    -1,
      -1,    -1,    14,    -1,    -1,   911,    -1,    -1,   914,    -1,
     916,   917,    -1,    -1,   920,    -1,   922,   923,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,   937,   938,   939,   940,   941,   942,   943,   944,   945,
     946,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,   957,   958,    10,    11,    12,    13,    -1,    15,    16,
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
      -1,    -1,    14,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,     6,     7,     8,     9,    46,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,     6,
       7,     8,     9,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,     6,     7,
       8,     9,    -1,    46,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,     6,     7,     8,     9,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    40,     6,     7,     8,     9,    -1,    46,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,     6,
       7,     8,     9,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,     6,     7,
       8,     9,    -1,    46,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,     6,     7,     8,     9,    46,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,     6,     7,     8,     9,    46,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,    -1,    40,     6,     7,     8,     9,
      -1,    46,    33,    34,    35,    36,    37,    -1,    -1,    40,
       6,     7,     8,     9,    24,    46,    -1,    -1,     6,     7,
       8,     9,    -1,    33,    34,    35,    36,    37,    24,    -1,
      40,    -1,     6,     7,     8,     9,    46,    33,    34,    35,
      36,    37,    -1,    -1,    40,    33,    34,    35,    36,    37,
      46,    39,    40,     6,     7,     8,     9,    -1,    46,    33,
      34,    35,    36,    37,    -1,    39,    40,     6,     7,     8,
       9,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    24,    39,    40,     6,     7,
       8,     9,    -1,    46,    33,    34,    35,    36,    37,    -1,
      -1,    40,     6,     7,     8,     9,    24,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      24,    -1,    40,     6,     7,     8,     9,    -1,    46,    33,
      34,    35,    36,    37,    -1,    -1,    40,     6,     7,     8,
       9,    24,    46,    -1,    -1,     6,     7,     8,     9,    -1,
      33,    34,    35,    36,    37,    24,    -1,    40,    -1,     6,
       7,     8,     9,    46,    33,    34,    35,    36,    37,    -1,
      -1,    40,    33,    34,    35,    36,    37,    46,    -1,    -1,
      41,     6,     7,     8,     9,    46,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,     6,     7,     8,     9,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,     6,     7,     8,
       9,    46,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,     6,     7,     8,     9,    46,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,     6,     7,     8,     9,    46,    33,    34,
      35,    36,    37,    -1,    -1,    40,    33,    34,    35,    36,
      37,    46,    -1,    -1,    41,     6,     7,     8,     9,    46,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,     6,
       7,     8,     9,    46,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,     6,     7,     8,     9,    46,    33,    34,    35,    36,
      37,    -1,    -1,    40,    33,    34,    35,    36,    37,    46,
      -1,    40,     6,     7,     8,     9,    -1,    46,    33,    34,
      35,    36,    37,    -1,    -1,    40,     6,     7,     8,     9,
      -1,    46,    -1,    -1,     6,     7,     8,     9,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     6,     7,
       8,     9,    46,    33,    34,    35,    36,    37,    -1,    -1,
      40,    33,    34,    35,    36,    37,    46,    -1,    40,     6,
       7,     8,     9,    -1,    46,    33,    34,    35,    36,    37,
      -1,    -1,    40,     6,     7,     8,     9,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    46,
      33,    34,    35,    36,    37,    -1,    -1,    40,     3,     4,
       5,    -1,    -1,    46,    -1,    10,    11,    12,    13,    -1,
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
      17,    -1,    19,    20,    21,    22,    23,    -1,     3,     4,
       5,    28,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    39,    -1,    41,    42,    21,    22,    23,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,    39,    -1,    41,    21,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,    39,    -1,    41,    21,    22,
      23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    -1,    39,    -1,    41,    21,
      22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    -1,    39,    -1,    41,
      21,    22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    -1,    39,    -1,
      41,    21,    22,    23,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    -1,    39,
      -1,    41,    21,    22,    23,     3,     4,     5,    -1,    -1,
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
      39,    40,    -1,    21,    22,    23,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      -1,    39,    40,    -1,    21,    22,    23,     3,     4,     5,
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
      -1,    39,    -1,    -1,    21,    22,    23,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,     9,
      -1,    -1,    39,    -1,    14,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    33,    34,    35,    36,    37,    -1,
      39,    40,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    33,    34,    35,    36,    37,    -1,    39,    40,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,    33,    34,    35,
      36,    37,    -1,    39,    40,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    33,    34,    35,    36,    37,
      -1,    39,    40,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    33,    34,    35,    36,    37,    -1,    39,    40,    33,
      34,    35,    36,    37,    -1,    39,    40,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    33,    34,    35,    36,    37,    -1,    39,    40,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    33,    34,    35,    36,    37,    -1,
      -1,    40,    33,    34,    35,    36,    37,    -1,    -1,    40,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    33,    34,    35,    36,    37,
      -1,    -1,    40,    33,    34,    35,    36,    37,    -1,    -1,
      40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    33,    34,    35,    36,
      37,    -1,    -1,    40,    33,    34,    35,    36,    37,    -1,
      -1,    40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,    33,    34,    35,
      36,    37,    -1,    -1,    40,    33,    34,    35,    36,    37,
      -1,    -1,    40,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    24,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    24,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    24,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    24,    -1,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    24,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    24,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    24,
      39,     6,     7,     8,     9,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,     6,     7,     8,     9,    24,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,    39,     6,     7,     8,     9,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,     6,
       7,     8,     9,    24,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    33,    34,    35,    36,    37,    24,    39,    -1,
       6,     7,     8,     9,    24,    -1,    33,    34,    35,    36,
      37,    -1,    39,    33,    34,    35,    36,    37,    24,    39,
       6,     7,     8,     9,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,     6,     7,     8,     9,    24,    -1,
      -1,     6,     7,     8,     9,    -1,    -1,    33,    34,    35,
      36,    37,    24,    39,    -1,     6,     7,     8,     9,    24,
      -1,    33,    34,    35,    36,    37,    -1,    39,    33,    34,
      35,    36,    37,    24,    39,     6,     7,     8,     9,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,     6,
       7,     8,     9,    24,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    24,     6,     7,
       8,     9,    24,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    33,    34,    35,    36,    37,    24,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,     6,     7,     8,     9,    24,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    24,
       6,     7,     8,     9,    24,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    33,    34,    35,    36,    37,    24,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,     6,     7,     8,     9,    24,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    24,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    33,    34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    43,    44,    45,    49,    51,    54,    55,    56,
      59,     0,    56,    17,    77,    13,    41,    53,    57,    58,
       3,     4,     5,    10,    11,    12,    13,    15,    16,    18,
      19,    20,    21,    22,    23,    28,    39,    41,    42,    54,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    75,    76,    77,    78,    14,
      39,    41,    46,    39,    39,    39,    13,    13,    39,    39,
      39,    39,    39,    39,    62,    41,    62,    53,    18,    60,
      41,    46,    39,     6,     7,    33,    35,    37,     8,     9,
      34,    36,    14,    67,    13,    40,    50,    51,    52,    54,
      57,    71,    73,    71,    71,    15,    16,    56,    67,    67,
      72,    72,    72,    62,    67,    40,    41,    67,    40,    67,
      74,    68,    68,    69,    69,    69,    70,    70,    70,    70,
      67,    40,    46,    40,    46,    53,    24,    24,    24,    64,
      24,    24,    40,    40,    40,    40,    24,    40,    46,    13,
      51,    71,    71,    71,    64,    67,    67,    64,    67,    67,
      40,    40,    40,    40,    40,    40,    26,    40,    64,    64,
      64,    64,    64,    26,    64,    17,    25,    43,    44,    45,
       3,     4,     5,    10,    11,    12,    13,    15,    16,    21,
      22,    23,    39,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    13,    41,    58,    25,    43,    44,    45,     3,
       4,     5,    10,    11,    12,    13,    15,    16,    21,    22,
      23,    39,    65,    66,    72,     3,     4,     5,    10,    11,
      12,    13,    15,    16,    21,    22,    23,    39,    51,    54,
      55,    59,    65,    66,    68,    69,    70,    71,    72,    73,
       3,     4,     5,    13,    15,    16,    21,    22,    23,    39,
      65,    66,    73,     3,     4,     5,    10,    11,    12,    13,
      15,    16,    21,    22,    23,    39,    65,    66,    68,    69,
      70,    71,    72,    73,    46,    39,     3,     4,     5,    13,
      15,    16,    39,    65,    66,    73,    13,    17,    19,    20,
      28,    41,    42,    62,    63,    75,    76,    77,    78,    39,
      10,    11,    12,    72,    17,    19,    20,    28,    41,    42,
      62,    63,    75,    76,    77,    78,     3,     4,     5,    10,
      11,    12,    13,    15,    16,    21,    22,    23,    39,    65,
      66,    68,    69,    70,    71,    72,    73,    17,    19,    20,
      28,    41,    42,    62,    63,    75,    76,    77,    78,    18,
      61,    39,    39,    39,    13,    13,    39,    39,    39,    62,
      39,     6,     7,    33,    35,    37,     8,     9,    34,    36,
      14,    41,    39,    39,    39,    13,    13,    39,    39,    39,
      62,    39,    39,    39,    39,    13,    13,    39,    39,    39,
      62,    77,    41,    58,    39,     6,     7,    33,    35,    37,
       8,     9,    34,    36,    14,    13,    13,    39,    39,    39,
      62,    39,    39,    39,    39,    13,    13,    39,    39,    39,
      62,    39,     6,     7,    33,    35,    37,     8,     9,    34,
      36,    14,    67,    40,    50,    52,    13,    13,    62,    39,
      18,    61,    39,    39,    39,    41,    62,    41,    40,    50,
      52,    39,    39,    39,    18,    61,    39,    39,    39,    41,
      62,    41,    39,    39,    39,    13,    13,    39,    39,    39,
      62,    39,     6,     7,    33,    35,    37,     8,     9,    34,
      36,    14,    18,    61,    39,    39,    39,    41,    62,    41,
      18,    71,    71,    71,    15,    16,    72,    72,    72,    40,
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
      74,    18,    56,    67,    67,    62,    67,    41,    40,    40,
      71,    71,    71,    18,    56,    67,    67,    62,    67,    41,
      71,    71,    71,    15,    16,    72,    72,    72,    40,    40,
      74,     3,     4,     5,    13,    15,    16,    39,    65,    66,
      68,    73,    68,    69,    69,    69,    70,    70,    70,    70,
      67,    18,    56,    67,    67,    62,    67,    41,    24,    24,
      24,    40,    40,    40,    40,    13,    13,    62,    39,    24,
      24,    24,    40,    40,    40,    40,    24,    24,    24,    40,
      40,    40,    40,    13,    13,    62,    39,    40,    40,    40,
      40,    24,    24,    24,    40,    40,    40,    40,    13,    13,
      62,    39,    40,    64,    24,    24,    40,    24,    24,    24,
      24,    64,    24,    24,    40,    24,    24,    24,    24,    40,
      40,    40,    40,    13,    13,    62,    39,    64,    24,    24,
      40,    24,    71,    71,    71,    15,    16,    40,    40,    74,
      71,    71,    71,    71,    71,    71,    15,    16,    40,    40,
      74,    71,    71,    71,    15,    16,    40,    40,    74,    64,
      67,    67,    17,    19,    20,    28,    41,    42,    62,    63,
      64,    75,    76,    77,    78,    67,    71,    71,    71,    64,
      67,    67,    17,    19,    20,    28,    41,    42,    62,    63,
      64,    75,    76,    77,    78,    67,    71,    71,    71,    15,
      16,    40,    40,    74,    64,    67,    67,    64,    67,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    18,    61,    39,
      39,    39,    41,    62,    41,    26,    40,    40,    40,    40,
      40,    40,    40,    18,    61,    39,    39,    39,    41,    62,
      41,    26,    40,    40,    40,    40,    40,    40,    40,    40,
      26,    40,    64,    64,    64,    18,    56,    67,    67,    62,
      67,    41,    64,    64,    64,    64,    64,    18,    56,    67,
      67,    62,    67,    41,    64,    64,    64,    64,    64,    64,
      64,    64,    24,    24,    40,    24,    26,    64,    24,    24,
      40,    24,    26,    26,    64,    67,    67,    64,    67,    64,
      64,    67,    67,    64,    67,    64,    64,    40,    40,    40,
      26,    40,    40,    40,    40,    26,    40,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    26,    26,    64,
      64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    54,    54,    54,    54,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    64,
      65,    65,    65,    66,    66,    66,    66,    66,    67,    67,
      68,    68,    68,    69,    69,    69,    69,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    72,    72,    72,    72,
      73,    73,    73,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     2,     1,     1,     3,
       1,     3,     4,     4,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     1,     3,     2,     3,     1,     1,     1,
       2,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     6,     6,     6,     1,     4,     4,     4,
       1,     3,     4,     1,     3,     7,     5,     9,     7,     7,
       7,     7,     2,     3,     2,     3
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
  case 2: /* programa: declaracao  */
#line 63 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                            liberar_ast((yyval.no));
                        }
#line 3874 "clang.tab.c"
    break;

  case 3: /* programa: programa declaracao  */
#line 68 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                            liberar_ast((yyval.no));
                        }
#line 3884 "clang.tab.c"
    break;

  case 6: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 80 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 3893 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo  */
#line 84 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 3899 "clang.tab.c"
    break;

  case 8: /* lista_tipo_parametro: declaracao_parametro  */
#line 88 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 3907 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 92 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 3916 "clang.tab.c"
    break;

  case 10: /* def_declaracao: TOKEN_ID  */
#line 99 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 3925 "clang.tab.c"
    break;

  case 11: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 104 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 3935 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D  */
#line 110 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-1].no);
                            (yyvsp[-3].simbolo)->funcao.parametros_no = novo_no->parametros_no;
                            (yyvsp[-3].simbolo)->funcao.parametros = novo_no->parametros;
                            liberar_ast((yyvsp[-1].no));
                            (yyval.simbolo) = (yyvsp[-3].simbolo);
                        }
#line 3947 "clang.tab.c"
    break;

  case 14: /* def_declaracao_tipo: TIPO_INT  */
#line 120 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 3953 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 121 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 3959 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_ELEM  */
#line 122 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 3965 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_SET  */
#line 123 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 3971 "clang.tab.c"
    break;

  case 18: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 128 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 3980 "clang.tab.c"
    break;

  case 19: /* declaracao: declaracao_func  */
#line 136 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 3989 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_var  */
#line 141 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 3998 "clang.tab.c"
    break;

  case 21: /* inicializar_atrib: def_declaracao  */
#line 147 "parser/clang.y"
                                                 { (yyval.simbolo) = (yyvsp[0].simbolo); }
#line 4004 "clang.tab.c"
    break;

  case 22: /* inicializar_atrib: def_declaracao ATRIBUICAO expressao_atribuicao  */
#line 149 "parser/clang.y"
                        {
                            NoAST_Constante *novo_no = (NoAST_Constante*) (yyvsp[0].no);
                            (yyvsp[-2].simbolo)->constante.valor = novo_no->valor;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4014 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: inicializar_atrib  */
#line 157 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4022 "clang.tab.c"
    break;

  case 24: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA inicializar_atrib  */
#line 161 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4030 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 166 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4036 "clang.tab.c"
    break;

  case 26: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
#line 168 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracao((yyvsp[-2].tipo_dado), simbolos, simbolos_no);
                            simbolos_no = 0;

                            NoAST_Declaracao *novo_no = (NoAST_Declaracao*) (yyval.no);

                            for(int i = 0; i < novo_no->simbolos_no; ++i)
                            {
                                novo_no->simbolos[i]->tag = CONSTANTE;
                                novo_no->simbolos[i]->constante.tipo_dado = (yyvsp[-2].tipo_dado);
                            }
                        }
#line 4053 "clang.tab.c"
    break;

  case 27: /* item_bloco: declaracao_var  */
#line 182 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4059 "clang.tab.c"
    break;

  case 28: /* item_bloco: tipos_expressao  */
#line 183 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4065 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: item_bloco  */
#line 187 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4073 "clang.tab.c"
    break;

  case 30: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 191 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4082 "clang.tab.c"
    break;

  case 31: /* expressao: expressao_atribuicao  */
#line 197 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4088 "clang.tab.c"
    break;

  case 32: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 198 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4094 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 201 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4100 "clang.tab.c"
    break;

  case 34: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 202 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4106 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_declaracao  */
#line 205 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4112 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_decisao  */
#line 206 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4118 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_composta  */
#line 207 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4124 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_return  */
#line 208 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4130 "clang.tab.c"
    break;

  case 39: /* tipos_expressao: expressao_iteracao  */
#line 209 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4136 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_INTEIRO  */
#line 212 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4142 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 213 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4148 "clang.tab.c"
    break;

  case 42: /* valores: TOKEN_EMPTY  */
#line 214 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4154 "clang.tab.c"
    break;

  case 43: /* expressao_principal: TOKEN_ID  */
#line 218 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4162 "clang.tab.c"
    break;

  case 44: /* expressao_principal: valores  */
#line 222 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4170 "clang.tab.c"
    break;

  case 45: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 226 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4176 "clang.tab.c"
    break;

  case 46: /* expressao_principal: ASPAS_DUPLAS TOKEN_ID ASPAS_DUPLAS  */
#line 228 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4182 "clang.tab.c"
    break;

  case 47: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 229 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4188 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_relacional  */
#line 232 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4194 "clang.tab.c"
    break;

  case 49: /* expressao_atribuicao: expressao_chamada ATRIBUICAO expressao_atribuicao  */
#line 234 "parser/clang.y"
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
#line 4222 "clang.tab.c"
    break;

  case 50: /* expressao_relacional: expressao_logica  */
#line 259 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4228 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 261 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4236 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 265 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4244 "clang.tab.c"
    break;

  case 53: /* expressao_logica: expressao_aritmetica  */
#line 271 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4250 "clang.tab.c"
    break;

  case 57: /* expressao_aritmetica: expressao_conjunto  */
#line 277 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4256 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto OP_SOMA expressao_aritmetica  */
#line 279 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4264 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_conjunto OP_SUBTRACAO expressao_aritmetica  */
#line 283 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4272 "clang.tab.c"
    break;

  case 62: /* expressao_conjunto: expressao_io  */
#line 290 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4278 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 292 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4286 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 296 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4294 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 300 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4302 "clang.tab.c"
    break;

  case 66: /* expressao_io: expressao_chamada  */
#line 305 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4308 "clang.tab.c"
    break;

  case 67: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 307 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4316 "clang.tab.c"
    break;

  case 68: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 311 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4324 "clang.tab.c"
    break;

  case 69: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 315 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4332 "clang.tab.c"
    break;

  case 70: /* expressao_chamada: expressao_principal  */
#line 320 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4338 "clang.tab.c"
    break;

  case 72: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 323 "parser/clang.y"
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
#line 4366 "clang.tab.c"
    break;

  case 73: /* expressao_lista_param: expressao_atribuicao  */
#line 349 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4374 "clang.tab.c"
    break;

  case 74: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 353 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4383 "clang.tab.c"
    break;

  case 75: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 360 "parser/clang.y"
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
#line 4411 "clang.tab.c"
    break;

  case 76: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 384 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4419 "clang.tab.c"
    break;

  case 77: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 388 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4427 "clang.tab.c"
    break;

  case 78: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 392 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4435 "clang.tab.c"
    break;

  case 79: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 398 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4443 "clang.tab.c"
    break;

  case 80: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 402 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4451 "clang.tab.c"
    break;

  case 81: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 406 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4459 "clang.tab.c"
    break;

  case 82: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 412 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4467 "clang.tab.c"
    break;

  case 83: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 416 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4475 "clang.tab.c"
    break;

  case 84: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 422 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4483 "clang.tab.c"
    break;

  case 85: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 426 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4491 "clang.tab.c"
    break;


#line 4495 "clang.tab.c"

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

#line 431 "parser/clang.y"


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

void liberar_lista()
{
    int i;
    for(i = 0; i < simbolos_no; ++i)
    {
        free(simbolos[simbolos_no]);
    }
    free(simbolos);
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
        liberar_lista();
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
