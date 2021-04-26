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
  YYSYMBOL_OP_MENOR_QUE = 8,               /* OP_MENOR_QUE  */
  YYSYMBOL_OP_SOMA = 9,                    /* OP_SOMA  */
  YYSYMBOL_OP_SUBTRACAO = 10,              /* OP_SUBTRACAO  */
  YYSYMBOL_CONJUNTO_ADD = 11,              /* CONJUNTO_ADD  */
  YYSYMBOL_CONJUNTO_REMOVE = 12,           /* CONJUNTO_REMOVE  */
  YYSYMBOL_CONJUNTO_EXISTS = 13,           /* CONJUNTO_EXISTS  */
  YYSYMBOL_TOKEN_ID = 14,                  /* TOKEN_ID  */
  YYSYMBOL_ATRIBUICAO = 15,                /* ATRIBUICAO  */
  YYSYMBOL_ASPAS_SIMPLES = 16,             /* ASPAS_SIMPLES  */
  YYSYMBOL_ASPAS_DUPLAS = 17,              /* ASPAS_DUPLAS  */
  YYSYMBOL_CHAVE_E = 18,                   /* CHAVE_E  */
  YYSYMBOL_CHAVE_D = 19,                   /* CHAVE_D  */
  YYSYMBOL_COMANDO_FOR = 20,               /* COMANDO_FOR  */
  YYSYMBOL_COMANDO_FORALL = 21,            /* COMANDO_FORALL  */
  YYSYMBOL_COMANDO_READ = 22,              /* COMANDO_READ  */
  YYSYMBOL_COMANDO_WRITE = 23,             /* COMANDO_WRITE  */
  YYSYMBOL_COMANDO_WRITELN = 24,           /* COMANDO_WRITELN  */
  YYSYMBOL_CONJUNTO_IN = 25,               /* CONJUNTO_IN  */
  YYSYMBOL_TIPO_ELEM = 26,                 /* TIPO_ELEM  */
  YYSYMBOL_COMANDO_ELSE = 27,              /* COMANDO_ELSE  */
  YYSYMBOL_EMPTY = 28,                     /* EMPTY  */
  YYSYMBOL_COMANDO_IF = 29,                /* COMANDO_IF  */
  YYSYMBOL_IN = 30,                        /* IN  */
  YYSYMBOL_IS_FLOAT = 31,                  /* IS_FLOAT  */
  YYSYMBOL_IS_INT = 32,                    /* IS_INT  */
  YYSYMBOL_IS_SET = 33,                    /* IS_SET  */
  YYSYMBOL_OP_COMPARACAO = 34,             /* OP_COMPARACAO  */
  YYSYMBOL_OP_DIVISAO = 35,                /* OP_DIVISAO  */
  YYSYMBOL_OP_E = 36,                      /* OP_E  */
  YYSYMBOL_OP_MULTIPLICACAO = 37,          /* OP_MULTIPLICACAO  */
  YYSYMBOL_OP_NEGACAO = 38,                /* OP_NEGACAO  */
  YYSYMBOL_OP_OU = 39,                     /* OP_OU  */
  YYSYMBOL_PARENTESE_E = 40,               /* PARENTESE_E  */
  YYSYMBOL_PARENTESE_D = 41,               /* PARENTESE_D  */
  YYSYMBOL_PONTO_E_VIRGULA = 42,           /* PONTO_E_VIRGULA  */
  YYSYMBOL_RETURN = 43,                    /* RETURN  */
  YYSYMBOL_TIPO_SET = 44,                  /* TIPO_SET  */
  YYSYMBOL_TIPO_INT = 45,                  /* TIPO_INT  */
  YYSYMBOL_TIPO_FLOAT = 46,                /* TIPO_FLOAT  */
  YYSYMBOL_VIRGULA = 47,                   /* VIRGULA  */
  YYSYMBOL_THEN = 48,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_programa = 50,                  /* programa  */
  YYSYMBOL_declaracoes = 51,               /* declaracoes  */
  YYSYMBOL_lista_identificadores = 52,     /* lista_identificadores  */
  YYSYMBOL_declaracao_parametro = 53,      /* declaracao_parametro  */
  YYSYMBOL_lista_tipo_parametro = 54,      /* lista_tipo_parametro  */
  YYSYMBOL_def_declaracao = 55,            /* def_declaracao  */
  YYSYMBOL_def_declaracao_tipo = 56,       /* def_declaracao_tipo  */
  YYSYMBOL_declaracao_func = 57,           /* declaracao_func  */
  YYSYMBOL_declaracao = 58,                /* declaracao  */
  YYSYMBOL_lista_inicializar_atrib = 59,   /* lista_inicializar_atrib  */
  YYSYMBOL_declaracao_var = 60,            /* declaracao_var  */
  YYSYMBOL_item_bloco = 61,                /* item_bloco  */
  YYSYMBOL_lista_itens_bloco = 62,         /* lista_itens_bloco  */
  YYSYMBOL_expressao = 63,                 /* expressao  */
  YYSYMBOL_expressao_declaracao = 64,      /* expressao_declaracao  */
  YYSYMBOL_tipos_expressao = 65,           /* tipos_expressao  */
  YYSYMBOL_valores = 66,                   /* valores  */
  YYSYMBOL_expressao_principal = 67,       /* expressao_principal  */
  YYSYMBOL_expressao_atribuicao = 68,      /* expressao_atribuicao  */
  YYSYMBOL_expressao_relacional = 69,      /* expressao_relacional  */
  YYSYMBOL_expressao_logica = 70,          /* expressao_logica  */
  YYSYMBOL_expressao_aritmetica = 71,      /* expressao_aritmetica  */
  YYSYMBOL_expressao_conjunto = 72,        /* expressao_conjunto  */
  YYSYMBOL_expressao_io = 73,              /* expressao_io  */
  YYSYMBOL_expressao_chamada = 74,         /* expressao_chamada  */
  YYSYMBOL_expressao_lista_param = 75,     /* expressao_lista_param  */
  YYSYMBOL_expressao_decisao = 76,         /* expressao_decisao  */
  YYSYMBOL_expressao_iteracao = 77,        /* expressao_iteracao  */
  YYSYMBOL_expressao_composta = 78,        /* expressao_composta  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10965

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  969

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      45,    46,    47,    48
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
     258,   262,   266,   273,   274,   275,   276,   279,   280,   284,
     288,   289,   292,   293,   297,   301,   307,   308,   312,   316,
     322,   323,   324,   350,   354,   361,   385,   389,   393,   399,
     403,   407,   413,   417,   423,   427
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
  "OP_MENOR_QUE", "OP_SOMA", "OP_SUBTRACAO", "CONJUNTO_ADD",
  "CONJUNTO_REMOVE", "CONJUNTO_EXISTS", "TOKEN_ID", "ATRIBUICAO",
  "ASPAS_SIMPLES", "ASPAS_DUPLAS", "CHAVE_E", "CHAVE_D", "COMANDO_FOR",
  "COMANDO_FORALL", "COMANDO_READ", "COMANDO_WRITE", "COMANDO_WRITELN",
  "CONJUNTO_IN", "TIPO_ELEM", "COMANDO_ELSE", "EMPTY", "COMANDO_IF", "IN",
  "IS_FLOAT", "IS_INT", "IS_SET", "OP_COMPARACAO", "OP_DIVISAO", "OP_E",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
#endif

#define YYPACT_NINF (-367)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     226,     7,     9,   271,   332,    11,    10,     2,   362,    14,
      37,    43,  -367,    47,   749,    50,    60,    64,   315,   401,
    1278,  1848,  2051,    21,    93,   103,  2408,   111,   132,    71,
     139,   142,   170,   179,   187,   233,  3721,  3027,  9353,    92,
    3194,  3239,  3550,   452,  3594,  3639,  2546,  2640,   656,   679,
      97,   215,  5368,  5783,   702,  3806,  3851,  4162,  4262,   881,
      75,   188,  4682,  4682,  4682,   270,   294,   221,  9727,  3060,
    3060,  3060,  9749,   -23,  4458,   890,   208,    85,  4712,  4757,
    9771,  3983,  9793,  9793,  9793,  9793,  9793,  9793,  9793,  9793,
    9793,  9793,  9771,   -19,   371,   159,   287,   398,     1,   858,
     283,   296,   319,   326,  2657,  2749,  8473,   352,   382,   368,
     391,   457,   430,    -9,  3051,  5124,   969,  4067,   456,   508,
    1097,  1142,  1179,   106,   162,   222,   331,  1001,  1011,  1235,
    1264,   438,   373,   441,   865,   873,  9815,  9815,  9815,  8506,
    9837,  9837,  5799,  7414,  7428,  8539,  9837,  4592,  3721,   548,
     640,   461,   486,   489,   499,   527,   529,   172,   553,   709,
    7470,  7484,  7526,  8572,  8572,  8572,  8572,  8539,  5171,  5758,
    6070,  6229,   379,  8572,  6273,  6317,   109,   123,   138,   145,
    3285,  3302,  3338,   380,   421,   576,  3355,   633,   646,   579,
     631,   639,  3721,  3663,  3897,   743,   771,   252,  1536,  7540,
    7548,  4921,   922,  6361,  1328,   108,   164,   199,   249,   117,
     214,   243,   643,   665,   673,   257,   708,   711,   694,   715,
     734,  3721,   289,   295,   721, 10442, 10456, 10491,   737,   745,
     777, 10505,   786,   814,   789,   799,   808,  3721,   831,   420,
    8605,  8638, 10540, 10554,   825,   318,  1223,  1656,  2354,  5722,
     -10,    95,   291,   313,   853,   878,   864,   866,   868,  3721,
     395,   556,   855,   269,   526,   573,   879,   888,   916,   659,
     921,   966,   933,   941,   942,  3721,   773,  1123,   125,    27,
     120,  5254,  5314,  3942,  3721,   987,  4984,  5419,  5435,  5518,
     977,   988,  3721,  5586,  5606,  7584,   931,  6405,   943,   972,
     985,  8671,  9375,  1341,  8704,  8737,  8770,  8803,  8836,  3112,
     986,   994,   998,  1031,  6449,  1002,  1033,  1052,  1034,  9397,
    1345,  1069,  1070,  1071,  1072,  1073,  5911,  6015,  6176,  1095,
    1096,  1111,  9944,  1013,  1113,  1112,  1114,  1125,  3721,  9954,
    9990,  1126,    38,   620, 10242, 10250, 10082,  6493,  1140,  1159,
    1162,   502,  9419,  1347,  1174,  1542,  1586,  1631,  1684,  6537,
    6581,  4682,  4682,  4682,  1121,  1138,  3060,  3060,  3060,   775,
    9485,  9859,  9859,  9859,  9859,  9859,  9859,  9859,  9859,  9859,
    9859,  3721,  6625,  4682,  4682,  4682,  1166,  1193,  3060,  3060,
    3060,   797,  9507,  4682,  4682,  4682,  1195,  1207,  3060,  3060,
    3060,   818,  8869,  8902,  1348,  9529,  9881,  9881,  9881,  9881,
    9881,  9881,  9881,  9881,  9881,  9881,  9727,  1196,  1220,  3060,
    3060,  3060,   847,  9551,  4682,  4682,  4682,  1209,  1234,  3060,
    3060,  3060,   907,  9573,  9903,  9903,  9903,  9903,  9903,  9903,
    9903,  9903,  9903,  9903,  9749,   910,   928,   949,   989,  1250,
    1275,  1009,  9595,  8935,  6669,   221,  9727,  9749,  8968,  1357,
    9001,   945,  1014,  1029,  4682,  4682,  4682,  1226,  6713,   221,
    9727,  9749,  1237,  1375,  1263,  4682,  4682,  4682,  1291,  1304,
    3060,  3060,  3060,  1049,  9617,  9925,  9925,  9925,  9925,  9925,
    9925,  9925,  9925,  9925,  9925,  9837,  1822,  6757,   221,  9727,
    9749,  1900,  1379,  2010,  6801,  1299,  1320,  1321,  4188,  4203,
    1306,  1307,  1314,  4330,  5648,  1087,  6140,  7001,  7018,  7037,
    1353,  1354,  3721,  7054,  7073,  1115,  7598,  1127,  1168,   445,
     546,   597,  1752,  1894,  2034,  2234,  1181,  1346,  1349,  1361,
     339,   345,  1352,  1359,  1397,   346,  1414,  1199,  1428,  1438,
    1455, 10589, 10603,  1440,  1441,  1442, 10638,  9034, 10785,  1203,
   10624, 10659, 10673, 10680,  1470,  1471,  3721, 10694, 10715,  1461,
   10819,  1463,  1464,   483,   623,   634,  1853,  2040,  2551,  3920,
    1468,   622,   718,  1453,  1454,  1456,   756,  1457,  1206,  1477,
    1478,  1482,  1198,  1710,  1467,  1472,  1473,  1942,  4398,  1208,
     796,  1344,  1965,  4486,  1495,  1504,  3721,  4500,  4799,   195,
    6097,   518,   544,   156,   334,   422,   311,   408,   817,   959,
     574,  1004,  1022,  7090,  7109,  7132,  7606,  1211,  9067,  8473,
    1506,  1507,  1213,   577,  9100,  1027,  1068,  1511,  1512,  1513,
    1498,  8473,  1515,  1516,  1221,   598,  1508,  1523,  1525,  1526,
   10000, 10036,  1532,  1534,  1535, 10046, 10092,  1229,  2736,  7210,
    7304, 10102,  1538,  1553,  3721, 10138, 10146,  1537, 10258,  1539,
    1540,   459,   468,   531,   644,   895,  2450,  2592,  1551,  2240,
    8473,  1554,  1568,  1242,   608,  2284,  9815,  9815,  9815,  7648,
    7656,  7664,  7174,  1480,  1577,  1254,  9639,  9815,  9815,  9815,
    1570,  1571,  1589,  1591,  9815,  9815,  9815, 10833, 10839, 10853,
   10799,  1595,  1600,  1261,  9661,  1578,  1579,  1580,  1581,  9815,
    9815,  9815,  7188,  7224,  7232,  4844,  1602,  1606,  1262,  9683,
    7700,  8506,  9837,  9837,  9133,  9837,  9815,  9815,  9815,  8506,
    9837,  9837,  9166,  9837,  9815,  9815,  9815, 10294, 10302, 10310,
   10154,  1608,  1610,  1281,  9705,  8506,  9837,  9837,  8539,  9837,
    1584,  1592,  1596,  7246,  7268,  7282,  7714,  1282,  1597,  1598,
    1599,  1605,  1615,  1618, 10729, 10736, 10750, 10873,  1285,  1620,
    1626,  1627,  4865,  5084,  5198,  7318,  1290,  1628,  1629,  1637,
    6845,  1632,  1639,  1640,  7813,  9441,  1389,  7846,  7879,  7912,
    7945,  7978,  8011,  1641,  1642,  1643,  1644,  1645,  1668,  1671,
    6889,  1674,  1675,  1696,    57,  9463,  1390,   254,   399,   443,
     469,   530,   559,  1697,  1701,  1702,  1711, 10190, 10198, 10206,
   10346,  1293,  1712,  1720,  1721,  2329,  1722,  7722,  7758,  7766,
    7774,  1740,  1741,  1749, 10887, 10893, 10907, 10927,  7326,  7362,
    7370,  7406,  8473,  8473,  8473,  8044,  6933,   221,  9727,  9749,
    8077,  1410,  8110,  8473,  9133,  1736,  1742,  1743,  8506,  8506,
    8506,   605,  6977,   221,  9727,  9749,   661,  1420,   687,  8506,
    9166, 10354, 10362, 10398, 10406,  8539,  8539,  8539,  8539,  8539,
    9199,  9232,  9265,  8143,  8473,  1757,  1760,  1297,   645,  8176,
    9298,  8209,  1746,  1765,  1766,   689,  8473,  1773,  1783,  1302,
     682,   704,  1768,   706,  2382,  2520,  2598,  2708,  2938,  8506,
    9837,  9837,  9133,  9837,  8473,  8506,  9837,  9837,  9166,  9837,
    8506,  8539,  1769,  1770,  1771,  8242,  1772,  9331,  1787,  1788,
    1789,   716,  1790,  1791,  2982,  9133,  9133,  9133,  9133,  9133,
    9166,  9166,  9166,  9166,  9166,  8275,  8308,  8341,  8374,  8407,
     760,   800,   813,   844,   848,  9133,  9166,  8440,   856
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -367,  -367,  -367,  -268,     6,  -232,   -32,    13,  1366,    -5,
     -31,     3,   -37,  -173,   135,  4653,   411,  1035,  1733,   220,
    4965,  4573,  4181,  3655,  3043,  2431,  -366,  5010,  5114,    -7,
    5273
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    95,   238,    97,    18,    39,   240,    10,
      19,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   119,    55,    56,    57,
      58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    13,   360,    11,   515,    78,     7,    76,   204,    11,
      -2,    12,     7,     8,   -20,   296,   146,   447,   114,     8,
      14,   -17,    -5,   -18,   284,   -17,   547,   -18,    -5,    99,
     -39,   -39,   -30,   434,   435,   436,     1,    -3,   -30,   559,
     -20,   462,    -8,   -21,   485,   486,   487,    -4,    -8,   -17,
     -19,   -18,   -49,   448,     2,     3,     4,   588,   -20,   -20,
     -20,    62,   106,    -3,   -24,    96,   135,   599,   -49,   -21,
     241,   -82,    98,    -4,   -49,   -25,   -19,   463,   -11,   -49,
     239,    -3,    -3,    -3,   -32,   -83,   627,   -21,   -21,   -21,
     -24,    -4,    -4,    -4,   -19,   -19,   -19,   -82,   -32,   307,
     -11,   -25,   -11,    82,    83,    84,   202,   -11,   -24,   -24,
     -24,   -83,   -56,   -56,   -56,   -82,   -82,   -82,   657,   -25,
     -25,   -25,   -17,   -17,   454,    65,   -53,   -53,   -53,   -83,
     -83,   -83,   324,    63,   203,   -41,   -41,   -18,   357,   -49,
     150,   468,   -39,    64,   -49,   -53,    66,    98,   -56,   -17,
     -47,   -17,   -15,   -56,   437,   -17,   438,   -39,   439,   -16,
     357,   -53,   -56,   -56,   -56,   -18,   -47,   -53,   -54,   -54,
     -54,    73,   -47,    75,   497,   -76,   -76,   -76,   -18,    67,
     -15,   -56,    68,   -76,   -76,   -76,   -76,   -16,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -56,   -76,   166,
     131,   -76,   202,   -56,   -54,   -18,   132,   112,   404,   -54,
      69,   -18,   -76,   -15,   -76,   -76,   -76,   -76,   -76,    70,
     -52,   -53,   -53,   -53,   225,   226,   227,    71,   -55,   -55,
     -55,   402,   228,   229,   230,   231,   -52,   232,   233,   -41,
     -15,   303,   -52,   234,   235,   236,   -15,     1,   285,    85,
     -22,    86,     1,    87,   -41,   -22,   195,   -53,   371,   372,
     373,   237,   -53,   -16,   -55,     2,     3,     4,   -40,   -55,
       2,     3,     4,    72,   320,   -39,   -39,   -39,   -39,   -39,
     353,   -34,   -42,   -40,   -39,   -15,   104,   107,   108,   -15,
     -16,    96,   113,   -49,   -39,   -34,   -16,   -42,    98,   -49,
     116,   118,   353,   -39,   -39,   -39,   -39,   -39,   136,   -39,
     -39,   105,   130,   -15,   -43,    96,   -39,   -58,   -58,   -58,
     -70,   -66,    98,    78,   406,   407,   408,   369,    -9,   -43,
     767,   -40,   -40,    -7,    -9,   392,   -58,   -58,   -58,   -58,
     -54,   -54,   -54,   -49,   137,   -58,   -16,   -58,   778,   -58,
     -16,   138,   -58,   -42,   -42,    59,   391,   -22,   -58,   -54,
     155,   156,   -22,   786,   -44,   -58,   158,   -58,   159,   -58,
     -45,   -46,   401,   -58,   -16,   -54,    16,   140,   -58,   -44,
      -8,   -54,   -78,   -78,   -78,   -45,   -46,   149,   831,   -12,
     -78,   -78,   -78,   -78,   422,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,    17,   -78,   173,   141,   -78,   142,
     432,   -12,   195,   -12,   -59,   -59,   -59,    78,   -12,   -78,
     361,   -78,   -78,   -78,   -78,   -78,   879,   451,   -55,   -55,
     -55,    78,   143,   -59,    16,   -43,   -43,   459,    -8,   133,
     -76,   195,   -59,    60,   -59,   134,   -59,   -55,    61,   -59,
     629,   -56,   -56,   -56,   473,   -59,   -14,   195,   241,   -13,
      78,   362,   403,   -55,   641,   -56,   -56,   -56,   239,   -55,
     -35,   145,   241,   483,   -54,   -54,   -54,   284,   -14,   195,
     -14,   -13,   239,   -13,   -35,   -14,   -56,   502,   -13,   -56,
     -56,   -56,   -56,   680,    79,   195,   -38,   -73,   144,    80,
     -56,   241,   160,   -73,   445,   -32,   -32,   -32,   -56,   -54,
     -38,   239,   195,   -32,   -32,   -32,   -32,   139,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   161,   -32,   -32,
     162,   -32,   -41,   -41,   -41,   -41,   -41,   -55,   -55,   -55,
     163,   -41,   -32,   -51,   -32,   -32,   -32,   -32,   -32,   147,
     154,   -41,   -54,   -54,   -54,   148,   157,   -36,   195,   -51,
     -41,   -41,   -41,   -41,   -41,   -51,   -41,   -41,   164,   -50,
     165,   -36,   -55,   -41,   168,   169,   170,   171,   172,   -40,
     -40,   -40,   -40,   -40,   174,   -50,   -37,   -54,   -40,    -6,
     118,   -50,   632,   -54,   167,    -6,   423,   -70,   -40,   -48,
     -37,   536,   735,   -55,   -55,   -55,   644,   -40,   -40,   -40,
     -40,   -40,   118,   -40,   -40,   -48,   363,   856,   -30,   366,
     -40,   -48,   307,   743,   -30,   118,   -53,   -53,   -53,   -54,
     -54,   -54,   -82,   759,   307,   683,   580,   872,   -55,   -30,
     -55,   -55,   -55,   118,   -55,   -30,   -82,   364,   -54,   -30,
     -58,   -58,   -58,   118,   488,   -30,   489,   695,   490,   -55,
     365,   -53,   -44,   -44,   620,   -42,   -42,   -42,   -42,   -42,
     923,   367,   118,   307,   -42,   630,   631,   633,   -58,   368,
     -58,   -10,   -58,   383,   -42,   -58,   -30,   -10,   -84,   642,
     643,   645,   -30,   -42,   -42,   -42,   -42,   -42,   -30,   -42,
     -42,   713,   -84,   -30,   118,   384,   -42,   929,   -66,   -66,
     -66,   -66,   -66,   385,   -33,   678,   -83,    92,   681,   682,
     684,   -47,   386,   -30,   324,   387,   -47,   801,   -33,   -30,
     -83,   -85,   324,   930,   388,   821,   -66,   -66,   -66,   -66,
     -66,   728,   195,   953,   -66,   -85,   -62,   -78,   324,   -66,
     -74,   357,    20,    21,    22,   389,   -74,   -76,   -45,   -45,
      23,    24,    25,    26,   303,    27,    28,   175,    29,    30,
      31,    32,    33,    34,   390,   176,   303,   393,    35,   -43,
     -43,   -43,   -43,   -43,   -30,   394,   195,   -79,   -43,    36,
     -30,    37,    38,   177,   178,   179,   -46,   -46,   -43,   753,
     396,   -79,   -39,   -39,   -39,   -39,   -39,   -43,   -43,   -43,
     -43,   -43,   -47,   -43,   -43,   303,   513,   395,   -47,    78,
     -43,   -39,   284,   -60,   -60,   -60,   195,   -80,   397,   398,
     -39,   -39,   -39,   -39,   -39,    78,   -39,   -39,   545,   399,
     -81,   -80,   -60,   -39,   284,   307,   307,   307,   400,   297,
     -47,   -60,   894,   -60,   -81,   -60,   307,   801,   -60,   556,
     241,   324,   324,   324,   -60,   284,   320,   417,   906,   796,
     239,   -75,   324,   821,   320,   966,   241,   816,   357,   357,
     357,   357,   357,   -77,   195,   -75,   239,   307,   586,   -78,
     320,   205,   418,   353,   284,    93,   -66,   -77,   285,   307,
     -23,   -59,   -59,   -59,   419,   -23,   420,   205,   421,   206,
     207,   208,   324,   309,    -7,   801,   118,   307,   324,   424,
      -7,   821,    94,   324,   357,   206,   207,   208,   425,   -59,
     861,   -59,   115,   -59,   118,   427,   -59,    80,   801,   801,
     801,   801,   801,   821,   821,   821,   821,   821,   597,   118,
     877,   -31,   788,   789,   284,   803,   426,   -31,   801,   821,
     808,   809,   -11,   823,   -11,   -61,   -61,   -61,   -12,   -11,
     -12,   -11,   -11,   429,   118,   -12,   833,   834,   -11,   836,
     428,   430,   431,   455,   -61,   -12,   -12,   303,   303,   303,
     621,   449,   -12,   -61,   897,   -61,   132,   -61,   303,   796,
     -61,    93,   450,   320,   320,   320,   -61,   -59,   -59,   -59,
     909,   -31,   456,   205,   320,   816,   -31,   -60,   -60,   -60,
     353,   353,   353,   353,   353,   457,   464,   478,   446,   303,
     622,   206,   207,   208,   465,   -59,   134,   -59,   466,   -59,
     731,   303,   469,   -59,   -14,   -60,   -14,   -60,   -59,   -60,
     625,   -14,   739,   -60,   320,   635,   284,   796,   -60,   303,
     320,   132,   -13,   816,   -13,   320,   353,   -14,   -14,   -13,
     636,   193,   -62,   470,   -14,   -32,   134,   895,   896,   898,
     796,   796,   796,   796,   796,   816,   816,   816,   816,   816,
     655,   755,   471,   907,   908,   910,   284,   222,   222,   222,
     796,   816,   242,   242,   260,   260,   260,   276,   -13,   -13,
     -34,   -35,   -38,   -36,   -37,   -13,   193,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   479,   692,   -70,
     -70,   -70,   -70,   -70,   148,   475,   476,   508,   -70,   -52,
     933,   934,   787,   936,   -52,   798,   939,   940,   -70,   942,
     807,   477,   480,   818,   481,   509,   -52,   -70,   -70,   -70,
     -70,   -70,   -52,   433,   -70,   482,   832,   -47,   -51,   835,
     -70,   260,   260,   260,   -51,   339,   339,   -34,   -34,   -34,
     498,   339,   540,   193,   -51,   -34,   -34,   -34,   -34,   -51,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   499,
     -34,   -34,   500,   -34,   -44,   -44,   -44,   -44,   -44,   -50,
     541,   551,   581,   -44,   -34,   -50,   -34,   -34,   -34,   -34,
     -34,   -50,   -48,   -44,   552,   592,   -50,   193,   -48,   -53,
     -53,   -53,   -44,   -44,   -44,   -44,   -44,   582,   -44,   -44,
     703,   -61,   -61,   -61,   710,   -44,   148,   718,   -53,   725,
     148,   593,   730,   148,   734,   148,   193,   409,   148,   410,
     284,   411,   742,   890,   891,   892,   623,   -82,   284,   -61,
     750,   -61,   193,   -61,   900,   901,   148,   -61,   -84,   902,
     903,   904,   -61,   758,   -39,   -39,   -39,   -39,   -39,   284,
     912,   913,   624,   -39,   193,   765,   914,   915,   916,   917,
     918,   284,   776,   784,   -33,   919,   -48,   650,   284,   284,
     193,   -48,   -39,   -39,   -39,   -39,   -39,   925,   -39,   193,
     -39,   651,   829,   840,   686,   -39,   847,   193,   284,   148,
     932,   851,   148,   935,   884,   937,   938,   148,   922,   941,
     148,   943,   944,   928,   284,   687,   688,   689,   690,   284,
     -41,   -41,   -41,   -41,   -41,   691,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,     9,   693,   694,   -41,
     382,   697,     9,   193,   698,    61,   967,   968,   -41,   -41,
     -41,   -41,   -41,   460,   -41,   -41,   699,   474,    80,   503,
     557,   -41,    80,   700,    80,    61,   222,   222,   222,   634,
     701,   260,   260,   260,    80,   193,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   193,   646,   222,   222,
     222,   685,    80,   260,   260,   260,    80,   193,   222,   222,
     222,   862,   878,   260,   260,   260,    80,    80,   702,   -71,
     193,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   242,   899,   704,   260,   260,   260,    80,   193,   222,
     222,   222,   911,   705,   260,   260,   260,    80,   193,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   276,
     706,   707,   708,   709,   711,   712,   -52,   193,   -51,   -50,
     242,   242,   276,   -48,   715,   716,   763,   717,   -71,   222,
     222,   222,   719,   720,   242,   242,   276,   721,   722,   726,
     222,   222,   222,   723,   724,   260,   260,   260,   727,   193,
     665,   665,   665,   665,   665,   665,   665,   665,   665,   665,
     339,   732,   733,   242,   242,   276,   736,   737,   738,   -83,
     740,   741,   -53,   -53,   -53,   -35,   -35,   -35,   744,   -85,
     745,   746,   751,   -35,   -35,   -35,   -35,   193,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   752,   -35,   -35,
     374,   -35,   375,   747,   376,   748,   749,   -53,   -52,   756,
     -51,   -50,   -35,   -53,   -35,   -35,   -35,   -35,   -35,   -38,
     -38,   -38,   -48,   757,   764,   -69,   -68,   -38,   -38,   -38,
     -38,   193,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   774,   -38,   -38,   -67,   -38,   -72,   775,   782,   -69,
     -68,   -67,   -72,   783,   827,   837,   -38,   828,   -38,   -38,
     -38,   -38,   -38,   838,   -36,   -36,   -36,   839,   841,   842,
     843,   193,   -36,   -36,   -36,   -36,   844,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   845,   -36,   -36,   846,
     -36,   848,   -57,   -57,   -57,   412,   413,   849,   850,   852,
     853,   -36,   857,   -36,   -36,   -36,   -36,   -36,   854,   858,
     859,   -57,   864,   865,   866,   867,   868,   -37,   -37,   -37,
     -57,   414,   -57,   415,   -57,   -37,   -37,   -37,   -37,   193,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   869,
     -37,   -37,   870,   -37,   873,   874,   -45,   -45,   -45,   -45,
     -45,   260,   260,   260,   -37,   -45,   -37,   -37,   -37,   -37,
     -37,   193,   260,   260,   260,   -45,   875,     0,   880,   260,
     260,   260,   881,   882,   -45,   -45,   -45,   -45,   -45,   193,
     -45,   -45,   883,   885,   260,   260,   260,   -45,   -58,   -58,
     -58,   886,   887,   889,   193,   -63,   -64,   339,   339,   194,
     339,   260,   260,   260,   -65,   339,   339,   -63,   339,   260,
     260,   260,   920,   -64,   -65,   921,   -58,   -79,   -58,   193,
     -58,   339,   339,   -58,   339,   223,   223,   223,   926,   -58,
     243,   243,   261,   261,   261,   277,   -80,   -81,   927,   -75,
     945,   946,   947,   949,   194,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   -82,   -82,   -82,   950,   951,
     952,   954,   -77,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
       0,   -82,     0,     0,   -41,   -41,   -41,   -41,   -41,   -58,
     -58,   -58,   -82,   -41,   -82,   -82,   -82,   -82,   -82,   261,
     261,   261,     0,   340,   340,     0,     0,     0,   -58,   340,
       0,   194,   -41,   -41,   -41,   -41,   -41,   -58,   -41,   -58,
     -41,   -58,   242,   242,   276,   -41,     0,     0,     0,     0,
     -59,   -59,   -59,   -84,   -84,   -84,     0,     0,   242,   242,
     276,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   194,   -84,   -84,   -59,   -84,
     -59,     0,   -59,     0,     0,   -59,     0,     0,     0,     0,
     -84,   -59,   -84,   -84,   -84,   -84,   -84,     0,   -46,   -46,
     -46,   -46,   -46,     0,   194,   339,   339,   -46,   339,     0,
       0,   339,   339,     0,   339,     0,     0,   -46,     0,     0,
     194,   -40,   -40,   -40,   -40,   -40,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,     0,     0,     0,     0,     0,   -46,
     -40,     0,   194,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,     0,   194,     0,
       0,     0,   -40,   -33,   -33,   -33,     0,   194,     0,     0,
       0,   -33,   -33,   -33,   -33,   194,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -60,   -60,   -60,     0,     0,     0,   -59,   -59,   -59,     0,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,   -59,   -40,     0,   -60,     0,
     -60,   194,   -60,     0,   -59,   -60,   -59,     0,   -59,     0,
       0,   -60,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
       0,   -40,     0,   -40,   223,   223,   223,     0,   -40,   261,
     261,   261,     0,   194,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   194,     0,   223,   223,   223,     0,
       0,   261,   261,   261,     0,   194,   223,   223,   223,     0,
       0,   261,   261,   261,     0,     0,     0,     0,   194,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   243,
       0,     0,   261,   261,   261,     0,   194,   223,   223,   223,
       0,     0,   261,   261,   261,     0,   194,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   277,     0,     0,
       0,     0,     0,     0,     0,   194,     0,     0,   243,   243,
     277,     0,     0,     0,     0,     0,     0,   223,   223,   223,
       0,     0,   243,   243,   277,     0,     0,     0,   223,   223,
     223,     0,     0,   261,   261,   261,     0,   194,   666,   666,
     666,   666,   666,   666,   666,   666,   666,   666,   340,     0,
       0,   243,   243,   277,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -83,   -83,   -83,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   194,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -61,   -83,
     -61,     0,   -61,     0,     0,   -61,     0,     0,     0,     0,
     -83,   -61,   -83,   -83,   -83,   -83,   -83,   -85,   -85,   -85,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   194,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,     0,   -85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -85,     0,   -85,   -85,   -85,   -85,
     -85,     0,   -76,   -76,   -76,     0,     0,     0,     0,   194,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   888,     0,   -76,     0,
     -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,   -76,
       0,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,   -62,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -62,   -62,
     -62,   -62,   -62,   -79,   -79,   -79,   -79,   194,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,
       0,   -79,     0,     0,   -42,   -42,   -42,   -42,   -42,   261,
     261,   261,   -79,   -42,   -79,   -79,   -79,   -79,   -79,   194,
     261,   261,   261,     0,     0,     0,     0,   261,   261,   261,
       0,     0,   -42,   -42,   -42,   -42,   -42,   194,   -42,     0,
     -42,     0,   261,   261,   261,   -42,   -60,   -60,   -60,     0,
       0,     0,   194,     0,     0,   340,   340,   201,   340,   261,
     261,   261,     0,   340,   340,     0,   340,   261,   261,   261,
       0,     0,     0,     0,   -60,     0,   -60,   194,   -60,   340,
     340,   -60,   340,   101,   101,   101,     0,     0,   249,   249,
     262,   262,   262,   283,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   -80,   -80,   -80,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,     0,   -80,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -60,   -60,   -60,
     -80,   -43,   -80,   -80,   -80,   -80,   -80,   262,   262,   262,
       0,   346,   346,     0,     0,     0,   -60,   346,     0,   201,
     -43,   -43,   -43,   -43,   -43,   -60,   -43,   -60,   -43,   -60,
     243,   243,   277,   -43,     0,     0,     0,     0,   -61,   -61,
     -61,   -81,   -81,   -81,     0,     0,   243,   243,   277,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   201,   -81,   -81,   -61,   -81,   -61,     0,
     -61,     0,     0,   -61,     0,     0,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,     0,   -70,   -70,   -70,   -70,
     -70,     0,   201,   340,   340,   -70,   340,     0,     0,   340,
     340,     0,   340,   -44,   -44,   -44,   -44,   -44,   201,     0,
       0,     0,   -44,     0,   -70,   -70,   -70,   -70,   -70,     0,
      81,     0,   -70,     0,     0,     0,     0,   -70,     0,     0,
     201,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,   -44,
       0,     0,     0,     0,   -44,     0,   201,     0,     0,     0,
       0,   -75,   -75,   -75,     0,   201,     0,     0,     0,   -75,
     -75,   -75,   -75,   201,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,   -75,   -75,     0,   -75,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,     0,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,   -45,     0,     0,     0,     0,   201,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
       0,   -45,   101,   101,   101,     0,   -45,   262,   262,   262,
       0,   201,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   201,     0,   101,   101,   101,     0,     0,   262,
     262,   262,     0,   201,   101,   101,   101,     0,     0,   262,
     262,   262,     0,     0,     0,     0,   201,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   570,   249,     0,     0,
     262,   262,   262,     0,   201,   101,   101,   101,     0,     0,
     262,   262,   262,     0,   201,   610,   610,   610,   610,   610,
     610,   610,   610,   610,   610,   283,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,   249,   249,   283,     0,
       0,     0,     0,     0,     0,   101,   101,   101,     0,     0,
     249,   249,   283,     0,     0,     0,   101,   101,   101,     0,
       0,   262,   262,   262,     0,   201,   668,   668,   668,   668,
     668,   668,   668,   668,   668,   668,   346,     0,     0,   249,
     249,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -78,   -78,   -78,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   201,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,   931,     0,   -78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -77,   -77,   -77,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   201,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,   -77,
       0,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,
     -32,   -32,   -32,     0,     0,     0,     0,   201,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,     0,     0,   -32,   -46,   -46,   -46,
     -46,   -46,     0,   250,   251,   252,   -46,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   253,     0,   254,   255,     0,   200,
       0,     0,   256,   257,   258,   -46,   -46,   -46,   -46,   -46,
       0,   -46,     0,   -46,     0,   201,     0,     0,   -46,     0,
     259,     0,     0,     0,     0,   224,   224,   224,     0,     0,
     248,   248,   109,   110,   111,   282,     0,   262,   262,   262,
       0,     0,     0,     0,   200,     0,    93,   201,   262,   262,
     262,     0,     0,     0,     0,   262,   262,   262,   205,     0,
       0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
     262,   262,   262,   461,     0,     0,   206,   207,   208,     0,
     201,     0,     0,   346,   346,     0,   346,   262,   262,   262,
       0,   346,   346,     0,   346,   262,   262,   262,     0,   313,
     313,   313,     0,   345,   345,   201,     0,   346,   346,   345,
     346,   200,     0,     0,     0,     0,     0,   -26,   -26,   -26,
       0,     0,     0,     0,     0,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,     0,     0,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -26,   200,   -26,   -26,   -26,   -26,
     -26,     0,   -28,   -28,   -28,     0,     0,     0,     0,     0,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   200,   -28,     0,     0,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     200,   -28,   -28,   -28,   -28,   -28,     0,     0,   249,   249,
     283,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,     0,   200,     0,   249,   249,   283,     0,   -41,   -41,
     -41,   -41,   -41,     0,     0,     0,     0,   -41,   200,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   200,     0,     0,
       0,     0,   -39,     0,     0,   200,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -40,   -40,   -40,   -40,   -40,   -41,
       0,   346,   346,   -40,   346,     0,     0,   346,   346,     0,
     346,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
     -42,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
       0,   200,     0,     0,     0,   -40,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,     0,   224,   224,   224,     0,     0,   510,
     511,   512,     0,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,     0,   224,   224,   224,     0,
       0,   542,   543,   544,     0,   200,   224,   224,   224,     0,
       0,   553,   554,   555,     0,     0,     0,     0,   200,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
       0,     0,   583,   584,   585,     0,   200,   224,   224,   224,
       0,     0,   594,   595,   596,     0,   200,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,     0,     0,
       0,     0,     0,     0,     0,   200,     0,     0,   248,   248,
     282,     0,     0,     0,     0,     0,     0,   224,   224,   224,
       0,     0,   248,   248,   282,     0,     0,     0,   224,   224,
     224,     0,     0,   652,   653,   654,     0,   200,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,     0,
       0,   248,   248,   282,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,     0,     0,     0,     0,
       0,    23,    24,    25,    26,   200,    27,    28,   175,    77,
      30,    31,    32,    33,    34,     0,   176,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,    37,    38,   177,   178,   179,   -34,   -34,   -34,
       0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,   200,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,     0,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,   -27,   -27,   -27,     0,     0,     0,     0,   200,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,     0,   -27,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,   -43,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
       0,   199,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,     0,     0,   200,     0,     0,
     -43,     0,     0,     0,     0,     0,     0,   100,   102,   103,
       0,     0,   247,   247,   180,   181,   182,   281,     0,   313,
     313,   313,   183,   184,   185,   186,   199,   187,   188,   200,
     313,   313,   313,   189,   190,   191,     0,   313,   313,   313,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,   192,   313,   313,   313,     0,     0,     0,     0,     0,
       0,     0,   200,     0,     0,   345,   345,     0,   345,   313,
     313,   313,     0,   345,   345,     0,   345,   313,   313,   313,
       0,   151,   152,   153,     0,   344,   344,   200,     0,   345,
     345,   344,   345,   199,     0,     0,     0,     0,     0,   -35,
     -35,   -35,     0,     0,     0,     0,     0,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   199,   -35,   -35,
     -35,   -35,   -35,     0,   -38,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   199,   -38,     0,     0,
     -38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,   199,   -38,   -38,   -38,   -38,   -38,     0,     0,
     248,   248,   282,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,   -70,     0,   199,     0,   248,   248,   282,     0,
       0,     0,     0,     0,     0,     0,   -61,   -61,   -61,     0,
     199,   -70,   -70,   -70,   -70,   -70,     0,   370,   -70,   199,
       0,     0,     0,     0,   -70,   -61,     0,   199,   -66,   -66,
     -66,   -66,   -66,     0,   -61,     0,   -61,   444,   -61,     0,
       0,     0,     0,   345,   345,     0,   345,   -66,     0,   345,
     345,     0,   345,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -66,     0,     0,   180,   181,   182,   -66,
       0,     0,     0,   199,   183,   184,   185,   186,     0,   187,
     188,     0,     0,     0,     0,   189,   190,   191,     0,     0,
       0,     0,     0,     0,     0,     0,   505,   506,   507,     0,
       0,     0,     0,   192,   117,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,     0,   537,   538,
     539,     0,     0,     0,     0,     0,     0,   199,   548,   549,
     550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     199,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,     0,   -71,   -71,   -71,   -71,   -71,   199,   589,
     590,   591,   -71,     0,     0,     0,     0,     0,   199,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
       0,   -71,   -71,   -71,   -71,   -71,     0,   199,     0,   -71,
     247,   247,   281,     0,   -71,     0,     0,     0,     0,   637,
     638,   639,     0,     0,   247,   247,   281,     0,     0,     0,
     647,   648,   649,     0,     0,     0,     0,     0,     0,   199,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,     0,     0,   247,   247,   281,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   199,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,
       0,   -36,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,
       0,     0,   -36,   -44,   -36,   -36,   -36,   -36,   -36,   -45,
     -45,   -45,   -45,   -45,     0,     0,     0,   198,   -45,     0,
       0,   199,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
       0,     0,     0,     0,     0,   -44,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,     0,     0,     0,   246,   246,
     -45,     0,     0,   280,     0,     0,     0,     0,     0,     0,
       0,   199,   198,     0,     0,   -37,   -37,   -37,     0,   126,
     127,   128,   129,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
       0,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   199,
       0,   343,   343,     0,     0,     0,     0,   343,     0,   198,
       0,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,   760,   761,   762,     0,   -46,     0,     0,     0,     0,
       0,   199,   768,   769,   770,     0,     0,     0,     0,   771,
     772,   773,     0,     0,   -46,   -46,   -46,   -46,   -46,   199,
     -46,   -46,     0,   198,   779,   780,   781,   -46,     0,     0,
       0,     0,     0,     0,   199,     0,     0,   344,   344,     0,
     344,   804,   805,   806,     0,   344,   344,     0,   344,   824,
     825,   826,   198,     0,   -71,   -71,   -71,   -71,   -71,   199,
       0,   344,   344,   -71,   344,     0,     0,     0,   198,     0,
       0,     0,     0,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,
     198,     0,     0,     0,     0,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,   -84,   -84,   -84,     0,   198,     0,     0,     0,   -84,
     -84,   -84,   -84,   198,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,     0,     0,   -84,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -84,     0,
     -84,   -84,   -84,   -84,   -84,     0,   -43,   -43,   -43,   -43,
     -43,   -42,   247,   247,   281,     0,     0,     0,     0,   198,
     -42,   -42,   -42,   -42,   -42,   -43,   -42,   -42,   247,   247,
     281,     0,     0,   -42,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,     0,     0,     0,     0,     0,   -43,     0,     0,
       0,   198,   198,   198,   198,   198,   198,   198,   532,   533,
     534,   535,   198,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,     0,   344,   344,     0,   344,     0,
       0,   344,   344,     0,   344,     0,   198,   246,   246,   246,
     246,   246,   246,   576,   577,   578,   579,   246,   -72,   -72,
     -72,   -72,   -72,     0,   198,     0,     0,   -72,     0,   197,
       0,     0,     0,     0,   198,   280,   280,   280,   280,   280,
     280,   616,   617,   618,   619,   280,   -72,   -72,   -72,   -72,
     -72,     0,     0,   198,   -72,     0,   246,   246,   280,   -72,
     245,   245,     0,     0,     0,   279,     0,     0,     0,     0,
     246,   246,   280,     0,   197,     0,     0,     0,   123,   124,
     125,     0,     0,     0,     0,   198,   343,   343,   343,   343,
     343,   343,   674,   675,   676,   677,   343,     0,     0,   246,
     246,   280,     0,     0,     0,   209,   210,   211,     0,     0,
       0,     0,     0,   212,   213,   214,   215,     0,   216,   217,
       0,     0,     0,   198,   218,   219,   220,     0,     0,     0,
       0,     0,     0,   342,   342,   -29,   -29,   -29,     0,   342,
       0,   197,   221,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,
       0,   -29,     0,     0,     0,     0,     0,   198,     0,     0,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   304,
     -33,   -33,   -33,     0,     0,   197,     0,     0,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,   -33,   198,     0,     0,
       0,     0,   321,     0,   197,     0,     0,   -33,   354,   -33,
     -33,   -33,   -33,   -33,     0,   -70,   -70,   -70,   -70,   -70,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     354,     0,     0,     0,   -70,     0,     0,     0,     0,     0,
       0,     0,   197,   -70,   -70,   -70,   -70,   -70,     0,   729,
     -70,     0,     0,     0,     0,   198,   -70,     0,   197,     0,
     -72,   -72,   -72,   -72,   -72,     0,     0,   197,     0,   -72,
       0,     0,     0,     0,     0,   197,     0,     0,     0,   -72,
       0,   -44,   -44,   -44,   -44,   -44,     0,   198,   -72,   -72,
     -72,   -72,   -72,     0,     0,   -72,     0,     0,     0,     0,
     -44,   -72,     0,     0,     0,   198,     0,     0,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,     0,
     198,   197,   -44,   343,   343,     0,   343,     0,     0,     0,
       0,   343,   343,     0,   343,     0,     0,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,   198,   381,   343,   343,     0,
     343,     0,     0,   197,   197,   197,   197,   529,   530,   531,
       0,     0,     0,     0,   197,   -66,   -66,   -66,   -66,   -66,
       0,     0,   -66,     0,     0,   197,     0,     0,   -66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   245,
     245,   245,   573,   574,   575,     0,     0,     0,     0,   245,
     -39,   -39,   -39,   -39,   -39,     0,   197,     0,     0,     0,
       0,   196,     0,     0,     0,     0,   197,   279,   279,   279,
     613,   614,   615,     0,     0,     0,     0,   279,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   197,   -39,     0,   245,   245,
     279,   -39,   244,   244,     0,     0,     0,   278,   246,   246,
     280,     0,   245,   245,   279,     0,   196,   120,   121,   122,
       0,     0,     0,     0,   246,   246,   280,   197,   342,   342,
     342,   671,   672,   673,     0,     0,     0,     0,   342,     0,
       0,   245,   245,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,   197,     0,     0,     0,     0,
       0,   343,   343,     0,   343,   341,   341,   343,   343,   -45,
     343,   341,     0,   196,     0,     0,   305,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,     0,   -85,   -85,   -85,
       0,   -45,     0,     0,     0,   -85,   -85,   -85,   -85,   197,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   322,
     -85,     0,     0,   -85,     0,   355,     0,   196,     0,     0,
       0,     0,     0,     0,   -85,     0,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,   -79,   -79,   -79,   355,     0,   197,
       0,     0,   -79,   -79,   -79,   -79,   196,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,     0,     0,
     -79,     0,   196,     0,   -46,   -46,   -46,   -46,   -46,     0,
       0,   -79,     0,   -79,   -79,   -79,   -79,   -79,     0,     0,
     306,     0,     0,   -46,   196,     0,     0,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   197,   -46,   -46,
     196,     0,     0,     0,     0,   -46,     0,     0,     0,   196,
       0,     0,     0,   323,     0,     0,     0,   196,     0,   356,
     -57,   -57,   -57,   440,   441,     0,     0,     0,     0,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -57,
       0,   356,   304,     0,     0,     0,     0,   197,   -57,   442,
     -57,   443,   -57,     0,   304,   -57,     0,     0,     0,     0,
       0,   -57,   197,   196,     0,   342,   342,     0,   342,     0,
       0,     0,     0,   342,   342,     0,   342,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,     0,     0,   197,     0,   342,
     342,     0,   342,   304,     0,   196,   525,   527,   528,   -62,
       0,     0,     0,     0,     0,     0,   196,     0,   -62,   -62,
     -62,   -62,   -62,     0,     0,   -62,     0,   196,     0,     0,
       0,   -62,     0,     0,     0,     0,     0,     0,     0,     0,
     196,   569,   571,   572,   -57,   -57,   -57,    88,    89,   308,
       0,   244,     0,     0,   321,     0,     0,   797,   196,     0,
       0,     0,   321,     0,     0,   817,     0,     0,   196,   609,
     611,   612,   -57,    90,   -57,    91,   -57,     0,   321,   278,
     -57,   354,   325,     0,     0,   -57,     0,   196,   358,     0,
     244,   244,   278,     0,     0,   -41,   -41,   -41,   -41,   -41,
     245,   245,   279,     0,   244,   244,   278,     0,     0,     0,
     358,   -40,   -40,   -40,   -40,   -40,   245,   245,   279,   196,
     667,   669,   670,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     341,   -41,     0,   244,   244,   278,   -41,     0,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -40,     0,   -40,     0,     0,
       0,     0,   -40,     0,     0,     0,     0,   196,     0,     0,
       0,     0,     0,   342,   342,     0,   342,     0,     0,   342,
     342,     0,   342,     0,     0,   304,   304,   304,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   797,     0,     0,
       0,   321,   321,   321,   -42,   -42,   -42,   -42,   -42,     0,
       0,   196,   321,   817,     0,     0,     0,     0,   354,   354,
     354,   354,   354,     0,     0,     0,     0,   304,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   304,
     -42,     0,     0,     0,     0,   -42,     0,     0,     0,     0,
       0,   196,   321,     0,     0,   797,     0,   304,   321,     0,
       0,   817,     0,   321,   354,     0,     0,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,     0,   797,   797,
     797,   797,   797,   817,   817,   817,   817,   817,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,     0,   797,   817,
     -43,   -43,   -43,   -43,   -43,     0,   -43,     0,   -43,   196,
       0,     0,     0,   -43,     0,     0,     0,     0,     0,   305,
     -70,   -70,   -70,   -70,   -70,     0,   452,     0,   -70,     0,
       0,   305,     0,   -70,   -71,   -71,   -71,   -71,   -71,     0,
       0,   196,     0,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,
     305,     0,     0,     0,   196,   -71,     0,   341,   341,     0,
     341,     0,     0,     0,     0,   341,   341,     0,   341,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,   341,   341,     0,   341,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,   416,     0,     0,
       0,   322,     0,   306,   799,     0,     0,   -66,     0,   322,
       0,     0,   819,     0,     0,   306,   -66,   -66,   -66,   -66,
     -66,   -80,   -80,   -80,     0,   322,     0,     0,   355,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,     0,     0,   -80,     0,   -62,
     -62,   -62,   -62,   -62,   306,     0,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   244,   244,   278,   -62,     0,     0,     0,     0,
     -62,     0,     0,   -69,   -69,   -69,   -69,   -69,   244,   244,
     278,   -69,     0,     0,     0,   323,   -69,     0,   800,     0,
       0,     0,     0,   323,     0,     0,   820,     0,     0,     0,
       0,     0,   305,   305,   305,     0,     0,     0,     0,   323,
       0,     0,   356,   305,   799,     0,     0,     0,   322,   322,
     322,     0,     0,     0,     0,   341,   341,     0,   341,   322,
     819,   341,   341,     0,   341,   355,   355,   355,   355,   355,
       0,     0,   308,     0,   305,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   308,     0,   305,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,   -39,     0,     0,   322,
       0,     0,   799,     0,   305,   322,     0,     0,   819,     0,
     322,   355,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   308,     0,   799,   799,   799,   799,   799,
     819,   819,   819,   819,   819,     0,   306,   306,   306,     0,
       0,     0,     0,     0,     0,   799,   819,   306,   800,     0,
       0,     0,   323,   323,   323,     0,     0,     0,     0,     0,
       0,     0,     0,   323,   820,     0,     0,     0,     0,   356,
     356,   356,   356,   356,   325,     0,     0,   802,   306,     0,
       0,     0,   325,     0,     0,   822,     0,     0,     0,     0,
     306,   -41,   -41,   -41,   -41,   -41,     0,     0,   325,     0,
     -41,   358,     0,   323,     0,     0,   800,     0,   306,   323,
       0,     0,   820,     0,   323,   356,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,     0,     0,   800,
     800,   800,   800,   800,   820,   820,   820,   820,   820,     0,
       0,     0,     0,   -81,   -81,   -81,     0,     0,     0,   800,
     820,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,     0,     0,   -81,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -81,     0,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,   -66,     0,     0,   308,   308,   308,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   308,   802,   -66,     0,
       0,   325,   325,   325,   -66,     0,   -39,   -39,   -39,   -39,
     -39,     0,   325,   822,     0,     0,     0,     0,   358,   358,
     358,   358,   358,     0,     0,     0,     0,   308,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   308,
     -39,   -39,   -40,   -40,   -40,   -40,   -40,   -39,     0,     0,
       0,   -40,   325,     0,     0,   802,     0,   308,   325,     0,
       0,   822,     0,   325,   358,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   802,   802,
     802,   802,   802,   822,   822,   822,   822,   822,     0,     0,
       0,     0,   -75,   -75,   -75,     0,     0,     0,   802,   822,
     -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -75,     0,     0,   -75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -77,   -77,   -77,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
       0,     0,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,
      20,    21,    22,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,   175,   359,    30,    31,    32,
      33,    34,     0,   176,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    37,
      38,   177,   178,   179,   -24,   -24,   -24,     0,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,
     -24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,    20,    21,
      22,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,   175,   453,    30,    31,    32,    33,    34,
       0,   176,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,    37,    38,   177,
     178,   179,    20,    21,    22,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,    27,    28,   175,   467,    30,
      31,    32,    33,    34,     0,   176,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,   177,   178,   179,    20,    21,    22,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,   175,   496,    30,    31,    32,    33,    34,     0,   176,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    37,    38,   177,   178,   179,
     -82,   -82,   -82,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,     0,     0,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -82,     0,   -82,
     -82,   -82,   -82,   -82,    20,    21,    22,     0,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    27,    28,   175,
     504,    30,    31,    32,    33,    34,     0,   176,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,   177,   178,   179,   -25,   -25,
     -25,     0,     0,     0,     0,     0,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,     0,     0,   -25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,     0,   -25,   -25,   -25,
     -25,   -25,    20,    21,    22,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,    27,    28,   175,   628,    30,
      31,    32,    33,    34,     0,   176,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,   177,   178,   179,    20,    21,    22,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,   175,   640,    30,    31,    32,    33,    34,     0,   176,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    37,    38,   177,   178,   179,
      20,    21,    22,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,   175,   679,    30,    31,    32,
      33,    34,     0,   176,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    37,
      38,   177,   178,   179,   -83,   -83,   -83,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,     0,     0,
     -83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -83,     0,   -83,   -83,   -83,   -83,   -83,    20,    21,
      22,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,   175,   855,    30,    31,    32,    33,    34,
       0,   176,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,    37,    38,   177,
     178,   179,    20,    21,    22,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,    27,    28,   175,   871,    30,
      31,    32,    33,    34,     0,   176,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,   177,   178,   179,    20,    21,    22,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,   175,   893,    30,    31,    32,    33,    34,     0,   176,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    37,    38,   177,   178,   179,
      20,    21,    22,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,   175,   905,    30,    31,    32,
      33,    34,     0,   176,     0,     0,    35,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,    36,     0,    37,
      38,   177,   178,   179,   -40,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -42,   -42,   -42,   -42,   -42,   -41,     0,
       0,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -43,   -43,   -43,   -43,   -43,   -40,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -70,
     -70,   -70,   -70,   -70,   -42,     0,     0,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -44,   -44,   -44,   -44,
     -44,   -43,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,     0,   696,   -70,   -45,   -45,   -45,   -45,   -45,
     -70,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,     0,   -44,     0,     0,     0,     0,   -44,   -46,   -46,
     -46,   -46,   -46,   -45,   -45,   -45,   -45,   -45,     0,   -45,
       0,   -45,     0,     0,     0,     0,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,     0,   -46,     0,     0,     0,     0,   -46,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,   -72,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -69,     0,   -72,   -41,   -41,   -41,   -41,
     -41,   -72,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,
     -68,   -68,   -68,   -68,   -68,   -69,     0,     0,   -67,   -67,
     -67,   -67,   -67,     0,   -41,   -41,   -41,   -41,   -41,   -68,
     -41,   -41,   -44,   -44,   -44,   -44,   -44,   -67,   -68,   -68,
     -68,   -68,   -68,     0,     0,   -68,   -67,   -67,   -67,   -67,
     -67,   -68,     0,   -67,   -45,   -45,   -45,   -45,   -45,   -67,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -46,   -46,
     -46,   -46,   -46,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -40,   -40,   -40,   -40,   -40,   -45,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -71,   -71,   -71,   -71,   -71,   -46,
       0,     0,   -63,   -63,   -63,   -63,   -63,     0,   -40,   -40,
     -40,   -40,   -40,   -71,   -40,   -40,     0,     0,     0,     0,
       0,   -63,   -71,   -71,   -71,   -71,   -71,     0,     0,   -71,
     -63,   -63,   -63,   -63,   -63,   -71,     0,   -63,   -64,   -64,
     -64,   -64,   -64,   -63,     0,     0,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,     0,     0,   -65,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -64,   -65,   -65,   -65,   -65,   -65,   -64,
       0,   -65,   -72,   -72,   -72,   -72,   -72,   -65,     0,     0,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,   -72,     0,     0,   -67,   -67,   -67,   -67,   -67,     0,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -72,   -68,   -68,
     -68,   -68,   -68,   -72,     0,     0,   -68,     0,     0,     0,
       0,   -68,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
     -67,     0,     0,     0,     0,   -67,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,   -63,     0,     0,     0,     0,   -63,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -64,     0,     0,     0,
       0,   -64,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,   377,
     378,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,     0,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,     0,
       0,     0,     0,   -65,   -57,   379,   -57,   380,   -57,     0,
       0,   -57,   -62,   -62,   -62,   -62,   -62,   -57,     0,   -62,
     -66,   -66,   -66,   -66,   -66,   -62,     0,     0,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,     0,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -71,   -71,   -71,   -71,   -71,   -66,     0,     0,   -71,     0,
       0,     0,     0,   -71,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,
     -68,   -68,   -68,   -68,   -68,   -69,     0,   -68,   -67,   -67,
     -67,   -67,   -67,   -68,     0,   -67,   -72,   -72,   -72,   -72,
     -72,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,     0,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,   -72,     0,     0,     0,     0,   -72,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -71,   -63,   -63,   -63,   -63,
     -63,   -71,     0,   -63,   -64,   -64,   -64,   -64,   -64,   -63,
       0,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,     0,     0,   -64,
     -65,   -65,   -65,   -65,   -65,   -64,     0,   -65,   -72,   -72,
     -72,   -72,   -72,   -65,     0,   -72,   -32,   -32,   -32,     0,
       0,   -72,     0,     0,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,     0,
     -32,     0,   -32,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,     0,   -32,     0,   -32,   -32,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,     0,   -34,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,     0,   -34,     0,   -34,   -34,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,     0,     0,   863,     0,   -76,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,     0,   -76,
       0,   -76,   -76,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,   -35,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,     0,   -35,     0,   -35,   -35,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -38,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,   -38,     0,   -38,   -38,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,     0,   -36,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,     0,   -36,     0,
     -36,   -36,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,
     -37,     0,     0,     0,     0,     0,     0,   -82,   -82,   -82,
       0,   -37,     0,   -37,   -37,   -82,   -82,   -82,   -82,     0,
     -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,
       0,   -82,     0,   -82,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,     0,   -82,     0,   -82,   -82,   -84,   -84,
     -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,     0,     0,   -84,     0,   -84,     0,     0,     0,
       0,     0,     0,   -33,   -33,   -33,     0,   -84,     0,   -84,
     -84,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,     0,
     -33,     0,   -33,   -33,   -83,   -83,   -83,   -83,     0,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,     0,
     -83,     0,   -83,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,     0,   -83,     0,   -83,   -83,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,
     -85,     0,     0,   -85,     0,   -85,     0,     0,     0,     0,
       0,     0,   -78,   -78,   -78,     0,   -85,     0,   -85,   -85,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,     0,   -78,
     -78,   -78,   -78,   -78,     0,     0,   924,     0,   -78,     0,
       0,     0,     0,     0,     0,   -76,   -76,   -76,     0,   -78,
       0,   -78,   -78,   -76,   -76,   -76,   -76,     0,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,     0,     0,   948,
       0,   -76,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,     0,   -76,     0,   -76,   -76,   -79,   -79,   -79,   -79,
       0,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,
       0,     0,   -79,     0,   -79,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,     0,   -79,     0,   -79,   -79,   -80,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,     0,     0,   -80,     0,   -80,     0,     0,
       0,     0,     0,     0,   -81,   -81,   -81,     0,   -80,     0,
     -80,   -80,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,     0,     0,   -81,     0,
     -81,     0,     0,     0,     0,     0,     0,   -75,   -75,   -75,
       0,   -81,     0,   -81,   -81,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,     0,
       0,   -75,     0,   -75,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,     0,   -75,     0,   -75,   -75,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,     0,     0,   965,     0,   -78,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,     0,   -78,     0,   -78,
     -78,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,     0,     0,   -77,     0,   -77,
       0,     0,     0,     0,     0,     0,    20,    21,    22,     0,
     -77,     0,   -77,   -77,    23,    24,    25,    26,     0,    27,
      28,   297,     0,   298,   299,    32,    33,    34,     0,     0,
       0,     0,   300,     0,     0,     0,     0,     0,     0,    20,
      21,    22,     0,    36,     0,   301,   302,    23,    24,    25,
      26,     0,    27,    28,   314,     0,   315,   316,    32,    33,
      34,     0,     0,     0,     0,   317,     0,     0,     0,     0,
       0,     0,    20,    21,    22,     0,    36,     0,   318,   319,
      23,    24,    25,    26,     0,    27,    28,   347,     0,   348,
     349,    32,    33,    34,     0,     0,     0,     0,   350,     0,
       0,     0,     0,     0,     0,    20,    21,    22,     0,    36,
       0,   351,   352,    23,    24,    25,    26,     0,    27,    28,
     175,     0,    30,    31,    32,    33,    34,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,   -20,   -20,
     -20,     0,    36,     0,    37,    38,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,
       0,     0,     0,     0,   -20,     0,     0,     0,     0,     0,
       0,   -21,   -21,   -21,     0,   -20,     0,   -20,   -20,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,   -21,     0,     0,
       0,     0,     0,     0,   -32,   -32,   -32,     0,   -21,     0,
     -21,   -21,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
       0,   -32,     0,   -32,   -32,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,     0,   -34,     0,   -34,   -34,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,   -35,     0,     0,     0,
       0,     0,     0,   -38,   -38,   -38,     0,   -35,     0,   -35,
     -35,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,
       0,     0,     0,     0,     0,     0,   -36,   -36,   -36,     0,
     -38,     0,   -38,   -38,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,     0,     0,     0,     0,     0,     0,   -37,
     -37,   -37,     0,   -36,     0,   -36,   -36,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,   -37,     0,     0,     0,     0,
       0,     0,   -19,   -19,   -19,     0,   -37,     0,   -37,   -37,
     -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,   -19,     0,     0,     0,     0,   -19,     0,
       0,     0,     0,     0,     0,   -24,   -24,   -24,     0,   -19,
       0,   -19,   -19,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,
       0,   -24,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,     0,   -24,     0,   -24,   -24,   -82,   -82,   -82,   -82,
       0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,   -82,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,     0,   -82,     0,   -82,   -82,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,     0,     0,     0,   -84,     0,     0,
       0,     0,     0,     0,   -33,   -33,   -33,     0,   -84,     0,
     -84,   -84,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,
     -33,     0,     0,     0,     0,     0,     0,   -25,   -25,   -25,
       0,   -33,     0,   -33,   -33,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,   -25,     0,     0,     0,     0,     0,     0,
     -83,   -83,   -83,     0,   -25,     0,   -25,   -25,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,     0,   -83,   -83,   -83,
     -83,   -83,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,     0,     0,   -85,   -85,   -85,     0,   -83,     0,   -83,
     -83,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,     0,     0,     0,     0,   -85,
       0,     0,     0,     0,     0,     0,    20,    21,    22,     0,
     -85,     0,   -85,   -85,    23,    24,    25,    26,     0,    27,
      28,   790,     0,   791,   792,    32,    33,    34,     0,     0,
       0,     0,   793,     0,     0,     0,     0,     0,     0,    20,
      21,    22,     0,    36,     0,   794,   795,    23,    24,    25,
      26,     0,    27,    28,   810,     0,   811,   812,    32,    33,
      34,     0,     0,     0,     0,   813,     0,     0,     0,     0,
       0,     0,   -79,   -79,   -79,     0,    36,     0,   814,   815,
     -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,     0,   -79,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,     0,   -79,
       0,   -79,   -79,   -80,   -80,   -80,   -80,     0,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,   -80,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,     0,   -80,     0,   -80,   -80,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,
       0,     0,     0,     0,   -81,     0,     0,     0,     0,     0,
       0,   -75,   -75,   -75,     0,   -81,     0,   -81,   -81,   -75,
     -75,   -75,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,   -75,     0,     0,
       0,     0,     0,     0,   -77,   -77,   -77,     0,   -75,     0,
     -75,   -75,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
       0,   -77,   -77,   -77,   -77,   -77,    20,    21,    22,     0,
     -77,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,   -77,     0,   -77,   -77,    32,    33,    34,    20,    21,
      22,     0,     0,     0,     0,     0,    23,    24,    25,    26,
       0,    27,    28,    36,     0,    74,     0,    32,    33,    34,
      20,    21,    22,     0,     0,     0,     0,     0,    23,    24,
      25,    26,     0,    27,    28,    36,     0,   458,     0,    32,
      33,    34,    20,    21,    22,     0,     0,     0,     0,     0,
      23,    24,    25,    26,     0,    27,    28,    36,     0,   472,
       0,    32,    33,    34,    20,    21,    22,     0,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    27,    28,    36,
       0,   501,     0,    32,    33,    34,    20,    21,    22,     0,
       0,     0,     0,     0,    23,    24,    25,    26,     0,    27,
      28,    36,     0,   860,     0,    32,    33,    34,   180,   181,
     182,     0,     0,     0,     0,     0,   183,   184,   185,   186,
       0,   187,   188,    36,     0,   876,     0,   189,   190,   191,
     180,   181,   182,     0,     0,     0,     0,     0,   183,   184,
     185,   186,     0,   187,   188,   192,   514,     0,     0,   189,
     190,   191,   180,   181,   182,     0,     0,     0,     0,     0,
     183,   184,   185,   186,     0,   187,   188,   192,   546,     0,
       0,   189,   190,   191,   180,   181,   182,     0,     0,     0,
       0,     0,   183,   184,   185,   186,     0,   187,   188,   192,
     558,     0,     0,   189,   190,   191,   180,   181,   182,     0,
       0,     0,     0,     0,   183,   184,   185,   186,     0,   187,
     188,   192,   587,     0,     0,   189,   190,   191,   180,   181,
     182,     0,     0,     0,     0,     0,   183,   184,   185,   186,
       0,   187,   188,   192,   598,     0,     0,   189,   190,   191,
     180,   181,   182,     0,     0,     0,     0,     0,   183,   184,
     185,   186,     0,   187,   188,   192,   626,     0,     0,   189,
     190,   191,   180,   181,   182,     0,     0,     0,     0,     0,
     183,   184,   185,   186,     0,   187,   188,   192,   656,     0,
       0,   189,   190,   191,   180,   181,   182,     0,     0,     0,
       0,     0,   183,   184,   185,   186,     0,   187,   188,   192,
     766,     0,     0,   189,   190,   191,   180,   181,   182,     0,
       0,     0,     0,     0,   183,   184,   185,   186,     0,   187,
     188,   192,   777,     0,     0,   189,   190,   191,   180,   181,
     182,     0,     0,     0,     0,     0,   183,   184,   185,   186,
       0,   187,   188,   192,   785,     0,     0,   189,   190,   191,
     225,   226,   227,     0,     0,     0,     0,     0,   228,   229,
     230,   231,     0,   232,   233,   192,   830,     0,     0,   234,
     235,   236,   263,   264,   265,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   237,     0,     0,
       0,   272,   273,   274,    20,    21,    22,     0,     0,     0,
       0,     0,    23,    24,    25,    26,     0,    27,    28,   275,
       0,     0,     0,    32,    33,    34,   286,   287,   288,     0,
       0,     0,     0,     0,    23,    24,    25,   289,     0,   290,
     291,    36,     0,     0,     0,    32,    33,    34,   250,   251,
     252,     0,     0,     0,     0,     0,   310,   311,   312,   253,
       0,   254,   255,   292,     0,     0,     0,   256,   257,   258,
     326,   327,   328,     0,     0,     0,     0,     0,   329,   330,
     331,   332,     0,   333,   334,   259,     0,     0,     0,   335,
     336,   337,   516,   517,   518,     0,     0,     0,     0,     0,
     183,   184,   185,   519,     0,   520,   521,   338,     0,     0,
       0,   189,   190,   191,   560,   561,   562,     0,     0,     0,
       0,     0,   228,   229,   230,   563,     0,   564,   565,   522,
       0,     0,     0,   234,   235,   236,   600,   601,   602,     0,
       0,     0,     0,     0,   266,   267,   268,   603,     0,   604,
     605,   566,     0,     0,     0,   272,   273,   274,   658,   659,
     660,     0,     0,     0,     0,     0,   329,   330,   331,   661,
       0,   662,   663,   606,     0,     0,     0,   335,   336,   337,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,   -42,
     -43,   -43,   -43,   -43,   -43,   664,     0,     0,     0,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,     0,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -70,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,   -44,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,     0,
     484,   -70,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,   -45,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,   -46,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,     0,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,   495,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -71,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,     0,     0,   -66,     0,     0,   -71,   -71,   -71,   -71,
     -71,     0,     0,   -71,     0,     0,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,   -72,
       0,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -70,   -70,   -70,   -70,   -70,     0,   754,   -70,   -72,   -72,
     -72,   -72,   -72,     0,     0,   -72,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -57,   -57,
     -57,   491,   492,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,   -57,   493,   -57,   494,
     -57,     0,     0,   -57,   -62,   -62,   -62,   -62,   -62,     0,
       0,   -62,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -69,   -68,   -68,   -68,   -68,
     -68,     0,     0,   -68,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -67,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -63,   -63,
     -63,   -63,   -63,     0,     0,   -63,   -64,   -64,   -64,   -64,
     -64,     0,     0,   -64,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -72,   -39,   -39,
     -39,   -39,   -39,     0,     0,     0,     0,   -39,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -39,     0,     0,
       0,   -41,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
     -39,   -41,   -39,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,   -40,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -40,     0,     0,     0,
     -42,     0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -42,   -40,     0,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,   -43,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -43,     0,     0,     0,   -70,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -70,
     -43,     0,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,     0,   405,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,   -44,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -44,     0,     0,     0,   -45,     0,
       0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -45,   -44,
     -39,   -39,   -39,   -39,   -39,     0,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -46,   -46,   -46,   -46,   -46,   -39,
       0,     0,     0,   -46,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -46,   -39,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -40,
     -40,   -40,   -40,   -40,   -41,     0,   -42,   -42,   -42,   -42,
     -42,     0,     0,   -41,   -41,   -41,   -41,   -41,   -40,   -41,
     -43,   -43,   -43,   -43,   -43,   -42,     0,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -42,   -42,   -42,   -42,   -42,   -43,
     -42,   -70,   -70,   -70,   -70,   -70,     0,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -44,   -44,   -44,   -44,   -44,
     -70,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -44,   714,   -46,   -46,   -46,   -46,
     -46,   -45,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -45,   -45,   -45,   -45,   -45,   -46,   -45,     0,     0,     0,
       0,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,
     -71,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -71,     0,     0,     0,   -72,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -72,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,     0,   -69,
     -69,   -69,   -69,   -69,   -66,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -69,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,   -69,   -69,   -69,
     -69,   -69,     0,   -68,   -68,   -68,   -68,   -68,   -67,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,     0,   -63,   -63,   -63,   -63,   -63,   -71,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -63,   -65,   -65,   -65,   -65,   -65,   -64,     0,
       0,   -63,   -63,   -63,   -63,   -63,     0,   -64,   -64,   -64,
     -64,   -64,   -65,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72
};

static const yytype_int16 yycheck[] =
{
       7,     6,   175,     0,   370,    42,     0,    39,    39,     6,
       0,     0,     6,     0,     0,    14,    25,   285,    41,     6,
      18,    14,    41,    14,    47,    18,   392,    18,    47,    61,
      40,    41,    41,     6,     7,     8,    26,     0,    47,   405,
      26,   309,    41,     0,     6,     7,     8,     0,    47,    42,
       0,    42,    25,   285,    44,    45,    46,   423,    44,    45,
      46,    40,    67,    26,     0,    59,    98,   433,    41,    26,
      67,     0,    59,    26,    47,     0,    26,   309,    18,    41,
      67,    44,    45,    46,    27,     0,   452,    44,    45,    46,
      26,    44,    45,    46,    44,    45,    46,    26,    41,   106,
      40,    26,    42,     6,     7,     8,    14,    47,    44,    45,
      46,    26,     6,     7,     8,    44,    45,    46,   484,    44,
      45,    46,    14,    14,   297,    14,     6,     7,     8,    44,
      45,    46,   139,    40,    42,    40,    41,    14,   145,    42,
     134,   314,    25,    40,    47,    25,    14,   134,    42,    41,
      25,    42,    14,    47,    34,    47,    36,    40,    38,    14,
     167,    41,     6,     7,     8,    42,    41,    47,     6,     7,
       8,    36,    47,    38,   347,     3,     4,     5,    14,    40,
      42,    25,    40,    11,    12,    13,    14,    42,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    41,    26,    27,
      41,    29,    14,    47,    42,    41,    47,    72,   239,    47,
      40,    47,    40,    14,    42,    43,    44,    45,    46,    40,
      25,     6,     7,     8,     3,     4,     5,    40,     6,     7,
       8,   238,    11,    12,    13,    14,    41,    16,    17,    25,
      41,   106,    47,    22,    23,    24,    47,    26,    40,    34,
      42,    36,    26,    38,    40,    47,    36,    42,     6,     7,
       8,    40,    47,    14,    42,    44,    45,    46,    25,    47,
      44,    45,    46,    40,   139,     6,     7,     8,     9,    10,
     145,    27,    25,    40,    15,    14,    16,    67,    68,    18,
      41,   285,    72,    41,    25,    41,    47,    40,   285,    47,
      80,    81,   167,    34,    35,    36,    37,    38,    25,    40,
      41,    17,    92,    42,    25,   309,    47,     6,     7,     8,
      25,    25,   309,   360,     6,     7,     8,   192,    41,    40,
     696,    40,    41,    18,    47,    40,    25,     6,     7,     8,
       6,     7,     8,    25,    25,    34,    14,    36,   714,    38,
      18,    25,    41,    40,    41,    40,   221,    42,    47,    25,
     140,   141,    47,   729,    25,    34,   146,    36,   148,    38,
      25,    25,   237,    42,    42,    41,    14,    25,    47,    40,
      18,    47,     3,     4,     5,    40,    40,    14,   754,    18,
      11,    12,    13,    14,   259,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    42,    26,    27,    25,    29,    41,
     275,    40,   192,    42,     6,     7,     8,   454,    47,    40,
      40,    42,    43,    44,    45,    46,    27,   292,     6,     7,
       8,   468,    41,    25,    14,    40,    41,   302,    18,    41,
      41,   221,    34,    42,    36,    47,    38,    25,    47,    41,
     455,     6,     7,     8,   319,    47,    18,   237,   455,    18,
     497,    40,    42,    41,   469,     6,     7,     8,   455,    47,
      27,    41,   469,   338,     6,     7,     8,    47,    40,   259,
      42,    40,   469,    42,    41,    47,    41,   352,    47,     6,
       7,     8,    47,   498,    42,   275,    27,    41,    41,    47,
      41,   498,    41,    47,   284,     3,     4,     5,    25,    41,
      41,   498,   292,    11,    12,    13,    14,   106,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    41,    26,    27,
      41,    29,     6,     7,     8,     9,    10,     6,     7,     8,
      41,    15,    40,    25,    42,    43,    44,    45,    46,    41,
     139,    25,     6,     7,     8,    47,   145,    27,   338,    41,
      34,    35,    36,    37,    38,    47,    40,    41,    41,    25,
      41,    41,    41,    47,   163,   164,   165,   166,   167,     6,
       7,     8,     9,    10,   173,    41,    27,    41,    15,    41,
     370,    47,   457,    47,    41,    47,    40,    41,    25,    25,
      41,   381,    25,     6,     7,     8,   471,    34,    35,    36,
      37,    38,   392,    40,    41,    41,    40,   790,    41,    40,
      47,    47,   629,    25,    47,   405,     6,     7,     8,     6,
       7,     8,    27,    25,   641,   500,   416,   810,    41,    41,
       6,     7,     8,   423,    47,    47,    41,    14,    25,    41,
       6,     7,     8,   433,    34,    47,    36,   522,    38,    25,
      14,    41,    40,    41,   444,     6,     7,     8,     9,    10,
      25,    40,   452,   680,    15,   455,   456,   457,    34,    40,
      36,    41,    38,    40,    25,    41,    41,    47,    27,   469,
     470,   471,    47,    34,    35,    36,    37,    38,    42,    40,
      41,   566,    41,    47,   484,    40,    47,    25,     6,     7,
       8,     9,    10,    40,    27,   495,    27,    15,   498,   499,
     500,    42,    14,    41,   731,    14,    47,   734,    41,    47,
      41,    27,   739,    27,    40,   742,    34,    35,    36,    37,
      38,   606,   522,    27,    42,    41,    25,    41,   755,    47,
      41,   758,     3,     4,     5,    40,    47,    41,    40,    41,
      11,    12,    13,    14,   629,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    40,    26,   641,    40,    29,     6,
       7,     8,     9,    10,    41,    40,   566,    27,    15,    40,
      47,    42,    43,    44,    45,    46,    40,    41,    25,   664,
      14,    41,     6,     7,     8,     9,    10,    34,    35,    36,
      37,    38,    41,    40,    41,   680,    41,    40,    47,   856,
      47,    25,    47,     6,     7,     8,   606,    27,    14,    40,
      34,    35,    36,    37,    38,   872,    40,    41,    41,    40,
      27,    41,    25,    47,    47,   852,   853,   854,    40,    18,
      25,    34,   857,    36,    41,    38,   863,   864,    41,    41,
     857,   868,   869,   870,    47,    47,   731,    14,   873,   734,
     857,    27,   879,   880,   739,    27,   873,   742,   885,   886,
     887,   888,   889,    27,   664,    41,   873,   894,    41,    41,
     755,    26,    14,   758,    47,    14,    41,    41,    40,   906,
      42,     6,     7,     8,    40,    47,    40,    26,    40,    44,
      45,    46,   919,    40,    41,   922,   696,   924,   925,    40,
      47,   928,    41,   930,   931,    44,    45,    46,    40,    34,
     795,    36,    42,    38,   714,    14,    41,    47,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,    41,   729,
     815,    41,   732,   733,    47,   735,    40,    47,   965,   966,
     740,   741,    40,   743,    42,     6,     7,     8,    40,    47,
      42,    40,    41,    40,   754,    47,   756,   757,    47,   759,
      14,    40,    40,    40,    25,    40,    41,   852,   853,   854,
      41,    14,    47,    34,   859,    36,    47,    38,   863,   864,
      41,    14,    14,   868,   869,   870,    47,     6,     7,     8,
     875,    42,    40,    26,   879,   880,    47,     6,     7,     8,
     885,   886,   887,   888,   889,    40,    40,    14,    41,   894,
      41,    44,    45,    46,    40,    34,    47,    36,    40,    38,
     629,   906,    40,    42,    40,    34,    42,    36,    47,    38,
      41,    47,   641,    42,   919,    41,    47,   922,    47,   924,
     925,    47,    40,   928,    42,   930,   931,    40,    41,    47,
      41,    36,    41,    40,    47,    41,    47,   857,   858,   859,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
      41,   680,    40,   873,   874,   875,    47,    62,    63,    64,
     965,   966,    67,    68,    69,    70,    71,    72,    40,    41,
      41,    41,    41,    41,    41,    47,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    14,    41,     6,
       7,     8,     9,    10,    47,    40,    40,    16,    15,    42,
     920,   921,   731,   923,    47,   734,   926,   927,    25,   929,
     739,    40,    40,   742,    40,    17,    41,    34,    35,    36,
      37,    38,    47,    40,    41,    40,   755,    41,    41,   758,
      47,   136,   137,   138,    47,   140,   141,     3,     4,     5,
      40,   146,    16,   148,    42,    11,    12,    13,    14,    47,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    40,
      26,    27,    40,    29,     6,     7,     8,     9,    10,    41,
      17,    16,    16,    15,    40,    47,    42,    43,    44,    45,
      46,    42,    41,    25,    17,    16,    47,   192,    47,     6,
       7,     8,    34,    35,    36,    37,    38,    17,    40,    41,
      41,     6,     7,     8,    41,    47,    47,    41,    25,    41,
      47,    17,    41,    47,    41,    47,   221,    34,    47,    36,
      47,    38,    41,   852,   853,   854,    16,    41,    47,    34,
      41,    36,   237,    38,   863,   864,    47,    42,    41,   868,
     869,   870,    47,    41,     6,     7,     8,     9,    10,    47,
     879,   880,    17,    15,   259,    41,   885,   886,   887,   888,
     889,    47,    41,    41,    41,   894,    42,    16,    47,    47,
     275,    47,    34,    35,    36,    37,    38,   906,    40,   284,
      42,    17,    41,    41,    25,    47,    41,   292,    47,    47,
     919,    41,    47,   922,    41,   924,   925,    47,    41,   928,
      47,   930,   931,    41,    47,    25,    25,    41,    41,    47,
       6,     7,     8,     9,    10,    41,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,     0,    14,    14,    25,
      42,    25,     6,   338,    25,    47,   965,   966,    34,    35,
      36,    37,    38,    42,    40,    41,    25,    42,    47,    42,
      42,    47,    47,    41,    47,    47,   361,   362,   363,    42,
      41,   366,   367,   368,    47,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    42,   383,   384,
     385,    42,    47,   388,   389,   390,    47,   392,   393,   394,
     395,    42,    42,   398,   399,   400,    47,    47,    41,    25,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,    42,    25,   419,   420,   421,    47,   423,   424,
     425,   426,    42,    25,   429,   430,   431,    47,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
      25,    41,    41,    41,    14,    14,    25,   452,    25,    25,
     455,   456,   457,    25,    41,    41,    16,    41,    41,   464,
     465,   466,    25,    25,   469,   470,   471,    25,    41,    14,
     475,   476,   477,    41,    41,   480,   481,   482,    14,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,    25,    25,   498,   499,   500,    25,    25,    25,    41,
      25,    25,     6,     7,     8,     3,     4,     5,    25,    41,
      25,    25,    14,    11,    12,    13,    14,   522,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    14,    26,    27,
      34,    29,    36,    41,    38,    41,    41,    41,    41,    25,
      41,    41,    40,    47,    42,    43,    44,    45,    46,     3,
       4,     5,    41,    25,    17,    25,    25,    11,    12,    13,
      14,   566,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    16,    26,    27,    25,    29,    25,    17,    16,    41,
      41,    41,    41,    17,    16,    41,    40,    17,    42,    43,
      44,    45,    46,    41,     3,     4,     5,    41,    41,    41,
      41,   606,    11,    12,    13,    14,    41,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    41,    26,    27,    41,
      29,    41,     6,     7,     8,     9,    10,    41,    41,    41,
      41,    40,    40,    42,    43,    44,    45,    46,    41,    40,
      40,    25,    41,    41,    41,    41,    41,     3,     4,     5,
      34,    35,    36,    37,    38,    11,    12,    13,    14,   664,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    41,
      26,    27,    41,    29,    40,    40,     6,     7,     8,     9,
      10,   686,   687,   688,    40,    15,    42,    43,    44,    45,
      46,   696,   697,   698,   699,    25,    40,    -1,    41,   704,
     705,   706,    41,    41,    34,    35,    36,    37,    38,   714,
      40,    41,    41,    41,   719,   720,   721,    47,     6,     7,
       8,    41,    41,    41,   729,    25,    25,   732,   733,    36,
     735,   736,   737,   738,    25,   740,   741,    41,   743,   744,
     745,   746,    25,    41,    41,    25,    34,    41,    36,   754,
      38,   756,   757,    41,   759,    62,    63,    64,    25,    47,
      67,    68,    69,    70,    71,    72,    41,    41,    25,    41,
      41,    41,    41,    41,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,     3,     4,     5,    41,    41,
      41,    41,    41,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,     6,     7,     8,     9,    10,     6,
       7,     8,    40,    15,    42,    43,    44,    45,    46,   136,
     137,   138,    -1,   140,   141,    -1,    -1,    -1,    25,   146,
      -1,   148,    34,    35,    36,    37,    38,    34,    40,    36,
      42,    38,   857,   858,   859,    47,    -1,    -1,    -1,    -1,
       6,     7,     8,     3,     4,     5,    -1,    -1,   873,   874,
     875,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   192,    26,    27,    34,    29,
      36,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      40,    47,    42,    43,    44,    45,    46,    -1,     6,     7,
       8,     9,    10,    -1,   221,   920,   921,    15,   923,    -1,
      -1,   926,   927,    -1,   929,    -1,    -1,    25,    -1,    -1,
     237,     6,     7,     8,     9,    10,    34,    35,    36,    37,
      38,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,
      25,    -1,   259,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    -1,   275,    -1,
      -1,    -1,    47,     3,     4,     5,    -1,   284,    -1,    -1,
      -1,    11,    12,    13,    14,   292,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    29,
       6,     7,     8,    -1,    -1,    -1,     6,     7,     8,    -1,
      40,    -1,    42,    43,    44,    45,    46,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    25,    15,    -1,    34,    -1,
      36,   338,    38,    -1,    34,    41,    36,    -1,    38,    -1,
      -1,    47,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    40,    -1,    42,   361,   362,   363,    -1,    47,   366,
     367,   368,    -1,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,    -1,   383,   384,   385,    -1,
      -1,   388,   389,   390,    -1,   392,   393,   394,   395,    -1,
      -1,   398,   399,   400,    -1,    -1,    -1,    -1,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
      -1,    -1,   419,   420,   421,    -1,   423,   424,   425,   426,
      -1,    -1,   429,   430,   431,    -1,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,   455,   456,
     457,    -1,    -1,    -1,    -1,    -1,    -1,   464,   465,   466,
      -1,    -1,   469,   470,   471,    -1,    -1,    -1,   475,   476,
     477,    -1,    -1,   480,   481,   482,    -1,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,    -1,
      -1,   498,   499,   500,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,   522,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    27,    34,    29,
      36,    -1,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      40,    47,    42,    43,    44,    45,    46,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,   566,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,   606,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    27,    -1,    29,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    34,    35,
      36,    37,    38,    11,    12,    13,    14,   664,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,     6,     7,     8,     9,    10,   686,
     687,   688,    40,    15,    42,    43,    44,    45,    46,   696,
     697,   698,   699,    -1,    -1,    -1,    -1,   704,   705,   706,
      -1,    -1,    34,    35,    36,    37,    38,   714,    40,    -1,
      42,    -1,   719,   720,   721,    47,     6,     7,     8,    -1,
      -1,    -1,   729,    -1,    -1,   732,   733,    36,   735,   736,
     737,   738,    -1,   740,   741,    -1,   743,   744,   745,   746,
      -1,    -1,    -1,    -1,    34,    -1,    36,   754,    38,   756,
     757,    41,   759,    62,    63,    64,    -1,    -1,    67,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,     6,     7,     8,     9,    10,     6,     7,     8,
      40,    15,    42,    43,    44,    45,    46,   136,   137,   138,
      -1,   140,   141,    -1,    -1,    -1,    25,   146,    -1,   148,
      34,    35,    36,    37,    38,    34,    40,    36,    42,    38,
     857,   858,   859,    47,    -1,    -1,    -1,    -1,     6,     7,
       8,     3,     4,     5,    -1,    -1,   873,   874,   875,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   192,    26,    27,    34,    29,    36,    -1,
      38,    -1,    -1,    41,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    -1,     6,     7,     8,     9,
      10,    -1,   221,   920,   921,    15,   923,    -1,    -1,   926,
     927,    -1,   929,     6,     7,     8,     9,    10,   237,    -1,
      -1,    -1,    15,    -1,    34,    35,    36,    37,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
     259,    34,    35,    36,    37,    38,    -1,    40,    -1,    42,
      -1,    -1,    -1,    -1,    47,    -1,   275,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,   284,    -1,    -1,    -1,    11,
      12,    13,    14,   292,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    40,    -1,
      42,    43,    44,    45,    46,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,   338,
      34,    35,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,   361,   362,   363,    -1,    47,   366,   367,   368,
      -1,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    -1,   383,   384,   385,    -1,    -1,   388,
     389,   390,    -1,   392,   393,   394,   395,    -1,    -1,   398,
     399,   400,    -1,    -1,    -1,    -1,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,    -1,    -1,
     419,   420,   421,    -1,   423,   424,   425,   426,    -1,    -1,
     429,   430,   431,    -1,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   452,    -1,    -1,   455,   456,   457,    -1,
      -1,    -1,    -1,    -1,    -1,   464,   465,   466,    -1,    -1,
     469,   470,   471,    -1,    -1,    -1,   475,   476,   477,    -1,
      -1,   480,   481,   482,    -1,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,    -1,    -1,   498,
     499,   500,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,   522,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,   566,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,   606,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    -1,    -1,    29,     6,     7,     8,
       9,    10,    -1,     3,     4,     5,    15,    40,    -1,    42,
      43,    44,    45,    46,    14,    -1,    16,    17,    -1,    36,
      -1,    -1,    22,    23,    24,    34,    35,    36,    37,    38,
      -1,    40,    -1,    42,    -1,   664,    -1,    -1,    47,    -1,
      40,    -1,    -1,    -1,    -1,    62,    63,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,   686,   687,   688,
      -1,    -1,    -1,    -1,    81,    -1,    14,   696,   697,   698,
     699,    -1,    -1,    -1,    -1,   704,   705,   706,    26,    -1,
      -1,    -1,    -1,    -1,    -1,   714,    -1,    -1,    -1,    -1,
     719,   720,   721,    41,    -1,    -1,    44,    45,    46,    -1,
     729,    -1,    -1,   732,   733,    -1,   735,   736,   737,   738,
      -1,   740,   741,    -1,   743,   744,   745,   746,    -1,   136,
     137,   138,    -1,   140,   141,   754,    -1,   756,   757,   146,
     759,   148,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,   192,    42,    43,    44,    45,
      46,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   221,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
     237,    42,    43,    44,    45,    46,    -1,    -1,   857,   858,
     859,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      15,    -1,   259,    -1,   873,   874,   875,    -1,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    15,   275,    34,
      35,    36,    37,    38,    -1,    40,    41,   284,    -1,    -1,
      -1,    -1,    47,    -1,    -1,   292,    34,    35,    36,    37,
      38,    -1,    40,    41,     6,     7,     8,     9,    10,    47,
      -1,   920,   921,    15,   923,    -1,    -1,   926,   927,    -1,
     929,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      15,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
      -1,   338,    -1,    -1,    -1,    47,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    47,    -1,   361,   362,   363,    -1,    -1,   366,
     367,   368,    -1,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,    -1,   383,   384,   385,    -1,
      -1,   388,   389,   390,    -1,   392,   393,   394,   395,    -1,
      -1,   398,   399,   400,    -1,    -1,    -1,    -1,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
      -1,    -1,   419,   420,   421,    -1,   423,   424,   425,   426,
      -1,    -1,   429,   430,   431,    -1,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,   455,   456,
     457,    -1,    -1,    -1,    -1,    -1,    -1,   464,   465,   466,
      -1,    -1,   469,   470,   471,    -1,    -1,    -1,   475,   476,
     477,    -1,    -1,   480,   481,   482,    -1,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,    -1,
      -1,   498,   499,   500,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,   522,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,   566,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,   606,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    -1,    -1,    29,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    15,    40,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    -1,    -1,   664,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,    -1,    67,    68,     3,     4,     5,    72,    -1,   686,
     687,   688,    11,    12,    13,    14,    81,    16,    17,   696,
     697,   698,   699,    22,    23,    24,    -1,   704,   705,   706,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   714,    -1,    -1,
      -1,    40,   719,   720,   721,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   729,    -1,    -1,   732,   733,    -1,   735,   736,
     737,   738,    -1,   740,   741,    -1,   743,   744,   745,   746,
      -1,   136,   137,   138,    -1,   140,   141,   754,    -1,   756,
     757,   146,   759,   148,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,   192,    42,    43,
      44,    45,    46,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   221,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,   237,    42,    43,    44,    45,    46,    -1,    -1,
     857,   858,   859,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    15,    -1,   259,    -1,   873,   874,   875,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,
     275,    34,    35,    36,    37,    38,    -1,    40,    41,   284,
      -1,    -1,    -1,    -1,    47,    25,    -1,   292,     6,     7,
       8,     9,    10,    -1,    34,    -1,    36,    15,    38,    -1,
      -1,    -1,    -1,   920,   921,    -1,   923,    25,    -1,   926,
     927,    -1,   929,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,     3,     4,     5,    47,
      -1,    -1,    -1,   338,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   361,   362,   363,    -1,
      -1,    -1,    -1,    40,    41,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    -1,   383,   384,
     385,    -1,    -1,    -1,    -1,    -1,    -1,   392,   393,   394,
     395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,    -1,     6,     7,     8,     9,    10,   423,   424,
     425,   426,    15,    -1,    -1,    -1,    -1,    -1,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
      -1,    34,    35,    36,    37,    38,    -1,   452,    -1,    42,
     455,   456,   457,    -1,    47,    -1,    -1,    -1,    -1,   464,
     465,   466,    -1,    -1,   469,   470,   471,    -1,    -1,    -1,
     475,   476,   477,    -1,    -1,    -1,    -1,    -1,    -1,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,    -1,    -1,   498,   499,   500,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,   522,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    40,    15,    42,    43,    44,    45,    46,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    36,    15,    -1,
      -1,   566,    34,    35,    36,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    67,    68,
      47,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   606,    81,    -1,    -1,     3,     4,     5,    -1,    88,
      89,    90,    91,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   664,
      -1,   140,   141,    -1,    -1,    -1,    -1,   146,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      10,   686,   687,   688,    -1,    15,    -1,    -1,    -1,    -1,
      -1,   696,   697,   698,   699,    -1,    -1,    -1,    -1,   704,
     705,   706,    -1,    -1,    34,    35,    36,    37,    38,   714,
      40,    41,    -1,   192,   719,   720,   721,    47,    -1,    -1,
      -1,    -1,    -1,    -1,   729,    -1,    -1,   732,   733,    -1,
     735,   736,   737,   738,    -1,   740,   741,    -1,   743,   744,
     745,   746,   221,    -1,     6,     7,     8,     9,    10,   754,
      -1,   756,   757,    15,   759,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    41,
     259,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,   284,    -1,    -1,    -1,    11,
      12,    13,    14,   292,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    40,    -1,
      42,    43,    44,    45,    46,    -1,     6,     7,     8,     9,
      10,    25,   857,   858,   859,    -1,    -1,    -1,    -1,   338,
      34,    35,    36,    37,    38,    25,    40,    41,   873,   874,
     875,    -1,    -1,    47,    34,    35,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      -1,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   392,    -1,   920,   921,    -1,   923,    -1,
      -1,   926,   927,    -1,   929,    -1,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,     6,     7,
       8,     9,    10,    -1,   423,    -1,    -1,    15,    -1,    36,
      -1,    -1,    -1,    -1,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,    34,    35,    36,    37,
      38,    -1,    -1,   452,    42,    -1,   455,   456,   457,    47,
      67,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
     469,   470,   471,    -1,    81,    -1,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,    -1,    -1,   498,
     499,   500,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,   522,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,     3,     4,     5,    -1,   146,
      -1,   148,    40,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    26,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,   566,    -1,    -1,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,   106,
       3,     4,     5,    -1,    -1,   192,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    -1,    -1,    29,   606,    -1,    -1,
      -1,    -1,   139,    -1,   221,    -1,    -1,    40,   145,    42,
      43,    44,    45,    46,    -1,     6,     7,     8,     9,    10,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,    34,    35,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    -1,   664,    47,    -1,   275,    -1,
       6,     7,     8,     9,    10,    -1,    -1,   284,    -1,    15,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,    25,
      -1,     6,     7,     8,     9,    10,    -1,   696,    34,    35,
      36,    37,    38,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      25,    47,    -1,    -1,    -1,   714,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
     729,   338,    47,   732,   733,    -1,   735,    -1,    -1,    -1,
      -1,   740,   741,    -1,   743,    -1,    -1,     6,     7,     8,
       9,    10,    -1,    -1,    -1,   754,    15,   756,   757,    -1,
     759,    -1,    -1,   370,   371,   372,   373,   374,   375,   376,
      -1,    -1,    -1,    -1,   381,    34,    35,    36,    37,    38,
      -1,    -1,    41,    -1,    -1,   392,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,   406,
     407,   408,   409,   410,   411,    -1,    -1,    -1,    -1,   416,
       6,     7,     8,     9,    10,    -1,   423,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,   433,   434,   435,   436,
     437,   438,   439,    -1,    -1,    -1,    -1,   444,    34,    35,
      36,    37,    38,    -1,    40,   452,    42,    -1,   455,   456,
     457,    47,    67,    68,    -1,    -1,    -1,    72,   857,   858,
     859,    -1,   469,   470,   471,    -1,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,   873,   874,   875,   484,   485,   486,
     487,   488,   489,   490,    -1,    -1,    -1,    -1,   495,    -1,
      -1,   498,   499,   500,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    10,   522,    -1,    -1,    -1,    -1,
      -1,   920,   921,    -1,   923,   140,   141,   926,   927,    25,
     929,   146,    -1,   148,    -1,    -1,   106,    -1,    34,    35,
      36,    37,    38,    -1,    40,    41,    -1,     3,     4,     5,
      -1,    47,    -1,    -1,    -1,    11,    12,    13,    14,   566,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   139,
      26,    -1,    -1,    29,    -1,   145,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    -1,     3,     4,     5,   167,    -1,   606,
      -1,    -1,    11,    12,    13,    14,   221,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    -1,   237,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    46,    -1,    -1,
     106,    -1,    -1,    25,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,   664,    40,    41,
     275,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,   284,
      -1,    -1,    -1,   139,    -1,    -1,    -1,   292,    -1,   145,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,   696,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,   167,   629,    -1,    -1,    -1,    -1,   714,    34,    35,
      36,    37,    38,    -1,   641,    41,    -1,    -1,    -1,    -1,
      -1,    47,   729,   338,    -1,   732,   733,    -1,   735,    -1,
      -1,    -1,    -1,   740,   741,    -1,   743,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,   754,    -1,   756,
     757,    -1,   759,   680,    -1,   370,   371,   372,   373,    25,
      -1,    -1,    -1,    -1,    -1,    -1,   381,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    41,    -1,   392,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     405,   406,   407,   408,     6,     7,     8,     9,    10,   106,
      -1,   416,    -1,    -1,   731,    -1,    -1,   734,   423,    -1,
      -1,    -1,   739,    -1,    -1,   742,    -1,    -1,   433,   434,
     435,   436,    34,    35,    36,    37,    38,    -1,   755,   444,
      42,   758,   139,    -1,    -1,    47,    -1,   452,   145,    -1,
     455,   456,   457,    -1,    -1,     6,     7,     8,     9,    10,
     857,   858,   859,    -1,   469,   470,   471,    -1,    -1,    -1,
     167,     6,     7,     8,     9,    10,   873,   874,   875,   484,
     485,   486,   487,    34,    35,    36,    37,    38,    -1,    40,
     495,    42,    -1,   498,   499,   500,    47,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,   522,    -1,    -1,
      -1,    -1,    -1,   920,   921,    -1,   923,    -1,    -1,   926,
     927,    -1,   929,    -1,    -1,   852,   853,   854,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   863,   864,    -1,    -1,
      -1,   868,   869,   870,     6,     7,     8,     9,    10,    -1,
      -1,   566,   879,   880,    -1,    -1,    -1,    -1,   885,   886,
     887,   888,   889,    -1,    -1,    -1,    -1,   894,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    40,   906,
      42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,   606,   919,    -1,    -1,   922,    -1,   924,   925,    -1,
      -1,   928,    -1,   930,   931,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,   965,   966,
      34,    35,    36,    37,    38,    -1,    40,    -1,    42,   664,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,   629,
      34,    35,    36,    37,    38,    -1,    40,    -1,    42,    -1,
      -1,   641,    -1,    47,     6,     7,     8,     9,    10,    -1,
      -1,   696,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   714,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    41,
     680,    -1,    -1,    -1,   729,    47,    -1,   732,   733,    -1,
     735,    -1,    -1,    -1,    -1,   740,   741,    -1,   743,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   754,
      -1,   756,   757,    -1,   759,    -1,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,   731,    -1,   629,   734,    -1,    -1,    25,    -1,   739,
      -1,    -1,   742,    -1,    -1,   641,    34,    35,    36,    37,
      38,     3,     4,     5,    -1,   755,    -1,    -1,   758,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,     6,
       7,     8,     9,    10,   680,    -1,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,   857,   858,   859,    42,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    34,    35,    36,    37,    38,   873,   874,
     875,    42,    -1,    -1,    -1,   731,    47,    -1,   734,    -1,
      -1,    -1,    -1,   739,    -1,    -1,   742,    -1,    -1,    -1,
      -1,    -1,   852,   853,   854,    -1,    -1,    -1,    -1,   755,
      -1,    -1,   758,   863,   864,    -1,    -1,    -1,   868,   869,
     870,    -1,    -1,    -1,    -1,   920,   921,    -1,   923,   879,
     880,   926,   927,    -1,   929,   885,   886,   887,   888,   889,
      -1,    -1,   629,    -1,   894,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   641,    -1,   906,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,   919,
      -1,    -1,   922,    -1,   924,   925,    -1,    -1,   928,    -1,
     930,   931,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    40,    41,   680,    -1,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,    -1,   852,   853,   854,    -1,
      -1,    -1,    -1,    -1,    -1,   965,   966,   863,   864,    -1,
      -1,    -1,   868,   869,   870,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   879,   880,    -1,    -1,    -1,    -1,   885,
     886,   887,   888,   889,   731,    -1,    -1,   734,   894,    -1,
      -1,    -1,   739,    -1,    -1,   742,    -1,    -1,    -1,    -1,
     906,     6,     7,     8,     9,    10,    -1,    -1,   755,    -1,
      15,   758,    -1,   919,    -1,    -1,   922,    -1,   924,   925,
      -1,    -1,   928,    -1,   930,   931,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,    41,    -1,    -1,   945,
     946,   947,   948,   949,   950,   951,   952,   953,   954,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,   965,
     966,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,   852,   853,   854,    -1,    -1,
      -1,    34,    35,    36,    37,    38,   863,   864,    41,    -1,
      -1,   868,   869,   870,    47,    -1,     6,     7,     8,     9,
      10,    -1,   879,   880,    -1,    -1,    -1,    -1,   885,   886,
     887,   888,   889,    -1,    -1,    -1,    -1,   894,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,   906,
      40,    41,     6,     7,     8,     9,    10,    47,    -1,    -1,
      -1,    15,   919,    -1,    -1,   922,    -1,   924,   925,    -1,
      -1,   928,    -1,   930,   931,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    40,    41,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   954,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,   965,   966,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    46,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    46,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    43,    44,    45,    46,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    46,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    26,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    26,    -1,    -1,    29,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    40,    41,     6,     7,     8,     9,    10,    47,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
       6,     7,     8,     9,    10,    47,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    40,    41,     6,
       7,     8,     9,    10,    47,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    40,    41,     6,     7,     8,     9,
      10,    47,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,    41,     6,     7,     8,     9,    10,
      47,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    47,     6,     7,
       8,     9,    10,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    47,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    25,    -1,    41,     6,     7,     8,     9,
      10,    47,    34,    35,    36,    37,    38,    -1,    -1,    41,
       6,     7,     8,     9,    10,    47,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    34,    35,    36,    37,    38,    25,
      40,    41,     6,     7,     8,     9,    10,    25,    34,    35,
      36,    37,    38,    -1,    -1,    41,    34,    35,    36,    37,
      38,    47,    -1,    41,     6,     7,     8,     9,    10,    47,
      34,    35,    36,    37,    38,    -1,    40,    41,     6,     7,
       8,     9,    10,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
       6,     7,     8,     9,    10,    47,    34,    35,    36,    37,
      38,    -1,    40,    41,     6,     7,     8,     9,    10,    47,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    34,    35,
      36,    37,    38,    25,    40,    41,    -1,    -1,    -1,    -1,
      -1,    25,    34,    35,    36,    37,    38,    -1,    -1,    41,
      34,    35,    36,    37,    38,    47,    -1,    41,     6,     7,
       8,     9,    10,    47,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    34,    35,    36,    37,
      38,    -1,    -1,    41,    34,    35,    36,    37,    38,    47,
      -1,    41,     6,     7,     8,     9,    10,    47,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    41,    34,    35,
      36,    37,    38,    47,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,    34,    35,    36,    37,    38,    -1,
      -1,    41,    34,    35,    36,    37,    38,    47,    -1,    41,
       6,     7,     8,     9,    10,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    34,    35,    36,    37,    38,    -1,    -1,    41,
      34,    35,    36,    37,    38,    47,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    47,     6,     7,     8,     9,    10,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    41,
      34,    35,    36,    37,    38,    47,    -1,    41,    34,    35,
      36,    37,    38,    47,    -1,    41,     6,     7,     8,     9,
      10,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    47,    34,    35,
      36,    37,    38,    -1,    -1,    41,    34,    35,    36,    37,
      38,    47,    -1,    41,     6,     7,     8,     9,    10,    47,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    41,
      34,    35,    36,    37,    38,    47,    -1,    41,    34,    35,
      36,    37,    38,    47,    -1,    41,     3,     4,     5,    -1,
      -1,    47,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    40,    -1,    42,    43,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,    43,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,
      -1,    42,    43,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    40,    -1,    42,    43,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    40,    -1,    42,    43,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,
      42,    43,    11,    12,    13,    14,    -1,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    40,    -1,    42,    43,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    40,    -1,    42,    43,    11,    12,
      13,    14,    -1,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,
      43,    11,    12,    13,    14,    -1,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      40,    -1,    42,    43,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    40,    -1,    42,    43,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,    43,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,
      -1,    42,    43,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    40,    -1,    42,    43,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    40,    -1,    42,    43,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,
      42,    43,    11,    12,    13,    14,    -1,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    40,    -1,    42,    43,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    40,    -1,    42,    43,    11,    12,
      13,    14,    -1,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,
      43,    11,    12,    13,    14,    -1,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      40,    -1,    42,    43,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    40,    -1,    42,    43,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,    43,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,
      -1,    42,    43,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    40,    -1,    42,    43,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    40,    -1,    42,    43,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,
      42,    43,    11,    12,    13,    14,    -1,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    40,    -1,    42,    43,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    40,    -1,    42,    43,    11,    12,
      13,    14,    -1,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,
      43,    11,    12,    13,    14,    -1,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      40,    -1,    42,    43,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    40,    -1,    42,    43,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,    43,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,
      -1,    42,    43,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    40,    -1,    42,    43,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    40,    -1,    42,    43,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,
      42,    43,    11,    12,    13,    14,    -1,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    40,    -1,    42,    43,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    40,    -1,    42,    43,    11,    12,
      13,    14,    -1,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,
      43,    11,    12,    13,    14,    -1,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      40,    -1,    42,    43,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    40,    -1,    42,    43,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,    40,    -1,    42,    43,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,
      -1,    42,    43,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    40,    -1,    42,    43,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    40,    -1,    42,    43,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,    40,    -1,
      42,    43,    11,    12,    13,    14,    -1,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,     3,     4,     5,    -1,
      29,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    40,    -1,    42,    43,    22,    23,    24,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    40,    -1,    42,    -1,    22,    23,    24,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    40,    -1,    42,    -1,    22,
      23,    24,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    40,    -1,    42,
      -1,    22,    23,    24,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    40,
      -1,    42,    -1,    22,    23,    24,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    40,    -1,    42,    -1,    22,    23,    24,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    40,    -1,    42,    -1,    22,    23,    24,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    40,    41,    -1,    -1,    22,
      23,    24,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    40,    41,    -1,
      -1,    22,    23,    24,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    40,
      41,    -1,    -1,    22,    23,    24,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    40,    41,    -1,    -1,    22,    23,    24,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    40,    41,    -1,    -1,    22,    23,    24,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    40,    41,    -1,    -1,    22,
      23,    24,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    40,    41,    -1,
      -1,    22,    23,    24,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    40,
      41,    -1,    -1,    22,    23,    24,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    40,    41,    -1,    -1,    22,    23,    24,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    40,    41,    -1,    -1,    22,    23,    24,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    40,    41,    -1,    -1,    22,
      23,    24,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    40,    -1,    -1,
      -1,    22,    23,    24,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    40,
      -1,    -1,    -1,    22,    23,    24,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    40,    -1,    -1,    -1,    22,    23,    24,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    40,    -1,    -1,    -1,    22,    23,    24,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    40,    -1,    -1,    -1,    22,
      23,    24,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    40,    -1,    -1,
      -1,    22,    23,    24,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    40,
      -1,    -1,    -1,    22,    23,    24,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    40,    -1,    -1,    -1,    22,    23,    24,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    40,    -1,    -1,    -1,    22,    23,    24,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    15,
       6,     7,     8,     9,    10,    40,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    40,    41,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    40,    41,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    15,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    41,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    15,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    40,    41,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    15,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    15,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    41,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    40,    41,     6,     7,     8,     9,    10,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    40,    41,
      34,    35,    36,    37,    38,    -1,    40,    41,    34,    35,
      36,    37,    38,    -1,    -1,    41,     6,     7,     8,     9,
      10,    -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    41,    34,    35,    36,    37,    38,    -1,    40,    41,
      34,    35,    36,    37,    38,    -1,    40,    41,     6,     7,
       8,     9,    10,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    -1,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    41,    34,    35,    36,    37,    38,    -1,
      -1,    41,    34,    35,    36,    37,    38,    -1,    -1,    41,
       6,     7,     8,     9,    10,    -1,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    -1,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    -1,    41,    34,    35,    36,    37,
      38,    -1,    -1,    41,    34,    35,    36,    37,    38,    -1,
      -1,    41,     6,     7,     8,     9,    10,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    -1,    41,    34,    35,
      36,    37,    38,    -1,    -1,    41,    34,    35,    36,    37,
      38,    -1,    -1,    41,     6,     7,     8,     9,    10,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    -1,    41,
      34,    35,    36,    37,    38,    -1,    -1,    41,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    10,    25,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    25,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    -1,    40,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    10,    25,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      25,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    -1,    40,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
       6,     7,     8,     9,    10,    25,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    25,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    40,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    10,    25,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    25,    40,
       6,     7,     8,     9,    10,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    40,     6,     7,     8,     9,    10,    25,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    25,    40,     6,     7,     8,     9,    10,
      -1,    -1,    34,    35,    36,    37,    38,    -1,    40,     6,
       7,     8,     9,    10,    25,    -1,     6,     7,     8,     9,
      10,    -1,    -1,    34,    35,    36,    37,    38,    25,    40,
       6,     7,     8,     9,    10,    25,    -1,    34,    35,    36,
      37,    38,    -1,    40,    34,    35,    36,    37,    38,    25,
      40,     6,     7,     8,     9,    10,    -1,    -1,    34,    35,
      36,    37,    38,    -1,    40,     6,     7,     8,     9,    10,
      25,    -1,     6,     7,     8,     9,    10,    -1,    -1,    34,
      35,    36,    37,    38,    25,    40,     6,     7,     8,     9,
      10,    25,    -1,    34,    35,    36,    37,    38,    -1,    40,
      34,    35,    36,    37,    38,    25,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,
      25,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    25,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,     6,
       7,     8,     9,    10,    25,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    25,     6,
       7,     8,     9,    10,    25,    -1,    -1,    34,    35,    36,
      37,    38,    -1,    34,    35,    36,    37,    38,    25,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    -1,     6,     7,     8,     9,    10,    25,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    25,     6,     7,     8,     9,    10,    25,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    34,    35,    36,
      37,    38,    25,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,    44,    45,    46,    50,    51,    53,    56,    57,
      58,    60,     0,    58,    18,    78,    14,    42,    55,    59,
       3,     4,     5,    11,    12,    13,    14,    16,    17,    19,
      20,    21,    22,    23,    24,    29,    40,    42,    43,    56,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    76,    77,    78,    79,    40,
      42,    47,    40,    40,    40,    14,    14,    40,    40,    40,
      40,    40,    40,    63,    42,    63,    55,    19,    61,    42,
      47,    40,     6,     7,     8,    34,    36,    38,     9,    10,
      35,    37,    15,    14,    41,    52,    53,    54,    56,    55,
      72,    74,    72,    72,    16,    17,    58,    68,    68,    73,
      73,    73,    63,    68,    41,    42,    68,    41,    68,    75,
      69,    69,    69,    70,    70,    70,    71,    71,    71,    71,
      68,    41,    47,    41,    47,    55,    25,    25,    25,    65,
      25,    25,    41,    41,    41,    41,    25,    41,    47,    14,
      53,    72,    72,    72,    65,    68,    68,    65,    68,    68,
      41,    41,    41,    41,    41,    41,    27,    41,    65,    65,
      65,    65,    65,    27,    65,    18,    26,    44,    45,    46,
       3,     4,     5,    11,    12,    13,    14,    16,    17,    22,
      23,    24,    40,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    14,    42,    59,    26,    44,    45,    46,     3,
       4,     5,    11,    12,    13,    14,    16,    17,    22,    23,
      24,    40,    66,    67,    73,     3,     4,     5,    11,    12,
      13,    14,    16,    17,    22,    23,    24,    40,    53,    56,
      57,    60,    66,    67,    69,    70,    71,    72,    73,    74,
       3,     4,     5,    14,    16,    17,    22,    23,    24,    40,
      66,    67,    74,     3,     4,     5,    11,    12,    13,    14,
      16,    17,    22,    23,    24,    40,    66,    67,    69,    70,
      71,    72,    73,    74,    47,    40,     3,     4,     5,    14,
      16,    17,    40,    66,    67,    74,    14,    18,    20,    21,
      29,    42,    43,    63,    64,    76,    77,    78,    79,    40,
      11,    12,    13,    73,    18,    20,    21,    29,    42,    43,
      63,    64,    76,    77,    78,    79,     3,     4,     5,    11,
      12,    13,    14,    16,    17,    22,    23,    24,    40,    66,
      67,    69,    70,    71,    72,    73,    74,    18,    20,    21,
      29,    42,    43,    63,    64,    76,    77,    78,    79,    19,
      62,    40,    40,    40,    14,    14,    40,    40,    40,    63,
      40,     6,     7,     8,    34,    36,    38,     9,    10,    35,
      37,    15,    42,    40,    40,    40,    14,    14,    40,    40,
      40,    63,    40,    40,    40,    40,    14,    14,    40,    40,
      40,    63,    78,    42,    59,    40,     6,     7,     8,    34,
      36,    38,     9,    10,    35,    37,    15,    14,    14,    40,
      40,    40,    63,    40,    40,    40,    40,    14,    14,    40,
      40,    40,    63,    40,     6,     7,     8,    34,    36,    38,
       9,    10,    35,    37,    15,    68,    41,    52,    54,    14,
      14,    63,    40,    19,    62,    40,    40,    40,    42,    63,
      42,    41,    52,    54,    40,    40,    40,    19,    62,    40,
      40,    40,    42,    63,    42,    40,    40,    40,    14,    14,
      40,    40,    40,    63,    40,     6,     7,     8,    34,    36,
      38,     9,    10,    35,    37,    15,    19,    62,    40,    40,
      40,    42,    63,    42,    19,    72,    72,    72,    16,    17,
      73,    73,    73,    41,    41,    75,     3,     4,     5,    14,
      16,    17,    40,    66,    67,    69,    74,    69,    69,    70,
      70,    70,    71,    71,    71,    71,    68,    72,    72,    72,
      16,    17,    73,    73,    73,    41,    41,    75,    72,    72,
      72,    16,    17,    73,    73,    73,    41,    42,    41,    75,
       3,     4,     5,    14,    16,    17,    40,    66,    67,    69,
      74,    69,    69,    70,    70,    70,    71,    71,    71,    71,
      68,    16,    17,    73,    73,    73,    41,    41,    75,    72,
      72,    72,    16,    17,    73,    73,    73,    41,    41,    75,
       3,     4,     5,    14,    16,    17,    40,    66,    67,    69,
      74,    69,    69,    70,    70,    70,    71,    71,    71,    71,
      68,    41,    41,    16,    17,    41,    41,    75,    19,    58,
      68,    68,    63,    68,    42,    41,    41,    72,    72,    72,
      19,    58,    68,    68,    63,    68,    42,    72,    72,    72,
      16,    17,    73,    73,    73,    41,    41,    75,     3,     4,
       5,    14,    16,    17,    40,    66,    67,    69,    74,    69,
      69,    70,    70,    70,    71,    71,    71,    71,    68,    19,
      58,    68,    68,    63,    68,    42,    25,    25,    25,    41,
      41,    41,    41,    14,    14,    63,    40,    25,    25,    25,
      41,    41,    41,    41,    25,    25,    25,    41,    41,    41,
      41,    14,    14,    63,    40,    41,    41,    41,    41,    25,
      25,    25,    41,    41,    41,    41,    14,    14,    63,    40,
      41,    65,    25,    25,    41,    25,    25,    25,    25,    65,
      25,    25,    41,    25,    25,    25,    25,    41,    41,    41,
      41,    14,    14,    63,    40,    65,    25,    25,    41,    25,
      72,    72,    72,    16,    17,    41,    41,    75,    72,    72,
      72,    72,    72,    72,    16,    17,    41,    41,    75,    72,
      72,    72,    16,    17,    41,    41,    75,    65,    68,    68,
      18,    20,    21,    29,    42,    43,    63,    64,    65,    76,
      77,    78,    79,    68,    72,    72,    72,    65,    68,    68,
      18,    20,    21,    29,    42,    43,    63,    64,    65,    76,
      77,    78,    79,    68,    72,    72,    72,    16,    17,    41,
      41,    75,    65,    68,    68,    65,    68,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    19,    62,    40,    40,    40,
      42,    63,    42,    27,    41,    41,    41,    41,    41,    41,
      41,    19,    62,    40,    40,    40,    42,    63,    42,    27,
      41,    41,    41,    41,    41,    41,    41,    41,    27,    41,
      65,    65,    65,    19,    58,    68,    68,    63,    68,    42,
      65,    65,    65,    65,    65,    19,    58,    68,    68,    63,
      68,    42,    65,    65,    65,    65,    65,    65,    65,    65,
      25,    25,    41,    25,    27,    65,    25,    25,    41,    25,
      27,    27,    65,    68,    68,    65,    68,    65,    65,    68,
      68,    65,    68,    65,    65,    41,    41,    41,    27,    41,
      41,    41,    41,    27,    41,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    27,    27,    65,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    56,    56,    56,    56,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    66,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    70,    70,    70,    70,    71,    71,    71,
      71,    71,    72,    72,    72,    72,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    78,    78,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     2,     1,     1,
       3,     1,     3,     4,     4,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     2,     3,     1,     1,     1,     2,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
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
  case 2: /* programa: declaracoes  */
