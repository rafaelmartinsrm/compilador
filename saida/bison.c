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
  YYSYMBOL_78_1 = 78,                      /* $@1  */
  YYSYMBOL_expressao_return = 79           /* expressao_return  */
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
#define YYLAST   10555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  968

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
       0,    62,    62,    66,    73,    74,    77,    82,    85,    89,
      96,   101,   102,   108,   111,   112,   113,   114,   118,   127,
     132,   139,   140,   148,   152,   158,   159,   174,   175,   178,
     182,   189,   190,   193,   194,   197,   198,   199,   200,   201,
     204,   205,   206,   209,   213,   217,   219,   221,   224,   225,
     251,   252,   256,   263,   264,   265,   266,   269,   270,   274,
     278,   279,   282,   283,   287,   291,   297,   298,   302,   306,
     312,   313,   314,   340,   344,   351,   375,   379,   383,   389,
     393,   397,   403,   407,   407,   414,   418
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
  "expressao_iteracao", "expressao_composta", "$@1", "expressao_return", YY_NULLPTR
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

#define YYPACT_NINF (-367)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     315,   186,   388,   489,   676,    13,    11,   678,    18,    21,
      27,  -367,    30,  2597,    60,   539,    67,   570,   304,   407,
      76,   399,  9430,   521,    88,    35,   567,  1471,  2903,   -22,
      58,   155,  2918,    73,   110,   176,   180,   189,   193,   214,
     224,  9451,  2648,  5527,    87,  2691,  2997,  3042,   542,  3238,
    3281,  3549,  3594,   684,   755,   119,   393,  2383,  3067,  6227,
    3332,  3375,  3509,  3681,  1005,   -21,   936,    56,   280,   283,
       1,   300,  1044,  9472,  9472,  9472,   120,   136,   547,  9493,
    1317,  1317,  1317,  9514,   449,  3726,  1064,   114,  3922,  3965,
    9430,  9178,  9535,  9535,  9535,  9535,  9535,  9535,  9535,  9535,
    9535,  9430,  1035,   137,  1077,   927,   236,   248,   297,   301,
     359,  3641,  4295,  8193,   362,   389,   288,   385,   392,   730,
     234,  4725,  4016,  1095,  6463,   915,   920,  1146,  1193,   161,
     216,   218,   494,  1047,  1063,  1192,  1322,   960,   965,  9556,
    9556,  9556,  8226,  9577,  9577,  3751,  4379,  6025,  8259,  9577,
    6506,  9451,   395,   405,   450,   467,   507,   527,   167,   556,
     986,  7227,  7241,  7263,  8292,  8292,  8292,  8292,  8259,  4059,
    4197,  4245,  4354,   226,  8292,  4550,  4593,    96,   125,   132,
     140,   109,   151,   220,   290,   422,  4884,  4926,  5095,   540,
     566,   610,  5246,   644,   657,   640,   642,   655,  9451,  5261,
    5302,  1004,  1049,    43,  1001,  7277,  7285,  6620,  4667,  1349,
     591,   696,    -8,     0,    55,   665,   679,   683,   174,   721,
     764,   728,   783,   852,  9451,   181,   249,   769, 10032, 10046,
   10080,   893,   918,   926, 10094,   827,   906,   929,   937,   949,
    9451,   996,   694,  8325,  8358, 10128, 10142,   978,    16,  1378,
    2962,  4451, 10354,    -3,   497,   587,   810,   922,  1002,   988,
     989,  1000,  9451,   813,   842,  1008,   448,   666,  1212,  1016,
    1017,  1029,  1270,  1058,  1073,  1036,  1048,  1067,  9451,  1341,
    2155,   468,   123,   440,  5742,  6311,   298,  9451,  1453,  2137,
    2178,  2821,  1094,  1104,  9451,  2862,  6685,  7299,   729,  4814,
    1107,  1119,  1122,  8391,  9073,  1368,  8424,  8457,  8490,  8523,
    8556,  1149,  1165,  1167,  1093,  4861,  1178,  1185,  1203,  1103,
    9094,  1401,  1204,  1213,  1214,  1216,  1217,   894,  2087,  2771,
    1227,  1228,  1241,  3455,  1219,  1255,  1242,  1256,  1257,  9451,
    5016,  6721,  1275,    28,   111,  2939,  6365,  2255,  5071,  1292,
    1296,  1307,   274,  9115,  1450,   351,   500,   643,   740,   787,
    5172,   399,  9472,  9472,  9472,  1267,  1328,  1317,  1317,  1317,
    1057,  9199,  9598,  9598,  9598,  9598,  9598,  9598,  9598,  9598,
    9598,  9451,  5220,   637,  1062,  1139,  9472,  9472,  9472,  1339,
    1348,  1317,  1317,  1317,  1143,  9220,  9472,  9472,  9472,  1358,
    1403,  1317,  1317,  1317,  1144,  8589,  8622,  1452,  9241,  9619,
    9619,  9619,  9619,  9619,  9619,  9619,  9619,  9619,  9493,  1376,
    1418,  1317,  1317,  1317,  1161,  9262,  9472,  9472,  9472,  1379,
    1419,  1317,  1317,  1317,  1163,  9283,  9640,  9640,  9640,  9640,
    9640,  9640,  9640,  9640,  9640,  9514,  1176,  1402,  1427,  1195,
    9304,  1033,  1197,  1224,  8655,   399,   547,  9493,  9514,  8688,
    1456,  8721,  9472,  9472,  9472,  1367,   399,   547,  9493,  9514,
    1404,  1484,  1424,  9472,  9472,  9472,  1466,  1449,  1317,  1317,
    1317,  1225,  9325,  9661,  9661,  9661,  9661,  9661,  9661,  9661,
    9661,  9661,  9577,  1109,   399,   547,  9493,  9514,  1152,  1511,
    1559,  5648,  1333,  1459,  1460,  5344,  5360,  1463,  1469,  1496,
    5428,  6844,  1229,  6861,  6879,  6896,  6914,  1498,  1524,  9451,
    6931,  6949,  1243,  7320,  1245,    47,   210,   391,  1253,  1364,
    1494,  1958,  1252,   853,  1101,  1515,  1519,  1521,   259,   384,
    1506,  1516,  1525,   452,  1543,  1268,  1544,  1569,  1572, 10176,
   10190,  1526,  1565,  1566, 10224,  8754, 10368,  1271,  3585, 10210,
   10244, 10258,  1594,  1595,  9451, 10265, 10279,  1588, 10414,  1589,
     382,   443,   472,  1633,  1692,  2199,  2731,  1590,   850,   870,
    1580,  1593,  1596,   947,  1598,  1272,  1611,  1617,  1618,  2219,
    2273,  1603,  1604,  1612,  2839,  4616,  1273,   985,  1514,  5114,
    5379,  1641,  1642,  9451,  5576,  5584,   508,  6966,   509,   194,
     303,   341,   588,   691,   880,   977,   553,  6985,  7001,  7021,
    7335,  1283,  1099,  1120,  5699,  8193,  1622,  1632,  1288,   574,
    8787,  1634,  1639,  1640,  5845,  8193,  1643,  1650,  1305,   593,
    1625,  1658,  1671,  1673,  9679,  9688,  1652,  1660,  1661,  9697,
    9732,  1326,  4285,  5472,  6641,  9741,  1689,  1690,  9451,  9749,
    9784,  1664,  9852,  1665,    38,    84,   134,   345,   781,   829,
    1175,  1666,  5898,  8193,  1684,  1691,  1342,   668,  1606,  6201,
    9556,  9556,  9556,  7355,  7371,  7390,  7037,  1615,  1701,  1343,
    9346,  9556,  9556,  9556,  1694,  1695,  1696,  1697,  9556,  9556,
    9556, 10419, 10433, 10452, 10400,  1707,  1712,  1346,  9367,  1700,
    1705,  1717,  1718,  9556,  9556,  9556,  7057,  7078,  7092,  5723,
    1719,  1716,  1372,  9388,  7406,  8820,  8226,  9577,  9577,  8853,
    9577,  9556,  9556,  9556,  1720,  8226,  9577,  9577,  8886,  9577,
    9556,  9556,  9556,  9887,  9895,  9903,  9792,  1721,  1725,  1390,
    9409,  1668,  8226,  9577,  9577,  8259,  9577,  1724,  1729,  1734,
    7100,  7114,  7135,  7425,  1391,  1735,  1739,  1740,  1741,  1742,
    1754, 10299, 10313, 10320, 10466,  1392,  1755,  1759,  1764,  5787,
    6011,  6099,  7149,  1393,  1765,  1769,  1781,  6420,  1726,  1783,
    1784,  7533,  9136,  1542,  7566,  7599,  7632,  7665,  7698,  7731,
    1786,  1787,  1788,  1789,  1790,  1794,  1795,  6597,  1785,  1797,
    1801,   135,  9157,  1545,   425,   498,   596,   612,   670,   687,
    1805,  1806,  1807,  1811,  9801,  9836,  9844,  9938,  1405,  1812,
    1816,  1828,  1870,  1829,  7442,  7460,  7477,  7495,  1711,  1817,
    1852, 10471, 10485, 10504, 10518,  7170,  7184,  7205,  7219,  8193,
    8193,  8193,  7764,   399,   547,  9493,  9514,  7797,  1548,  7830,
    8193,  8853,  1837,  1838,  1839,  8226,  8226,  8226,   707,   399,
     547,  9493,  9514,   738,  1549,   749,  8226,  8886,  9946,  9954,
    9989,  9997,  8259,  8259,  8259,  8259,  8259,  8919,  8952,  8985,
    6778,  8193,  1860,  1873,  1406,   771,  7863,  9018,  7896,  1859,
    1861,  1862,  6821,  8193,  1876,  1879,  1436,   801,   754,  1864,
     793,  1915,  1964,  2009,  2313,  2358,  7929,  8226,  9577,  9577,
    8853,  9577,  8193,   794,  8226,  9577,  9577,  8886,  9577,  8226,
    8259,  1865,  1866,  1867,  7962,  1868,  9051,  1877,  1881,  1882,
     797,  1883,  1884,  2554,  8853,  8853,  8853,  8853,  8853,  8886,
    8886,  8886,  8886,  8886,  7995,  8028,  8061,  8094,  8127,   798,
     867,   872,   896,   911,  8853,  8886,  8160,   941
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -367,  -367,  -200,    10,  -199,     7,     3,  1592,     4,  1885,
     -38,     2,   -27,  -360,   113,  5234,   476,  1375,  2059,   805,
    5557,  5078,  4576,  4055,  3427,  2743,  -366,  5439,  5641,    -6,
    -172,  5822
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,    67,   241,    69,    17,    44,   243,     9,    18,
      19,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,   126,    60,    61,    62,
      21,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   501,    10,     7,   361,   512,   209,    10,     7,    12,
       6,   384,   385,    11,   210,     6,   -40,    73,   -19,    -4,
      88,    -2,   409,   410,   -42,    -4,    70,   -20,    13,   545,
      -3,   -40,    71,    68,   483,   484,   -40,   -40,     1,   -42,
     -50,    -7,   557,   -19,   -56,   -56,    -2,    -7,   185,   372,
     373,    71,   -20,   -56,   -56,    -3,     2,     3,     4,   585,
     -18,   -19,   -19,   -19,    -2,    -2,    -2,   -25,   -50,   596,
     -20,   -20,   -20,    -3,    -3,    -3,   -82,   106,   -56,   -41,
     244,   242,   113,   -50,   621,   -18,    76,   -56,   -26,   -50,
     -54,   -54,   -25,   -56,   -41,   624,   102,    74,   452,   453,
     185,   -82,   103,   -18,   -18,   -18,   634,   309,    70,   -16,
     -25,   -25,   -25,   -26,   -84,   138,   651,   -53,   -53,   -82,
     -82,   -82,   -16,    77,   -54,    92,    93,   455,   208,   436,
     437,   -26,   -26,   -26,   672,   111,   325,   -16,   -17,   -84,
     -55,   -55,   358,   466,   485,   -14,   486,   -50,   487,   -16,
     137,   -53,   112,   -15,    84,   -16,    86,   -84,   -84,   -84,
     -50,   -33,   358,   -50,   -17,   -50,   -17,   -56,   -56,   -50,
     -76,   -76,   -76,   -14,   -55,   -33,   494,   -76,   -76,   -76,
     -76,   -15,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -17,   -76,   167,    75,   -76,   119,   -17,   -43,   -16,
     -56,   -56,   -56,   -16,   407,   -44,   -76,   -56,   -76,   -76,
     -76,   -76,   -76,   -43,    70,    78,   -54,   -54,   -56,    79,
     -44,    68,   -54,   -54,   -55,   -55,   305,   -16,    80,   -78,
     -78,   -78,    81,   -14,   -56,   405,   -78,   -78,   -78,   -78,
     -56,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -54,   -78,   174,    82,   -78,   321,   -54,   -54,   149,   -55,
     -14,   354,   -54,    83,   -55,   -78,   -14,   -78,   -78,   -78,
     -78,   -78,   139,   -70,   -31,   298,    -6,   -33,   -33,   -33,
     -31,   354,    -6,   -45,   -33,   -33,   -33,   -33,   395,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -45,   -33,
     -33,    70,   -33,   -15,   -66,   -66,   -66,   -66,    68,   -54,
     -54,   370,   445,   -33,    22,   -33,   -33,   -33,   -33,   -33,
      -8,   -66,   -66,   104,   764,   140,    -8,   -54,   145,   105,
     -15,   -66,   -66,   -66,   -66,   -66,   -15,   394,   -66,   211,
       1,   -21,   775,   -54,   -66,   -23,   -21,   -55,   -55,   -54,
     -23,   -58,   -58,   404,   -35,   -35,   -35,   783,     2,     3,
       4,   -35,   -35,   -35,   -35,   -55,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   424,   -35,   -35,   -58,   -35,
     -58,   -55,   -58,   141,   828,   -58,   143,   -55,   -56,   -56,
     -35,   434,   -35,   -35,   -35,   -35,   -35,   -55,   -55,   -53,
     -53,   -17,    26,    27,    28,   -17,   -56,   449,   -46,    29,
      30,    31,    32,   144,    33,    34,   176,   460,    35,    36,
      37,    38,    39,   -46,   177,   146,    94,    40,    95,   -17,
      96,   -55,   147,   471,   -53,   161,   -10,   -55,    41,   -53,
      42,    43,   178,   179,   180,   162,   -53,   -53,    24,   -54,
     -54,   -35,   481,    25,   -40,   -40,   -40,   -40,   244,   242,
     625,   -10,   -40,   -10,   -53,   -35,   499,   -54,   -10,   244,
     242,   635,   -40,   438,    88,   439,   -47,   440,   -55,   -55,
     -53,   -40,   -40,   -40,   -40,   -40,   -53,   -40,   -40,   121,
     163,   -47,   -48,   890,   -40,   287,   -55,   244,   242,   673,
     -58,   -58,   -14,   -36,   -36,   -36,   -14,   164,   -48,   902,
     -36,   -36,   -36,   -36,   -48,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   876,   -36,   -36,   -58,   -36,   -58,
     -14,   -58,   -52,   -51,    65,   -58,   -42,   -42,   -76,   -36,
     -58,   -36,   -36,   -36,   -36,   -36,   181,   165,   -52,   -51,
     228,   229,   230,   -10,   -52,   -51,   -10,   231,   232,   233,
     234,    66,   235,   236,   182,   183,   184,   166,   237,   238,
     239,   628,     1,   -40,   -40,   -40,   -40,   -49,   -10,   362,
     -10,   -40,   638,    89,    22,   -10,   240,    -6,    90,   142,
       2,     3,     4,   -49,   -58,   -58,   168,    88,   730,   -49,
     -40,   -40,   -40,   -40,   -40,   363,   -40,    88,   -40,    23,
     676,   -21,   -58,   -40,   -31,   853,   -21,   739,   155,   309,
     -31,   -58,   -36,   -58,   158,   -58,   -41,   -41,   -58,   309,
     -10,   -10,   689,   -31,   -58,   869,   -36,   -10,   -39,   -31,
     169,   170,   171,   172,   173,    88,   -39,   -39,   -39,   364,
     175,   -11,   -39,   -39,   -39,   -39,   -39,   365,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   309,   -39,   -39,
     366,   -39,   -42,   -42,   -42,   -42,   -11,   707,   -11,   367,
     -42,   368,   -39,   -11,   -39,   -39,   -39,   -39,   -39,   -15,
     -42,    15,   756,   -15,   369,    -7,   -37,   -59,   -59,   -42,
     -42,   -42,   -42,   -42,   386,   -42,   -42,    15,   -31,    65,
     -37,    -7,   -42,   -38,   -31,   -59,   722,   -15,   387,    16,
     325,   181,   388,   798,   -59,   -31,   -59,   -38,   -59,   325,
     -31,   -59,   818,   -82,   389,   406,   383,   -59,   305,   182,
     183,   184,    65,   -37,   -37,   -37,   325,   -82,   305,   358,
     -37,   -37,   -37,   -37,   181,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -85,   -37,   -37,   391,   -37,   451,
     148,   749,   182,   183,   184,   -34,   287,   390,   -85,   -37,
     -86,   -37,   -37,   -37,   -37,   -37,   305,   -59,   -59,   -34,
     -38,   -38,   -38,   -62,   -86,   921,   -48,   -38,   -38,   -38,
     -38,   -48,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -31,   -38,   -38,   -59,   -38,   -59,   -31,   -59,   929,
     -84,   -59,   392,   952,   -79,   928,   -38,    64,   -38,   -38,
     -38,   -38,   -38,   -78,   -84,   -60,   -60,   -76,   -79,   321,
     399,   -31,   793,   309,   309,   309,   201,   -31,   321,   -43,
     -43,   813,   -44,   -44,   309,   798,   244,   242,   891,   325,
     325,   325,   -60,    88,   -60,   321,   -60,   -13,   354,   -60,
     325,   818,   244,   242,   903,    88,   358,   358,   358,   358,
     358,   425,   -70,   114,   115,   309,   -60,   -60,   120,   -45,
     -45,   393,   -13,   -80,   -13,   123,   125,   309,   -81,   -13,
     -40,   -40,   -40,   -40,   -60,   858,   136,   -80,   -40,   -46,
     -46,   325,   -81,   -60,   798,   -60,   309,   -60,   325,   400,
     -60,   818,   -75,   325,   358,   874,   -60,   -40,   -40,   -40,
     -40,   -40,   396,   -40,   -40,   419,   -75,   965,   798,   798,
     798,   798,   798,   818,   818,   818,   818,   818,   156,   157,
     -11,   -78,   181,   -11,   159,   -73,   160,   397,   798,   818,
     150,   -73,   305,   305,   305,   398,   151,   -77,   401,   894,
     182,   183,   184,   305,   793,   -11,   402,   -11,   321,   321,
     321,   -77,   -11,   -61,   -61,   906,   -47,   -47,   403,   321,
     813,   -40,   -40,   -40,   -40,   354,   354,   354,   354,   354,
      -5,   -61,   -48,   201,   305,    -9,    -5,   -53,   -53,   -40,
     -61,    -9,   -61,   299,   -61,   420,   305,   -61,   -40,   -40,
     -40,   -40,   -40,   -61,   -40,   -40,   -74,   421,   422,   201,
     321,   -40,   -74,   793,   374,   305,   375,   321,   376,   423,
     813,   -53,   321,   354,   -31,   201,   -22,   -53,   -66,   -13,
     -31,   -22,   -13,   -59,   -59,   426,   427,   793,   793,   793,
     793,   793,   813,   813,   813,   813,   813,   201,   428,   -60,
     -60,   429,   -11,   -11,   -13,   431,   -13,   793,   813,   -11,
     -59,   -13,   -59,   201,   -59,   -24,   430,   432,   -59,   -48,
     -24,   -12,   446,   -59,   -12,   -48,   -60,   510,   -60,   201,
     -60,   726,   533,   287,   -60,   122,   433,   447,   103,   -60,
      90,   735,   -82,   -82,   -82,   -12,   -12,   448,   -12,   -82,
     -82,   -82,   -82,   -12,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -62,   -82,   -82,   -32,   -82,   -13,   -13,
     -12,   -32,   -12,   -33,   201,   -13,   456,   -12,   -82,   752,
     -82,   -82,   -82,   -82,   -82,   -85,   -85,   -85,   457,   -12,
     -12,   458,   -85,   -85,   -85,   -85,   -12,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   125,   -85,   -85,   534,
     -85,   -61,   -61,   543,   554,   105,   532,   -52,   462,   287,
     287,   -85,   -52,   -85,   -85,   -85,   -85,   -85,   -61,   -61,
     125,   583,   784,   594,   463,   795,   464,   287,   -61,   287,
     -61,   804,   -61,   125,   815,   -61,   -32,   467,   -41,   -41,
     -41,   -41,   -32,   577,   468,   -61,   -41,   -61,   829,   -61,
     125,   832,   476,   -61,   -51,   619,   -41,   622,   -61,   -51,
     125,   287,   469,   103,   -35,   -41,   -41,   -41,   -41,   -41,
     616,   -41,   -41,   -36,   -39,   125,   -37,   -38,   -41,   -58,
     -58,   626,   627,   629,   623,   649,   473,   474,   477,   686,
     105,   287,   636,   637,   639,   151,   -43,   -43,   -43,   -43,
     475,   478,   505,   -52,   -43,   -51,   -58,   125,   -58,   -52,
     -58,   -51,   -49,   -58,   -43,   479,   480,   671,   -49,   -58,
     674,   675,   677,   -43,   -43,   -43,   -43,   -43,   697,   -43,
     -43,   704,   712,   719,   151,   -48,   -43,   151,   151,   151,
     253,   254,   255,   724,   201,   887,   888,   889,   729,   151,
     256,   495,   257,   258,   287,   496,   897,   898,   259,   260,
     261,   899,   900,   901,   506,   738,   497,   -44,   -44,   -44,
     -44,   287,   909,   910,   538,   -44,   262,   680,   911,   912,
     913,   914,   915,   -49,   539,   -44,   746,   917,   -49,   201,
     -59,   -59,   151,   549,   -44,   -44,   -44,   -44,   -44,   924,
     -44,   -44,   755,   762,   -53,   -53,   773,   -44,   287,   287,
     382,   578,   287,   931,   589,    25,   934,   -59,   936,   -59,
     937,   -59,   -53,   940,   -59,   942,   943,   -82,   201,   461,
     -59,   411,   781,   412,    90,   413,   199,   617,   287,   550,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     826,   837,   844,   848,   579,   590,   287,   151,   151,   151,
     966,   967,   472,   618,   -85,   881,   920,    90,   225,   225,
     225,   151,   287,   245,   245,   263,   263,   263,   279,   -40,
     -40,   -40,   -40,   201,   -34,   645,   199,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   927,   -42,   -42,   -42,
     -42,   644,   287,   681,   682,   -42,   -40,   -40,   -40,   -40,
     -40,   500,   -40,   555,   -40,   125,    90,   630,    25,   -40,
     -60,   -60,    90,   683,   -42,   -42,   -42,   -42,   -42,   684,
     -42,   687,   -42,   125,   263,   263,   263,   -42,   340,   340,
     -42,   -42,   -42,   -42,   340,   640,   199,   -60,   125,   -60,
      90,   -60,   785,   786,   -60,   800,   685,   688,   -42,   691,
     -60,   805,   806,   692,   820,   693,   694,   -42,   -42,   -42,
     -42,   -42,   678,   -42,   -42,   125,   695,    90,   830,   831,
     -42,   833,   -34,   -34,   -34,   696,   701,   -71,   698,   -34,
     -34,   -34,   -34,   199,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   859,   -34,   -34,   875,   -34,    90,   896,
     908,    90,     8,   699,    90,    90,   700,     8,   -34,   199,
     -34,   -34,   -34,   -34,   -34,   702,   703,   705,   706,   -86,
     -86,   -86,   -52,   -51,   -49,   199,   -86,   -86,   -86,   -86,
     709,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     760,   -86,   -86,   710,   -86,   713,   711,   199,   -71,   -58,
     -58,   714,   715,   716,   717,   -86,   727,   -86,   -86,   -86,
     -86,   -86,   718,   199,   720,   721,   728,   -58,   731,   892,
     893,   895,   199,   732,   733,   -86,   -58,   736,   -58,   199,
     -58,   -84,   -84,   -84,   737,   904,   905,   907,   -84,   -84,
     -84,   -84,   740,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   743,   -84,   -84,   741,   -84,   742,   -59,   -59,
     744,   745,   747,   748,   -52,   -51,   -49,   -84,   753,   -84,
     -84,   -84,   -84,   -84,   199,   754,   -59,   761,   -69,   -68,
     -67,   -72,   771,   932,   933,   -59,   935,   -59,   772,   -59,
     938,   939,   780,   941,   779,   -63,   824,   225,   225,   225,
     -69,   825,   263,   263,   263,   -68,   199,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   199,   -67,   -72,     0,
     -84,   225,   225,   225,   834,   854,   263,   263,   263,   835,
     199,   225,   225,   225,   836,   838,   263,   263,   263,   839,
     840,   841,   842,   199,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   245,   843,   845,   263,   263,   263,   846,
     199,   225,   225,   225,   847,   849,   263,   263,   263,   850,
     199,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     279,   851,   855,   856,   870,   199,   861,   862,   863,   864,
     865,   245,   245,   279,   866,   867,   871,   225,   225,   225,
     872,   -64,   245,   245,   279,   877,   878,   879,   225,   225,
     225,   880,   882,   263,   263,   263,   883,   199,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   340,   884,   886,
     245,   245,   279,   -76,   -76,   -76,   -65,   -63,   -64,   -65,
     -76,   -76,   -76,   -76,   918,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   199,   -76,   885,   919,   -76,   -79,
     925,   -80,   -81,   926,   -75,   944,   945,   946,   948,   -76,
      72,   -76,   -76,   -76,   -76,   -76,     0,   949,   -79,   -79,
     -79,   950,   951,   953,   -77,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   199,
     -79,   -79,     0,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,     0,     0,     0,   -61,   -61,     0,   -80,   -80,   -80,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   199,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -61,   -80,   -61,     0,   -61,     0,     0,   -61,     0,
       0,     0,     0,   -80,   -61,   -80,   -80,   -80,   -80,   -80,
       0,     0,   -81,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   199,   -81,   -81,     0,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   263,   263,   263,     0,     0,
       0,     0,     0,     0,     0,   199,   263,   263,   263,     0,
       0,     0,     0,   263,   263,   263,     0,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,   263,   263,
     263,     0,     0,   -42,   -42,   -42,   -42,     0,   199,     0,
     200,   -42,   340,   340,     0,   340,   263,   263,   263,     0,
       0,   340,   340,     0,   340,   263,   263,   263,     0,     0,
     -42,   -42,   -42,   -42,   -42,   199,   -42,   -42,   340,   340,
       0,   340,   226,   226,   226,     0,     0,   246,   246,   264,
     264,   264,   280,   -42,   -42,   -42,   -42,     0,     0,     0,
     200,   296,   296,   296,   296,   296,   296,   296,   296,   296,
       0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,   -70,
     -42,   -42,   -42,   -42,   -42,     0,   -42,     0,   -42,   -70,
       0,     0,     0,   -42,   -41,   -41,   -41,   -41,   -70,   -70,
     -70,   -70,   -70,     0,   435,   -70,     0,     0,   264,   264,
     264,   -70,   341,   341,     0,   -60,   -60,     0,   341,     0,
     200,   -41,   -41,   -41,   -41,   -41,     0,   -41,     0,   -41,
       0,     0,     0,   -60,   -41,   -45,   -45,   -45,   -45,   245,
     245,   279,   -60,   -45,   -60,     0,   -60,     0,     0,     0,
       0,     0,     0,   -45,     0,   245,   245,   279,     0,     0,
       0,     0,   -45,   -45,   -45,   -45,   -45,   200,   -45,   -45,
       0,   -66,   -66,   -66,   -66,   -45,     0,     0,     0,   492,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -46,
     -46,   -46,   -46,   200,     0,     0,     0,   -46,   -66,   -66,
     -66,   -66,   -66,   340,   340,   -66,   340,   -46,     0,   200,
     340,   340,     0,   340,     0,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,     0,     0,   -75,   -75,   -75,   -46,
       0,   200,     0,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   200,   -75,   -75,
       0,   -75,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,   -75,   200,   -75,   -75,   -75,   -75,   -75,     0,
       0,   -78,   -78,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   930,     0,   -78,     0,     0,   -57,
     -57,    97,    98,     0,     0,     0,     0,   -78,   200,   -78,
     -78,   -78,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,    99,   -57,   100,
     -57,   226,   226,   226,   -57,     0,   264,   264,   264,   -57,
     200,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     200,     0,     0,     0,     0,   226,   226,   226,     0,     0,
     264,   264,   264,     0,   200,   226,   226,   226,     0,     0,
     264,   264,   264,     0,     0,     0,     0,   200,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   246,     0,     0,
     264,   264,   264,     0,   200,   226,   226,   226,     0,     0,
     264,   264,   264,     0,   200,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   280,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,   246,   246,   280,     0,     0,
       0,   226,   226,   226,     0,     0,   246,   246,   280,     0,
       0,     0,   226,   226,   226,     0,     0,   264,   264,   264,
       0,   200,   660,   660,   660,   660,   660,   660,   660,   660,
     660,   341,     0,     0,   246,   246,   280,   -77,   -77,   -77,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   200,   -77,
     -77,     0,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -83,   -83,   -83,     0,     0,     0,     0,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,    20,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   200,     0,   -83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   200,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -27,   -27,   -27,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   200,     0,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -61,   -61,   264,
     264,   264,     0,     0,     0,     0,     0,     0,     0,   200,
     264,   264,   264,     0,     0,   -61,     0,   264,   264,   264,
       0,     0,     0,     0,   -61,     0,   -61,   200,   -61,     0,
       0,     0,   264,   264,   264,     0,     0,   -41,   -41,   -41,
     -41,     0,   200,     0,   207,   -41,   341,   341,     0,   341,
     264,   264,   264,     0,     0,   341,   341,     0,   341,   264,
     264,   264,     0,     0,   -41,   -41,   -41,   -41,   -41,   200,
     -41,   -41,   341,   341,     0,   341,   108,   108,   108,     0,
       0,   252,   252,   265,   265,   265,   286,   -43,   -43,   -43,
     -43,     0,     0,     0,   207,   297,   297,   297,   297,   297,
     297,   297,   297,   297,     0,   -47,   -47,   -47,   -47,     0,
       0,     0,     0,   -47,   -43,   -43,   -43,   -43,   -43,     0,
     -43,     0,   -43,   -47,     0,     0,     0,   -43,   -44,   -44,
     -44,   -44,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
       0,     0,   265,   265,   265,   -47,   347,   347,     0,     0,
       0,     0,   347,     0,   207,   -44,   -44,   -44,   -44,   -44,
       0,   -44,     0,   -44,     0,     0,     0,     0,   -44,   -41,
     -41,   -41,   -41,   246,   246,   280,     0,   -41,     0,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,     0,   246,
     246,   280,   -43,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,   207,   -41,     0,   -41,   -57,   -57,   488,   489,   -41,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,
       0,     0,     0,     0,   -43,     0,     0,   207,   -57,   -57,
     414,   415,   -57,   490,   -57,   491,   -57,   341,   341,   -57,
     341,     0,     0,   207,   341,   341,   -57,   341,     0,     0,
       0,     0,     0,     0,     0,   -57,   416,   -57,   417,   -57,
     -29,   -29,   -29,     0,     0,   207,     0,   -29,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   207,   -29,     0,     0,   -29,     0,     0,     0,     0,
     207,     0,     0,     0,     0,     0,   -29,   207,   -29,   -29,
     -29,   -29,   -29,     0,     0,    26,    27,    28,     0,     0,
       0,     0,    29,    30,    31,    32,     0,    33,    34,   176,
      87,    35,    36,    37,    38,    39,     0,   177,     0,     0,
      40,     0,     0,   -62,   -62,   -62,   -62,     0,     0,     0,
       0,    41,   207,    42,    43,   178,   179,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   108,   108,   108,   -62,     0,
     265,   265,   265,   -62,   207,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   207,     0,     0,     0,     0,   108,
     108,   108,     0,     0,   265,   265,   265,     0,   207,   108,
     108,   108,     0,     0,   265,   265,   265,     0,     0,     0,
       0,   207,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   252,     0,     0,   265,   265,   265,     0,   207,   108,
     108,   108,     0,     0,   265,   265,   265,     0,   207,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   286,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,   252,
     252,   286,     0,     0,     0,   108,   108,   108,     0,     0,
     252,   252,   286,     0,     0,     0,   108,   108,   108,     0,
       0,   265,   265,   265,     0,   207,   662,   662,   662,   662,
     662,   662,   662,   662,   662,   347,     0,     0,   252,   252,
     286,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   207,   -35,     0,     0,   -35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -28,   -28,   -28,     0,     0,     0,
       0,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   207,     0,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   207,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,     0,
     -36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -39,   -39,
     -39,     0,     0,     0,     0,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   207,     0,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,     0,   265,   265,   265,     0,     0,     0,     0,
       0,     0,     0,   207,   265,   265,   265,     0,     0,     0,
       0,   265,   265,   265,     0,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,   265,   265,   265,     0,
       0,   -43,   -43,   -43,   -43,     0,   207,     0,   206,   -43,
     347,   347,     0,   347,   265,   265,   265,     0,     0,   347,
     347,     0,   347,   265,   265,   265,     0,     0,   -43,   -43,
     -43,   -43,   -43,   207,   -43,   -43,   347,   347,     0,   347,
     227,   227,   227,     0,     0,   251,   251,   116,   117,   118,
     285,     0,   -37,   -37,   -37,     0,     0,     0,   206,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,     0,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -44,   -44,   -44,   -44,     0,
       0,     0,     0,   -44,     0,     0,   314,   314,   314,     0,
     346,   346,     0,     0,     0,     0,   346,     0,   206,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,
     -44,   -40,   -40,   -40,   -40,   -44,     0,   252,   252,   286,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,   -70,   -40,
       0,     0,     0,   252,   252,   286,     0,     0,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   206,     0,   -70,   -70,   -70,
     -70,   -70,     0,    91,     0,   -70,     0,     0,     0,     0,
     -70,     0,     0,     0,     0,     0,     0,   -45,   -45,   -45,
     -45,   206,     0,     0,     0,   -45,     0,     0,     0,     0,
       0,   347,   347,     0,   347,     0,     0,   206,   347,   347,
       0,   347,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,     0,   -45,     0,   -38,   -38,   -38,   -45,     0,   206,
       0,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   206,   -38,     0,     0,   -38,
       0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
     -38,   206,   -38,   -38,   -38,   -38,   -38,     0,     0,   -85,
     -85,   -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -85,     0,     0,   -85,     0,     0,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,   -85,   206,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   227,
     227,   227,   -69,     0,   507,   508,   509,   -69,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,     0,
       0,     0,     0,   227,   227,   227,     0,     0,   540,   541,
     542,     0,   206,   227,   227,   227,     0,     0,   551,   552,
     553,     0,     0,     0,     0,   206,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,     0,     0,   580,   581,
     582,     0,   206,   227,   227,   227,     0,     0,   591,   592,
     593,     0,   206,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,     0,     0,     0,     0,   206,     0,     0,
       0,     0,     0,   251,   251,   285,     0,     0,     0,   227,
     227,   227,     0,     0,   251,   251,   285,     0,     0,     0,
     227,   227,   227,     0,     0,   646,   647,   648,     0,   206,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
       0,     0,   251,   251,   285,   -30,   -30,   -30,     0,     0,
       0,     0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   206,   -30,     0,     0,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   206,     0,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,     0,     0,     0,     0,   -86,   -86,   -86,   -86,
     206,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -79,   -79,   -79,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,   206,     0,   -79,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,   -79,     0,
     -79,   -79,   -79,   -79,   -79,     0,     0,   314,   314,   314,
       0,     0,     0,     0,     0,     0,     0,   206,   314,   314,
     314,     0,     0,     0,     0,   314,   314,   314,   107,   109,
     110,     0,     0,   250,   250,   206,     0,     0,   284,     0,
     314,   314,   314,     0,     0,     0,   205,     0,     0,     0,
     206,     0,     0,     0,   346,   346,     0,   346,   314,   314,
     314,     0,     0,   346,   346,     0,   346,   314,   314,   314,
       0,     0,     0,     0,     0,     0,     0,   206,     0,     0,
     346,   346,     0,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,   153,   154,     0,   345,   345,
     -80,   -80,   -80,     0,   345,     0,   205,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,   -81,   -81,
     -81,     0,     0,   205,     0,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,     0,     0,   -81,     0,     0,     0,     0,     0,   205,
       0,   251,   251,   285,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -40,   -40,   -40,   -40,   205,     0,   251,   251,   285,
       0,   -46,   -46,   -46,   -46,     0,     0,     0,     0,   -46,
       0,     0,     0,     0,     0,     0,     0,   205,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,     0,     0,   -46,   -46,
     -46,   -46,   -46,   205,   -46,     0,   -46,     0,     0,     0,
       0,   -46,   205,     0,     0,   346,   346,     0,   346,   205,
       0,     0,   346,   346,     0,   346,     0,   -75,   -75,   -75,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
       0,     0,   -75,     0,     0,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -75,   205,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   502,   503,   504,
     -68,     0,     0,     0,     0,   -68,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,     0,     0,     0,
       0,   535,   536,   537,     0,     0,     0,     0,     0,     0,
     205,   546,   547,   548,     0,     0,     0,   -62,   -62,   -62,
     -62,     0,     0,   205,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,     0,   -62,     0,     0,     0,     0,
     205,   586,   587,   588,   -62,   -62,   -62,   -62,   -62,     0,
     205,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,     0,     0,     0,     0,   205,     0,     0,     0,     0,
       0,   250,   250,   284,     0,     0,     0,   631,   632,   633,
       0,     0,   250,   250,   284,     0,     0,     0,   641,   642,
     643,     0,     0,     0,     0,     0,     0,   205,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,     0,     0,
     250,   250,   284,   -77,   -77,   -77,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   205,   -77,     0,     0,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -77,
       0,   -77,   -77,   -77,   -77,   -77,   -83,   -83,   -83,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   360,   -83,   -83,   -83,   -83,   -83,   204,   -83,   205,
       0,   -83,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
     -71,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
     -71,     0,     0,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   249,   249,   -71,     0,   205,   283,
       0,     0,   -71,     0,     0,     0,     0,   204,     0,     0,
     -25,   -25,   -25,   132,   133,   134,   135,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,     0,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -25,     0,   -25,   -25,
     -25,   -25,   -25,   205,     0,     0,     0,     0,     0,   344,
     344,     0,     0,     0,     0,   344,     0,   204,     0,     0,
       0,   -47,   -47,   -47,   -47,   757,   758,   759,     0,   -47,
       0,     0,     0,     0,     0,   205,   765,   766,   767,     0,
       0,     0,     0,   768,   769,   770,     0,     0,   -47,   -47,
     -47,   -47,   -47,   205,   -47,     0,   -47,     0,   776,   777,
     778,   -47,     0,     0,   204,     0,     0,     0,   205,     0,
       0,     0,   345,   345,     0,   345,   801,   802,   803,     0,
       0,   345,   345,     0,   345,   821,   822,   823,     0,     0,
     204,     0,     0,     0,     0,   205,     0,     0,   345,   345,
       0,   345,     0,     0,     0,     0,   204,   -83,   -83,   -83,
       0,     0,     0,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   454,   -83,   -83,   -83,   -83,   -83,   204,   -83,
       0,     0,   -83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,   204,   -83,   -83,   -83,   -83,   -83,
       0,     0,     0,   204,   -83,   -83,   -83,     0,     0,     0,
     204,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   465,
     -83,   -83,   -83,   -83,   -83,     0,   -83,     0,     0,   -83,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,   -40,     0,
     -83,     0,   -83,   -83,   -83,   -83,   -83,     0,     0,   250,
     250,   284,     0,     0,     0,   204,     0,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   250,   250,   284,     0,     0,
     -40,     0,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,   204,   204,   204,
     204,   204,   204,   528,   529,   530,   531,   204,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,     0,
       0,   204,   -42,   345,   345,     0,   345,     0,     0,     0,
     345,   345,     0,   345,   204,   249,   249,   249,   249,   249,
     573,   574,   575,   576,   249,     0,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   283,   283,   283,   283,   283,   612,   613,   614,
     615,   283,   -44,   -44,   -44,   -44,   204,     0,     0,     0,
     -44,     0,   249,   249,   283,     0,     0,     0,     0,     0,
       0,     0,     0,   249,   249,   283,     0,     0,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,     0,   204,   344,
     344,   344,   344,   344,   667,   668,   669,   670,   344,     0,
       0,   249,   249,   283,   -83,   -83,   -83,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   493,
     -83,   -83,   -83,   -83,   -83,   204,   -83,     0,     0,   -83,
       0,   -41,   -41,   -41,   -41,     0,     0,     0,     0,   -41,
     -83,     0,   -83,   -83,   -83,   -83,   -83,     0,     0,   203,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,     0,     0,   -41,     0,
     204,   -41,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,     0,   248,   248,     0,     0,
     -41,   282,     0,     0,     0,     0,     0,     0,     0,   203,
       0,     0,   129,   130,   131,   -82,   -82,   -82,     0,   204,
       0,     0,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,     0,
     -82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,   343,   343,   -26,   -26,   -26,     0,   343,     0,   203,
     -26,   -26,   -26,   -26,   204,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,     0,   -26,     0,
       0,     0,   -43,   -43,   -43,   -43,     0,     0,     0,   -26,
     -43,   -26,   -26,   -26,   -26,   -26,   204,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,   -44,   203,     0,     0,   -43,
     -43,   -43,   -43,   -43,   204,   -43,   -43,     0,     0,     0,
       0,     0,   -43,     0,   -44,   -44,   -44,   -44,   -44,   204,
     -44,   -44,   203,   344,   344,     0,   344,   -44,   -70,   -70,
     -70,   -70,   344,   344,     0,   344,   -70,     0,   203,     0,
       0,     0,     0,     0,     0,     0,   204,     0,     0,   344,
     344,     0,   344,     0,     0,   -70,   -70,   -70,   -70,   -70,
     203,   371,   -70,     0,     0,     0,     0,   306,   -70,     0,
     -45,   -45,   -45,   -45,     0,     0,   203,     0,   -45,     0,
       0,     0,     0,     0,     0,   203,   -46,   -46,   -46,   -46,
       0,     0,   203,     0,   -46,     0,   322,   -45,   -45,   -45,
     -45,   -45,   355,   -45,   -45,   -43,   -43,   -43,   -43,     0,
     -45,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,     0,   355,   -43,     0,     0,   -46,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,   203,   -43,   -43,
       0,     0,     0,     0,     0,   -43,     0,     0,     0,     0,
     249,   249,   283,     0,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,   -47,     0,     0,     0,   249,   249,   283,   203,
     203,   203,   525,   526,   527,     0,     0,     0,     0,   203,
       0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,
       0,     0,     0,   203,   -47,     0,     0,     0,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,   203,   248,   248,   570,
     571,   572,     0,     0,   344,   344,   248,   344,     0,     0,
       0,   344,   344,   203,   344,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   203,   282,   282,   609,   610,   611,     0,
       0,     0,     0,   282,     0,     0,     0,     0,   203,     0,
      26,    27,    28,     0,   248,   248,   282,    29,    30,    31,
      32,     0,    33,    34,     0,   248,   248,   282,    37,    38,
      39,     0,   307,     0,     0,     0,     0,     0,     0,     0,
     203,   343,   343,   664,   665,   666,    41,     0,    85,     0,
     343,     0,     0,   248,   248,   282,     0,     0,     0,     0,
       0,   323,   -44,   -44,   -44,   -44,     0,   356,     0,     0,
     -70,   -70,   -70,   -70,     0,     0,     0,   203,   202,     0,
     -44,     0,     0,     0,     0,     0,     0,   356,   -70,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -70,   -70,   -70,
     -70,   -70,   -44,   723,   -70,     0,     0,     0,     0,     0,
     -70,     0,     0,     0,     0,   247,   247,     0,     0,     0,
     281,     0,   203,     0,     0,     0,     0,     0,   202,   127,
     128,    26,    27,    28,     0,     0,     0,     0,    29,    30,
      31,    32,     0,    33,    34,   176,   679,    35,    36,    37,
      38,    39,     0,   177,     0,     0,    40,     0,     0,     0,
       0,   203,     0,     0,     0,     0,     0,    41,     0,    42,
      43,   178,   179,   180,     0,     0,     0,     0,     0,     0,
     342,   342,    26,    27,    28,     0,   342,     0,   202,    29,
      30,    31,    32,     0,    33,    34,   176,   725,    35,    36,
      37,    38,    39,     0,   177,     0,     0,    40,     0,   -72,
     -72,   -72,   -72,     0,     0,     0,   203,   -72,    41,     0,
      42,    43,   178,   179,   180,     0,     0,   -72,   -57,   -57,
     441,   442,     0,     0,   308,   202,   -72,   -72,   -72,   -72,
     -72,     0,     0,   -72,     0,     0,   -57,     0,   203,   -72,
       0,     0,     0,     0,     0,   -57,   443,   -57,   444,   -57,
       0,   202,   -57,   324,     0,     0,   203,     0,   -57,   357,
       0,     0,     0,   -45,   -45,   -45,   -45,   202,     0,     0,
       0,   203,     0,     0,     0,   343,   343,     0,   343,   357,
       0,   -45,     0,     0,   343,   343,     0,   343,     0,   202,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   203,     0,
       0,   343,   343,   -45,   343,   202,     0,     0,     0,     0,
       0,     0,     0,     0,   202,     0,     0,     0,    26,    27,
      28,   202,     0,     0,     0,    29,    30,    31,    32,   306,
      33,    34,   176,   734,    35,    36,    37,    38,    39,   306,
     177,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,    42,    43,   178,   179,
     180,     0,     0,     0,     0,     0,   202,     0,     0,     0,
       0,    26,    27,    28,     0,     0,     0,   306,    29,    30,
      31,    32,     0,    33,    34,   176,   751,    35,    36,    37,
      38,    39,     0,   177,     0,     0,    40,     0,   202,   522,
     524,     0,   248,   248,   282,   310,     0,    41,   202,    42,
      43,   178,   179,   180,     0,     0,     0,     0,   248,   248,
     282,     0,   202,     0,     0,     0,     0,     0,     0,     0,
     322,     0,     0,   794,   326,   202,   567,   569,     0,   322,
     359,     0,   814,     0,     0,   247,     0,     0,     0,     0,
       0,     0,   202,     0,     0,     0,   322,     0,     0,   355,
     359,     0,   202,   606,   608,     0,   343,   343,     0,   343,
       0,     0,   281,   343,   343,     0,   343,   202,     0,     0,
       0,     0,     0,   247,   247,   281,     0,   -46,   -46,   -46,
     -46,     0,     0,     0,   247,   247,   281,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -46,     0,     0,     0,   202,
     661,   663,     0,     0,   -46,   -46,   -46,   -46,   -46,   342,
     -46,   -46,   247,   247,   281,     0,     0,   -46,   -67,   -67,
     -67,   -67,   -67,     0,   307,     0,   -67,     0,     0,     0,
       0,   -67,     0,     0,   307,     0,   202,     0,     0,     0,
       0,     0,     0,   306,   306,   306,     0,     0,     0,     0,
       0,     0,     0,     0,   306,   794,     0,     0,     0,   322,
     322,   322,     0,     0,     0,   -47,   -47,   -47,   -47,     0,
     322,   814,   307,     0,     0,     0,   355,   355,   355,   355,
     355,   202,     0,   -47,     0,   306,     0,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,   306,   -47,   -47,
       0,     0,     0,     0,     0,   -47,     0,     0,     0,     0,
       0,   322,     0,     0,   794,     0,   306,     0,   322,     0,
     202,   814,     0,   322,   355,   323,     0,     0,   796,     0,
       0,     0,     0,     0,   323,     0,     0,   816,   794,   794,
     794,   794,   794,   814,   814,   814,   814,   814,     0,     0,
       0,   323,     0,     0,   356,     0,     0,     0,   794,   814,
       0,     0,     0,     0,   -84,   -84,   -84,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   202,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,     0,     0,   -84,
       0,     0,     0,   -66,   -66,   -66,   -66,     0,     0,     0,
     -84,   101,   -84,   -84,   -84,   -84,   -84,   202,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   202,   308,     0,   -66,     0,
       0,     0,     0,   -66,     0,     0,   308,     0,     0,     0,
     202,     0,     0,     0,   342,   342,     0,   342,   307,   307,
     307,     0,     0,   342,   342,     0,   342,     0,     0,   307,
     796,     0,     0,     0,   323,   323,   323,   202,     0,     0,
     342,   342,     0,   342,   308,   323,   816,   -62,   -62,   -62,
     -62,   356,   356,   356,   356,   356,     0,     0,     0,     0,
     307,     0,     0,     0,     0,   -62,     0,     0,     0,     0,
       0,     0,   307,     0,   -62,   -62,   -62,   -62,   -62,     0,
       0,   -62,     0,     0,     0,     0,   323,   -62,     0,   796,
       0,   307,     0,   323,     0,     0,   816,   324,   323,   356,
     797,   -62,   -62,   -62,   -62,     0,   324,     0,     0,   817,
       0,     0,     0,   796,   796,   796,   796,   796,   816,   816,
     816,   816,   816,   324,     0,     0,   357,     0,   -62,   -62,
     -62,   -62,   -62,   796,   816,   -62,     0,     0,     0,     0,
       0,   247,   247,   281,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,     0,   247,   247,   281,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   852,   -83,
     -83,   -83,   -83,   -83,     0,   -83,     0,   310,   -83,     0,
       0,     0,     0,     0,     0,     0,     0,   310,     0,   -83,
       0,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,   -71,
     -71,   -71,   -71,     0,     0,   342,   342,   -71,   342,     0,
       0,     0,   342,   342,     0,   342,     0,     0,     0,     0,
     308,   308,   308,     0,     0,   310,   -71,   -71,   -71,   -71,
     -71,   308,   797,     0,   -71,     0,   324,   324,   324,   -71,
       0,     0,   -72,   -72,   -72,   -72,     0,   324,   817,     0,
     -72,     0,     0,   357,   357,   357,   357,   357,     0,     0,
       0,     0,   308,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   308,     0,     0,   -72,   326,     0,
       0,   799,   -72,     0,     0,     0,     0,   326,   324,     0,
     819,   797,     0,   308,     0,   324,     0,     0,   817,     0,
     324,   357,     0,     0,   326,     0,     0,   359,     0,     0,
       0,     0,     0,     0,     0,   797,   797,   797,   797,   797,
     817,   817,   817,   817,   817,     0,     0,     0,     0,     0,
     -83,   -83,   -83,     0,     0,   797,   817,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   868,   -83,   -83,   -83,   -83,
     -83,     0,   -83,     0,     0,   -83,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,   381,     0,   -83,     0,   -83,   -83,
     -83,   -83,   -83,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -66,     0,     0,     0,     0,     0,   -66,     0,     0,     0,
       0,   310,   310,   310,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   310,   799,     0,     0,     0,   326,   326,   326,
       0,   -70,   -70,   -70,   -70,     0,     0,     0,   326,   819,
       0,     0,     0,     0,   359,   359,   359,   359,   359,     0,
       0,     0,     0,   310,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,     0,   450,   310,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   -70,     0,     0,     0,   326,
       0,     0,   799,     0,   310,     0,   326,     0,     0,   819,
       0,   326,   359,     0,   -70,   -70,   -70,   -70,   -70,     0,
     482,   -70,     0,     0,     0,     0,   799,   799,   799,   799,
     799,   819,   819,   819,   819,   819,     0,     0,     0,     0,
       0,    26,    27,    28,     0,     0,   799,   819,    29,    30,
      31,    32,     0,    33,    34,   176,   916,    35,    36,    37,
      38,    39,     0,   177,     0,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,    42,
      43,   178,   179,   180,    26,    27,    28,     0,     0,     0,
       0,    29,    30,    31,    32,     0,    33,    34,   176,   923,
      35,    36,    37,    38,    39,     0,   177,     0,     0,    40,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,     0,
      41,     0,    42,    43,   178,   179,   180,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,     0,     0,   -71,   -42,   -42,   -42,   -42,     0,
     -71,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -41,   -41,   -41,   -41,     0,   -40,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -43,   -43,   -43,   -43,     0,   -42,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -44,   -44,   -44,
     -44,     0,   -41,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -70,   -70,   -70,   -70,     0,
     -43,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -66,   -66,   -66,   -66,     0,   -44,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,     0,   690,   -70,
     -66,   -45,   -45,   -45,   -45,   -70,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -66,   -46,   -46,   -46,
     -46,     0,   -66,     0,     0,     0,     0,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,     0,   -45,   -47,   -47,   -47,
     -47,   -45,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,
     -46,     0,   -46,   -72,   -72,   -72,   -72,   -46,     0,     0,
       0,   -72,     0,     0,   -47,   -47,   -47,   -47,   -47,     0,
     -47,     0,   -47,   -69,   -69,   -69,   -69,   -47,     0,     0,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -72,     0,     0,
       0,   -69,     0,   -72,   -68,   -68,   -68,   -68,     0,     0,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -69,   -67,   -67,
     -67,   -67,   -68,   -69,     0,     0,   -45,   -45,   -45,   -45,
       0,   -68,   -68,   -68,   -68,   -68,   -67,     0,   -68,     0,
     -46,   -46,   -46,   -46,   -68,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -67,   -45,   -45,   -45,   -45,   -45,   -67,   -45,
     -45,   -47,   -47,   -47,   -47,     0,   -45,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -71,   -71,   -71,   -71,     0,
     -46,     0,     0,     0,     0,     0,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -71,   -47,   -47,   -63,   -63,   -63,   -63,
       0,   -47,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,
     -64,   -64,   -64,   -64,   -63,   -71,     0,     0,     0,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -64,     0,
     -63,   -65,   -65,   -65,   -65,     0,   -63,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -64,   -72,   -72,   -72,   -72,   -65,
     -64,     0,     0,   -63,   -63,   -63,   -63,     0,   -65,   -65,
     -65,   -65,   -65,   -72,     0,   -65,     0,   -64,   -64,   -64,
     -64,   -65,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,
     -63,   -63,   -63,   -63,   -63,   -72,     0,     0,   -63,   -65,
     -65,   -65,   -65,   -63,   -64,   -64,   -64,   -64,   -64,     0,
       0,     0,   -64,   -57,   -57,   377,   378,   -64,     0,     0,
       0,   -62,   -62,   -62,   -62,     0,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,   -65,   -66,   -66,   -66,   -66,   -65,
     -57,   379,   -57,   380,   -57,     0,     0,   -57,   -62,   -62,
     -62,   -62,   -62,   -57,     0,   -62,   -66,   -66,   -66,   -66,
       0,   -62,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
     -66,   -71,   -71,   -71,   -71,   -66,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -66,   -69,   -69,   -69,   -69,     0,   -66,     0,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,   -71,   -68,   -68,   -68,
     -68,   -71,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -69,   -67,   -67,   -67,   -67,
       0,   -69,     0,     0,   -68,   -68,   -68,   -68,   -68,     0,
       0,   -68,   -72,   -72,   -72,   -72,     0,   -68,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,     0,     0,
     -67,   -71,   -71,   -71,   -71,     0,   -67,     0,     0,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,   -72,   -63,   -63,
     -63,   -63,   -72,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -71,   -64,   -64,   -64,   -64,
       0,   -71,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
       0,     0,   -63,   -65,   -65,   -65,   -65,     0,   -63,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -64,   -72,   -72,   -72,   -72,     0,   -64,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,     0,     0,   -65,     0,     0,
       0,     0,     0,   -65,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,     0,     0,   -72,   -33,   -33,   -33,     0,
       0,   -72,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,   -33,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -33,     0,   -33,   -33,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,   -35,     0,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -35,     0,   -35,   -35,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,     0,     0,   860,     0,   -76,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -76,     0,
     -76,   -76,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,
     -36,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -36,     0,   -36,   -36,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
       0,   -39,     0,   -39,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -39,     0,   -39,   -39,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,     0,   -37,     0,     0,     0,
       0,     0,     0,     0,   -38,   -38,   -38,   -37,     0,   -37,
     -37,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,
       0,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -38,     0,   -38,   -38,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,     0,
     -82,     0,   -82,     0,     0,     0,     0,     0,     0,     0,
     -85,   -85,   -85,   -82,     0,   -82,   -82,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,     0,     0,   -85,     0,   -85,     0,     0,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -85,     0,   -85,   -85,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,     0,
       0,     0,     0,     0,     0,     0,   -86,   -86,   -86,   -34,
       0,   -34,   -34,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,     0,     0,   -86,
       0,   -86,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -86,     0,   -86,   -86,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
       0,     0,   922,     0,   -78,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -78,     0,   -78,   -78,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,     0,   -84,     0,   -84,     0,     0,
       0,     0,     0,     0,     0,   -76,   -76,   -76,   -84,     0,
     -84,   -84,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,     0,     0,   947,     0,
     -76,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -76,     0,   -76,   -76,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,     0,
       0,   -79,     0,   -79,     0,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -79,     0,   -79,   -79,   -80,   -80,
     -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,     0,     0,   -80,     0,   -80,     0,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,   -80,     0,   -80,
     -80,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,   -81,
       0,     0,     0,     0,     0,     0,     0,   -75,   -75,   -75,
     -81,     0,   -81,   -81,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,     0,     0,
     -75,     0,   -75,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -75,     0,   -75,   -75,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,     0,     0,   964,     0,   -78,     0,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -78,     0,   -78,   -78,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,     0,     0,   -77,     0,   -77,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,   -77,
       0,   -77,   -77,    29,    30,    31,    32,     0,    33,    34,
     299,     0,   300,   301,    37,    38,    39,     0,     0,     0,
       0,   302,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    41,     0,   303,   304,    29,    30,    31,    32,
       0,    33,    34,   315,     0,   316,   317,    37,    38,    39,
       0,     0,     0,     0,   318,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    41,     0,   319,   320,    29,
      30,    31,    32,     0,    33,    34,   348,     0,   349,   350,
      37,    38,    39,     0,     0,     0,     0,   351,     0,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    41,     0,
     352,   353,    29,    30,    31,    32,     0,    33,    34,   176,
       0,    35,    36,    37,    38,    39,     0,     0,     0,     0,
      40,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,    41,     0,    42,    43,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,     0,
       0,     0,     0,   -19,     0,     0,     0,     0,     0,     0,
       0,   -20,   -20,   -20,   -19,     0,   -19,   -19,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,     0,     0,     0,     0,   -20,     0,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,   -20,     0,   -20,
     -20,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,   -35,
     -33,     0,   -33,   -33,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -35,     0,   -35,   -35,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,   -36,     0,     0,     0,     0,
       0,     0,     0,   -39,   -39,   -39,   -36,     0,   -36,   -36,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -39,
       0,   -39,   -39,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,   -37,     0,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -37,     0,   -37,   -37,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,   -38,     0,     0,     0,     0,     0,
       0,     0,   -18,   -18,   -18,   -38,     0,   -38,   -38,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,     0,     0,     0,     0,   -18,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,   -25,   -18,     0,
     -18,   -18,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
     -25,     0,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -25,     0,   -25,   -25,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,
       0,     0,     0,   -82,     0,     0,     0,     0,     0,     0,
       0,   -85,   -85,   -85,   -82,     0,   -82,   -82,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,     0,     0,     0,     0,   -85,     0,     0,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -85,     0,   -85,
     -85,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,
       0,     0,     0,     0,     0,     0,     0,   -26,   -26,   -26,
     -34,     0,   -34,   -34,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,     0,
       0,     0,   -26,     0,     0,     0,     0,     0,     0,     0,
     -86,   -86,   -86,   -26,     0,   -26,   -26,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,     0,   -86,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   -86,     0,   -86,   -86,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,   -84,
       0,   -84,   -84,    29,    30,    31,    32,     0,    33,    34,
     787,     0,   788,   789,    37,    38,    39,     0,     0,     0,
       0,   790,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    41,     0,   791,   792,    29,    30,    31,    32,
       0,    33,    34,   807,     0,   808,   809,    37,    38,    39,
       0,     0,     0,     0,   810,     0,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,    41,     0,   811,   812,   -79,
     -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,   -79,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -79,     0,
     -79,   -79,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
     -80,     0,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -80,     0,   -80,   -80,   -81,   -81,   -81,   -81,     0,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,   -81,     0,     0,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -81,     0,   -81,   -81,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,   -75,     0,     0,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -75,     0,   -75,
     -75,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,     0,    26,    27,    28,   -77,
       0,     0,     0,    29,    30,    31,    32,     0,    33,    34,
     -77,     0,   -77,   -77,    37,    38,    39,    26,    27,    28,
       0,     0,     0,     0,    29,    30,    31,    32,     0,    33,
      34,     0,    41,     0,   459,    37,    38,    39,    26,    27,
      28,     0,     0,     0,     0,    29,    30,    31,    32,     0,
      33,    34,     0,    41,     0,   470,    37,    38,    39,    26,
      27,    28,     0,     0,     0,     0,    29,    30,    31,    32,
       0,    33,    34,     0,    41,     0,   498,    37,    38,    39,
      26,    27,    28,     0,     0,     0,     0,    29,    30,    31,
      32,     0,    33,    34,     0,    41,     0,   857,    37,    38,
      39,   186,   187,   188,     0,     0,     0,     0,   189,   190,
     191,   192,     0,   193,   194,     0,    41,     0,   873,   195,
     196,   197,   186,   187,   188,     0,     0,     0,     0,   189,
     190,   191,   192,     0,   193,   194,     0,   198,   124,     0,
     195,   196,   197,   186,   187,   188,     0,     0,     0,     0,
     189,   190,   191,   192,     0,   193,   194,     0,   198,   511,
       0,   195,   196,   197,   186,   187,   188,     0,     0,     0,
       0,   189,   190,   191,   192,     0,   193,   194,     0,   198,
     544,     0,   195,   196,   197,   186,   187,   188,     0,     0,
       0,     0,   189,   190,   191,   192,     0,   193,   194,     0,
     198,   556,     0,   195,   196,   197,   186,   187,   188,     0,
       0,     0,     0,   189,   190,   191,   192,     0,   193,   194,
       0,   198,   584,     0,   195,   196,   197,   186,   187,   188,
       0,     0,     0,     0,   189,   190,   191,   192,     0,   193,
     194,     0,   198,   595,     0,   195,   196,   197,   186,   187,
     188,     0,     0,     0,     0,   189,   190,   191,   192,     0,
     193,   194,     0,   198,   620,     0,   195,   196,   197,   186,
     187,   188,     0,     0,     0,     0,   189,   190,   191,   192,
       0,   193,   194,     0,   198,   650,     0,   195,   196,   197,
     186,   187,   188,     0,     0,     0,     0,   189,   190,   191,
     192,     0,   193,   194,     0,   198,   763,     0,   195,   196,
     197,   186,   187,   188,     0,     0,     0,     0,   189,   190,
     191,   192,     0,   193,   194,     0,   198,   774,     0,   195,
     196,   197,   186,   187,   188,     0,     0,     0,     0,   189,
     190,   191,   192,     0,   193,   194,     0,   198,   782,     0,
     195,   196,   197,    26,    27,    28,     0,     0,     0,     0,
      29,    30,    31,    32,     0,    33,    34,     0,   198,   827,
       0,    37,    38,    39,   186,   187,   188,     0,     0,     0,
       0,   189,   190,   191,   192,     0,   193,   194,     0,    41,
       0,     0,   195,   196,   197,   212,   213,   214,     0,     0,
       0,     0,   215,   216,   217,   218,     0,   219,   220,     0,
     198,     0,     0,   221,   222,   223,   228,   229,   230,     0,
       0,     0,     0,   231,   232,   233,   234,     0,   235,   236,
       0,   224,     0,     0,   237,   238,   239,   266,   267,   268,
       0,     0,     0,     0,   269,   270,   271,   272,     0,   273,
     274,     0,   240,     0,     0,   275,   276,   277,   288,   289,
     290,     0,     0,     0,     0,    29,    30,    31,   291,     0,
     292,   293,     0,   278,     0,     0,    37,    38,    39,   253,
     254,   255,     0,     0,     0,     0,   311,   312,   313,   256,
       0,   257,   258,     0,   294,     0,     0,   259,   260,   261,
     327,   328,   329,     0,     0,     0,     0,   330,   331,   332,
     333,     0,   334,   335,     0,   262,     0,     0,   336,   337,
     338,   513,   514,   515,     0,     0,     0,     0,   189,   190,
     191,   516,     0,   517,   518,     0,   339,     0,     0,   195,
     196,   197,   558,   559,   560,     0,     0,     0,     0,   231,
     232,   233,   561,     0,   562,   563,     0,   519,     0,     0,
     237,   238,   239,   597,   598,   599,     0,     0,     0,     0,
     269,   270,   271,   600,     0,   601,   602,     0,   564,     0,
       0,   275,   276,   277,   652,   653,   654,     0,     0,     0,
       0,   330,   331,   332,   655,     0,   656,   657,     0,   603,
       0,     0,   336,   337,   338,   -45,   -45,   -45,   -45,     0,
       0,     0,     0,   -45,   -46,   -46,   -46,   -46,     0,     0,
     658,     0,   -46,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,   -47,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,     0,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,   -71,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,   -44,   -44,   -44,   -44,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -71,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,   -72,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,     0,   750,   -70,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -72,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -46,   -46,   -46,   -46,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,     0,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -66,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -69,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -68,   -67,   -67,   -67,   -67,
     -67,     0,     0,   -67,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -63,
     -63,   -63,   -63,   -63,     0,     0,   -63,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -64,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -72,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,   -40,     0,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -40,     0,     0,     0,
     -42,     0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -42,   -40,     0,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,   -41,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   -41,     0,     0,     0,   -43,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -43,   -41,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,   -44,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -44,     0,     0,     0,   -70,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -70,   -44,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
       0,   408,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
     -45,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -45,     0,     0,     0,   -46,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -46,   -45,   -42,   -42,   -42,   -42,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -47,   -47,   -47,   -47,   -42,     0,     0,     0,   -47,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -47,   -42,
     -41,   -41,   -41,   -41,     0,     0,     0,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -43,   -43,   -43,   -43,   -41,     0,
       0,   -44,   -44,   -44,   -44,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -43,   -41,     0,   -70,   -70,   -70,   -70,   -44,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -44,   -44,
     -44,   -44,   -44,   -70,   -44,   -45,   -45,   -45,   -45,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,     0,   708,   -46,
     -46,   -46,   -46,   -45,     0,     0,   -47,   -47,   -47,   -47,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -46,   -45,     0,
       0,     0,     0,     0,   -47,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,   418,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -66,     0,
       0,     0,   -71,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -72,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,   -66,   -68,
     -68,   -68,   -68,   -69,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -69,   -69,   -69,   -69,   -69,   -68,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,     0,   -71,   -71,   -71,   -71,   -67,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -71,   -64,   -64,   -64,   -64,   -63,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -63,   -63,   -63,   -63,   -63,   -64,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,     0,   -72,   -72,   -72,   -72,   -65,     0,
       0,     0,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72
};

