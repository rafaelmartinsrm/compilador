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
  YYSYMBOL_declaracoes = 50,               /* declaracoes  */
  YYSYMBOL_lista_identificadores = 51,     /* lista_identificadores  */
  YYSYMBOL_declaracao_parametro = 52,      /* declaracao_parametro  */
  YYSYMBOL_lista_tipo_parametro = 53,      /* lista_tipo_parametro  */
  YYSYMBOL_def_declaracao = 54,            /* def_declaracao  */
  YYSYMBOL_def_declaracao_tipo = 55,       /* def_declaracao_tipo  */
  YYSYMBOL_declaracao_func = 56,           /* declaracao_func  */
  YYSYMBOL_declaracao = 57,                /* declaracao  */
  YYSYMBOL_inicializar_atrib = 58,         /* inicializar_atrib  */
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
#define YYLAST   10543

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  962

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
     139,   144,   151,   152,   160,   164,   170,   171,   186,   187,
     190,   194,   201,   202,   205,   206,   209,   210,   211,   212,
     213,   216,   217,   218,   221,   225,   229,   231,   233,   236,
     237,   263,   264,   268,   275,   276,   277,   278,   281,   282,
     286,   290,   291,   294,   295,   299,   303,   309,   310,   314,
     318,   324,   325,   326,   352,   356,   363,   387,   391,   395,
     401,   405,   409,   415,   419,   425,   429
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