#line 63 "parser/clang.y"
                        {
                            liberar_ast((yyvsp[0].no));
                        }
#line 3962 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 69 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 3970 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 73 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 3979 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 84 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 3988 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 88 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 3994 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 92 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 4002 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 96 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 4011 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 103 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 4020 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 108 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4030 "clang.tab.c"
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
#line 4042 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 124 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 4048 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 125 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 4054 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 126 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 4060 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 127 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 4066 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 132 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4075 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 140 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4084 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 145 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4093 "clang.tab.c"
    break;

  case 22: /* lista_inicializar_atrib: def_declaracao  */
#line 152 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4101 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA def_declaracao  */
#line 156 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4109 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 161 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4115 "clang.tab.c"
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
#line 4135 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 180 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4141 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 181 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4147 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 185 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4155 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 189 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4164 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 195 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4170 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 196 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4176 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 199 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4182 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 200 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4188 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 203 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4194 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 204 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4200 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 205 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4206 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 206 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4212 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 207 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4218 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 210 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4224 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 211 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4230 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 212 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4236 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 216 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4244 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 220 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4252 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 224 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4258 "clang.tab.c"
    break;

  case 45: /* expressao_principal: ASPAS_DUPLAS TOKEN_ID ASPAS_DUPLAS  */
#line 226 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4264 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 227 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4270 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_relacional  */
#line 230 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4276 "clang.tab.c"
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
#line 4304 "clang.tab.c"
    break;

  case 49: /* expressao_relacional: expressao_logica  */