static const yytype_int16 yycheck[] =
{
       6,   361,     0,     0,   176,   371,    44,     5,     5,     5,
       0,   211,   211,     0,    13,     5,    24,    39,     0,    40,
      47,     0,     6,     7,    24,    46,    23,     0,    17,   395,
       0,    39,    25,    23,     6,     7,    39,    40,    25,    39,
      24,    40,   408,    25,     6,     7,    25,    46,    13,     6,
       7,    44,    25,     6,     7,    25,    43,    44,    45,   425,
       0,    43,    44,    45,    43,    44,    45,     0,    40,   435,
      43,    44,    45,    43,    44,    45,     0,    70,    40,    24,
      78,    78,    78,    40,   450,    25,    13,    40,     0,    46,
       6,     7,    25,    46,    39,   455,    40,    39,   298,   298,
      13,    25,    46,    43,    44,    45,   466,   113,   105,    13,
      43,    44,    45,    25,     0,   105,   482,     6,     7,    43,
      44,    45,    13,    13,    40,     6,     7,   299,    41,     6,
       7,    43,    44,    45,   494,    15,   142,    41,    13,    25,
       6,     7,   148,   315,    33,    13,    35,    24,    37,    40,
      13,    40,    16,    13,    41,    46,    43,    43,    44,    45,
      41,    26,   168,    40,    13,    46,    41,     6,     7,    46,
       3,     4,     5,    41,    40,    40,   348,    10,    11,    12,
      13,    41,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    40,    25,    26,    39,    28,    83,    46,    24,    13,
       6,     7,    41,    17,   242,    24,    39,    46,    41,    42,
      43,    44,    45,    39,   211,    39,     6,     7,    24,    39,
      39,   211,     6,     7,     6,     7,   113,    41,    39,     3,
       4,     5,    39,    13,    40,   241,    10,    11,    12,    13,
      46,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      40,    25,    26,    39,    28,   142,    46,    41,    24,    41,
      40,   148,    46,    39,    46,    39,    46,    41,    42,    43,
      44,    45,    24,    24,    40,    39,    40,     3,     4,     5,
      46,   168,    46,    24,    10,    11,    12,    13,    39,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    39,    25,
      26,   298,    28,    13,     6,     7,     8,     9,   298,     6,
       7,   198,    14,    39,    14,    41,    42,    43,    44,    45,
      40,    24,    24,    40,   690,    24,    46,    24,    40,    46,
      40,    33,    34,    35,    36,    37,    46,   224,    40,    39,
      25,    41,   708,    40,    46,    41,    46,     6,     7,    46,
      46,     6,     7,   240,     3,     4,     5,   723,    43,    44,
      45,    10,    11,    12,    13,    24,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   262,    25,    26,    33,    28,
      35,    40,    37,    24,   750,    40,    24,    46,     6,     7,
      39,   278,    41,    42,    43,    44,    45,     6,     7,     6,
       7,    13,     3,     4,     5,    17,    24,   294,    24,    10,
      11,    12,    13,    24,    15,    16,    17,   304,    19,    20,
      21,    22,    23,    39,    25,    40,    33,    28,    35,    41,
      37,    40,    40,   320,    41,    40,    14,    46,    39,    46,
      41,    42,    43,    44,    45,    40,     6,     7,    41,     6,
       7,    26,   339,    46,     6,     7,     8,     9,   456,   456,
     456,    39,    14,    41,    24,    40,   353,    24,    46,   467,
     467,   467,    24,    33,   501,    35,    24,    37,     6,     7,
      40,    33,    34,    35,    36,    37,    46,    39,    40,    40,
      40,    39,    24,   853,    46,    46,    24,   495,   495,   495,
       6,     7,    13,     3,     4,     5,    17,    40,    40,   869,
      10,    11,    12,    13,    46,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    26,    25,    26,    33,    28,    35,
      41,    37,    24,    24,    13,    41,    39,    40,    40,    39,
      46,    41,    42,    43,    44,    45,    25,    40,    40,    40,
       3,     4,     5,    14,    46,    46,    17,    10,    11,    12,
      13,    40,    15,    16,    43,    44,    45,    40,    21,    22,
      23,   458,    25,     6,     7,     8,     9,    24,    39,    39,
      41,    14,   469,    41,    14,    46,    39,    17,    46,   113,
      43,    44,    45,    40,     6,     7,    40,   624,    24,    46,
      33,    34,    35,    36,    37,    39,    39,   634,    41,    39,
     497,    41,    24,    46,    40,   787,    46,    24,   142,   625,
      46,    33,    26,    35,   148,    37,    39,    40,    40,   635,
      39,    40,   519,    40,    46,   807,    40,    46,    26,    46,
     164,   165,   166,   167,   168,   672,     3,     4,     5,    39,
     174,    14,    40,    10,    11,    12,    13,    13,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   673,    25,    26,
      13,    28,     6,     7,     8,     9,    39,   564,    41,    39,
      14,    39,    39,    46,    41,    42,    43,    44,    45,    13,
      24,    13,    24,    17,    39,    17,    26,     6,     7,    33,
      34,    35,    36,    37,    39,    39,    40,    13,    40,    13,
      40,    17,    46,    26,    46,    24,   603,    41,    39,    41,
     726,    25,    39,   729,    33,    41,    35,    40,    37,   735,
      46,    40,   738,    26,    13,    41,    40,    46,   625,    43,
      44,    45,    13,     3,     4,     5,   752,    40,   635,   755,
      10,    11,    12,    13,    25,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    26,    25,    26,    39,    28,    40,
      40,   658,    43,    44,    45,    26,    46,    13,    40,    39,
      26,    41,    42,    43,    44,    45,   673,     6,     7,    40,
       3,     4,     5,    24,    40,    24,    41,    10,    11,    12,
      13,    46,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    40,    25,    26,    33,    28,    35,    46,    37,    26,
      26,    40,    39,    26,    26,    24,    39,    22,    41,    42,
      43,    44,    45,    40,    40,     6,     7,    40,    40,   726,
      13,    40,   729,   849,   850,   851,    41,    46,   735,    39,
      40,   738,    39,    40,   860,   861,   854,   854,   854,   865,
     866,   867,    33,   890,    35,   752,    37,    14,   755,    40,
     876,   877,   870,   870,   870,   902,   882,   883,   884,   885,
     886,    39,    40,    78,    79,   891,     6,     7,    83,    39,
      40,    39,    39,    26,    41,    90,    91,   903,    26,    46,
       6,     7,     8,     9,    24,   792,   101,    40,    14,    39,
      40,   917,    40,    33,   920,    35,   922,    37,   924,    13,
      40,   927,    26,   929,   930,   812,    46,    33,    34,    35,
      36,    37,    39,    39,    40,    13,    40,    26,   944,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   143,   144,
      14,    40,    25,    17,   149,    40,   151,    39,   964,   965,
      40,    46,   849,   850,   851,    39,    46,    26,    39,   856,
      43,    44,    45,   860,   861,    39,    39,    41,   865,   866,
     867,    40,    46,     6,     7,   872,    39,    40,    39,   876,
     877,     6,     7,     8,     9,   882,   883,   884,   885,   886,
      40,    24,    24,   198,   891,    40,    46,     6,     7,    24,
      33,    46,    35,    17,    37,    13,   903,    40,    33,    34,
      35,    36,    37,    46,    39,    40,    40,    39,    39,   224,
     917,    46,    46,   920,    33,   922,    35,   924,    37,    39,
     927,    40,   929,   930,    40,   240,    41,    46,    40,    14,
      46,    46,    17,     6,     7,    39,    39,   944,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   262,    39,     6,
       7,    13,    39,    40,    39,    39,    41,   964,   965,    46,
      33,    46,    35,   278,    37,    41,    13,    39,    41,    40,
      46,    14,   287,    46,    17,    46,    33,    40,    35,   294,
      37,   625,    40,    46,    41,    41,    39,    13,    46,    46,
      46,   635,     3,     4,     5,    14,    39,    13,    41,    10,
      11,    12,    13,    46,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    40,    25,    26,    41,    28,    39,    40,
      39,    46,    41,    40,   339,    46,    39,    46,    39,   673,
      41,    42,    43,    44,    45,     3,     4,     5,    39,    39,
      40,    39,    10,    11,    12,    13,    46,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   371,    25,    26,    40,
      28,     6,     7,    40,    40,    46,   381,    41,    39,    46,
      46,    39,    46,    41,    42,    43,    44,    45,     6,     7,
     395,    40,   726,    40,    39,   729,    39,    46,    33,    46,
      35,   735,    37,   408,   738,    40,    40,    39,     6,     7,
       8,     9,    46,   418,    39,    33,    14,    35,   752,    37,
     425,   755,    13,    41,    41,    40,    24,    40,    46,    46,
     435,    46,    39,    46,    40,    33,    34,    35,    36,    37,
     445,    39,    40,    40,    40,   450,    40,    40,    46,     6,
       7,   456,   457,   458,    40,    40,    39,    39,    13,    40,
      46,    46,   467,   468,   469,    46,     6,     7,     8,     9,
      39,    39,    15,    40,    14,    40,    33,   482,    35,    46,
      37,    46,    40,    40,    24,    39,    39,   492,    46,    46,
     495,   496,   497,    33,    34,    35,    36,    37,    40,    39,
      40,    40,    40,    40,    46,    40,    46,    46,    46,    46,
       3,     4,     5,    40,   519,   849,   850,   851,    40,    46,
      13,    39,    15,    16,    46,    39,   860,   861,    21,    22,
      23,   865,   866,   867,    16,    40,    39,     6,     7,     8,
       9,    46,   876,   877,    15,    14,    39,    24,   882,   883,
     884,   885,   886,    41,    16,    24,    40,   891,    46,   564,
       6,     7,    46,    15,    33,    34,    35,    36,    37,   903,
      39,    40,    40,    40,     6,     7,    40,    46,    46,    46,
      41,    15,    46,   917,    15,    46,   920,    33,   922,    35,
     924,    37,    24,   927,    40,   929,   930,    40,   603,    41,
      46,    33,    40,    35,    46,    37,    41,    15,    46,    16,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
      40,    40,    40,    40,    16,    16,    46,    46,    46,    46,
     964,   965,    41,    16,    40,    40,    40,    46,    73,    74,
      75,    46,    46,    78,    79,    80,    81,    82,    83,     6,
       7,     8,     9,   658,    40,    16,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    40,     6,     7,     8,
       9,    15,    46,    24,    24,    14,    33,    34,    35,    36,
      37,    41,    39,    41,    41,   690,    46,    41,    46,    46,
       6,     7,    46,    40,    33,    34,    35,    36,    37,    40,
      39,    13,    41,   708,   139,   140,   141,    46,   143,   144,
       6,     7,     8,     9,   149,    41,   151,    33,   723,    35,
      46,    37,   727,   728,    40,   730,    40,    13,    24,    24,
      46,   736,   737,    24,   739,    24,    40,    33,    34,    35,
      36,    37,    41,    39,    40,   750,    40,    46,   753,   754,
      46,   756,     3,     4,     5,    40,    40,    24,    24,    10,
      11,    12,    13,   198,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    41,    25,    26,    41,    28,    46,    41,
      41,    46,     0,    24,    46,    46,    24,     5,    39,   224,
      41,    42,    43,    44,    45,    40,    40,    13,    13,     3,
       4,     5,    24,    24,    24,   240,    10,    11,    12,    13,
      40,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      15,    25,    26,    40,    28,    24,    40,   262,    40,     6,
       7,    24,    24,    40,    40,    39,    24,    41,    42,    43,
      44,    45,    40,   278,    13,    13,    24,    24,    24,   854,
     855,   856,   287,    24,    24,    40,    33,    24,    35,   294,
      37,     3,     4,     5,    24,   870,   871,   872,    10,    11,
      12,    13,    24,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    40,    25,    26,    24,    28,    24,     6,     7,
      40,    40,    13,    13,    40,    40,    40,    39,    24,    41,
      42,    43,    44,    45,   339,    24,    24,    16,    24,    24,
      24,    24,    15,   918,   919,    33,   921,    35,    16,    37,
     925,   926,    16,   928,    15,    24,    15,   362,   363,   364,
      40,    16,   367,   368,   369,    40,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    40,    40,    -1,
      40,   386,   387,   388,    40,    39,   391,   392,   393,    40,
     395,   396,   397,   398,    40,    40,   401,   402,   403,    40,
      40,    40,    40,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,    40,    40,   421,   422,   423,    40,
     425,   426,   427,   428,    40,    40,   431,   432,   433,    40,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,    40,    39,    39,    39,   450,    40,    40,    40,    40,
      40,   456,   457,   458,    40,    40,    39,   462,   463,   464,
      39,    24,   467,   468,   469,    40,    40,    40,   473,   474,
     475,    40,    40,   478,   479,   480,    40,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,    40,    40,
     495,   496,   497,     3,     4,     5,    24,    40,    40,    40,
      10,    11,    12,    13,    24,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   519,    25,    26,    24,    28,    40,
      24,    40,    40,    24,    40,    40,    40,    40,    40,    39,
      25,    41,    42,    43,    44,    45,    -1,    40,     3,     4,
       5,    40,    40,    40,    40,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   564,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,     6,     7,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,   603,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      26,    33,    28,    35,    -1,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    39,    46,    41,    42,    43,    44,    45,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   658,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,   680,   681,   682,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   690,   691,   692,   693,    -1,
      -1,    -1,    -1,   698,   699,   700,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   708,    -1,    -1,    -1,    -1,   713,   714,
     715,    -1,    -1,     6,     7,     8,     9,    -1,   723,    -1,
      41,    14,   727,   728,    -1,   730,   731,   732,   733,    -1,
      -1,   736,   737,    -1,   739,   740,   741,   742,    -1,    -1,
      33,    34,    35,    36,    37,   750,    39,    40,   753,   754,
      -1,   756,    73,    74,    75,    -1,    -1,    78,    79,    80,
      81,    82,    83,     6,     7,     8,     9,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,    24,
      -1,    -1,    -1,    46,     6,     7,     8,     9,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,   139,   140,
     141,    46,   143,   144,    -1,     6,     7,    -1,   149,    -1,
     151,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    24,    46,     6,     7,     8,     9,   854,
     855,   856,    33,    14,    35,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,   870,   871,   872,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   198,    39,    40,
      -1,     6,     7,     8,     9,    46,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,   224,    -1,    -1,    -1,    14,    33,    34,
      35,    36,    37,   918,   919,    40,   921,    24,    -1,   240,
     925,   926,    -1,   928,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,     3,     4,     5,    46,
      -1,   262,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   278,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,
      -1,    -1,    39,   294,    41,    42,    43,    44,    45,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    39,   339,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,   362,   363,   364,    41,    -1,   367,   368,   369,    46,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,    -1,    -1,    -1,    -1,   386,   387,   388,    -1,    -1,
     391,   392,   393,    -1,   395,   396,   397,   398,    -1,    -1,
     401,   402,   403,    -1,    -1,    -1,    -1,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,    -1,    -1,
     421,   422,   423,    -1,   425,   426,   427,   428,    -1,    -1,
     431,   432,   433,    -1,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,    -1,    -1,    -1,    -1,   450,
      -1,    -1,    -1,    -1,    -1,   456,   457,   458,    -1,    -1,
      -1,   462,   463,   464,    -1,    -1,   467,   468,   469,    -1,
      -1,    -1,   473,   474,   475,    -1,    -1,   478,   479,   480,
      -1,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,    -1,    -1,   495,   496,   497,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   519,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,   564,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,   603,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,   658,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,     6,     7,   680,
     681,   682,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   690,
     691,   692,   693,    -1,    -1,    24,    -1,   698,   699,   700,
      -1,    -1,    -1,    -1,    33,    -1,    35,   708,    37,    -1,
      -1,    -1,   713,   714,   715,    -1,    -1,     6,     7,     8,
       9,    -1,   723,    -1,    41,    14,   727,   728,    -1,   730,
     731,   732,   733,    -1,    -1,   736,   737,    -1,   739,   740,
     741,   742,    -1,    -1,    33,    34,    35,    36,    37,   750,
      39,    40,   753,   754,    -1,   756,    73,    74,    75,    -1,
      -1,    78,    79,    80,    81,    82,    83,     6,     7,     8,
       9,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,    24,    -1,    -1,    -1,    46,     6,     7,
       8,     9,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    -1,   139,   140,   141,    46,   143,   144,    -1,    -1,
      -1,    -1,   149,    -1,   151,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,     6,
       7,     8,     9,   854,   855,   856,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,   870,
     871,   872,    14,    -1,    -1,    -1,    33,    34,    35,    36,
      37,   198,    39,    -1,    41,     6,     7,     8,     9,    46,
      -1,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,   224,     6,     7,
       8,     9,    33,    34,    35,    36,    37,   918,   919,    40,
     921,    -1,    -1,   240,   925,   926,    24,   928,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
       3,     4,     5,    -1,    -1,   262,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   278,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
     287,    -1,    -1,    -1,    -1,    -1,    39,   294,    41,    42,
      43,    44,    45,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    39,   339,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,   362,   363,   364,    41,    -1,
     367,   368,   369,    46,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,    -1,    -1,    -1,    -1,   386,
     387,   388,    -1,    -1,   391,   392,   393,    -1,   395,   396,
     397,   398,    -1,    -1,   401,   402,   403,    -1,    -1,    -1,
      -1,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,    -1,    -1,   421,   422,   423,    -1,   425,   426,
     427,   428,    -1,    -1,   431,   432,   433,    -1,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,    -1,
      -1,    -1,    -1,   450,    -1,    -1,    -1,    -1,    -1,   456,
     457,   458,    -1,    -1,    -1,   462,   463,   464,    -1,    -1,
     467,   468,   469,    -1,    -1,    -1,   473,   474,   475,    -1,
      -1,   478,   479,   480,    -1,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,    -1,    -1,   495,   496,
     497,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   519,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,   564,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,   603,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,   658,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,   680,   681,   682,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   690,   691,   692,   693,    -1,    -1,    -1,
      -1,   698,   699,   700,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   708,    -1,    -1,    -1,    -1,   713,   714,   715,    -1,
      -1,     6,     7,     8,     9,    -1,   723,    -1,    41,    14,
     727,   728,    -1,   730,   731,   732,   733,    -1,    -1,   736,
     737,    -1,   739,   740,   741,   742,    -1,    -1,    33,    34,
      35,    36,    37,   750,    39,    40,   753,   754,    -1,   756,
      73,    74,    75,    -1,    -1,    78,    79,    80,    81,    82,
      83,    -1,     3,     4,     5,    -1,    -1,    -1,    91,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    -1,    -1,   139,   140,   141,    -1,
     143,   144,    -1,    -1,    -1,    -1,   149,    -1,   151,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,     6,     7,     8,     9,    46,    -1,   854,   855,   856,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    24,
      -1,    -1,    -1,   870,   871,   872,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   198,    -1,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,   224,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,   918,   919,    -1,   921,    -1,    -1,   240,   925,   926,
      -1,   928,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,    -1,     3,     4,     5,    46,    -1,   262,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   278,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,
      39,   294,    41,    42,    43,    44,    45,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    39,   339,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,   362,
     363,   364,    41,    -1,   367,   368,   369,    46,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,    -1,
      -1,    -1,    -1,   386,   387,   388,    -1,    -1,   391,   392,
     393,    -1,   395,   396,   397,   398,    -1,    -1,   401,   402,
     403,    -1,    -1,    -1,    -1,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,    -1,    -1,   421,   422,
     423,    -1,   425,   426,   427,   428,    -1,    -1,   431,   432,
     433,    -1,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,    -1,    -1,    -1,    -1,   450,    -1,    -1,
      -1,    -1,    -1,   456,   457,   458,    -1,    -1,    -1,   462,
     463,   464,    -1,    -1,   467,   468,   469,    -1,    -1,    -1,
     473,   474,   475,    -1,    -1,   478,   479,   480,    -1,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
      -1,    -1,   495,   496,   497,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   519,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,   564,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
     603,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,   658,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,   680,   681,   682,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   690,   691,   692,
     693,    -1,    -1,    -1,    -1,   698,   699,   700,    73,    74,
      75,    -1,    -1,    78,    79,   708,    -1,    -1,    83,    -1,
     713,   714,   715,    -1,    -1,    -1,    91,    -1,    -1,    -1,
     723,    -1,    -1,    -1,   727,   728,    -1,   730,   731,   732,
     733,    -1,    -1,   736,   737,    -1,   739,   740,   741,   742,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   750,    -1,    -1,
     753,   754,    -1,   756,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   140,   141,    -1,   143,   144,
       3,     4,     5,    -1,   149,    -1,   151,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,   198,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,   224,
      -1,   854,   855,   856,    39,    -1,    41,    42,    43,    44,
      45,     6,     7,     8,     9,   240,    -1,   870,   871,   872,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    33,    34,
      35,    36,    37,   278,    39,    -1,    41,    -1,    -1,    -1,
      -1,    46,   287,    -1,    -1,   918,   919,    -1,   921,   294,
      -1,    -1,   925,   926,    -1,   928,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    39,   339,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   362,   363,   364,
      41,    -1,    -1,    -1,    -1,    46,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    -1,    -1,    -1,
      -1,   386,   387,   388,    -1,    -1,    -1,    -1,    -1,    -1,
     395,   396,   397,   398,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,    -1,    24,    -1,    -1,    -1,    -1,
     425,   426,   427,   428,    33,    34,    35,    36,    37,    -1,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,    -1,    -1,    -1,    -1,   450,    -1,    -1,    -1,    -1,
      -1,   456,   457,   458,    -1,    -1,    -1,   462,   463,   464,
      -1,    -1,   467,   468,   469,    -1,    -1,    -1,   473,   474,
     475,    -1,    -1,    -1,    -1,    -1,    -1,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,    -1,    -1,
     495,   496,   497,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   519,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    41,    25,   564,
      -1,    28,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    78,    79,    40,    -1,   603,    83,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    91,    -1,    -1,
       3,     4,     5,    97,    98,    99,   100,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,   658,    -1,    -1,    -1,    -1,    -1,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,   151,    -1,    -1,
      -1,     6,     7,     8,     9,   680,   681,   682,    -1,    14,
      -1,    -1,    -1,    -1,    -1,   690,   691,   692,   693,    -1,
      -1,    -1,    -1,   698,   699,   700,    -1,    -1,    33,    34,
      35,    36,    37,   708,    39,    -1,    41,    -1,   713,   714,
     715,    46,    -1,    -1,   198,    -1,    -1,    -1,   723,    -1,
      -1,    -1,   727,   728,    -1,   730,   731,   732,   733,    -1,
      -1,   736,   737,    -1,   739,   740,   741,   742,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   750,    -1,    -1,   753,   754,
      -1,   756,    -1,    -1,    -1,    -1,   240,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   262,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,   278,    41,    42,    43,    44,    45,
      -1,    -1,    -1,   287,     3,     4,     5,    -1,    -1,    -1,
     294,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,   854,
     855,   856,    -1,    -1,    -1,   339,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,   870,   871,   872,    -1,    -1,
      46,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,   395,    46,   918,   919,    -1,   921,    -1,    -1,    -1,
     925,   926,    -1,   928,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,    -1,    -1,    -1,    -1,    -1,
      -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,     6,     7,     8,     9,   450,    -1,    -1,    -1,
      14,    -1,   456,   457,   458,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467,   468,   469,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    -1,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,    -1,
      -1,   495,   496,   497,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   519,    25,    -1,    -1,    28,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,    41,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    24,    -1,
     564,    46,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,    -1,    78,    79,    -1,    -1,
      46,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    95,    96,     3,     4,     5,    -1,   603,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,   143,   144,     3,     4,     5,    -1,   149,    -1,   151,
      10,    11,    12,    13,   658,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    39,
      14,    41,    42,    43,    44,    45,   690,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,   198,    -1,    -1,    33,
      34,    35,    36,    37,   708,    39,    40,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    33,    34,    35,    36,    37,   723,
      39,    40,   224,   727,   728,    -1,   730,    46,     6,     7,
       8,     9,   736,   737,    -1,   739,    14,    -1,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   750,    -1,    -1,   753,
     754,    -1,   756,    -1,    -1,    33,    34,    35,    36,    37,
     262,    39,    40,    -1,    -1,    -1,    -1,   113,    46,    -1,
       6,     7,     8,     9,    -1,    -1,   278,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,   287,     6,     7,     8,     9,
      -1,    -1,   294,    -1,    14,    -1,   142,    33,    34,    35,
      36,    37,   148,    39,    40,     6,     7,     8,     9,    -1,
      46,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,   168,    24,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   339,    39,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
     854,   855,   856,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,   870,   871,   872,   371,
     372,   373,   374,   375,   376,    -1,    -1,    -1,    -1,   381,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,   395,    46,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,   408,   409,   410,   411,
     412,   413,    -1,    -1,   918,   919,   418,   921,    -1,    -1,
      -1,   925,   926,   425,   928,    33,    34,    35,    36,    37,
      -1,    39,    40,   435,   436,   437,   438,   439,   440,    -1,
      -1,    -1,    -1,   445,    -1,    -1,    -1,    -1,   450,    -1,
       3,     4,     5,    -1,   456,   457,   458,    10,    11,    12,
      13,    -1,    15,    16,    -1,   467,   468,   469,    21,    22,
      23,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     482,   483,   484,   485,   486,   487,    39,    -1,    41,    -1,
     492,    -1,    -1,   495,   496,   497,    -1,    -1,    -1,    -1,
      -1,   142,     6,     7,     8,     9,    -1,   148,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,   519,    41,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,   168,    24,    33,
      34,    35,    36,    37,    -1,    39,    40,    33,    34,    35,
      36,    37,    46,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      83,    -1,   564,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,   603,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,     3,     4,     5,    -1,   149,    -1,   151,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,   658,    14,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    24,     6,     7,
       8,     9,    -1,    -1,   113,   198,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    24,    -1,   690,    46,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,   224,    40,   142,    -1,    -1,   708,    -1,    46,   148,
      -1,    -1,    -1,     6,     7,     8,     9,   240,    -1,    -1,
      -1,   723,    -1,    -1,    -1,   727,   728,    -1,   730,   168,
      -1,    24,    -1,    -1,   736,   737,    -1,   739,    -1,   262,
      33,    34,    35,    36,    37,    -1,    39,    40,   750,    -1,
      -1,   753,   754,    46,   756,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,     3,     4,
       5,   294,    -1,    -1,    -1,    10,    11,    12,    13,   625,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   635,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,   673,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,   371,   372,
     373,    -1,   854,   855,   856,   113,    -1,    39,   381,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,   870,   871,
     872,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     726,    -1,    -1,   729,   142,   408,   409,   410,    -1,   735,
     148,    -1,   738,    -1,    -1,   418,    -1,    -1,    -1,    -1,
      -1,    -1,   425,    -1,    -1,    -1,   752,    -1,    -1,   755,
     168,    -1,   435,   436,   437,    -1,   918,   919,    -1,   921,
      -1,    -1,   445,   925,   926,    -1,   928,   450,    -1,    -1,
      -1,    -1,    -1,   456,   457,   458,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,   467,   468,   469,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    24,    -1,    -1,    -1,   482,
     483,   484,    -1,    -1,    33,    34,    35,    36,    37,   492,
      39,    40,   495,   496,   497,    -1,    -1,    46,    33,    34,
      35,    36,    37,    -1,   625,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,   635,    -1,   519,    -1,    -1,    -1,
      -1,    -1,    -1,   849,   850,   851,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   860,   861,    -1,    -1,    -1,   865,
     866,   867,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
     876,   877,   673,    -1,    -1,    -1,   882,   883,   884,   885,
     886,   564,    -1,    24,    -1,   891,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   903,    39,    40,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,   917,    -1,    -1,   920,    -1,   922,    -1,   924,    -1,
     603,   927,    -1,   929,   930,   726,    -1,    -1,   729,    -1,
      -1,    -1,    -1,    -1,   735,    -1,    -1,   738,   944,   945,
     946,   947,   948,   949,   950,   951,   952,   953,    -1,    -1,
      -1,   752,    -1,    -1,   755,    -1,    -1,    -1,   964,   965,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,   658,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,
      39,    14,    41,    42,    43,    44,    45,   690,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,   708,   625,    -1,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,   635,    -1,    -1,    -1,
     723,    -1,    -1,    -1,   727,   728,    -1,   730,   849,   850,
     851,    -1,    -1,   736,   737,    -1,   739,    -1,    -1,   860,
     861,    -1,    -1,    -1,   865,   866,   867,   750,    -1,    -1,
     753,   754,    -1,   756,   673,   876,   877,     6,     7,     8,
       9,   882,   883,   884,   885,   886,    -1,    -1,    -1,    -1,
     891,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,   903,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,   917,    46,    -1,   920,
      -1,   922,    -1,   924,    -1,    -1,   927,   726,   929,   930,
     729,     6,     7,     8,     9,    -1,   735,    -1,    -1,   738,
      -1,    -1,    -1,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   752,    -1,    -1,   755,    -1,    33,    34,
      35,    36,    37,   964,   965,    40,    -1,    -1,    -1,    -1,
      -1,   854,   855,   856,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,   870,   871,   872,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,   625,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   635,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,   918,   919,    14,   921,    -1,
      -1,    -1,   925,   926,    -1,   928,    -1,    -1,    -1,    -1,
     849,   850,   851,    -1,    -1,   673,    33,    34,    35,    36,
      37,   860,   861,    -1,    41,    -1,   865,   866,   867,    46,
      -1,    -1,     6,     7,     8,     9,    -1,   876,   877,    -1,
      14,    -1,    -1,   882,   883,   884,   885,   886,    -1,    -1,
      -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,   903,    -1,    -1,    41,   726,    -1,
      -1,   729,    46,    -1,    -1,    -1,    -1,   735,   917,    -1,
     738,   920,    -1,   922,    -1,   924,    -1,    -1,   927,    -1,
     929,   930,    -1,    -1,   752,    -1,    -1,   755,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,   964,   965,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,   849,   850,   851,    33,    34,    35,    36,    37,    -1,
      39,    40,   860,   861,    -1,    -1,    -1,   865,   866,   867,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,   876,   877,
      -1,    -1,    -1,    -1,   882,   883,   884,   885,   886,    -1,
      -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   903,    41,     6,     7,     8,
       9,    46,    -1,    -1,    -1,    14,    -1,    -1,    -1,   917,
      -1,    -1,   920,    -1,   922,    -1,   924,    -1,    -1,   927,
      -1,   929,   930,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,   964,   965,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      39,    -1,    41,    42,    43,    44,    45,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,     6,     7,     8,     9,    -1,
      46,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    46,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    40,
       6,     7,     8,     9,    -1,    46,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,     6,     7,     8,
       9,    -1,    46,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,     6,     7,     8,     9,    -1,
      46,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    46,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    40,
      24,     6,     7,     8,     9,    46,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,     6,     7,     8,
       9,    -1,    46,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    -1,    41,     6,     7,     8,
       9,    46,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,     6,     7,     8,     9,    46,    -1,    -1,
      -1,    14,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    -1,    41,     6,     7,     8,     9,    46,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    24,    -1,    46,     6,     7,     8,     9,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,     6,     7,
       8,     9,    24,    46,    -1,    -1,     6,     7,     8,     9,
      -1,    33,    34,    35,    36,    37,    24,    -1,    40,    -1,
       6,     7,     8,     9,    46,    33,    34,    35,    36,    37,
      -1,    -1,    40,    33,    34,    35,    36,    37,    46,    39,
      40,     6,     7,     8,     9,    -1,    46,    33,    34,    35,
      36,    37,    -1,    39,    40,     6,     7,     8,     9,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,    39,    40,     6,     7,     8,     9,
      -1,    46,    33,    34,    35,    36,    37,    -1,    -1,    40,
       6,     7,     8,     9,    24,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    24,    -1,
      40,     6,     7,     8,     9,    -1,    46,    33,    34,    35,
      36,    37,    -1,    -1,    40,     6,     7,     8,     9,    24,
      46,    -1,    -1,     6,     7,     8,     9,    -1,    33,    34,
      35,    36,    37,    24,    -1,    40,    -1,     6,     7,     8,
       9,    46,    33,    34,    35,    36,    37,    -1,    -1,    40,
      33,    34,    35,    36,    37,    46,    -1,    -1,    41,     6,
       7,     8,     9,    46,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,     6,     7,     8,     9,    46,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,     6,     7,     8,     9,    46,
      33,    34,    35,    36,    37,    -1,    -1,    40,    33,    34,
      35,    36,    37,    46,    -1,    40,     6,     7,     8,     9,
      -1,    46,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      41,     6,     7,     8,     9,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,     6,     7,     8,     9,    -1,    46,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,     6,     7,     8,
       9,    46,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,     6,     7,     8,     9,
      -1,    46,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,     6,     7,     8,     9,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,     6,     7,     8,     9,    -1,    46,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,     6,     7,
       8,     9,    46,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,     6,     7,     8,     9,
      -1,    46,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,     6,     7,     8,     9,    -1,    46,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      40,     6,     7,     8,     9,    -1,    46,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    33,    34,
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
       9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,    33,    34,    35,    36,    37,    -1,    39,    40,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,    33,    34,    35,
      36,    37,    -1,    39,    40,    33,    34,    35,    36,    37,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
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
      -1,    -1,    -1,    -1,    24,    -1,    33,    34,    35,    36,
      37,    -1,    39,    33,    34,    35,    36,    37,    -1,    39,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    24,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    24,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    24,     6,
       7,     8,     9,    24,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    33,    34,    35,    36,    37,    24,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,     6,     7,     8,     9,    24,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      24,     6,     7,     8,     9,    24,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    33,    34,    35,    36,    37,    24,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,     6,     7,     8,     9,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    43,    44,    45,    49,    51,    54,    55,    56,
      59,     0,    56,    17,    77,    13,    41,    53,    57,    58,
      18,    78,    14,    39,    41,    46,     3,     4,     5,    10,
      11,    12,    13,    15,    16,    19,    20,    21,    22,    23,
      28,    39,    41,    42,    54,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      75,    76,    77,    79,    67,    13,    40,    50,    51,    52,
      54,    53,    57,    39,    39,    39,    13,    13,    39,    39,
      39,    39,    39,    39,    62,    41,    62,    18,    60,    41,
      46,    39,     6,     7,    33,    35,    37,     8,     9,    34,
      36,    14,    40,    46,    40,    46,    53,    71,    73,    71,
      71,    15,    16,    56,    67,    67,    72,    72,    72,    62,
      67,    40,    41,    67,    40,    67,    74,    68,    68,    69,
      69,    69,    70,    70,    70,    70,    67,    13,    51,    24,
      24,    24,    64,    24,    24,    40,    40,    40,    40,    24,
      40,    46,    71,    71,    71,    64,    67,    67,    64,    67,
      67,    40,    40,    40,    40,    40,    40,    26,    40,    64,
      64,    64,    64,    64,    26,    64,    17,    25,    43,    44,
      45,    25,    43,    44,    45,    13,     3,     4,     5,    10,
      11,    12,    13,    15,    16,    21,    22,    23,    39,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    41,    58,
      13,    39,     3,     4,     5,    10,    11,    12,    13,    15,
      16,    21,    22,    23,    39,    65,    66,    72,     3,     4,
       5,    10,    11,    12,    13,    15,    16,    21,    22,    23,
      39,    51,    54,    55,    59,    65,    66,    68,    69,    70,
      71,    72,    73,     3,     4,     5,    13,    15,    16,    21,
      22,    23,    39,    65,    66,    73,     3,     4,     5,    10,
      11,    12,    13,    15,    16,    21,    22,    23,    39,    65,
      66,    68,    69,    70,    71,    72,    73,    46,     3,     4,
       5,    13,    15,    16,    39,    65,    66,    73,    39,    17,
      19,    20,    28,    41,    42,    62,    63,    75,    76,    77,
      79,    10,    11,    12,    72,    17,    19,    20,    28,    41,
      42,    62,    63,    75,    76,    77,    79,     3,     4,     5,
      10,    11,    12,    13,    15,    16,    21,    22,    23,    39,
      65,    66,    68,    69,    70,    71,    72,    73,    17,    19,
      20,    28,    41,    42,    62,    63,    75,    76,    77,    79,
      18,    78,    39,    39,    39,    13,    13,    39,    39,    39,
      62,    39,     6,     7,    33,    35,    37,     8,     9,    34,
      36,    14,    41,    40,    50,    52,    39,    39,    39,    13,
      13,    39,    39,    39,    62,    39,    39,    39,    39,    13,
      13,    39,    39,    39,    62,    77,    41,    58,    39,     6,
       7,    33,    35,    37,     8,     9,    34,    36,    14,    13,
      13,    39,    39,    39,    62,    39,    39,    39,    39,    13,
      13,    39,    39,    39,    62,    39,     6,     7,    33,    35,
      37,     8,     9,    34,    36,    14,    67,    13,    13,    62,
      39,    40,    50,    52,    18,    78,    39,    39,    39,    41,
      62,    41,    39,    39,    39,    18,    78,    39,    39,    39,
      41,    62,    41,    39,    39,    39,    13,    13,    39,    39,
      39,    62,    39,     6,     7,    33,    35,    37,     8,     9,
      34,    36,    14,    18,    78,    39,    39,    39,    41,    62,
      41,    61,    71,    71,    71,    15,    16,    72,    72,    72,
      40,    40,    74,     3,     4,     5,    13,    15,    16,    39,
      65,    66,    68,    73,    68,    69,    69,    69,    70,    70,
      70,    70,    67,    40,    40,    71,    71,    71,    15,    16,
      72,    72,    72,    40,    40,    74,    71,    71,    71,    15,
      16,    72,    72,    72,    40,    41,    40,    74,     3,     4,
       5,    13,    15,    16,    39,    65,    66,    68,    73,    68,
      69,    69,    69,    70,    70,    70,    70,    67,    15,    16,
      72,    72,    72,    40,    40,    74,    71,    71,    71,    15,
      16,    72,    72,    72,    40,    40,    74,     3,     4,     5,
      13,    15,    16,    39,    65,    66,    68,    73,    68,    69,
      69,    69,    70,    70,    70,    70,    67,    15,    16,    40,
      40,    74,    40,    40,    61,    56,    67,    67,    62,    67,
      41,    71,    71,    71,    61,    56,    67,    67,    62,    67,
      41,    71,    71,    71,    15,    16,    72,    72,    72,    40,
      40,    74,     3,     4,     5,    13,    15,    16,    39,    65,
      66,    68,    73,    68,    69,    69,    69,    70,    70,    70,
      70,    67,    61,    56,    67,    67,    62,    67,    41,    18,
      24,    24,    24,    40,    40,    40,    40,    13,    13,    62,
      39,    24,    24,    24,    40,    40,    40,    40,    24,    24,
      24,    40,    40,    40,    40,    13,    13,    62,    39,    40,
      40,    40,    40,    24,    24,    24,    40,    40,    40,    40,
      13,    13,    62,    39,    40,    18,    64,    24,    24,    40,
      24,    24,    24,    24,    18,    64,    24,    24,    40,    24,
      24,    24,    24,    40,    40,    40,    40,    13,    13,    62,
      39,    18,    64,    24,    24,    40,    24,    71,    71,    71,
      15,    16,    40,    40,    74,    71,    71,    71,    71,    71,
      71,    15,    16,    40,    40,    74,    71,    71,    71,    15,
      16,    40,    40,    74,    64,    67,    67,    17,    19,    20,
      28,    41,    42,    62,    63,    64,    75,    76,    77,    79,
      67,    71,    71,    71,    64,    67,    67,    17,    19,    20,
      28,    41,    42,    62,    63,    64,    75,    76,    77,    79,
      67,    71,    71,    71,    15,    16,    40,    40,    74,    64,
      67,    67,    64,    67,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    18,    78,    39,    39,    39,    41,    62,    41,
      26,    40,    40,    40,    40,    40,    40,    40,    18,    78,
      39,    39,    39,    41,    62,    41,    26,    40,    40,    40,
      40,    40,    40,    40,    40,    26,    40,    64,    64,    64,
      61,    56,    67,    67,    62,    67,    41,    64,    64,    64,
      64,    64,    61,    56,    67,    67,    62,    67,    41,    64,
      64,    64,    64,    64,    64,    64,    18,    64,    24,    24,
      40,    24,    26,    18,    64,    24,    24,    40,    24,    26,
      26,    64,    67,    67,    64,    67,    64,    64,    67,    67,
      64,    67,    64,    64,    40,    40,    40,    26,    40,    40,
      40,    40,    26,    40,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    26,    26,    64,    64
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
      76,    76,    77,    78,    77,    79,    79
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
       7,     7,     2,     0,     4,     2,     3
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
                        }