#define YYPACT_NINF (-366)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     319,     9,   186,   426,   449,    21,    10,    15,   592,    16,
      20,    31,  -366,    43,   356,    52,   467,    69,   960,   -13,
     159,   701,  2010,  2700,    59,   103,   121,  2991,    36,   185,
      78,   140,   210,   229,   263,   289,   316,  5376,  2611,  8999,
      38,  2660,  2876,  2919,   399,  2968,  3132,  3221,  3273,   424,
     685,    99,   285,   383,  3615,   913,  3176,  3480,  3523,  3572,
    9377,   765,    84,   345,  9398,  9398,  9398,   283,   367,   261,
    9419,  1209,  1209,  1209,  9440,    53,  3736,   919,    -2,   107,
    3780,  4084,  9377,  9125,  9461,  9461,  9461,  9461,  9461,  9461,
    9461,  9461,  9461,  9377,   922,   293,   991,   375,   442,   531,
      70,   975,   361,   387,   403,   429,  3595,  3825,  8119,   433,
     463,   354,   451,   486,   657,   303,  3878,  4155,   998,  3309,
     716,   785,  1234,  1237,   201,   247,   273,   795,  1095,  1235,
    1411,  1325,  1223,   410,  1488,   450,   839,  9482,  9482,  9482,
    8152,  9503,  9503,  5396,  5482,  6282,  8185,  9503,  4728,  5376,
     841,   866,   509,   512,   536,   547,   562,   575,   152,   601,
     918,  7147,  7188,  7203,  8218,  8218,  8218,  8218,  8185,  4207,
    4341,  4391,  4787,   218,  8218,  5038,  5087,    77,    89,   141,
     254,  4001,  4107,  4258,   620,   639,   654,  4461,   714,   717,
     704,   721,   724,  5376,  4669,  4849,   935,   964,    85,  1582,
    7224,  7239,  6067,   144,  5157,  1342,    95,    98,   212,   235,
      -5,    -1,    65,   742,   753,   761,   142,   740,   799,   794,
     796,   805,  5376,   231,   341,   829, 10061, 10075, 10109,   807,
     818,   850, 10123,   869,   891,   858,   874,   876,  5376,   911,
     597,  8251,  8284, 10157, 10171,   905,   453,  1267, 10383, 10397,
    1735,   -10,   162,   250,   484,   928,   929,   904,   906,   914,
    5376,   535,   628,   921,   301,   398,   465,   937,   940,   941,
     508,   931,   981,   954,  1004,  1008,  5376,   655,   715,   305,
     113,   527,  6391,  6433,  4626,  5376,   778,   522,  1300,  3205,
    3809,  1046,  1047,  5376,  4583,  5942,  7247,   861,  5281,  1022,
    1023,  1024,  8317,  9020,  1346,  8350,  8383,  8416,  8449,  8482,
     851,  1039,  1042,  1056,  1058,  5530,  1078,  1098,  1108,  1074,
    9041,  1357,  1084,  1086,  1094,  1125,  1136,  5841,  5898,  5978,
    1138,  1140,  1152,  6229,  1179,  1193,  1168,  1177,  1197,  5376,
    9605,  9614,  1198,     8,   679,  9865,  9873,  9676,  5574,  1207,
    1208,  1216,   578,  9062,  1381,   632,   754,  1141,  1496,  1539,
    5620,  6041,  9398,  9398,  9398,  1241,  1249,  1209,  1209,  1209,
     983,  9146,  9524,  9524,  9524,  9524,  9524,  9524,  9524,  9524,
    9524,  5376,  6156,  9398,  9398,  9398,  1243,  1251,  1209,  1209,
    1209,   995,  9167,  9398,  9398,  9398,  1277,  1285,  1209,  1209,
    1209,   996,  8515,  8548,  1404,  9188,  9545,  9545,  9545,  9545,
    9545,  9545,  9545,  9545,  9545,  9419,  1290,  1308,  1209,  1209,
    1209,  1000,  9209,  9398,  9398,  9398,  1311,  1326,  1209,  1209,
    1209,  1018,  9230,  9566,  9566,  9566,  9566,  9566,  9566,  9566,
    9566,  9566,  9440,  1036,   255,  1037,  1054,  1328,  1329,  1063,
    9251,  8581,  6206,   261,  9419,  9440,  8614,  1412,  8647,   863,
    1065,  1072,  9398,  9398,  9398,  1304,  6364,   261,  9419,  9440,
    1317,  1420,  1319,  9398,  9398,  9398,  1352,  1386,  1209,  1209,
    1209,  1075,  9272,  9587,  9587,  9587,  9587,  9587,  9587,  9587,
    9587,  9587,  9503,  1588,  6523,   261,  9419,  9440,  1632,  1421,
    1781,  6566,  1373,  1380,  1408,  4912,  4967,  1365,  1388,  1407,
    5323,  6761,  1076,  6441,  6778,  6796,  6813,  1436,  1446,  5376,
    6831,  6848,  1085,  7283,  1087,   205,   310,   347,  1854,  1964,
    2272,  2362,  1089,  1447,  1458,  1470,   422,   496,  1455,  1463,
    1464,   545,  1486,  1109,  1502,  1507,  1508, 10205, 10219,  1493,
    1505,  1506, 10253,  8680,  2425,  1128, 10239, 10273, 10287, 10294,
    1523,  1534,  5376, 10308, 10328,  1524, 10402,  1529,   503,   676,
     800,  2015,  2705,  3298,  3873,  1542,   666,   745,  1528,  1530,
    1531,   886,  1532,  1135,  1545,  1549,  1550,   780,  1164,  1535,
    1536,  1537,  1314,  5468,  1147,   180,   978,  1810,  2500,  1566,
    1572,  5376,  5235,  5309,   401,  6866,   412,   306,   402,   479,
     853,  1073,  1672,  1996,   526,   437,   539,  6889,  6907,  6925,
    7291,  1149,  8713,  8119,  1562,  1563,  1150,   546,  8746,   884,
     980,  1570,  1571,  1573,  1556,  8119,  1594,  1596,  1162,   584,
    1581,  1599,  1600,  1601,  9623,  9658,  1586,  1598,  1606,  9667,
    9711,  1165,  2688,  3008,  9720,  9728,  1577,  1621,  5376,  9763,
    9771,  1616,  9881,  1622,    18,    40,    75,   963,  1292,  2544,
    2996,  1623,  1860,  8119,  1615,  1617,  1169,   594,  1921,  9482,
    9482,  9482,  7305,  7327,  7341,  6943,  1445,  1624,  1180,  9293,
    9482,  9482,  9482,  1637,  1640,  1641,  1642,  9482,  9482,  9482,
   10416, 10435, 10449,  6121,  1597,  1651,  1181,  9314,  1628,  1629,
    1630,  1643,  9482,  9482,  9482,  6961,  6984,  7003,  5662,  1657,
    1668,  1203,  9335,  7349,  8152,  9503,  9503,  8779,  9503,  9482,
    9482,  9482,  8152,  9503,  9503,  8812,  9503,  9482,  9482,  9482,
    9916,  9924,  9932,  9779,  1670,  1671,  1217,  9356,  8152,  9503,
    9503,  8185,  9503,  1646,  1648,  1649,  7025,  7039,  7047,  7363,
    1220,  1654,  1655,  1661,  1662,  1663,  1664, 10342, 10349, 10363,
   10454,  1239,  1666,  1676,  1677,  5739,  5790,  5855,  7082,  1242,
    1679,  1680,  1681,  6609,  1658,  1683,  1685,  7459,  9083,  1431,
    7492,  7525,  7558,  7591,  7624,  7657,  1693,  1696,  1705,  1706,
    1707,  1712,  1714,  6652,  1686,  1719,  1727,   108,  9104,  1432,
     166,   184,   259,   362,   370,   481,  1733,  1747,  1748,  1749,
    9814,  9822,  9830,  9967,  1257,  1750,  1755,  1765,  1970,  1768,
    7385,  7399,  7407,  7421,  1687,  1743,  1786, 10468, 10487, 10501,
   10506,  7090,  7125,  7133,  7168,  8119,  8119,  8119,  7690,  6695,
     261,  9419,  9440,  7723,  1482,  7756,  8119,  8779,  1771,  1772,
    1773,  8152,  8152,  8152,   586,  6738,   261,  9419,  9440,   587,
    1484,   599,  8152,  8812,  9975,  9983, 10018, 10026,  8185,  8185,
    8185,  8185,  8185,  8845,  8878,  8911,  7789,  8119,  1790,  1791,
    1312,   641,  7822,  8944,  7855,  1787,  1795,  1796,   606,  8119,
    1797,  1807,  1315,   656,   630,  1799,   658,  2186,  2229,  2278,
    2322,  2471,  8152,  9503,  9503,  8779,  9503,  8119,  8152,  9503,
    9503,  8812,  9503,  8152,  8185,  1801,  1802,  1808,  7888,  1814,
    8977,  1815,  1817,  1818,   673,  1819,  1822,  2550,  8779,  8779,
    8779,  8779,  8779,  8812,  8812,  8812,  8812,  8812,  7921,  7954,
    7987,  8020,  8053,   678,   706,   803,   822,   843,  8779,  8812,
    8086,   844
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,  -366,  -268,    11,  -186,   -27,     1,  1356,    -3,
    1647,   -31,     2,   -38,  -172,   110,  3808,   372,  1001,  1691,
    5390,  5002,  4500,  4112,  3589,  2985,  2381,  -365,  5083,  5414,
      -7,  5573
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    97,   239,    99,    18,    40,   241,    10,
      19,    20,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   121,    56,    57,
      58,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,     8,    11,    13,   361,    80,   512,     8,    11,   205,
      -2,     7,    60,    78,   483,   484,   -20,     7,   445,   -41,
      -3,    12,   -17,   -43,   -57,   -57,   -17,   543,   -24,   -41,
     -41,   -21,    14,   -24,   -41,     1,    78,   286,   -43,   -22,
     555,   -20,   460,    -4,   -22,    -3,   -55,   -55,   -51,    67,
     -17,   203,   -19,     2,     3,     4,   -21,   583,   -57,   -20,
     -20,   -20,   100,    -3,    -3,    -3,   108,   594,    -4,   -26,
     240,   242,    98,   136,   -21,   -21,   -21,   -19,   -83,   204,
     -55,   -56,   -56,   297,   -27,   621,    -4,    -4,    -4,   -42,
     -17,   372,   373,   116,   -26,   -19,   -19,   -19,    64,   285,
     446,   308,   -18,   -83,   -42,    84,    85,   -84,   -17,   -27,
      -8,   -18,   -26,   -26,   -26,   -56,    -8,   651,   -17,   433,
     434,   -83,   -83,   -83,   461,   -51,   452,   -27,   -27,   -27,
     -18,   -51,   -84,   325,   -34,   -17,   100,   -51,   -18,   358,
     -51,   -17,    65,   466,   -18,   -51,   151,    75,   -34,    77,
     -84,   -84,   -84,   -51,   -15,   -77,   -77,   -77,   -11,   -51,
      66,   358,   -77,   -77,   -77,   -77,   -44,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   494,   -77,   167,    69,
     -77,   -44,   -15,   -11,   114,   -11,   -41,   -41,   -41,   -41,
     -11,   -77,   -36,   -77,   -77,   -77,   -77,   -77,    68,   -18,
      62,   -43,   -43,   -18,   -41,    63,   -36,   -57,   -57,   404,
     872,   -57,   -57,   -41,   -41,   -41,   -41,   -41,   304,   -41,
     -41,   -79,   -79,   -79,   -77,   -15,   -41,   -18,   -79,   -79,
     -79,   -79,   402,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -57,   -79,   174,   -57,   -79,   -57,   -16,    70,
     321,   -57,   -15,   -55,   -55,   -45,   354,   -79,   -15,   -79,
     -79,   -79,   -79,   -79,   226,   227,   228,   -16,    71,   -12,
     -45,   229,   230,   231,   232,   -16,   233,   234,   354,   -56,
     -56,   -16,   235,   236,   237,   -37,     1,   100,   -55,   -42,
     -42,   -54,   -54,   -55,   -12,   -16,   -12,    98,   106,   -37,
     238,   -12,    72,   370,     2,     3,     4,   -41,   -41,   -41,
     -41,   100,   -57,   -57,   -56,   -41,   -55,   -55,    86,   -56,
      87,    98,    88,    80,   760,   -41,   -54,   147,    73,   -49,
     -57,   -54,   391,    -5,   -41,   -41,   -41,   -41,   -41,    -5,
     -41,   -41,   771,   -32,     1,   -49,   -57,   -41,   401,   -32,
     -55,   -49,   -57,   -56,   -56,    74,   -55,   779,   203,    21,
      22,    23,     2,     3,     4,   -71,    24,    25,    26,    27,
     421,    28,    29,   176,    30,    31,    32,    33,    34,    35,
     392,   177,   824,   107,    36,   137,   431,   -56,   -40,   -58,
     -58,    89,    90,   -56,   143,    37,   -38,    38,    39,   178,
     179,   180,   -40,   449,   -43,   -43,   -43,   -43,   -55,   -55,
     -38,   -67,   -43,   457,    80,   132,   -58,    91,   -58,    92,
     -58,   133,   -43,   150,   -58,   -53,   -55,   138,    80,   -58,
     471,   -43,   -43,   -43,   -43,   -43,   -52,   -43,   -43,   -15,
      81,   -53,   -55,   -15,   -43,    82,   -46,   -53,   -55,   481,
     623,   -14,   -52,   139,   240,   242,    80,   141,   -52,   406,
     407,   -46,   -16,   499,   635,   -32,   -16,   -15,   240,   242,
     -32,   -42,   -42,   -42,   -42,   206,   -14,   -51,   -14,   -42,
     140,   -11,    -9,   -14,   -11,   -56,   -56,   142,    -9,   -42,
     -16,   144,   673,   207,   208,   209,   240,   242,   -42,   -42,
     -42,   -42,   -42,   -56,   -42,   -42,   -11,   -39,   -11,   -57,
     -57,   -42,   155,   -11,   -44,   -44,   -44,   -44,   158,   -56,
     -47,   -39,   -44,   -44,   -44,   -56,   145,   -57,   -41,   -41,
     -41,   -41,   -44,   -54,   -54,   -47,   169,   170,   171,   172,
     173,   -44,   -44,   -44,   -44,   -44,   175,   -44,   -44,   161,
     -50,   -54,   162,   -13,   -44,   -41,   -41,   -41,   -41,   -41,
     435,   -41,   436,   -41,   437,   626,   -50,   -54,   -41,   -48,
     728,   134,   -50,   -54,   -45,   -45,   163,   135,   -13,   638,
     -13,   -34,   -34,   -34,   -48,   -13,   -32,   164,   -34,   -34,
     -34,   -34,   -32,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   165,   -34,   -34,    16,   -34,   676,   736,    -8,
      16,   849,   -83,   -85,    -8,   166,   308,   -34,   752,   -34,
     -34,   -34,   -34,   -34,   -32,   -35,   -83,   -85,   308,   688,
     -32,   865,   -84,    17,   -32,   -36,   -36,   -36,   403,   -35,
     -32,   168,   -36,   -36,   -36,   -36,   -84,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -86,   -36,   -36,   362,
     -36,   -45,   -45,   -45,   -45,   916,   308,   422,   -71,   -45,
     -86,   -36,   706,   -36,   -36,   -36,   -36,   -36,   363,   -45,
     922,   -32,   -55,   -55,   923,   -54,   -54,   -32,   -45,   -45,
     -45,   -45,   -45,   364,   -45,   -45,   -32,   146,   -79,   946,
     -55,   -45,   -32,   285,   -80,   -46,   -46,   -41,   -41,   -41,
     -41,   721,   485,   -77,   486,   -41,   487,   325,   -80,   -54,
     794,   -71,   -71,   -71,   -71,   325,   -49,   365,   814,   -71,
     366,   -49,   -81,   304,   -41,   -41,   -41,   -41,   -41,   -71,
     -41,   325,   -41,   367,   358,   304,   -81,   -41,   -71,   -71,
     -71,   -71,   -71,   386,   432,   -71,   -74,   -37,   -37,   -37,
     368,   -71,   -74,   369,   -37,   -37,   -37,   -37,   746,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,    95,   -37,
     -37,   383,   -37,   304,   -47,   -47,   -46,   -46,   -46,   -46,
     206,    95,   384,   -37,   -46,   -37,   -37,   -37,   -37,   -37,
     385,   -59,   -59,   206,   -46,    96,   -56,   -56,   207,   208,
     209,    80,   387,   -46,   -46,   -46,   -46,   -46,   444,   -46,
     -46,   207,   208,   209,   -56,   148,   -46,    80,   -59,   -82,
     -59,   149,   -59,   388,   321,   389,   -59,   789,   308,   308,
     308,   -59,   321,   -82,   390,   809,   393,   887,   -76,   308,
     794,   240,   242,   -63,   325,   325,   325,   394,   321,   -59,
     -59,   354,   -76,   899,    95,   325,   814,   240,   242,   959,
     -78,   358,   358,   358,   358,   358,   206,   -59,   310,    -7,
     308,    -6,   396,   -79,   -78,    -7,   -59,    -6,   -59,   395,
     -59,   459,   308,   -59,   207,   208,   209,   398,   854,   -59,
     -11,   -11,   -12,   -12,   397,   325,   -10,   -11,   794,   -12,
     308,   325,   -10,   399,   814,   400,   325,   358,   870,   -67,
     -67,   -67,   -67,   -14,   -14,   -48,   -48,    93,   298,   -49,
     -14,   794,   794,   794,   794,   794,   814,   814,   814,   814,
     814,   416,   417,   418,   426,   419,   -67,   -67,   -67,   -67,
     -67,   794,   814,   420,   -67,   304,   304,   304,   -75,   -67,
     117,   -67,   890,   -23,   -75,    82,   304,   789,   -23,   -59,
     -59,   321,   321,   321,    60,   -32,   423,    -7,   902,   424,
     425,   -32,   321,   809,   -43,   -43,   -43,   -43,   354,   354,
     354,   354,   354,   428,   427,   724,   -59,   304,   -59,    61,
     -59,   -22,   -43,   -59,   -49,   -12,   -22,   732,   -12,   304,
     -49,   -43,   -43,   -43,   -43,   -43,   -25,   -43,   -43,   -13,
     -13,   -25,   321,   510,   -43,   789,   -13,   304,   321,   285,
     -12,   809,   -12,   321,   354,   541,   552,   -12,   194,   -33,
     581,   285,   285,   429,   -33,   748,   285,   430,   789,   789,
     789,   789,   789,   809,   809,   809,   809,   809,   592,   447,
     448,   453,   454,   455,   285,   223,   223,   223,   789,   809,
     243,   243,   261,   261,   261,   277,   -33,   615,   462,   -60,
     -60,   463,   -33,   133,   194,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   616,   464,   780,   -60,   -63,   791,
     135,   -60,   -60,   619,   800,   629,   -60,   811,   -60,   285,
     -60,   133,   630,   -60,   -34,   649,   685,   467,   135,   -60,
     825,   285,   149,   828,   -36,   -53,   -37,   -52,   -60,   -50,
     -60,   -53,   -60,   -52,   -40,   -50,   -60,   468,   261,   261,
     261,   -60,   340,   340,   -40,   -40,   -40,   469,   340,   696,
     194,   -40,   -40,   -40,   -40,   149,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -38,   -40,   -40,   703,   -40,
     -47,   -47,   -47,   -47,   149,   711,   -39,   473,   -47,   474,
     -40,   149,   -40,   -40,   -40,   -40,   -40,   718,   -47,   723,
     727,   475,   476,   149,   194,   149,   285,   -47,   -47,   -47,
     -47,   -47,   735,   -47,   -47,   743,   477,   478,   285,   751,
     -47,   149,   251,   252,   253,   285,   479,   883,   884,   885,
     758,   769,   254,   194,   255,   256,   285,   285,   893,   894,
     257,   258,   259,   895,   896,   897,   480,   -14,   -49,   194,
     -14,   -61,   -61,   777,   905,   906,   495,   496,   260,   285,
     907,   908,   909,   910,   911,   497,   505,   822,   536,   912,
     833,   194,   -14,   285,   -14,   506,   149,   537,   -61,   -14,
     -61,   918,   -61,   -54,   -54,   -53,   -61,   194,   -52,   840,
     -53,   -61,   844,   -52,   925,   149,   194,   928,   149,   930,
     931,   -54,   547,   934,   194,   936,   937,   877,   -60,   -60,
     408,   548,   409,   149,   410,   576,   -43,   -43,   -43,   -43,
     948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     -48,   -48,   -48,   -48,   577,   -60,   587,   -60,   -48,   -60,
     960,   961,   -60,   -43,   -43,   -43,   -43,   -43,   -48,   -43,
     194,   -43,   588,   617,   -83,   618,   -43,   -48,   -48,   -48,
     -48,   -48,   915,   -48,   -48,   921,     9,   -85,   285,   -35,
     -48,   285,     9,   223,   223,   223,   -50,   644,   261,   261,
     261,   -50,   194,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   194,   382,   223,   223,   223,   458,    63,   261,
     261,   261,    82,   194,   223,   223,   223,   679,   472,   261,
     261,   261,   645,    82,   680,   682,   194,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   243,   -62,   -62,   261,
     261,   261,   500,   194,   223,   223,   223,    82,   683,   261,
     261,   261,   681,   194,   602,   602,   602,   602,   602,   602,
     602,   602,   602,   277,   -62,   553,   -62,   684,   -62,   686,
      63,   194,   -62,   628,   243,   243,   277,   -62,    82,   687,
     756,   640,   678,   223,   223,   223,    82,    82,   243,   243,
     277,   690,   855,   871,   223,   223,   223,    82,    82,   261,
     261,   261,   691,   194,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   340,   692,   693,   243,   243,   277,   -38,
     -38,   -38,   -13,   694,   695,   -13,   -38,   -38,   -38,   -38,
     -72,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     194,   -38,   -38,   892,   -38,   904,   697,   -13,    82,   -13,
      82,   698,   699,   700,   -13,   -38,   704,   -38,   -38,   -38,
     -38,   -38,   -39,   -39,   -39,   701,   702,   705,   -53,   -39,
     -39,   -39,   -39,   -52,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   194,   -39,   -39,   -50,   -39,   708,   712,
     709,   710,   -72,   713,   714,   715,   716,   717,   -39,   719,
     -39,   -39,   -39,   -39,   -39,   720,   725,   726,   -54,   -54,
     744,   -83,   -83,   -83,   729,   730,   -84,   731,   -83,   -83,
     -83,   -83,   194,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   767,   -83,   -83,   374,   -83,   375,   733,   376,
     734,   -86,   -54,   737,   738,   739,   740,   -83,   -54,   -83,
     -83,   -83,   -83,   -83,   745,   -85,   -85,   -85,   741,   749,
     757,   750,   -85,   -85,   -85,   -85,   742,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -53,   -85,   -85,   194,
     -85,   -70,   -52,   -50,   -69,   -68,   -73,   768,   -70,   -69,
     -68,   -85,   775,   -85,   -85,   -85,   -85,   -85,   -61,   -61,
     261,   261,   261,   -73,   776,   820,   830,   821,   831,   832,
     194,   261,   261,   261,   834,   835,   -61,   850,   261,   261,
     261,   836,   837,   838,   839,   -61,   841,   -61,   194,   -61,
     101,   -64,   -61,   261,   261,   261,   842,   843,   -61,   845,
     846,   847,   851,   194,   852,   866,   340,   340,   195,   340,
     261,   261,   261,   857,   340,   340,   858,   340,   261,   261,
     261,   -67,   -67,   -67,   -67,   859,   860,   861,   194,   415,
     340,   340,   862,   340,   863,   224,   224,   224,   867,   -67,
     244,   244,   262,   262,   262,   278,   868,   -65,   -67,   -67,
     -67,   -67,   -67,   873,   195,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   -35,   -35,   -35,   874,   875,   876,
     878,   -35,   -35,   -35,   -35,   879,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   880,   -35,   -35,   882,   -35,
     -66,   -64,   -65,   -66,   913,   914,   -42,   -42,   -42,   -42,
     -35,   919,   -35,   -35,   -35,   -35,   -35,   -80,   262,   262,
     262,   920,   341,   341,   -42,   -81,   -82,     0,   341,   -76,
     195,   938,   939,   -42,   -42,   -42,   -42,   -42,   940,   -42,
     -42,   243,   243,   277,   942,   943,   -42,   944,   945,   947,
     -59,   -59,   -78,   -84,   -84,   -84,     0,   243,   243,   277,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   195,   -84,   -84,   -59,   -84,   -59,
       0,   -59,     0,     0,   -59,     0,     0,     0,     0,   -84,
     -59,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,     0,
       0,     0,     0,   195,   340,   340,     0,   340,     0,     0,
     340,   340,     0,   340,   -86,   -86,   -86,     0,     0,   195,
       0,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -86,     0,   -86,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   195,     0,     0,
     -60,   -60,     0,   -77,   -77,   -77,   195,     0,     0,     0,
     -77,   -77,   -77,   -77,   195,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   881,   -60,   -77,   -60,
       0,   -60,   -62,   -62,   -60,     0,     0,     0,     0,   -77,
     -60,   -77,   -77,   -77,   -77,   -77,   -43,   -43,   -43,   -43,
     -62,   -59,   -59,     0,   -43,     0,     0,     0,     0,   -62,
     195,   -62,     0,   -62,     0,     0,   -62,     0,     0,   -59,
       0,     0,   -62,   -43,   -43,   -43,   -43,   -43,   -59,   -43,
     -59,   -43,   -59,   224,   224,   224,   -43,     0,   262,   262,
     262,     0,   195,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   195,     0,   224,   224,   224,     0,     0,   262,
     262,   262,     0,   195,   224,   224,   224,     0,     0,   262,
     262,   262,     0,     0,     0,     0,   195,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   244,     0,     0,   262,
     262,   262,     0,   195,   224,   224,   224,     0,     0,   262,
     262,   262,     0,   195,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   278,     0,     0,     0,     0,     0,     0,
       0,   195,     0,     0,   244,   244,   278,     0,     0,     0,
       0,     0,     0,   224,   224,   224,     0,     0,   244,   244,
     278,     0,     0,     0,   224,   224,   224,     0,     0,   262,
     262,   262,     0,   195,   660,   660,   660,   660,   660,   660,
     660,   660,   660,   341,     0,     0,   244,   244,   278,   -80,
     -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     195,   -80,   -80,     0,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -81,   -81,   -81,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   195,   -81,   -81,     0,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -61,   -61,
       0,   -82,   -82,   -82,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   195,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -82,   -61,   -82,   -61,     0,   -61,
       0,     0,   -61,     0,     0,     0,     0,   -82,   -61,   -82,
     -82,   -82,   -82,   -82,     0,   -76,   -76,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,   -76,   195,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -62,   -62,
     262,   262,   262,     0,     0,     0,     0,     0,     0,     0,
     195,   262,   262,   262,     0,     0,     0,     0,   262,   262,
     262,     0,     0,     0,     0,   -62,     0,   -62,   195,   -62,
       0,     0,   -62,   262,   262,   262,     0,     0,   -62,     0,
       0,     0,     0,   195,     0,     0,   341,   341,   202,   341,
     262,   262,   262,     0,   341,   341,     0,   341,   262,   262,
     262,   -72,   -72,   -72,   -72,     0,     0,     0,   195,   -72,
     341,   341,     0,   341,     0,   103,   103,   103,     0,   -72,
     250,   250,   263,   263,   263,   284,     0,     0,   -72,   -72,
     -72,   -72,   -72,     0,   202,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   -79,   -79,   -79,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   924,     0,   -79,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -79,     0,   -79,   -79,   -79,   -79,   -79,     0,   263,   263,
     263,     0,   347,   347,   -44,     0,     0,     0,   347,     0,
     202,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   244,   244,   278,     0,     0,   -44,     0,     0,     0,
     -61,   -61,     0,   -78,   -78,   -78,     0,   244,   244,   278,
     -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   202,   -78,   -78,   -61,   -78,   -61,
       0,   -61,     0,     0,   -61,     0,     0,     0,     0,   -78,
       0,   -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,
       0,     0,     0,   202,   341,   341,     0,   341,     0,     0,
     341,   341,     0,   341,   -34,   -34,   -34,     0,     0,   202,
       0,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,     0,     0,   -34,
       0,   202,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   202,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   202,     0,     0,     0,
     -28,   -28,   -28,   -28,   202,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,     0,     0,   -28,     0,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,     0,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -42,   -42,   -42,   -42,
       0,   -60,   -60,     0,   -42,     0,     0,     0,     0,     0,
     202,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -60,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,   -60,   -42,
     -60,   -42,   -60,   103,   103,   103,   -42,     0,   263,   263,
     263,     0,   202,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   202,     0,   103,   103,   103,     0,     0,   263,
     263,   263,     0,   202,   103,   103,   103,     0,     0,   263,
     263,   263,     0,     0,     0,     0,   202,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   250,     0,     0,   263,
     263,   263,     0,   202,   103,   103,   103,     0,     0,   263,
     263,   263,     0,   202,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   284,     0,     0,     0,     0,     0,     0,
       0,   202,     0,     0,   250,   250,   284,     0,     0,     0,
       0,     0,     0,   103,   103,   103,     0,     0,   250,   250,
     284,     0,     0,     0,   103,   103,   103,     0,     0,   263,
     263,   263,     0,   202,   662,   662,   662,   662,   662,   662,
     662,   662,   662,   347,     0,     0,   250,   250,   284,   -30,
     -30,   -30,     0,     0,     0,     0,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     202,   -30,     0,     0,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,   -30,    21,    22,    23,     0,     0,     0,     0,    24,
      25,    26,    27,     0,    28,    29,   176,    79,    31,    32,
      33,    34,    35,   202,   177,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
      38,    39,   178,   179,   180,     0,     0,     0,     0,     0,
       0,   -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   202,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,     0,   -36,   -44,   -44,   -44,
     -44,     0,   -62,   -62,     0,   -44,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,   201,     0,   -44,   -44,   -44,   -44,   -44,   -62,
     -44,   -62,   -44,   -62,     0,     0,   -62,   -44,     0,   202,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   225,
     225,   225,     0,     0,   249,   249,   111,   112,   113,   283,
     263,   263,   263,     0,     0,     0,     0,     0,   201,     0,
     202,   263,   263,   263,     0,     0,     0,     0,   263,   263,
     263,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,     0,     0,   263,   263,   263,     0,     0,     0,     0,
       0,     0,     0,   202,     0,     0,   347,   347,     0,   347,
     263,   263,   263,     0,   347,   347,     0,   347,   263,   263,
     263,     0,   314,   314,   314,     0,   346,   346,   202,     0,
     347,   347,   346,   347,   201,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,     0,
     -29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   201,   -37,
     -37,   -37,     0,     0,     0,     0,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,     0,     0,   -37,     0,     0,   201,     0,     0,
       0,   -42,   -42,   -42,   -42,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   201,     0,     0,     0,   -45,   -45,   -45,
     -45,   250,   250,   284,     0,   -45,     0,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   201,   -42,   250,   250,   284,
       0,   -42,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   201,   -45,     0,     0,     0,     0,   -45,     0,     0,
     201,     0,     0,     0,     0,     0,     0,     0,   201,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,     0,     0,   347,   347,     0,   347,     0,     0,
     347,   347,     0,   347,   -61,   -61,   -71,   -71,   -71,   -71,
     -71,     0,    83,     0,   -71,   -72,   -72,   -72,   -72,   -71,
       0,     0,   -61,   -72,   201,     0,     0,     0,     0,     0,
       0,   -61,     0,   -61,     0,   -61,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   225,   225,   225,
     -72,     0,   507,   508,   509,   -72,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,     0,   225,   225,
     225,     0,     0,   538,   539,   540,     0,   201,   225,   225,
     225,     0,     0,   549,   550,   551,     0,     0,     0,     0,
     201,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,     0,     0,   578,   579,   580,     0,   201,   225,   225,
     225,     0,     0,   589,   590,   591,     0,   201,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,   249,   249,
     283,     0,     0,     0,     0,     0,     0,   225,   225,   225,
       0,     0,   249,   249,   283,     0,     0,     0,   225,   225,
     225,     0,     0,   646,   647,   648,     0,   201,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,     0,     0,
     249,   249,   283,   -40,   -40,   -40,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   201,   -40,     0,     0,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -38,   -38,   -38,     0,
       0,     0,     0,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   201,   -38,     0,
       0,   -38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -39,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,   201,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,     0,     0,
     -39,   -46,   -46,   -46,   -46,     0,     0,     0,     0,   -46,
       0,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,   -63,   -63,   -63,   -63,     0,   200,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,     0,   -46,     0,     0,     0,
       0,   -46,     0,   201,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   102,   104,   105,   -63,     0,   248,   248,
       0,   -63,     0,   282,   314,   314,   314,     0,     0,     0,
       0,     0,   200,     0,   201,   314,   314,   314,     0,     0,
       0,     0,   314,   314,   314,     0,     0,     0,     0,     0,
       0,     0,   201,     0,     0,     0,     0,   314,   314,   314,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     346,   346,     0,   346,   314,   314,   314,     0,   346,   346,
       0,   346,   314,   314,   314,     0,   152,   153,   154,     0,
     345,   345,   201,     0,   346,   346,   345,   346,   200,   -85,
     -85,   -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -85,     0,     0,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   200,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,     0,     0,   -31,     0,
       0,   200,     0,     0,     0,   -44,   -44,   -44,   -44,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,   200,     0,     0,
       0,   -47,   -47,   -47,   -47,   249,   249,   283,     0,   -47,
       0,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   200,
     -44,   249,   249,   283,     0,   -44,     0,     0,   -47,   -47,
     -47,   -47,   -47,     0,   -47,   200,   -47,     0,     0,     0,
       0,   -47,     0,     0,   200,     0,     0,     0,     0,   -62,
     -62,     0,   200,     0,   -48,   -48,   -48,   -48,     0,     0,
       0,     0,   -48,     0,     0,     0,     0,   -62,   346,   346,
       0,   346,     0,     0,   346,   346,   -62,   346,   -62,     0,
     -62,   -48,   -48,   -48,   -48,   -48,   305,   -48,     0,   -48,
       0,     0,     0,     0,   -48,     0,     0,     0,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   322,     0,
       0,   502,   503,   504,   355,     0,     0,     0,     0,     0,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,     0,   533,   534,   535,     0,   355,     0,     0,     0,
       0,   200,   544,   545,   546,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,     0,     0,   -41,   -41,   -41,
     -41,   200,   584,   585,   586,   -41,     0,     0,     0,     0,
       0,   200,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,     0,     0,   -41,   -41,   -41,   -41,   -41,   200,
     -41,   -41,   248,   248,   282,     0,     0,   -41,     0,     0,
       0,   631,   632,   633,     0,     0,   248,   248,   282,     0,
       0,     0,   641,   642,   643,     0,     0,     0,     0,     0,
       0,   200,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,     0,     0,   248,   248,   282,   -35,   -35,   -35,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   200,   -35,
       0,     0,   -35,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,   -43,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,     0,   199,
       0,   200,     0,   -43,     0,     0,     0,     0,   -86,   -86,
     -86,     0,     0,     0,     0,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,
     -86,   247,   247,   -86,     0,     0,   281,     0,     0,     0,
     200,     0,     0,     0,   -86,   199,   -86,   -86,   -86,   -86,
     -86,   127,   128,   129,   130,     0,     0,     0,     0,     0,
     -80,   -80,   -80,     0,     0,     0,     0,   -80,   -80,   -80,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,     0,     0,   -80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   200,   -80,   -80,
     -80,   -80,   -80,   344,   344,     0,     0,     0,     0,   344,
       0,   199,     0,     0,   -42,   -42,   -42,   -42,   753,   754,
     755,     0,   -42,     0,     0,     0,     0,     0,   200,   761,
     762,   763,     0,     0,     0,     0,   764,   765,   766,     0,
       0,   -42,   -42,   -42,   -42,   -42,   200,   -42,   -42,     0,
       0,   772,   773,   774,   -42,   199,     0,     0,     0,     0,
       0,   200,     0,     0,   345,   345,     0,   345,   797,   798,
     799,     0,   345,   345,     0,   345,   817,   818,   819,     0,
       0,     0,     0,     0,   199,     0,   200,     0,   345,   345,
       0,   345,     0,     0,   -81,   -81,   -81,     0,     0,     0,
     199,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,     0,     0,   -81,
       0,     0,   199,     0,     0,     0,     0,     0,     0,     0,
     -81,     0,   -81,   -81,   -81,   -81,   -81,     0,   199,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   199,     0,     0,
       0,   -82,   -82,   -82,   -82,   199,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     0,   -82,     0,     0,   -82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   305,   -82,   -82,   -82,   -82,   -82,     0,     0,   248,
     248,   282,     0,   305,     0,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   248,   248,   282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,   -44,     0,     0,     0,     0,
       0,   305,     0,   199,   199,   199,   199,   199,   199,   528,
     529,   530,   531,   199,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   345,   345,   199,   345,     0,   -44,   345,   345,
       0,   345,     0,     0,     0,     0,     0,   199,   247,   247,
     247,   247,   247,   571,   572,   573,   574,   247,     0,     0,
       0,     0,   322,     0,   199,   790,     0,   198,     0,     0,
     322,     0,     0,   810,   199,   281,   281,   281,   281,   281,
     610,   611,   612,   613,   281,     0,   322,     0,     0,   355,
       0,     0,   199,     0,     0,   247,   247,   281,     0,   246,
     246,     0,     0,     0,   280,     0,     0,     0,     0,   247,
     247,   281,     0,   198,     0,     0,   124,   125,   126,   -45,
     -45,   -45,   -45,     0,   199,   344,   344,   344,   344,   344,
     667,   668,   669,   670,   344,     0,     0,   247,   247,   281,
       0,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,     0,   -45,     0,     0,     0,     0,   -45,
       0,   199,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
     442,   343,   343,     0,     0,     0,     0,   343,     0,   198,
     -67,     0,     0,   305,   305,   305,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   305,   790,   -67,     0,     0,   322,
     322,   322,   -67,     0,   199,   -45,   -45,   -45,   -45,     0,
     322,   810,     0,   -45,     0,     0,   355,   355,   355,   355,
     355,     0,     0,   198,     0,   305,     0,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -45,   -45,   305,   -45,   -45,
       0,     0,     0,   199,     0,   -45,     0,     0,     0,     0,
     322,     0,   198,   790,     0,   305,   322,     0,     0,   810,
       0,   322,   355,     0,   -73,   -73,   -73,   -73,   198,     0,
       0,     0,   -73,     0,     0,     0,   790,   790,   790,   790,
     790,   810,   810,   810,   810,   810,     0,     0,     0,     0,
     198,   -73,   -73,   -73,   -73,   -73,   790,   810,     0,   -73,
     199,     0,     0,     0,   -73,     0,   198,     0,     0,     0,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
     -76,   -76,   -76,   198,     0,     0,     0,   -76,   -76,   -76,
     -76,   199,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   -76,     0,     0,   -76,     0,     0,     0,   199,
       0,     0,     0,     0,     0,     0,   -76,     0,   -76,   -76,
     -76,   -76,   -76,     0,   199,     0,     0,   344,   344,   198,
     344,     0,     0,     0,     0,   344,   344,     0,   344,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   199,
       0,   344,   344,   -71,   344,     0,     0,     0,     0,     0,
       0,   198,   198,   198,   525,   526,   527,     0,     0,     0,
       0,   198,   -71,   -71,   -71,   -71,   -71,     0,   371,   -71,
       0,     0,   198,     0,     0,   -71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   198,   246,   246,   568,   569,
     570,     0,     0,     0,     0,   246,     0,     0,   -46,   -46,
     -46,   -46,   198,     0,     0,     0,   -46,     0,     0,     0,
       0,     0,   198,   280,   280,   607,   608,   609,     0,     0,
       0,     0,   280,     0,     0,   -46,   -46,   -46,   -46,   -46,
     198,   -46,   -46,   246,   246,   280,     0,     0,   -46,     0,
       0,     0,   247,   247,   281,     0,     0,   246,   246,   280,
       0,     0,     0,   -47,   -47,   -47,   -47,     0,   247,   247,
     281,   -47,   198,   343,   343,   664,   665,   666,     0,     0,
       0,     0,   343,     0,     0,   246,   246,   280,     0,     0,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,     0,
       0,     0,     0,   -47,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,   344,   344,     0,   344,     0,
       0,   344,   344,     0,   344,     0,     0,     0,     0,   197,
       0,   -78,   -78,   -78,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   198,   -78,     0,     0,   -78,     0,     0,     0,
       0,   245,   245,     0,     0,     0,   279,   -78,     0,   -78,
     -78,   -78,   -78,   -78,     0,   197,   122,   123,     0,     0,
      21,    22,    23,     0,     0,     0,     0,    24,    25,    26,
      27,   198,    28,    29,   176,   360,    31,    32,    33,    34,
      35,     0,   177,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,    38,    39,
     178,   179,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   342,   342,     0,     0,     0,     0,   342,
       0,   197,     0,     0,     0,     0,     0,     0,   198,     0,
     -26,   -26,   -26,     0,     0,     0,     0,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,     0,     0,   -26,     0,     0,     0,   198,
       0,   306,     0,     0,     0,   197,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,   198,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   198,   323,   197,   343,   343,     0,   343,   356,
       0,     0,     0,   343,   343,     0,   343,     0,     0,     0,
     197,   -45,   -45,   -45,   -45,     0,     0,   198,     0,   343,
     343,   356,   343,     0,     0,     0,     0,     0,     0,   -45,
       0,     0,   197,     0,     0,     0,     0,     0,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,     0,     0,   197,     0,
       0,   -45,     0,     0,    21,    22,    23,   197,     0,     0,
       0,    24,    25,    26,    27,   197,    28,    29,   176,   451,
      31,    32,    33,    34,    35,     0,   177,     0,     0,    36,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,     0,
      37,     0,    38,    39,   178,   179,   180,     0,     0,   -48,
     -48,   -48,   -48,   -71,     0,     0,     0,   -48,     0,     0,
       0,   197,   -71,   -71,   -71,   -71,   -71,     0,   722,   -71,
     246,   246,   280,     0,     0,   -71,   -48,   -48,   -48,   -48,
     -48,     0,   -48,   -48,     0,     0,   246,   246,   280,   -48,
       0,     0,     0,   197,   522,   524,     0,     0,     0,   181,
     182,   183,     0,   197,     0,     0,   184,   185,   186,   187,
       0,   188,   189,     0,   197,     0,     0,   190,   191,   192,
       0,     0,   -70,   -70,   -70,   -70,     0,   197,   565,   567,
       0,     0,     0,   343,   343,   193,   343,   245,     0,   343,
     343,     0,   343,     0,   197,     0,     0,   196,     0,   -70,
     -70,   -70,   -70,   -70,   197,   604,   606,   -70,     0,     0,
       0,     0,   -70,     0,   279,     0,     0,     0,     0,     0,
      94,     0,   197,     0,     0,   245,   245,   279,     0,   109,
     110,     0,     0,     0,   115,     0,     0,     0,     0,   245,
     245,   279,   118,   120,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,   -72,   131,   197,   661,   663,     0,   -69,   -69,
     -69,   -69,   -72,     0,   342,     0,     0,   245,   245,   279,
       0,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,     0,
       0,     0,     0,     0,   -72,   -69,   -69,   -69,   -69,   -69,
       0,   197,   307,   -69,     0,     0,     0,     0,   -69,     0,
       0,   156,   157,    21,    22,    23,     0,   159,     0,   160,
      24,    25,    26,    27,     0,    28,    29,   176,   465,    31,
      32,    33,    34,    35,   324,   177,     0,     0,    36,     0,
     357,     0,     0,     0,   197,     0,     0,     0,     0,    37,
       0,    38,    39,   178,   179,   180,     0,    21,    22,    23,
       0,     0,   357,   196,    24,    25,    26,    27,     0,    28,
      29,   176,   493,    31,    32,    33,    34,    35,     0,   177,
       0,     0,    36,   197,     0,     0,     0,     0,     0,     0,
       0,     0,   196,    37,     0,    38,    39,   178,   179,   180,
       0,     0,     0,   -83,   -83,   -83,     0,     0,   196,     0,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -83,     0,     0,   -83,     0,
     196,     0,     0,     0,     0,     0,     0,     0,     0,   -83,
     197,   -83,   -83,   -83,   -83,   -83,   196,     0,   -73,   -73,
     -73,   -73,     0,     0,     0,   443,   -73,     0,     0,     0,
       0,   309,     0,   196,     0,     0,   -73,     0,     0,     0,
       0,   197,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
       0,     0,   -73,     0,     0,     0,   306,     0,   -73,   197,
       0,     0,     0,   326,     0,     0,     0,     0,   306,   359,
       0,     0,     0,     0,   197,     0,     0,   342,   342,   196,
     342,     0,     0,     0,     0,   342,   342,     0,   342,     0,
       0,   359,     0,     0,     0,   -46,   -46,   -46,   -46,   197,
       0,   342,   342,     0,   342,     0,   306,     0,     0,     0,
       0,   120,     0,   -46,     0,     0,     0,     0,     0,     0,
       0,   532,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
       0,     0,   120,     0,     0,   -46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,   575,     0,   323,     0,     0,
     792,     0,   120,     0,   -47,   323,     0,     0,   812,     0,
       0,     0,   120,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   323,   614,     0,   356,     0,   -47,     0,     0,     0,
     120,     0,     0,   624,   625,   627,     0,   -41,   -41,   -41,
     -41,     0,   245,   245,   279,   -41,     0,   636,   637,   639,
       0,   -48,   -48,   -48,   -48,     0,     0,     0,   245,   245,
     279,     0,   120,     0,   -41,   -41,   -41,   -41,   -41,   -48,
     -41,   -41,   671,     0,     0,   674,   675,   677,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,     0,     0,     0,     0,
       0,   -48,     0,     0,   -43,   -43,   -43,   -43,     0,   196,
       0,     0,   -43,     0,     0,   342,   342,     0,   342,     0,
       0,   342,   342,     0,   342,     0,     0,     0,   306,   306,
     306,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   306,
     792,     0,     0,     0,   323,   323,   323,     0,   -71,   -71,
     -71,   -71,   196,     0,     0,   323,   812,     0,     0,     0,
       0,   356,   356,   356,   356,   356,     0,     0,     0,     0,
     306,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
       0,   450,   306,   -71,   -42,   -42,   -42,   -42,   -71,     0,
       0,   196,   -42,     0,     0,   323,     0,     0,   792,     0,
     306,   323,     0,     0,   812,     0,   323,   356,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,     0,
       0,   792,   792,   792,   792,   792,   812,   812,   812,   812,
     812,     0,     0,     0,     0,     0,     0,   307,     0,     0,
       0,   792,   812,     0,    21,    22,    23,     0,   196,   307,
       0,    24,    25,    26,    27,     0,    28,    29,   176,   501,
      31,    32,    33,    34,    35,     0,   177,     0,     0,    36,
       0,     0,     0,   -67,   -67,   -67,   -67,     0,     0,   120,
      37,   381,    38,    39,   178,   179,   180,   307,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -67,     0,     0,
       0,     0,   120,   -67,     0,   781,   782,     0,   796,     0,
       0,     0,     0,   801,   802,     0,   816,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,   -73,     0,   120,   324,   826,
     827,   793,   829,     0,     0,   -73,   324,     0,     0,   813,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -27,
     -27,   -27,   324,     0,     0,   357,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,     0,     0,   -27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   309,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,   309,    21,
      22,    23,     0,     0,     0,     0,    24,    25,    26,    27,
       0,    28,    29,   176,   622,    31,    32,    33,    34,    35,
       0,   177,     0,     0,    36,   -44,   -44,   -44,   -44,     0,
     888,   889,   891,   -44,     0,    37,   309,    38,    39,   178,
     179,   180,     0,     0,     0,     0,   900,   901,   903,   307,
     307,   307,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     307,   793,     0,     0,     0,   324,   324,   324,     0,     0,
       0,     0,     0,     0,     0,     0,   324,   813,   -68,   -68,
     -68,   -68,   357,   357,   357,   357,   357,   326,     0,     0,
     795,   307,     0,   926,   927,   326,   929,     0,   815,   932,
     933,     0,   935,   307,     0,   -68,   -68,   -68,   -68,   -68,
       0,   326,     0,   -68,   359,     0,   324,     0,   -68,   793,
       0,   307,   324,     0,     0,   813,     0,   324,   357,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   793,   793,   793,   793,   793,   813,   813,   813,
     813,   813,     0,     0,     0,     0,     0,    21,    22,    23,
       0,     0,   793,   813,    24,    25,    26,    27,     0,    28,
      29,   176,   634,    31,    32,    33,    34,    35,     0,   177,
       0,     0,    36,     0,     0,     0,     0,   -58,   -58,   438,
     439,     0,     0,    37,     0,    38,    39,   178,   179,   180,
       0,     0,     0,     0,     0,   -58,     0,     0,   309,   309,
     309,     0,     0,     0,   -58,   440,   -58,   441,   -58,   309,
     795,   -58,     0,     0,   326,   326,   326,   -58,     0,   -63,
     -63,   -63,   -63,     0,     0,   326,   815,   -41,   -41,   -41,
     -41,   359,   359,   359,   359,   359,     0,   -63,     0,     0,
     309,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,     0,   309,   -63,   -41,   -41,   -41,   -41,   -41,   -63,
     -41,   -41,     0,     0,     0,   326,     0,   -41,   795,     0,
     309,   326,     0,     0,   815,     0,   326,   359,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   795,   795,   795,   795,   795,   815,   815,   815,   815,
     815,     0,     0,     0,     0,     0,    21,    22,    23,     0,
       0,   795,   815,    24,    25,    26,    27,     0,    28,    29,
     176,   672,    31,    32,    33,    34,    35,     0,   177,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,    38,    39,   178,   179,   180,   -84,
     -84,   -84,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,     0,     0,   -84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,     0,   -84,   -84,   -84,
     -84,   -84,    21,    22,    23,     0,     0,     0,     0,    24,
      25,    26,    27,     0,    28,    29,   176,   848,    31,    32,
      33,    34,    35,     0,   177,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
      38,    39,   178,   179,   180,    21,    22,    23,     0,     0,
       0,     0,    24,    25,    26,    27,     0,    28,    29,   176,
     864,    31,    32,    33,    34,    35,     0,   177,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    38,    39,   178,   179,   180,    21,    22,
      23,     0,     0,     0,     0,    24,    25,    26,    27,     0,
      28,    29,   176,   886,    31,    32,    33,    34,    35,     0,
     177,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,    38,    39,   178,   179,
     180,    21,    22,    23,     0,     0,     0,     0,    24,    25,
      26,    27,     0,    28,    29,   176,   898,    31,    32,    33,
      34,    35,     0,   177,     0,     0,    36,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,     0,    37,     0,    38,
      39,   178,   179,   180,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -72,   -42,   -42,   -42,   -42,     0,   -72,     0,     0,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -44,
     -44,   -44,   -44,     0,   -43,     0,     0,     0,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -45,   -45,   -45,
     -45,     0,   -42,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -71,   -71,   -71,   -71,     0,   -44,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -67,   -67,   -67,   -67,     0,   -45,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,     0,   689,   -71,     0,
     -67,     0,     0,     0,   -71,   -46,   -46,   -46,   -46,   -67,
     -67,   -67,   -67,   -67,     0,     0,   -67,     0,     0,     0,
       0,     0,   -67,   -47,   -47,   -47,   -47,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,     0,
     -46,   -48,   -48,   -48,   -48,   -46,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,     0,   -47,     0,   -47,   -73,
     -73,   -73,   -73,   -47,     0,     0,     0,   -73,   -48,   -48,
     -48,   -48,   -48,     0,   -48,     0,   -48,   -70,   -70,   -70,
     -70,   -48,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,     0,     0,   -73,     0,   -70,     0,     0,     0,   -73,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -70,     0,     0,     0,     0,     0,   -70,   -69,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,     0,     0,   -68,     0,     0,
     -69,   -46,   -46,   -46,   -46,     0,   -68,   -68,   -68,   -68,
     -68,     0,     0,   -68,     0,   -47,   -47,   -47,   -47,   -68,
       0,     0,     0,   -48,   -48,   -48,   -48,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,     0,     0,     0,     0,
       0,   -46,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -48,   -48,   -48,   -48,   -48,   -47,   -48,   -48,   -72,   -72,
     -72,   -72,     0,   -48,     0,     0,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,     0,   -64,   -72,   -72,   -72,   -72,   -72,
       0,     0,   -72,   -64,   -64,   -64,   -64,   -64,   -72,     0,
     -64,   -65,   -65,   -65,   -65,     0,   -64,     0,     0,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -65,
       0,     0,     0,   -64,   -64,   -64,   -64,   -66,   -65,   -65,
     -65,   -65,   -65,     0,     0,   -65,   -66,   -66,   -66,   -66,
     -66,   -65,     0,   -66,   -73,   -73,   -73,   -73,     0,   -66,
     -64,   -64,   -64,   -64,   -64,     0,     0,     0,   -64,     0,
       0,     0,   -73,   -64,   -65,   -65,   -65,   -65,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,   -66,
     -66,   -66,   -66,     0,   -73,     0,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,
     -58,   -58,   377,   378,   -65,     0,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,   -66,   -63,   -63,   -63,   -63,   -66,
       0,     0,     0,   -67,   -67,   -67,   -67,   -58,   379,   -58,
     380,   -58,     0,     0,   -58,     0,     0,     0,     0,     0,
     -58,     0,   -63,   -63,   -63,   -63,   -63,     0,     0,   -63,
     -67,   -67,   -67,   -67,   -67,   -63,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,     0,   -67,   -67,   -67,   -67,
     -67,     0,     0,   -67,   -72,   -72,   -72,   -72,   -72,   -67,
       0,     0,   -72,   -69,   -69,   -69,   -69,   -72,   -70,   -70,
     -70,   -70,   -70,     0,     0,   -70,     0,   -68,   -68,   -68,
     -68,   -70,     0,     0,     0,   -73,   -73,   -73,   -73,     0,
     -69,   -69,   -69,   -69,   -69,     0,     0,   -69,     0,   -72,
     -72,   -72,   -72,   -69,   -68,   -68,   -68,   -68,   -68,     0,
       0,   -68,   -73,   -73,   -73,   -73,   -73,   -68,     0,     0,
     -73,   -64,   -64,   -64,   -64,   -73,   -72,   -72,   -72,   -72,
     -72,     0,     0,   -72,     0,   -65,   -65,   -65,   -65,   -72,
       0,     0,     0,   -66,   -66,   -66,   -66,     0,   -64,   -64,
     -64,   -64,   -64,     0,     0,   -64,     0,   -73,   -73,   -73,
     -73,   -64,   -65,   -65,   -65,   -65,   -65,     0,     0,   -65,
     -66,   -66,   -66,   -66,   -66,   -65,     0,   -66,     0,     0,
       0,     0,     0,   -66,   -73,   -73,   -73,   -73,   -73,     0,
       0,   -73,   -34,   -34,   -34,     0,     0,   -73,     0,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,     0,   -34,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -34,     0,
     -34,   -34,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,
     -36,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -36,     0,   -36,   -36,   -77,   -77,   -77,   -77,     0,
     -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,     0,
       0,   856,     0,   -77,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -77,     0,   -77,   -77,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,     0,   -37,     0,     0,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -37,     0,   -37,
     -37,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,
       0,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
     -40,     0,   -40,   -40,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,     0,   -38,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -38,     0,   -38,   -38,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,     0,   -39,     0,   -39,     0,     0,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -39,     0,   -39,   -39,
     -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,   -83,
     -83,   -83,   -83,   -83,     0,     0,   -83,     0,   -83,     0,
       0,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -83,
       0,   -83,   -83,   -85,   -85,   -85,   -85,     0,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,     0,     0,   -85,
       0,   -85,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -85,     0,   -85,   -85,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,   -35,     0,     0,     0,     0,     0,
       0,     0,   -84,   -84,   -84,   -35,     0,   -35,   -35,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,     0,     0,   -84,     0,   -84,     0,     0,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -84,     0,
     -84,   -84,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
       0,   -86,   -86,   -86,   -86,   -86,     0,     0,   -86,     0,
     -86,     0,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -86,     0,   -86,   -86,   -79,   -79,   -79,   -79,     0,
     -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,     0,
       0,   917,     0,   -79,     0,     0,     0,     0,     0,     0,
       0,   -77,   -77,   -77,   -79,     0,   -79,   -79,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,     0,     0,   941,     0,   -77,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -77,     0,   -77,
     -77,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,     0,     0,   -80,     0,   -80,
       0,     0,     0,     0,     0,     0,     0,   -81,   -81,   -81,
     -80,     0,   -80,   -80,   -81,   -81,   -81,   -81,     0,   -81,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,     0,     0,
     -81,     0,   -81,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -81,     0,   -81,   -81,   -82,   -82,   -82,
     -82,     0,   -82,   -82,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,     0,   -82,     0,   -82,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -82,     0,   -82,   -82,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,     0,     0,   -76,     0,   -76,     0,
       0,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -76,
       0,   -76,   -76,   -79,   -79,   -79,   -79,     0,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,     0,     0,   958,
       0,   -79,     0,     0,     0,     0,     0,     0,     0,   -78,
     -78,   -78,   -79,     0,   -79,   -79,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,
       0,     0,   -78,     0,   -78,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    23,   -78,     0,   -78,   -78,    24,
      25,    26,    27,     0,    28,    29,   298,     0,   299,   300,
      33,    34,    35,     0,     0,     0,     0,   301,     0,     0,
       0,     0,     0,     0,     0,    21,    22,    23,    37,     0,
     302,   303,    24,    25,    26,    27,     0,    28,    29,   315,
       0,   316,   317,    33,    34,    35,     0,     0,     0,     0,
     318,     0,     0,     0,     0,     0,     0,     0,    21,    22,
      23,    37,     0,   319,   320,    24,    25,    26,    27,     0,
      28,    29,   348,     0,   349,   350,    33,    34,    35,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,    37,     0,   352,   353,    24,    25,
      26,    27,     0,    28,    29,   176,     0,    31,    32,    33,
      34,    35,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,   -20,   -20,   -20,    37,     0,    38,
      39,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,     0,     0,     0,     0,   -20,
       0,     0,     0,     0,     0,     0,     0,   -21,   -21,   -21,
     -20,     0,   -20,   -20,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,
       0,     0,   -21,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -21,     0,   -21,   -21,   -34,   -34,   -34,
     -34,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,     0,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -34,     0,   -34,   -34,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,   -36,     0,
       0,     0,     0,     0,     0,     0,   -37,   -37,   -37,   -36,
       0,   -36,   -36,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,   -37,     0,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,   -37,     0,   -37,   -37,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,   -40,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,   -38,   -40,     0,   -40,   -40,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,   -38,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -38,     0,
     -38,   -38,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
     -39,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
     -19,   -39,     0,   -39,   -39,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,     0,
       0,     0,     0,   -19,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -19,     0,   -19,   -19,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,   -26,     0,     0,     0,
       0,     0,     0,     0,   -83,   -83,   -83,   -26,     0,   -26,
     -26,   -83,   -83,   -83,   -83,     0,   -83,   -83,   -83,     0,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,   -83,
       0,     0,     0,     0,     0,     0,     0,   -85,   -85,   -85,
     -83,     0,   -83,   -83,   -85,   -85,   -85,   -85,     0,   -85,
     -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,     0,   -85,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -85,     0,   -85,   -85,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,   -27,   -35,     0,   -35,   -35,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,     0,
       0,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -27,
       0,   -27,   -27,   -84,   -84,   -84,   -84,     0,   -84,   -84,
     -84,     0,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,
       0,   -84,     0,     0,     0,     0,     0,     0,     0,   -86,
     -86,   -86,   -84,     0,   -84,   -84,   -86,   -86,   -86,   -86,
       0,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
       0,     0,     0,     0,   -86,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    23,   -86,     0,   -86,   -86,    24,
      25,    26,    27,     0,    28,    29,   783,     0,   784,   785,
      33,    34,    35,     0,     0,     0,     0,   786,     0,     0,
       0,     0,     0,     0,     0,    21,    22,    23,    37,     0,
     787,   788,    24,    25,    26,    27,     0,    28,    29,   803,
       0,   804,   805,    33,    34,    35,     0,     0,     0,     0,
     806,     0,     0,     0,     0,     0,     0,     0,   -80,   -80,
     -80,    37,     0,   807,   808,   -80,   -80,   -80,   -80,     0,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,
       0,     0,     0,   -80,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -80,     0,   -80,   -80,   -81,   -81,
     -81,   -81,     0,   -81,   -81,   -81,     0,   -81,   -81,   -81,
     -81,   -81,     0,     0,     0,     0,   -81,     0,     0,     0,
       0,     0,     0,     0,   -82,   -82,   -82,   -81,     0,   -81,
     -81,   -82,   -82,   -82,   -82,     0,   -82,   -82,   -82,     0,
     -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,   -82,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -82,     0,   -82,   -82,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,     0,     0,
     -78,   -78,   -78,   -76,     0,   -76,   -76,   -78,   -78,   -78,
     -78,     0,   -78,   -78,   -78,     0,   -78,   -78,   -78,   -78,
     -78,     0,    21,    22,    23,   -78,     0,     0,     0,    24,
      25,    26,    27,     0,    28,    29,   -78,     0,   -78,   -78,
      33,    34,    35,    21,    22,    23,     0,     0,     0,     0,
      24,    25,    26,    27,     0,    28,    29,     0,    37,     0,
      76,    33,    34,    35,    21,    22,    23,     0,     0,     0,
       0,    24,    25,    26,    27,     0,    28,    29,     0,    37,
       0,   456,    33,    34,    35,    21,    22,    23,     0,     0,
       0,     0,    24,    25,    26,    27,     0,    28,    29,     0,
      37,     0,   470,    33,    34,    35,    21,    22,    23,     0,
       0,     0,     0,    24,    25,    26,    27,     0,    28,    29,
       0,    37,     0,   498,    33,    34,    35,    21,    22,    23,
       0,     0,     0,     0,    24,    25,    26,    27,     0,    28,
      29,     0,    37,     0,   853,    33,    34,    35,   181,   182,
     183,     0,     0,     0,     0,   184,   185,   186,   187,     0,
     188,   189,     0,    37,     0,   869,   190,   191,   192,   181,
     182,   183,     0,     0,     0,     0,   184,   185,   186,   187,
       0,   188,   189,     0,   193,   119,     0,   190,   191,   192,
     181,   182,   183,     0,     0,     0,     0,   184,   185,   186,
     187,     0,   188,   189,     0,   193,   511,     0,   190,   191,
     192,   181,   182,   183,     0,     0,     0,     0,   184,   185,
     186,   187,     0,   188,   189,     0,   193,   542,     0,   190,
     191,   192,   181,   182,   183,     0,     0,     0,     0,   184,
     185,   186,   187,     0,   188,   189,     0,   193,   554,     0,
     190,   191,   192,   181,   182,   183,     0,     0,     0,     0,
     184,   185,   186,   187,     0,   188,   189,     0,   193,   582,
       0,   190,   191,   192,   181,   182,   183,     0,     0,     0,
       0,   184,   185,   186,   187,     0,   188,   189,     0,   193,
     593,     0,   190,   191,   192,   181,   182,   183,     0,     0,
       0,     0,   184,   185,   186,   187,     0,   188,   189,     0,
     193,   620,     0,   190,   191,   192,   181,   182,   183,     0,
       0,     0,     0,   184,   185,   186,   187,     0,   188,   189,
       0,   193,   650,     0,   190,   191,   192,   181,   182,   183,
       0,     0,     0,     0,   184,   185,   186,   187,     0,   188,
     189,     0,   193,   759,     0,   190,   191,   192,   181,   182,
     183,     0,     0,     0,     0,   184,   185,   186,   187,     0,
     188,   189,     0,   193,   770,     0,   190,   191,   192,   181,
     182,   183,     0,     0,     0,     0,   184,   185,   186,   187,
       0,   188,   189,     0,   193,   778,     0,   190,   191,   192,
      21,    22,    23,     0,     0,     0,     0,    24,    25,    26,
      27,     0,    28,    29,     0,   193,   823,     0,    33,    34,
      35,   210,   211,   212,     0,     0,     0,     0,   213,   214,
     215,   216,     0,   217,   218,     0,    37,     0,     0,   219,
     220,   221,   226,   227,   228,     0,     0,     0,     0,   229,
     230,   231,   232,     0,   233,   234,     0,   222,     0,     0,
     235,   236,   237,   264,   265,   266,     0,     0,     0,     0,
     267,   268,   269,   270,     0,   271,   272,     0,   238,     0,
       0,   273,   274,   275,   287,   288,   289,     0,     0,     0,
       0,    24,    25,    26,   290,     0,   291,   292,     0,   276,
       0,     0,    33,    34,    35,   251,   252,   253,     0,     0,
       0,     0,   311,   312,   313,   254,     0,   255,   256,     0,
     293,     0,     0,   257,   258,   259,   327,   328,   329,     0,
       0,     0,     0,   330,   331,   332,   333,     0,   334,   335,
       0,   260,     0,     0,   336,   337,   338,   513,   514,   515,
       0,     0,     0,     0,   184,   185,   186,   516,     0,   517,
     518,     0,   339,     0,     0,   190,   191,   192,   556,   557,
     558,     0,     0,     0,     0,   229,   230,   231,   559,     0,
     560,   561,     0,   519,     0,     0,   235,   236,   237,   595,
     596,   597,     0,     0,     0,     0,   267,   268,   269,   598,
       0,   599,   600,     0,   562,     0,     0,   273,   274,   275,
     652,   653,   654,     0,     0,     0,     0,   330,   331,   332,
     655,     0,   656,   657,     0,   601,     0,     0,   336,   337,
     338,   -45,   -45,   -45,   -45,     0,     0,     0,     0,   -45,
     -71,   -71,   -71,   -71,     0,     0,   658,     0,   -71,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,   -46,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,     0,   -71,   -71,   -71,
     -71,   -71,     0,   482,   -71,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -47,   -47,   -47,   -47,     0,     0,
       0,     0,   -47,   -48,   -48,   -48,   -48,     0,     0,     0,
       0,   -48,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
     492,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,     0,   -67,
     -67,   -67,   -67,   -67,     0,     0,   -67,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,     0,
       0,   -72,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,   -73,     0,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -71,   -71,   -71,   -71,   -71,     0,
     747,   -71,   -73,   -73,   -73,   -73,   -73,     0,     0,   -73,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -58,   -58,   488,   489,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,     0,     0,     0,     0,     0,     0,     0,   -58,   490,
     -58,   491,   -58,     0,     0,   -58,   -63,   -63,   -63,   -63,
     -63,     0,     0,   -63,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -67,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -70,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -68,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -72,   -64,   -64,
     -64,   -64,   -64,     0,     0,   -64,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -65,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,   -73,
     -73,   -73,   -73,   -73,     0,     0,   -73,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,   -41,     0,     0,     0,     0,
       0,   -43,   -43,   -43,   -43,   -41,     0,     0,     0,   -43,
       0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,   -43,
     -41,     0,     0,     0,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,   -42,     0,     0,     0,     0,     0,   -44,
     -44,   -44,   -44,   -42,     0,     0,     0,   -44,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -44,   -42,     0,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,   -45,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -45,     0,     0,     0,   -71,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -71,   -45,     0,     0,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,     0,
     405,   -46,   -46,   -46,   -46,     0,     0,     0,     0,   -46,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,   -46,
       0,     0,     0,   -47,     0,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -47,   -46,   -41,   -41,   -41,   -41,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -48,
     -48,   -48,   -48,   -41,     0,     0,     0,   -48,     0,     0,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -48,   -41,   -43,
     -43,   -43,   -43,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,     0,   -48,   -42,   -42,   -42,   -42,   -43,     0,     0,
     -44,   -44,   -44,   -44,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -42,   -43,     0,   -45,   -45,   -45,   -45,   -44,     0,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -44,   -44,   -44,
     -44,   -44,   -45,   -44,   -71,   -71,   -71,   -71,     0,     0,
       0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -46,   -46,
     -46,   -46,   -71,     0,     0,   -47,   -47,   -47,   -47,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -46,   707,     0,   -48,
     -48,   -48,   -48,   -47,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -47,   -47,   -47,   -47,   -47,   -48,   -47,   -58,
     -58,   411,   412,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,     0,   -48,   -63,   -63,   -63,   -63,   -58,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,   -58,   413,   -58,   414,
     -58,   -63,   -70,   -70,   -70,   -70,   -67,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -67,   -67,   -67,   -67,   -67,
     -70,   -69,   -69,   -69,   -69,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,     0,   -68,   -68,   -68,   -68,   -69,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -68,   -64,   -64,   -64,   -64,   -72,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -72,   -72,   -72,
     -72,   -72,   -64,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,     0,   -66,   -66,   -66,
     -66,   -65,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -66,     0,     0,     0,     0,
     -73,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -73,
     -73,   -73,   -73,   -73
};