#line 257 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4310 "clang.tab.c"
    break;

  case 50: /* expressao_relacional: expressao_logica OP_MENOR_QUE expressao_relacional  */
#line 259 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4318 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 263 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4326 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 267 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4334 "clang.tab.c"
    break;

  case 53: /* expressao_logica: expressao_aritmetica  */
#line 273 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4340 "clang.tab.c"
    break;

  case 57: /* expressao_aritmetica: expressao_conjunto  */
#line 279 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4346 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto OP_SOMA expressao_aritmetica  */
#line 281 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4354 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_conjunto OP_SUBTRACAO expressao_aritmetica  */
#line 285 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4362 "clang.tab.c"
    break;

  case 62: /* expressao_conjunto: expressao_io  */
#line 292 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4368 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 294 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4376 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 298 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4384 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 302 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4392 "clang.tab.c"
    break;

  case 66: /* expressao_io: expressao_chamada  */
#line 307 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4398 "clang.tab.c"
    break;

  case 67: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 309 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4406 "clang.tab.c"
    break;

  case 68: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 313 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4414 "clang.tab.c"
    break;

  case 69: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 317 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4422 "clang.tab.c"
    break;

  case 70: /* expressao_chamada: expressao_principal  */
#line 322 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4428 "clang.tab.c"
    break;

  case 72: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 325 "parser/clang.y"
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
#line 4456 "clang.tab.c"
    break;

  case 73: /* expressao_lista_param: expressao_atribuicao  */
#line 351 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4464 "clang.tab.c"
    break;

  case 74: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 355 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4473 "clang.tab.c"
    break;

  case 75: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 362 "parser/clang.y"
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
#line 4501 "clang.tab.c"
    break;

  case 76: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 386 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4509 "clang.tab.c"
    break;

  case 77: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 390 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4517 "clang.tab.c"
    break;

  case 78: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 394 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4525 "clang.tab.c"
    break;

  case 79: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 400 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4533 "clang.tab.c"
    break;

  case 80: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 404 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4541 "clang.tab.c"
    break;

  case 81: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 408 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4549 "clang.tab.c"
    break;

  case 82: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 414 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4557 "clang.tab.c"
    break;

  case 83: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 418 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4565 "clang.tab.c"
    break;

  case 84: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 424 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4573 "clang.tab.c"
    break;

  case 85: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 428 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4581 "clang.tab.c"
    break;


#line 4585 "clang.tab.c"

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

#line 433 "parser/clang.y"


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