#line 3880 "clang.tab.c"
    break;

  case 3: /* programa: programa declaracao  */
#line 67 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes(novo_no->declaracoes, novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 3889 "clang.tab.c"
    break;

  case 6: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 78 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 3898 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo  */
#line 82 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 3904 "clang.tab.c"
    break;

  case 8: /* lista_tipo_parametro: declaracao_parametro  */
#line 86 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 3912 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 90 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros(novo_no->parametros, novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 3921 "clang.tab.c"
    break;

  case 10: /* def_declaracao: TOKEN_ID  */
#line 97 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 3930 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D  */
#line 103 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-1].no);
                            (yyvsp[-3].simbolo)->funcao.parametros_no = novo_no->parametros_no;
                            (yyvsp[-3].simbolo)->funcao.parametros = novo_no->parametros;
                        }
#line 3940 "clang.tab.c"
    break;

  case 14: /* def_declaracao_tipo: TIPO_INT  */
#line 111 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 3946 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 112 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 3952 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_ELEM  */
#line 113 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 3958 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_SET  */
#line 114 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 3964 "clang.tab.c"
    break;

  case 18: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 119 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[0].no);
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), novo_no);
                        }
#line 3974 "clang.tab.c"
    break;

  case 19: /* declaracao: declaracao_func  */