static const yytype_int16 yycheck[] =
{
       7,     0,     0,     6,   176,    43,   371,     6,     6,    40,
       0,     0,    14,    40,     6,     7,     0,     6,   286,    24,
       0,     0,    13,    24,     6,     7,    17,   392,    41,    39,
      40,     0,    17,    46,    39,    25,    63,    39,    39,    41,
     405,    25,   310,     0,    46,    25,     6,     7,    40,    13,
      41,    13,     0,    43,    44,    45,    25,   422,    40,    43,
      44,    45,    61,    43,    44,    45,    69,   432,    25,     0,
      69,    69,    61,   100,    43,    44,    45,    25,     0,    41,
      40,     6,     7,    13,     0,   450,    43,    44,    45,    24,
      13,     6,     7,    40,    25,    43,    44,    45,    39,    46,
     286,   108,    13,    25,    39,     6,     7,     0,    13,    25,
      40,    13,    43,    44,    45,    40,    46,   482,    41,     6,
       7,    43,    44,    45,   310,    40,   298,    43,    44,    45,
      41,    46,    25,   140,    26,    40,   135,    24,    40,   146,
      41,    46,    39,   315,    46,    46,   135,    37,    40,    39,
      43,    44,    45,    40,    13,     3,     4,     5,    14,    46,
      39,   168,    10,    11,    12,    13,    24,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   348,    25,    26,    39,
      28,    39,    41,    39,    74,    41,     6,     7,     8,     9,
      46,    39,    26,    41,    42,    43,    44,    45,    13,    13,
      41,    39,    40,    17,    24,    46,    40,     6,     7,   240,
      26,     6,     7,    33,    34,    35,    36,    37,   108,    39,
      40,     3,     4,     5,    40,    13,    46,    41,    10,    11,
      12,    13,   239,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    41,    25,    26,    40,    28,    46,    13,    39,
     140,    46,    40,     6,     7,    24,   146,    39,    46,    41,
      42,    43,    44,    45,     3,     4,     5,    13,    39,    14,
      39,    10,    11,    12,    13,    40,    15,    16,   168,     6,
       7,    46,    21,    22,    23,    26,    25,   286,    41,    39,
      40,     6,     7,    46,    39,    41,    41,   286,    15,    40,
      39,    46,    39,   193,    43,    44,    45,     6,     7,     8,
       9,   310,     6,     7,    41,    14,     6,     7,    33,    46,
      35,   310,    37,   361,   689,    24,    41,    24,    39,    24,
      24,    46,   222,    40,    33,    34,    35,    36,    37,    46,
      39,    40,   707,    40,    25,    40,    40,    46,   238,    46,
      40,    46,    46,     6,     7,    39,    46,   722,    13,     3,
       4,     5,    43,    44,    45,    24,    10,    11,    12,    13,
     260,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      39,    25,   747,    16,    28,    24,   276,    40,    26,     6,
       7,     8,     9,    46,    40,    39,    26,    41,    42,    43,
      44,    45,    40,   293,     6,     7,     8,     9,     6,     7,
      40,    24,    14,   303,   452,    40,    33,    34,    35,    36,
      37,    46,    24,    13,    41,    24,    24,    24,   466,    46,
     320,    33,    34,    35,    36,    37,    24,    39,    40,    13,
      41,    40,    40,    17,    46,    46,    24,    46,    46,   339,
     453,    14,    40,    24,   453,   453,   494,    24,    46,     6,
       7,    39,    13,   353,   467,    41,    17,    41,   467,   467,
      46,     6,     7,     8,     9,    25,    39,    24,    41,    14,
     108,    14,    40,    46,    17,     6,     7,    24,    46,    24,
      41,    40,   495,    43,    44,    45,   495,   495,    33,    34,
      35,    36,    37,    24,    39,    40,    39,    26,    41,     6,
       7,    46,   140,    46,     6,     7,     8,     9,   146,    40,
      24,    40,    14,    39,    40,    46,    40,    24,     6,     7,
       8,     9,    24,     6,     7,    39,   164,   165,   166,   167,
     168,    33,    34,    35,    36,    37,   174,    39,    40,    40,
      24,    24,    40,    14,    46,    33,    34,    35,    36,    37,
      33,    39,    35,    41,    37,   455,    40,    40,    46,    24,
      24,    40,    46,    46,    39,    40,    40,    46,    39,   469,
      41,     3,     4,     5,    39,    46,    40,    40,    10,    11,
      12,    13,    46,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    40,    25,    26,    13,    28,   497,    24,    17,
      13,   783,    26,    26,    17,    40,   623,    39,    24,    41,
      42,    43,    44,    45,    40,    26,    40,    40,   635,   519,
      46,   803,    26,    41,    40,     3,     4,     5,    41,    40,
      46,    40,    10,    11,    12,    13,    40,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    26,    25,    26,    39,
      28,     6,     7,     8,     9,    24,   673,    39,    40,    14,
      40,    39,   562,    41,    42,    43,    44,    45,    39,    24,
      24,    40,     6,     7,    26,     6,     7,    46,    33,    34,
      35,    36,    37,    39,    39,    40,    40,    40,    40,    26,
      24,    46,    46,    46,    26,    39,    40,     6,     7,     8,
       9,   601,    33,    40,    35,    14,    37,   724,    40,    40,
     727,     6,     7,     8,     9,   732,    41,    13,   735,    14,
      13,    46,    26,   623,    33,    34,    35,    36,    37,    24,
      39,   748,    41,    39,   751,   635,    40,    46,    33,    34,
      35,    36,    37,    13,    39,    40,    40,     3,     4,     5,
      39,    46,    46,    39,    10,    11,    12,    13,   658,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    13,    25,
      26,    39,    28,   673,    39,    40,     6,     7,     8,     9,
      25,    13,    39,    39,    14,    41,    42,    43,    44,    45,
      39,     6,     7,    25,    24,    40,     6,     7,    43,    44,
      45,   849,    13,    33,    34,    35,    36,    37,    40,    39,
      40,    43,    44,    45,    24,    40,    46,   865,    33,    26,
      35,    46,    37,    39,   724,    39,    41,   727,   845,   846,
     847,    46,   732,    40,    39,   735,    39,   850,    26,   856,
     857,   850,   850,    24,   861,   862,   863,    39,   748,     6,
       7,   751,    40,   866,    13,   872,   873,   866,   866,    26,
      26,   878,   879,   880,   881,   882,    25,    24,    39,    40,
     887,    40,    13,    40,    40,    46,    33,    46,    35,    39,
      37,    40,   899,    40,    43,    44,    45,    39,   788,    46,
      39,    40,    39,    40,    13,   912,    40,    46,   915,    46,
     917,   918,    46,    39,   921,    39,   923,   924,   808,     6,
       7,     8,     9,    39,    40,    39,    40,    14,    17,    24,
      46,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,    13,    13,    39,    13,    39,    33,    34,    35,    36,
      37,   958,   959,    39,    41,   845,   846,   847,    40,    46,
      41,    40,   852,    41,    46,    46,   856,   857,    46,     6,
       7,   861,   862,   863,    14,    40,    39,    17,   868,    39,
      39,    46,   872,   873,     6,     7,     8,     9,   878,   879,
     880,   881,   882,    39,    13,   623,    33,   887,    35,    39,
      37,    41,    24,    40,    40,    14,    46,   635,    17,   899,
      46,    33,    34,    35,    36,    37,    41,    39,    40,    39,
      40,    46,   912,    40,    46,   915,    46,   917,   918,    46,
      39,   921,    41,   923,   924,    40,    40,    46,    37,    41,
      40,    46,    46,    39,    46,   673,    46,    39,   938,   939,
     940,   941,   942,   943,   944,   945,   946,   947,    40,    13,
      13,    39,    39,    39,    46,    64,    65,    66,   958,   959,
      69,    70,    71,    72,    73,    74,    40,    40,    39,     6,
       7,    39,    46,    46,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    40,    39,   724,    24,    40,   727,
      46,     6,     7,    40,   732,    40,    33,   735,    35,    46,
      37,    46,    40,    40,    40,    40,    40,    39,    46,    46,
     748,    46,    46,   751,    40,    40,    40,    40,    33,    40,
      35,    46,    37,    46,    40,    46,    41,    39,   137,   138,
     139,    46,   141,   142,     3,     4,     5,    39,   147,    40,
     149,    10,    11,    12,    13,    46,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    40,    25,    26,    40,    28,
       6,     7,     8,     9,    46,    40,    40,    39,    14,    39,
      39,    46,    41,    42,    43,    44,    45,    40,    24,    40,
      40,    39,    13,    46,   193,    46,    46,    33,    34,    35,
      36,    37,    40,    39,    40,    40,    13,    39,    46,    40,
      46,    46,     3,     4,     5,    46,    39,   845,   846,   847,
      40,    40,    13,   222,    15,    16,    46,    46,   856,   857,
      21,    22,    23,   861,   862,   863,    39,    14,    40,   238,
      17,     6,     7,    40,   872,   873,    39,    39,    39,    46,
     878,   879,   880,   881,   882,    39,    15,    40,    15,   887,
      40,   260,    39,    46,    41,    16,    46,    16,    33,    46,
      35,   899,    37,     6,     7,    41,    41,   276,    41,    40,
      46,    46,    40,    46,   912,    46,   285,   915,    46,   917,
     918,    24,    15,   921,   293,   923,   924,    40,     6,     7,
      33,    16,    35,    46,    37,    15,     6,     7,     8,     9,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
       6,     7,     8,     9,    16,    33,    15,    35,    14,    37,
     958,   959,    40,    33,    34,    35,    36,    37,    24,    39,
     339,    41,    16,    15,    40,    16,    46,    33,    34,    35,
      36,    37,    40,    39,    40,    40,     0,    40,    46,    40,
      46,    46,     6,   362,   363,   364,    41,    15,   367,   368,
     369,    46,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    41,   383,   384,   385,    41,    46,   388,
     389,   390,    46,   392,   393,   394,   395,    24,    41,   398,
     399,   400,    16,    46,    24,    40,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,     6,     7,   418,
     419,   420,    41,   422,   423,   424,   425,    46,    40,   428,
     429,   430,    24,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,    33,    41,    35,    40,    37,    13,
      46,   450,    41,    41,   453,   454,   455,    46,    46,    13,
      15,    41,    41,   462,   463,   464,    46,    46,   467,   468,
     469,    24,    41,    41,   473,   474,   475,    46,    46,   478,
     479,   480,    24,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,    24,    40,   495,   496,   497,     3,
       4,     5,    14,    40,    40,    17,    10,    11,    12,    13,
      24,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     519,    25,    26,    41,    28,    41,    24,    39,    46,    41,
      46,    24,    24,    40,    46,    39,    13,    41,    42,    43,
      44,    45,     3,     4,     5,    40,    40,    13,    24,    10,
      11,    12,    13,    24,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   562,    25,    26,    24,    28,    40,    24,
      40,    40,    40,    24,    24,    40,    40,    40,    39,    13,
      41,    42,    43,    44,    45,    13,    24,    24,     6,     7,
      13,     3,     4,     5,    24,    24,    40,    24,    10,    11,
      12,    13,   601,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    15,    25,    26,    33,    28,    35,    24,    37,
      24,    40,    40,    24,    24,    24,    40,    39,    46,    41,
      42,    43,    44,    45,    13,     3,     4,     5,    40,    24,
      16,    24,    10,    11,    12,    13,    40,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    40,    25,    26,   658,
      28,    24,    40,    40,    24,    24,    24,    16,    40,    40,
      40,    39,    15,    41,    42,    43,    44,    45,     6,     7,
     679,   680,   681,    40,    16,    15,    40,    16,    40,    40,
     689,   690,   691,   692,    40,    40,    24,    39,   697,   698,
     699,    40,    40,    40,    40,    33,    40,    35,   707,    37,
      63,    24,    40,   712,   713,   714,    40,    40,    46,    40,
      40,    40,    39,   722,    39,    39,   725,   726,    37,   728,
     729,   730,   731,    40,   733,   734,    40,   736,   737,   738,
     739,     6,     7,     8,     9,    40,    40,    40,   747,    14,
     749,   750,    40,   752,    40,    64,    65,    66,    39,    24,
      69,    70,    71,    72,    73,    74,    39,    24,    33,    34,
      35,    36,    37,    40,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     3,     4,     5,    40,    40,    40,
      40,    10,    11,    12,    13,    40,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    40,    25,    26,    40,    28,
      24,    40,    40,    40,    24,    24,     6,     7,     8,     9,
      39,    24,    41,    42,    43,    44,    45,    40,   137,   138,
     139,    24,   141,   142,    24,    40,    40,    -1,   147,    40,
     149,    40,    40,    33,    34,    35,    36,    37,    40,    39,
      40,   850,   851,   852,    40,    40,    46,    40,    40,    40,
       6,     7,    40,     3,     4,     5,    -1,   866,   867,   868,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   193,    25,    26,    33,    28,    35,
      -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    39,
      46,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,   913,   914,    -1,   916,    -1,    -1,
     919,   920,    -1,   922,     3,     4,     5,    -1,    -1,   238,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,   276,    -1,    -1,
       6,     7,    -1,     3,     4,     5,   285,    -1,    -1,    -1,
      10,    11,    12,    13,   293,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    33,    28,    35,
      -1,    37,     6,     7,    40,    -1,    -1,    -1,    -1,    39,
      46,    41,    42,    43,    44,    45,     6,     7,     8,     9,
      24,     6,     7,    -1,    14,    -1,    -1,    -1,    -1,    33,
     339,    35,    -1,    37,    -1,    -1,    40,    -1,    -1,    24,
      -1,    -1,    46,    33,    34,    35,    36,    37,    33,    39,
      35,    41,    37,   362,   363,   364,    46,    -1,   367,   368,
     369,    -1,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    -1,   383,   384,   385,    -1,    -1,   388,
     389,   390,    -1,   392,   393,   394,   395,    -1,    -1,   398,
     399,   400,    -1,    -1,    -1,    -1,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,    -1,    -1,   418,
     419,   420,    -1,   422,   423,   424,   425,    -1,    -1,   428,
     429,   430,    -1,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   450,    -1,    -1,   453,   454,   455,    -1,    -1,    -1,
      -1,    -1,    -1,   462,   463,   464,    -1,    -1,   467,   468,
     469,    -1,    -1,    -1,   473,   474,   475,    -1,    -1,   478,
     479,   480,    -1,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,    -1,    -1,   495,   496,   497,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     519,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   562,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,     6,     7,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,   601,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    33,    28,    35,    -1,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    39,    46,    41,
      42,    43,    44,    45,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    26,   658,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,     6,     7,
     679,   680,   681,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     689,   690,   691,   692,    -1,    -1,    -1,    -1,   697,   698,
     699,    -1,    -1,    -1,    -1,    33,    -1,    35,   707,    37,
      -1,    -1,    40,   712,   713,   714,    -1,    -1,    46,    -1,
      -1,    -1,    -1,   722,    -1,    -1,   725,   726,    37,   728,
     729,   730,   731,    -1,   733,   734,    -1,   736,   737,   738,
     739,     6,     7,     8,     9,    -1,    -1,    -1,   747,    14,
     749,   750,    -1,   752,    -1,    64,    65,    66,    -1,    24,
      69,    70,    71,    72,    73,    74,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      39,    -1,    41,    42,    43,    44,    45,    -1,   137,   138,
     139,    -1,   141,   142,    24,    -1,    -1,    -1,   147,    -1,
     149,    -1,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,   850,   851,   852,    -1,    -1,    46,    -1,    -1,    -1,
       6,     7,    -1,     3,     4,     5,    -1,   866,   867,   868,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   193,    25,    26,    33,    28,    35,
      -1,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,   913,   914,    -1,   916,    -1,    -1,
     919,   920,    -1,   922,     3,     4,     5,    -1,    -1,   238,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,   276,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,   285,    -1,    -1,    -1,
      10,    11,    12,    13,   293,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    39,
      -1,    41,    42,    43,    44,    45,     6,     7,     8,     9,
      -1,     6,     7,    -1,    14,    -1,    -1,    -1,    -1,    -1,
     339,    33,    34,    35,    36,    37,    -1,    39,    40,    24,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    33,    39,
      35,    41,    37,   362,   363,   364,    46,    -1,   367,   368,
     369,    -1,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    -1,   383,   384,   385,    -1,    -1,   388,
     389,   390,    -1,   392,   393,   394,   395,    -1,    -1,   398,
     399,   400,    -1,    -1,    -1,    -1,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,    -1,    -1,   418,
     419,   420,    -1,   422,   423,   424,   425,    -1,    -1,   428,
     429,   430,    -1,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   450,    -1,    -1,   453,   454,   455,    -1,    -1,    -1,
      -1,    -1,    -1,   462,   463,   464,    -1,    -1,   467,   468,
     469,    -1,    -1,    -1,   473,   474,   475,    -1,    -1,   478,
     479,   480,    -1,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,    -1,    -1,   495,   496,   497,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     519,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   562,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,   601,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    -1,    28,     6,     7,     8,
       9,    -1,     6,     7,    -1,    14,    -1,    39,    -1,    41,
      42,    43,    44,    45,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    37,    -1,    33,    34,    35,    36,    37,    33,
      39,    35,    41,    37,    -1,    -1,    40,    46,    -1,   658,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    64,
      65,    66,    -1,    -1,    69,    70,    71,    72,    73,    74,
     679,   680,   681,    -1,    -1,    -1,    -1,    -1,    83,    -1,
     689,   690,   691,   692,    -1,    -1,    -1,    -1,   697,   698,
     699,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   707,    -1,
      -1,    -1,    -1,   712,   713,   714,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   722,    -1,    -1,   725,   726,    -1,   728,
     729,   730,   731,    -1,   733,   734,    -1,   736,   737,   738,
     739,    -1,   137,   138,   139,    -1,   141,   142,   747,    -1,
     749,   750,   147,   752,   149,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    42,    43,    44,    45,   193,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,   222,    -1,    -1,
      -1,     6,     7,     8,     9,    39,    -1,    41,    42,    43,
      44,    45,    -1,   238,    -1,    -1,    -1,     6,     7,     8,
       9,   850,   851,   852,    -1,    14,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   260,    41,   866,   867,   868,
      -1,    46,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,   276,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,   913,   914,    -1,   916,    -1,    -1,
     919,   920,    -1,   922,     6,     7,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,     6,     7,     8,     9,    46,
      -1,    -1,    24,    14,   339,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   362,   363,   364,
      41,    -1,   367,   368,   369,    46,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    -1,   383,   384,
     385,    -1,    -1,   388,   389,   390,    -1,   392,   393,   394,
     395,    -1,    -1,   398,   399,   400,    -1,    -1,    -1,    -1,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,    -1,    -1,   418,   419,   420,    -1,   422,   423,   424,
     425,    -1,    -1,   428,   429,   430,    -1,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   450,    -1,    -1,   453,   454,
     455,    -1,    -1,    -1,    -1,    -1,    -1,   462,   463,   464,
      -1,    -1,   467,   468,   469,    -1,    -1,    -1,   473,   474,
     475,    -1,    -1,   478,   479,   480,    -1,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,    -1,    -1,
     495,   496,   497,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   519,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   562,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,   601,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      28,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      -1,    39,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    37,    -1,    33,    34,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,   658,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    64,    65,    66,    41,    -1,    69,    70,
      -1,    46,    -1,    74,   679,   680,   681,    -1,    -1,    -1,
      -1,    -1,    83,    -1,   689,   690,   691,   692,    -1,    -1,
      -1,    -1,   697,   698,   699,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   707,    -1,    -1,    -1,    -1,   712,   713,   714,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   722,    -1,    -1,
     725,   726,    -1,   728,   729,   730,   731,    -1,   733,   734,
      -1,   736,   737,   738,   739,    -1,   137,   138,   139,    -1,
     141,   142,   747,    -1,   749,   750,   147,   752,   149,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,   193,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
      -1,   222,    -1,    -1,    -1,     6,     7,     8,     9,    39,
      -1,    41,    42,    43,    44,    45,    -1,   238,    -1,    -1,
      -1,     6,     7,     8,     9,   850,   851,   852,    -1,    14,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,   260,
      41,   866,   867,   868,    -1,    46,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,   276,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,   285,    -1,    -1,    -1,    -1,     6,
       7,    -1,   293,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    -1,    -1,    24,   913,   914,
      -1,   916,    -1,    -1,   919,   920,    33,   922,    35,    -1,
      37,    33,    34,    35,    36,    37,   108,    39,    -1,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,   339,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,
      -1,   362,   363,   364,   146,    -1,    -1,    -1,    -1,    -1,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,    -1,   383,   384,   385,    -1,   168,    -1,    -1,    -1,
      -1,   392,   393,   394,   395,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,    -1,    -1,     6,     7,     8,
       9,   422,   423,   424,   425,    14,    -1,    -1,    -1,    -1,
      -1,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,    -1,    -1,    33,    34,    35,    36,    37,   450,
      39,    40,   453,   454,   455,    -1,    -1,    46,    -1,    -1,
      -1,   462,   463,   464,    -1,    -1,   467,   468,   469,    -1,
      -1,    -1,   473,   474,   475,    -1,    -1,    -1,    -1,    -1,
      -1,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,    -1,    -1,   495,   496,   497,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   519,    25,
      -1,    -1,    28,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    37,
      -1,   562,    -1,    46,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      25,    69,    70,    28,    -1,    -1,    74,    -1,    -1,    -1,
     601,    -1,    -1,    -1,    39,    83,    41,    42,    43,    44,
      45,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,   658,    41,    42,
      43,    44,    45,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,   149,    -1,    -1,     6,     7,     8,     9,   679,   680,
     681,    -1,    14,    -1,    -1,    -1,    -1,    -1,   689,   690,
     691,   692,    -1,    -1,    -1,    -1,   697,   698,   699,    -1,
      -1,    33,    34,    35,    36,    37,   707,    39,    40,    -1,
      -1,   712,   713,   714,    46,   193,    -1,    -1,    -1,    -1,
      -1,   722,    -1,    -1,   725,   726,    -1,   728,   729,   730,
     731,    -1,   733,   734,    -1,   736,   737,   738,   739,    -1,
      -1,    -1,    -1,    -1,   222,    -1,   747,    -1,   749,   750,
      -1,   752,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
     238,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,   276,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,   285,    -1,    -1,
      -1,    10,    11,    12,    13,   293,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,   623,    41,    42,    43,    44,    45,    -1,    -1,   850,
     851,   852,    -1,   635,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   339,    -1,    -1,    -1,   866,   867,   868,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,
      -1,   673,    -1,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,    33,    34,    35,    36,    37,    -1,
      39,    40,   913,   914,   392,   916,    -1,    46,   919,   920,
      -1,   922,    -1,    -1,    -1,    -1,    -1,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,    -1,    -1,
      -1,    -1,   724,    -1,   422,   727,    -1,    37,    -1,    -1,
     732,    -1,    -1,   735,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,    -1,   748,    -1,    -1,   751,
      -1,    -1,   450,    -1,    -1,   453,   454,   455,    -1,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,   467,
     468,   469,    -1,    83,    -1,    -1,    86,    87,    88,     6,
       7,     8,     9,    -1,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,    -1,    -1,   495,   496,   497,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    46,
      -1,   519,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,   141,   142,    -1,    -1,    -1,    -1,   147,    -1,   149,
      24,    -1,    -1,   845,   846,   847,    -1,    -1,    -1,    33,
      34,    35,    36,    37,   856,   857,    40,    -1,    -1,   861,
     862,   863,    46,    -1,   562,     6,     7,     8,     9,    -1,
     872,   873,    -1,    14,    -1,    -1,   878,   879,   880,   881,
     882,    -1,    -1,   193,    -1,   887,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,   899,    39,    40,
      -1,    -1,    -1,   601,    -1,    46,    -1,    -1,    -1,    -1,
     912,    -1,   222,   915,    -1,   917,   918,    -1,    -1,   921,
      -1,   923,   924,    -1,     6,     7,     8,     9,   238,    -1,
      -1,    -1,    14,    -1,    -1,    -1,   938,   939,   940,   941,
     942,   943,   944,   945,   946,   947,    -1,    -1,    -1,    -1,
     260,    33,    34,    35,    36,    37,   958,   959,    -1,    41,
     658,    -1,    -1,    -1,    46,    -1,   276,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,
       3,     4,     5,   293,    -1,    -1,    -1,    10,    11,    12,
      13,   689,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,   707,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,   722,    -1,    -1,   725,   726,   339,
     728,    -1,    -1,    -1,    -1,   733,   734,    -1,   736,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,   747,
      -1,   749,   750,    14,   752,    -1,    -1,    -1,    -1,    -1,
      -1,   371,   372,   373,   374,   375,   376,    -1,    -1,    -1,
      -1,   381,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    -1,   392,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   405,   406,   407,   408,   409,
     410,    -1,    -1,    -1,    -1,   415,    -1,    -1,     6,     7,
       8,     9,   422,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,   432,   433,   434,   435,   436,   437,    -1,    -1,
      -1,    -1,   442,    -1,    -1,    33,    34,    35,    36,    37,
     450,    39,    40,   453,   454,   455,    -1,    -1,    46,    -1,
      -1,    -1,   850,   851,   852,    -1,    -1,   467,   468,   469,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,   866,   867,
     868,    14,   482,   483,   484,   485,   486,   487,    -1,    -1,
      -1,    -1,   492,    -1,    -1,   495,   496,   497,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,   519,
      -1,    -1,    -1,    -1,    -1,   913,   914,    -1,   916,    -1,
      -1,   919,   920,    -1,   922,    -1,    -1,    -1,    -1,    37,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   562,    25,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    74,    39,    -1,    41,
      42,    43,    44,    45,    -1,    83,    84,    85,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,   601,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,    -1,    -1,   147,
      -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,   658,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,   689,
      -1,   108,    -1,    -1,    -1,   193,    39,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,   707,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   722,   140,   222,   725,   726,    -1,   728,   146,
      -1,    -1,    -1,   733,   734,    -1,   736,    -1,    -1,    -1,
     238,     6,     7,     8,     9,    -1,    -1,   747,    -1,   749,
     750,   168,   752,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,   276,    -1,
      -1,    46,    -1,    -1,     3,     4,     5,   285,    -1,    -1,
      -1,    10,    11,    12,    13,   293,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      39,    -1,    41,    42,    43,    44,    45,    -1,    -1,     6,
       7,     8,     9,    24,    -1,    -1,    -1,    14,    -1,    -1,
      -1,   339,    33,    34,    35,    36,    37,    -1,    39,    40,
     850,   851,   852,    -1,    -1,    46,    33,    34,    35,    36,
      37,    -1,    39,    40,    -1,    -1,   866,   867,   868,    46,
      -1,    -1,    -1,   371,   372,   373,    -1,    -1,    -1,     3,
       4,     5,    -1,   381,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,   392,    -1,    -1,    21,    22,    23,
      -1,    -1,     6,     7,     8,     9,    -1,   405,   406,   407,
      -1,    -1,    -1,   913,   914,    39,   916,   415,    -1,   919,
     920,    -1,   922,    -1,   422,    -1,    -1,    37,    -1,    33,
      34,    35,    36,    37,   432,   433,   434,    41,    -1,    -1,
      -1,    -1,    46,    -1,   442,    -1,    -1,    -1,    -1,    -1,
      60,    -1,   450,    -1,    -1,   453,   454,   455,    -1,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,   467,
     468,   469,    82,    83,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,    93,   482,   483,   484,    -1,     6,     7,
       8,     9,    24,    -1,   492,    -1,    -1,   495,   496,   497,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    46,    33,    34,    35,    36,    37,
      -1,   519,   108,    41,    -1,    -1,    -1,    -1,    46,    -1,
      -1,   141,   142,     3,     4,     5,    -1,   147,    -1,   149,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   140,    25,    -1,    -1,    28,    -1,
     146,    -1,    -1,    -1,   562,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    44,    45,    -1,     3,     4,     5,
      -1,    -1,   168,   193,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,   601,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   222,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,   238,    -1,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    25,    -1,    -1,    28,    -1,
     260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
     658,    41,    42,    43,    44,    45,   276,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,   285,    14,    -1,    -1,    -1,
      -1,   108,    -1,   293,    -1,    -1,    24,    -1,    -1,    -1,
      -1,   689,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,   623,    -1,    46,   707,
      -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,   635,   146,
      -1,    -1,    -1,    -1,   722,    -1,    -1,   725,   726,   339,
     728,    -1,    -1,    -1,    -1,   733,   734,    -1,   736,    -1,
      -1,   168,    -1,    -1,    -1,     6,     7,     8,     9,   747,
      -1,   749,   750,    -1,   752,    -1,   673,    -1,    -1,    -1,
      -1,   371,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    -1,   392,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   405,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,   415,    -1,   724,    -1,    -1,
     727,    -1,   422,    -1,    24,   732,    -1,    -1,   735,    -1,
      -1,    -1,   432,    33,    34,    35,    36,    37,    -1,    39,
      40,   748,   442,    -1,   751,    -1,    46,    -1,    -1,    -1,
     450,    -1,    -1,   453,   454,   455,    -1,     6,     7,     8,
       9,    -1,   850,   851,   852,    14,    -1,   467,   468,   469,
      -1,     6,     7,     8,     9,    -1,    -1,    -1,   866,   867,
     868,    -1,   482,    -1,    33,    34,    35,    36,    37,    24,
      39,    40,   492,    -1,    -1,   495,   496,   497,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,     6,     7,     8,     9,    -1,   519,
      -1,    -1,    14,    -1,    -1,   913,   914,    -1,   916,    -1,
      -1,   919,   920,    -1,   922,    -1,    -1,    -1,   845,   846,
     847,    33,    34,    35,    36,    37,    -1,    39,    40,   856,
     857,    -1,    -1,    -1,   861,   862,   863,    -1,     6,     7,
       8,     9,   562,    -1,    -1,   872,   873,    -1,    -1,    -1,
      -1,   878,   879,   880,   881,   882,    -1,    -1,    -1,    -1,
     887,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,   899,    41,     6,     7,     8,     9,    46,    -1,
      -1,   601,    14,    -1,    -1,   912,    -1,    -1,   915,    -1,
     917,   918,    -1,    -1,   921,    -1,   923,   924,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      -1,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,    -1,    -1,    -1,    -1,    -1,    -1,   623,    -1,    -1,
      -1,   958,   959,    -1,     3,     4,     5,    -1,   658,   635,
      -1,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,   689,
      39,    14,    41,    42,    43,    44,    45,   673,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   707,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    -1,   722,    46,    -1,   725,   726,    -1,   728,    -1,
      -1,    -1,    -1,   733,   734,    -1,   736,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    -1,   747,   724,   749,
     750,   727,   752,    -1,    -1,    24,   732,    -1,    -1,   735,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,     3,
       4,     5,   748,    -1,    -1,   751,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,   623,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,   635,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    28,     6,     7,     8,     9,    -1,
     850,   851,   852,    14,    -1,    39,   673,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,   866,   867,   868,   845,
     846,   847,    33,    34,    35,    36,    37,    -1,    39,    40,
     856,   857,    -1,    -1,    -1,   861,   862,   863,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   872,   873,     6,     7,
       8,     9,   878,   879,   880,   881,   882,   724,    -1,    -1,
     727,   887,    -1,   913,   914,   732,   916,    -1,   735,   919,
     920,    -1,   922,   899,    -1,    33,    34,    35,    36,    37,
      -1,   748,    -1,    41,   751,    -1,   912,    -1,    46,   915,
      -1,   917,   918,    -1,    -1,   921,    -1,   923,   924,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   938,   939,   940,   941,   942,   943,   944,   945,
     946,   947,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,   958,   959,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,   845,   846,
     847,    -1,    -1,    -1,    33,    34,    35,    36,    37,   856,
     857,    40,    -1,    -1,   861,   862,   863,    46,    -1,     6,
       7,     8,     9,    -1,    -1,   872,   873,     6,     7,     8,
       9,   878,   879,   880,   881,   882,    -1,    24,    -1,    -1,
     887,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,   899,    40,    33,    34,    35,    36,    37,    46,
      39,    40,    -1,    -1,    -1,   912,    -1,    46,   915,    -1,
     917,   918,    -1,    -1,   921,    -1,   923,   924,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     947,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,   958,   959,    10,    11,    12,    13,    -1,    15,    16,
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
       9,    -1,    -1,    -1,    -1,    14,    -1,    39,    -1,    41,
      42,    43,    44,    45,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,     6,     7,     8,     9,    -1,    46,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,     6,
       7,     8,     9,    -1,    46,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,    39,    40,     6,     7,     8,
       9,    -1,    46,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,     6,     7,     8,     9,    -1,    46,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,    40,     6,     7,     8,     9,    -1,    46,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      24,    -1,    -1,    -1,    46,     6,     7,     8,     9,    33,
      34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    46,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,     6,     7,     8,     9,    46,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,    -1,    41,     6,
       7,     8,     9,    46,    -1,    -1,    -1,    14,    33,    34,
      35,    36,    37,    -1,    39,    -1,    41,     6,     7,     8,
       9,    46,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    24,    -1,    -1,    -1,    46,
       6,     7,     8,     9,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    46,    24,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    24,    -1,    -1,
      46,     6,     7,     8,     9,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,     6,     7,     8,     9,    46,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    46,    33,    34,    35,    36,    37,    -1,    39,    40,
      33,    34,    35,    36,    37,    46,    39,    40,     6,     7,
       8,     9,    -1,    46,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    33,    34,    35,    36,    37,
      -1,    -1,    40,    33,    34,    35,    36,    37,    46,    -1,
      40,     6,     7,     8,     9,    -1,    46,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,     6,     7,     8,     9,    24,    33,    34,
      35,    36,    37,    -1,    -1,    40,    33,    34,    35,    36,
      37,    46,    -1,    40,     6,     7,     8,     9,    -1,    46,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    24,    46,     6,     7,     8,     9,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,     6,
       7,     8,     9,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
       6,     7,     8,     9,    46,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    41,     6,     7,     8,     9,    46,
      -1,    -1,    -1,     6,     7,     8,     9,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    33,    34,    35,    36,    37,    -1,    -1,    40,
      33,    34,    35,    36,    37,    46,    -1,    -1,    41,     6,
       7,     8,     9,    46,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    40,    33,    34,    35,    36,    37,    46,
      -1,    -1,    41,     6,     7,     8,     9,    46,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,     6,     7,     8,
       9,    46,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,     6,
       7,     8,     9,    46,    33,    34,    35,    36,    37,    -1,
      -1,    40,    33,    34,    35,    36,    37,    46,    -1,    -1,
      41,     6,     7,     8,     9,    46,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,     6,     7,     8,     9,    46,
      -1,    -1,    -1,     6,     7,     8,     9,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,     6,     7,     8,
       9,    46,    33,    34,    35,    36,    37,    -1,    -1,    40,
      33,    34,    35,    36,    37,    46,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    46,    33,    34,    35,    36,    37,    -1,
      -1,    40,     3,     4,     5,    -1,    -1,    46,    -1,    10,
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
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
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
      16,    17,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    39,    -1,    41,    42,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    -1,     3,     4,     5,    28,    -1,    -1,    -1,    10,
      11,    12,    13,    -1,    15,    16,    39,    -1,    41,    42,
      21,    22,    23,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    -1,    15,    16,    -1,    39,    -1,
      41,    21,    22,    23,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    15,    16,    -1,    39,
      -1,    41,    21,    22,    23,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    -1,    15,    16,    -1,
      39,    -1,    41,    21,    22,    23,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,    16,
      -1,    39,    -1,    41,    21,    22,    23,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,    15,
      16,    -1,    39,    -1,    41,    21,    22,    23,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    -1,    39,    -1,    41,    21,    22,    23,     3,
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
      16,    -1,    39,    40,    -1,    21,    22,    23,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    -1,    39,    40,    -1,    21,    22,    23,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,    39,    40,    -1,    21,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,    39,    40,    -1,    21,    22,
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
      16,    -1,    39,    -1,    -1,    21,    22,    23,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    -1,
      15,    16,    -1,    39,    -1,    -1,    21,    22,    23,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      -1,    15,    16,    -1,    39,    -1,    -1,    21,    22,    23,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    -1,    15,    16,    -1,    39,    -1,    -1,    21,    22,
      23,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
       6,     7,     8,     9,    -1,    -1,    39,    -1,    14,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    14,    33,    34,
      35,    36,    37,    -1,    39,    40,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    14,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    33,    34,    35,    36,    37,    -1,    39,    40,    -1,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    40,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    40,    -1,    33,    34,    35,    36,    37,    -1,    39,
      40,    33,    34,    35,    36,    37,    -1,    39,    40,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,    40,    33,    34,    35,    36,    37,    -1,
      39,    40,    33,    34,    35,    36,    37,    -1,    -1,    40,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    -1,    39,    40,    33,    34,    35,    36,    37,
      -1,    39,    40,    33,    34,    35,    36,    37,    -1,    39,
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
      -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    -1,    40,    33,    34,
      35,    36,    37,    -1,    -1,    40,    33,    34,    35,    36,
      37,    -1,    -1,    40,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    40,    33,
      34,    35,    36,    37,    -1,    -1,    40,     6,     7,     8,
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
      33,    34,    35,    36,    37,    24,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    -1,
      39,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    24,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,    39,     6,     7,     8,     9,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    -1,    39,     6,
       7,     8,     9,    24,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    24,    39,     6,
       7,     8,     9,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,     6,     7,     8,     9,    24,    -1,    -1,
       6,     7,     8,     9,    -1,    -1,    33,    34,    35,    36,
      37,    24,    39,    -1,     6,     7,     8,     9,    24,    -1,
      33,    34,    35,    36,    37,    -1,    39,    33,    34,    35,
      36,    37,    24,    39,     6,     7,     8,     9,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,    39,     6,     7,
       8,     9,    24,    -1,    -1,     6,     7,     8,     9,    -1,
      -1,    33,    34,    35,    36,    37,    24,    39,    -1,     6,
       7,     8,     9,    24,    -1,    33,    34,    35,    36,    37,
      -1,    39,    33,    34,    35,    36,    37,    24,    39,     6,
       7,     8,     9,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    -1,    39,     6,     7,     8,     9,    24,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    24,     6,     7,     8,     9,    24,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    33,    34,    35,    36,    37,
      24,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    -1,     6,     7,     8,     9,    24,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    37,    24,     6,     7,     8,     9,    24,    -1,
      -1,    -1,    33,    34,    35,    36,    37,    33,    34,    35,
      36,    37,    24,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    -1,     6,     7,     8,
       9,    24,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    24,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    33,    34,    35,    36,    37,    33,
      34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    43,    44,    45,    49,    50,    52,    55,    56,
      57,    60,     0,    57,    17,    78,    13,    41,    54,    58,
      59,     3,     4,     5,    10,    11,    12,    13,    15,    16,
      18,    19,    20,    21,    22,    23,    28,    39,    41,    42,
      55,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    76,    77,    78,    79,
      14,    39,    41,    46,    39,    39,    39,    13,    13,    39,
      39,    39,    39,    39,    39,    63,    41,    63,    54,    18,
      61,    41,    46,    39,     6,     7,    33,    35,    37,     8,
       9,    34,    36,    14,    68,    13,    40,    51,    52,    53,
      55,    58,    72,    74,    72,    72,    15,    16,    57,    68,
      68,    73,    73,    73,    63,    68,    40,    41,    68,    40,
      68,    75,    69,    69,    70,    70,    70,    71,    71,    71,
      71,    68,    40,    46,    40,    46,    54,    24,    24,    24,
      65,    24,    24,    40,    40,    40,    40,    24,    40,    46,
      13,    52,    72,    72,    72,    65,    68,    68,    65,    68,
      68,    40,    40,    40,    40,    40,    40,    26,    40,    65,
      65,    65,    65,    65,    26,    65,    17,    25,    43,    44,
      45,     3,     4,     5,    10,    11,    12,    13,    15,    16,
      21,    22,    23,    39,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    13,    41,    59,    25,    43,    44,    45,
       3,     4,     5,    10,    11,    12,    13,    15,    16,    21,
      22,    23,    39,    66,    67,    73,     3,     4,     5,    10,
      11,    12,    13,    15,    16,    21,    22,    23,    39,    52,
      55,    56,    60,    66,    67,    69,    70,    71,    72,    73,
      74,     3,     4,     5,    13,    15,    16,    21,    22,    23,
      39,    66,    67,    74,     3,     4,     5,    10,    11,    12,
      13,    15,    16,    21,    22,    23,    39,    66,    67,    69,
      70,    71,    72,    73,    74,    46,    39,     3,     4,     5,
      13,    15,    16,    39,    66,    67,    74,    13,    17,    19,
      20,    28,    41,    42,    63,    64,    76,    77,    78,    79,
      39,    10,    11,    12,    73,    17,    19,    20,    28,    41,
      42,    63,    64,    76,    77,    78,    79,     3,     4,     5,
      10,    11,    12,    13,    15,    16,    21,    22,    23,    39,
      66,    67,    69,    70,    71,    72,    73,    74,    17,    19,
      20,    28,    41,    42,    63,    64,    76,    77,    78,    79,
      18,    62,    39,    39,    39,    13,    13,    39,    39,    39,
      63,    39,     6,     7,    33,    35,    37,     8,     9,    34,
      36,    14,    41,    39,    39,    39,    13,    13,    39,    39,
      39,    63,    39,    39,    39,    39,    13,    13,    39,    39,
      39,    63,    78,    41,    59,    39,     6,     7,    33,    35,
      37,     8,     9,    34,    36,    14,    13,    13,    39,    39,
      39,    63,    39,    39,    39,    39,    13,    13,    39,    39,
      39,    63,    39,     6,     7,    33,    35,    37,     8,     9,
      34,    36,    14,    68,    40,    51,    53,    13,    13,    63,
      39,    18,    62,    39,    39,    39,    41,    63,    41,    40,
      51,    53,    39,    39,    39,    18,    62,    39,    39,    39,
      41,    63,    41,    39,    39,    39,    13,    13,    39,    39,
      39,    63,    39,     6,     7,    33,    35,    37,     8,     9,
      34,    36,    14,    18,    62,    39,    39,    39,    41,    63,
      41,    18,    72,    72,    72,    15,    16,    73,    73,    73,
      40,    40,    75,     3,     4,     5,    13,    15,    16,    39,
      66,    67,    69,    74,    69,    70,    70,    70,    71,    71,
      71,    71,    68,    72,    72,    72,    15,    16,    73,    73,
      73,    40,    40,    75,    72,    72,    72,    15,    16,    73,
      73,    73,    40,    41,    40,    75,     3,     4,     5,    13,
      15,    16,    39,    66,    67,    69,    74,    69,    70,    70,
      70,    71,    71,    71,    71,    68,    15,    16,    73,    73,
      73,    40,    40,    75,    72,    72,    72,    15,    16,    73,
      73,    73,    40,    40,    75,     3,     4,     5,    13,    15,
      16,    39,    66,    67,    69,    74,    69,    70,    70,    70,
      71,    71,    71,    71,    68,    40,    40,    15,    16,    40,
      40,    75,    18,    57,    68,    68,    63,    68,    41,    40,
      40,    72,    72,    72,    18,    57,    68,    68,    63,    68,
      41,    72,    72,    72,    15,    16,    73,    73,    73,    40,
      40,    75,     3,     4,     5,    13,    15,    16,    39,    66,
      67,    69,    74,    69,    70,    70,    70,    71,    71,    71,
      71,    68,    18,    57,    68,    68,    63,    68,    41,    24,
      24,    24,    40,    40,    40,    40,    13,    13,    63,    39,
      24,    24,    24,    40,    40,    40,    40,    24,    24,    24,
      40,    40,    40,    40,    13,    13,    63,    39,    40,    40,
      40,    40,    24,    24,    24,    40,    40,    40,    40,    13,
      13,    63,    39,    40,    65,    24,    24,    40,    24,    24,
      24,    24,    65,    24,    24,    40,    24,    24,    24,    24,
      40,    40,    40,    40,    13,    13,    63,    39,    65,    24,
      24,    40,    24,    72,    72,    72,    15,    16,    40,    40,
      75,    72,    72,    72,    72,    72,    72,    15,    16,    40,
      40,    75,    72,    72,    72,    15,    16,    40,    40,    75,
      65,    68,    68,    17,    19,    20,    28,    41,    42,    63,
      64,    65,    76,    77,    78,    79,    68,    72,    72,    72,
      65,    68,    68,    17,    19,    20,    28,    41,    42,    63,
      64,    65,    76,    77,    78,    79,    68,    72,    72,    72,
      15,    16,    40,    40,    75,    65,    68,    68,    65,    68,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    18,    62,
      39,    39,    39,    41,    63,    41,    26,    40,    40,    40,
      40,    40,    40,    40,    18,    62,    39,    39,    39,    41,
      63,    41,    26,    40,    40,    40,    40,    40,    40,    40,
      40,    26,    40,    65,    65,    65,    18,    57,    68,    68,
      63,    68,    41,    65,    65,    65,    65,    65,    18,    57,
      68,    68,    63,    68,    41,    65,    65,    65,    65,    65,
      65,    65,    65,    24,    24,    40,    24,    26,    65,    24,
      24,    40,    24,    26,    26,    65,    68,    68,    65,    68,
      65,    65,    68,    68,    65,    68,    65,    65,    40,    40,
      40,    26,    40,    40,    40,    40,    26,    40,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    26,    26,
      65,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    55,    55,    55,    55,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    69,    69,    69,    70,    70,    70,    70,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      73,    74,    74,    74,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    78,    78,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     2,     1,     1,
       3,     1,     3,     4,     4,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     1,     3,     2,     3,     1,     1,
       1,     2,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     6,     6,     6,     1,     4,     4,
       4,     1,     3,     4,     1,     3,     7,     5,     9,     7,
       7,     7,     7,     2,     3,     2,     3
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
#line 3878 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 69 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 3886 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 73 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 3895 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 84 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 3904 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 88 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 3910 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 92 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 3918 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 96 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 3927 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 103 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 3936 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 108 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 3946 "clang.tab.c"
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
#line 3958 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 124 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 3964 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 125 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 3970 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 126 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 3976 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 127 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 3982 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 132 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 3991 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 140 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 4000 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 145 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_ast((yyval.no));
                        }