#line 128 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 3983 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_var  */
#line 133 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 3992 "clang.tab.c"
    break;

  case 21: /* inicializar_atrib: def_declaracao  */
#line 139 "parser/clang.y"
                                                 { (yyval.simbolo) = (yyvsp[0].simbolo); }
#line 3998 "clang.tab.c"
    break;

  case 22: /* inicializar_atrib: def_declaracao ATRIBUICAO expressao_atribuicao  */
#line 141 "parser/clang.y"
                        {
                            NoAST_Constante *novo_no = (NoAST_Constante*) (yyvsp[0].no);
                            (yyvsp[-2].simbolo)->constante.valor = novo_no->valor;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4008 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: inicializar_atrib  */
#line 149 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4016 "clang.tab.c"
    break;

  case 24: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA inicializar_atrib  */
#line 153 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4024 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 158 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4030 "clang.tab.c"
    break;

  case 26: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
#line 160 "parser/clang.y"
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
#line 4047 "clang.tab.c"
    break;

  case 27: /* item_bloco: declaracao_var  */
#line 174 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4053 "clang.tab.c"
    break;

  case 28: /* item_bloco: tipos_expressao  */
#line 175 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4059 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: item_bloco  */
#line 179 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4067 "clang.tab.c"
    break;

  case 30: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 183 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta(novo_no->itens_bloco, novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4076 "clang.tab.c"
    break;

  case 31: /* expressao: expressao_atribuicao  */
#line 189 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4082 "clang.tab.c"
    break;

  case 32: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 190 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4088 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 193 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4094 "clang.tab.c"
    break;

  case 34: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 194 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4100 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_declaracao  */
#line 197 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4106 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_decisao  */
#line 198 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4112 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_composta  */
#line 199 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4118 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_return  */
#line 200 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4124 "clang.tab.c"
    break;

  case 39: /* tipos_expressao: expressao_iteracao  */
#line 201 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4130 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_INTEIRO  */
#line 204 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4136 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 205 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4142 "clang.tab.c"
    break;

  case 42: /* valores: TOKEN_EMPTY  */
#line 206 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4148 "clang.tab.c"
    break;

  case 43: /* expressao_principal: TOKEN_ID  */
#line 210 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4156 "clang.tab.c"
    break;

  case 44: /* expressao_principal: valores  */
#line 214 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4164 "clang.tab.c"
    break;

  case 45: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 218 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4170 "clang.tab.c"
    break;

  case 46: /* expressao_principal: ASPAS_DUPLAS TOKEN_ID ASPAS_DUPLAS  */
#line 220 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4176 "clang.tab.c"
    break;

  case 47: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 221 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4182 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_relacional  */
#line 224 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4188 "clang.tab.c"
    break;

  case 49: /* expressao_atribuicao: expressao_chamada ATRIBUICAO expressao_atribuicao  */
#line 226 "parser/clang.y"
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
#line 4216 "clang.tab.c"
    break;

  case 50: /* expressao_relacional: expressao_logica  */
#line 251 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4222 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 253 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4230 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 257 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4238 "clang.tab.c"
    break;

  case 53: /* expressao_logica: expressao_aritmetica  */
#line 263 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4244 "clang.tab.c"
    break;

  case 57: /* expressao_aritmetica: expressao_conjunto  */
#line 269 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4250 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto OP_SOMA expressao_aritmetica  */
#line 271 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4258 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_conjunto OP_SUBTRACAO expressao_aritmetica  */
#line 275 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4266 "clang.tab.c"
    break;

  case 62: /* expressao_conjunto: expressao_io  */
#line 282 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4272 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 284 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4280 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 288 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4288 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 292 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4296 "clang.tab.c"
    break;

  case 66: /* expressao_io: expressao_chamada  */
#line 297 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4302 "clang.tab.c"
    break;

  case 67: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 299 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4310 "clang.tab.c"
    break;

  case 68: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 303 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4318 "clang.tab.c"
    break;

  case 69: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 307 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4326 "clang.tab.c"
    break;

  case 70: /* expressao_chamada: expressao_principal  */
#line 312 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4332 "clang.tab.c"
    break;

  case 72: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 315 "parser/clang.y"
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
#line 4360 "clang.tab.c"
    break;

  case 73: /* expressao_lista_param: expressao_atribuicao  */
#line 341 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4368 "clang.tab.c"
    break;

  case 74: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 345 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada(novo_no->parametros, novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4377 "clang.tab.c"
    break;

  case 75: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 352 "parser/clang.y"
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
#line 4405 "clang.tab.c"
    break;

  case 76: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 376 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4413 "clang.tab.c"
    break;

  case 77: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 380 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4421 "clang.tab.c"
    break;

  case 78: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 384 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4429 "clang.tab.c"
    break;

  case 79: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 390 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4437 "clang.tab.c"
    break;

  case 80: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 394 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4445 "clang.tab.c"
    break;

  case 81: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 398 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4453 "clang.tab.c"
    break;

  case 82: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 404 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4461 "clang.tab.c"
    break;

  case 83: /* $@1: %empty  */
#line 407 "parser/clang.y"
                                                          { novo_escopo(); }
#line 4467 "clang.tab.c"
    break;

  case 84: /* expressao_composta: CHAVE_E $@1 lista_itens_bloco CHAVE_D  */
#line 408 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                            sair_escopo();
                        }
#line 4476 "clang.tab.c"
    break;

  case 85: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 415 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4484 "clang.tab.c"
    break;

  case 86: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 419 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4492 "clang.tab.c"
    break;


#line 4496 "clang.tab.c"

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

#line 424 "parser/clang.y"


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
        imprime_simbolos();
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