#line 4009 "clang.tab.c"
    break;

  case 22: /* inicializar_atrib: def_declaracao  */
#line 151 "parser/clang.y"
                                                 { (yyval.simbolo) = (yyvsp[0].simbolo); }
#line 4015 "clang.tab.c"
    break;

  case 23: /* inicializar_atrib: def_declaracao ATRIBUICAO expressao_atribuicao  */
#line 153 "parser/clang.y"
                        {
                            NoAST_Constante *novo_no = (NoAST_Constante*) (yyvsp[0].no);
                            (yyvsp[-2].simbolo)->constante.valor = novo_no->valor;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4025 "clang.tab.c"
    break;

  case 24: /* lista_inicializar_atrib: inicializar_atrib  */
#line 161 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4033 "clang.tab.c"
    break;

  case 25: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA inicializar_atrib  */
#line 165 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4041 "clang.tab.c"
    break;

  case 26: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 170 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4047 "clang.tab.c"
    break;

  case 27: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
#line 172 "parser/clang.y"
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
#line 4064 "clang.tab.c"
    break;

  case 28: /* item_bloco: declaracao_var  */
#line 186 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4070 "clang.tab.c"
    break;

  case 29: /* item_bloco: tipos_expressao  */
#line 187 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4076 "clang.tab.c"
    break;

  case 30: /* lista_itens_bloco: item_bloco  */
#line 191 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4084 "clang.tab.c"
    break;

  case 31: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 195 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4093 "clang.tab.c"
    break;

  case 32: /* expressao: expressao_atribuicao  */
#line 201 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4099 "clang.tab.c"
    break;

  case 33: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 202 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4105 "clang.tab.c"
    break;

  case 34: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 205 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4111 "clang.tab.c"
    break;

  case 35: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 206 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4117 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_declaracao  */
#line 209 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4123 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_decisao  */
#line 210 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4129 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_composta  */
#line 211 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4135 "clang.tab.c"
    break;

  case 39: /* tipos_expressao: expressao_return  */
#line 212 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4141 "clang.tab.c"
    break;

  case 40: /* tipos_expressao: expressao_iteracao  */
#line 213 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4147 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_INTEIRO  */
#line 216 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4153 "clang.tab.c"
    break;

  case 42: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 217 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4159 "clang.tab.c"
    break;

  case 43: /* valores: TOKEN_EMPTY  */
#line 218 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4165 "clang.tab.c"
    break;

  case 44: /* expressao_principal: TOKEN_ID  */
#line 222 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4173 "clang.tab.c"
    break;

  case 45: /* expressao_principal: valores  */
#line 226 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4181 "clang.tab.c"
    break;

  case 46: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 230 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4187 "clang.tab.c"
    break;

  case 47: /* expressao_principal: ASPAS_DUPLAS TOKEN_ID ASPAS_DUPLAS  */
#line 232 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4193 "clang.tab.c"
    break;

  case 48: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 233 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4199 "clang.tab.c"
    break;

  case 49: /* expressao_atribuicao: expressao_relacional  */
#line 236 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4205 "clang.tab.c"
    break;

  case 50: /* expressao_atribuicao: expressao_chamada ATRIBUICAO expressao_atribuicao  */
#line 238 "parser/clang.y"
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
#line 4233 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica  */
#line 263 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4239 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 265 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4247 "clang.tab.c"
    break;

  case 53: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 269 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4255 "clang.tab.c"
    break;

  case 54: /* expressao_logica: expressao_aritmetica  */
#line 275 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4261 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto  */
#line 281 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4267 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_conjunto OP_SOMA expressao_aritmetica  */
#line 283 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4275 "clang.tab.c"
    break;

  case 60: /* expressao_aritmetica: expressao_conjunto OP_SUBTRACAO expressao_aritmetica  */
#line 287 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4283 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: expressao_io  */
#line 294 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4289 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 296 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4297 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 300 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4305 "clang.tab.c"
    break;

  case 66: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 304 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4313 "clang.tab.c"
    break;

  case 67: /* expressao_io: expressao_chamada  */
#line 309 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4319 "clang.tab.c"
    break;

  case 68: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 311 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4327 "clang.tab.c"
    break;

  case 69: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 315 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4335 "clang.tab.c"
    break;

  case 70: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 319 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4343 "clang.tab.c"
    break;

  case 71: /* expressao_chamada: expressao_principal  */
#line 324 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4349 "clang.tab.c"
    break;

  case 73: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 327 "parser/clang.y"
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
#line 4377 "clang.tab.c"
    break;

  case 74: /* expressao_lista_param: expressao_atribuicao  */
#line 353 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4385 "clang.tab.c"
    break;

  case 75: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 357 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4394 "clang.tab.c"
    break;

  case 76: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 364 "parser/clang.y"
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
#line 4422 "clang.tab.c"
    break;

  case 77: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 388 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4430 "clang.tab.c"
    break;

  case 78: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 392 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4438 "clang.tab.c"
    break;

  case 79: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 396 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4446 "clang.tab.c"
    break;

  case 80: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 402 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4454 "clang.tab.c"
    break;

  case 81: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 406 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4462 "clang.tab.c"
    break;

  case 82: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 410 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4470 "clang.tab.c"
    break;

  case 83: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 416 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4478 "clang.tab.c"
    break;

  case 84: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 420 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4486 "clang.tab.c"
    break;

  case 85: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 426 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4494 "clang.tab.c"
    break;

  case 86: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 430 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4502 "clang.tab.c"
    break;


#line 4506 "clang.tab.c"

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

#line 435 "parser/clang.y"


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
