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
  YYSYMBOL_TOKEN_CARACTERE = 6,            /* TOKEN_CARACTERE  */
  YYSYMBOL_TOKEN_CADEIA = 7,               /* TOKEN_CADEIA  */
  YYSYMBOL_OP_IGUALDADE = 8,               /* OP_IGUALDADE  */
  YYSYMBOL_OP_MAIOR_QUE = 9,               /* OP_MAIOR_QUE  */
  YYSYMBOL_OP_MENOR_QUE = 10,              /* OP_MENOR_QUE  */
  YYSYMBOL_OP_SOMA = 11,                   /* OP_SOMA  */
  YYSYMBOL_OP_SUBTRACAO = 12,              /* OP_SUBTRACAO  */
  YYSYMBOL_CONJUNTO_ADD = 13,              /* CONJUNTO_ADD  */
  YYSYMBOL_CONJUNTO_REMOVE = 14,           /* CONJUNTO_REMOVE  */
  YYSYMBOL_CONJUNTO_EXISTS = 15,           /* CONJUNTO_EXISTS  */
  YYSYMBOL_COMANDO_READ = 16,              /* COMANDO_READ  */
  YYSYMBOL_COMANDO_WRITE = 17,             /* COMANDO_WRITE  */
  YYSYMBOL_COMANDO_WRITELN = 18,           /* COMANDO_WRITELN  */
  YYSYMBOL_TOKEN_ID = 19,                  /* TOKEN_ID  */
  YYSYMBOL_ATRIBUICAO = 20,                /* ATRIBUICAO  */
  YYSYMBOL_ASPAS_SIMPLES = 21,             /* ASPAS_SIMPLES  */
  YYSYMBOL_ASPAS_DUPLAS = 22,              /* ASPAS_DUPLAS  */
  YYSYMBOL_CHAVE_E = 23,                   /* CHAVE_E  */
  YYSYMBOL_CHAVE_D = 24,                   /* CHAVE_D  */
  YYSYMBOL_COMANDO_FOR = 25,               /* COMANDO_FOR  */
  YYSYMBOL_COMANDO_FORALL = 26,            /* COMANDO_FORALL  */
  YYSYMBOL_CONJUNTO_IN = 27,               /* CONJUNTO_IN  */
  YYSYMBOL_TIPO_ELEM = 28,                 /* TIPO_ELEM  */
  YYSYMBOL_COMANDO_ELSE = 29,              /* COMANDO_ELSE  */
  YYSYMBOL_EMPTY = 30,                     /* EMPTY  */
  YYSYMBOL_COMANDO_IF = 31,                /* COMANDO_IF  */
  YYSYMBOL_IN = 32,                        /* IN  */
  YYSYMBOL_IS_FLOAT = 33,                  /* IS_FLOAT  */
  YYSYMBOL_IS_INT = 34,                    /* IS_INT  */
  YYSYMBOL_IS_SET = 35,                    /* IS_SET  */
  YYSYMBOL_OP_COMPARACAO = 36,             /* OP_COMPARACAO  */
  YYSYMBOL_OP_DIVISAO = 37,                /* OP_DIVISAO  */
  YYSYMBOL_OP_E = 38,                      /* OP_E  */
  YYSYMBOL_OP_MULTIPLICACAO = 39,          /* OP_MULTIPLICACAO  */
  YYSYMBOL_OP_NEGACAO = 40,                /* OP_NEGACAO  */
  YYSYMBOL_OP_OU = 41,                     /* OP_OU  */
  YYSYMBOL_PARENTESE_E = 42,               /* PARENTESE_E  */
  YYSYMBOL_PARENTESE_D = 43,               /* PARENTESE_D  */
  YYSYMBOL_PONTO_E_VIRGULA = 44,           /* PONTO_E_VIRGULA  */
  YYSYMBOL_RETURN = 45,                    /* RETURN  */
  YYSYMBOL_TIPO_SET = 46,                  /* TIPO_SET  */
  YYSYMBOL_TIPO_INT = 47,                  /* TIPO_INT  */
  YYSYMBOL_TIPO_FLOAT = 48,                /* TIPO_FLOAT  */
  YYSYMBOL_VIRGULA = 49,                   /* VIRGULA  */
  YYSYMBOL_THEN = 50,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_programa = 52,                  /* programa  */
  YYSYMBOL_declaracoes = 53,               /* declaracoes  */
  YYSYMBOL_lista_identificadores = 54,     /* lista_identificadores  */
  YYSYMBOL_declaracao_parametro = 55,      /* declaracao_parametro  */
  YYSYMBOL_lista_tipo_parametro = 56,      /* lista_tipo_parametro  */
  YYSYMBOL_def_declaracao = 57,            /* def_declaracao  */
  YYSYMBOL_def_declaracao_tipo = 58,       /* def_declaracao_tipo  */
  YYSYMBOL_declaracao_func = 59,           /* declaracao_func  */
  YYSYMBOL_declaracao = 60,                /* declaracao  */
  YYSYMBOL_lista_inicializar_atrib = 61,   /* lista_inicializar_atrib  */
  YYSYMBOL_declaracao_var = 62,            /* declaracao_var  */
  YYSYMBOL_item_bloco = 63,                /* item_bloco  */
  YYSYMBOL_lista_itens_bloco = 64,         /* lista_itens_bloco  */
  YYSYMBOL_expressao = 65,                 /* expressao  */
  YYSYMBOL_expressao_declaracao = 66,      /* expressao_declaracao  */
  YYSYMBOL_tipos_expressao = 67,           /* tipos_expressao  */
  YYSYMBOL_valores = 68,                   /* valores  */
  YYSYMBOL_expressao_principal = 69,       /* expressao_principal  */
  YYSYMBOL_expressao_atribuicao = 70,      /* expressao_atribuicao  */
  YYSYMBOL_expressao_relacional = 71,      /* expressao_relacional  */
  YYSYMBOL_expressao_logica = 72,          /* expressao_logica  */
  YYSYMBOL_expressao_aritmetica = 73,      /* expressao_aritmetica  */
  YYSYMBOL_expressao_conjunto = 74,        /* expressao_conjunto  */
  YYSYMBOL_expressao_io = 75,              /* expressao_io  */
  YYSYMBOL_expressao_chamada = 76,         /* expressao_chamada  */
  YYSYMBOL_expressao_lista_param = 77,     /* expressao_lista_param  */
  YYSYMBOL_expressao_decisao = 78,         /* expressao_decisao  */
  YYSYMBOL_expressao_iteracao = 79,        /* expressao_iteracao  */
  YYSYMBOL_expressao_composta = 80,        /* expressao_composta  */
  YYSYMBOL_expressao_return = 81           /* expressao_return  */
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
#define YYLAST   10870

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  945

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    65,    65,    71,    75,    82,    83,    86,    91,    94,
      98,   105,   110,   116,   124,   127,   128,   129,   130,   134,
     142,   147,   154,   158,   164,   165,   183,   184,   187,   191,
     198,   199,   202,   203,   206,   207,   208,   209,   210,   213,
     214,   215,   218,   222,   226,   228,   230,   233,   234,   260,
     261,   265,   269,   276,   277,   278,   279,   282,   283,   287,
     291,   292,   295,   296,   300,   304,   310,   311,   321,   330,
     336,   337,   338,   364,   368,   375,   399,   403,   407,   413,
     417,   421,   427,   431,   437,   441
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
  "TOKEN_CADEIA", "OP_IGUALDADE", "OP_MAIOR_QUE", "OP_MENOR_QUE",
  "OP_SOMA", "OP_SUBTRACAO", "CONJUNTO_ADD", "CONJUNTO_REMOVE",
  "CONJUNTO_EXISTS", "COMANDO_READ", "COMANDO_WRITE", "COMANDO_WRITELN",
  "TOKEN_ID", "ATRIBUICAO", "ASPAS_SIMPLES", "ASPAS_DUPLAS", "CHAVE_E",
  "CHAVE_D", "COMANDO_FOR", "COMANDO_FORALL", "CONJUNTO_IN", "TIPO_ELEM",
  "COMANDO_ELSE", "EMPTY", "COMANDO_IF", "IN", "IS_FLOAT", "IS_INT",
  "IS_SET", "OP_COMPARACAO", "OP_DIVISAO", "OP_E", "OP_MULTIPLICACAO",
  "OP_NEGACAO", "OP_OU", "PARENTESE_E", "PARENTESE_D", "PONTO_E_VIRGULA",
  "RETURN", "TIPO_SET", "TIPO_INT", "TIPO_FLOAT", "VIRGULA", "THEN",
  "$accept", "programa", "declaracoes", "lista_identificadores",
  "declaracao_parametro", "lista_tipo_parametro", "def_declaracao",
  "def_declaracao_tipo", "declaracao_func", "declaracao",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
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
     510,     7,    31,   138,   301,    21,    11,    10,   436,    20,
      32,    35,  -358,    42,  2192,    45,    -8,    56,   263,    63,
    1332,  5210,  5690,  6593,   -18,    13,    53,    66,    74,   109,
    7896,   140,    77,   127,   129,   139,  9724,  2228,  3165,    57,
    2264,  2300,  2541,   658,  2620,  2674,  7910,  7952,   698,   760,
     111,   832,   175,   429,  1903,  2871,  2907,  2943,  2979,   577,
      94,   169,  9746,  9746,  9746,  5059,  5059,  5059,   199,   960,
    9765,  9787,   738,  3129,   816,   209,    99,  3220,  3299,  9806,
    9423,  9828,  9828,  9828,  9828,  9828,  9828,  9828,  9828,  9828,
    9828,  9806,   777,   470,   853,   908,   977,     4,   506,   195,
     237,   268,   277,   291,   309,   341,  7966,  1025,   376,   385,
     988,    86,  8008,  3353,  1158,  2582,  1004,  1014,  1281,  1309,
    1331,   259,   262,   274,  4100,  4556,  4810,  5225,  1417,   632,
     416,   691,   750,   687,  9847,  9847,  9847,  1815,  2494,  9074,
    6821,  9869,  9869,  7078,  9869,  3261,  9724,  1019,  1048,   400,
     409,   419,   427,   473,   477,   149,   497,  1074,  9088,  9130,
    9144,  7111,  7111,  7111,  7111,  7078,  3550,  3586,  3622,  3658,
     231,  7111,  3832,  3924,    95,   222,   319,   414,  4219,  5045,
    6392,  6761,   437,   439,   476,   511,   519,   542,  8022,   575,
    9724,  8058,  8072,  1092,  1100,   282,  5828,  6073,  9186,  8382,
     766,  3978,  1429,   160,   244,   382,   434,    -2,    90,   162,
     181,   562,   591,   611,   614,   618,   633,   189,   595,  9724,
     238,   254,   650,   -29,     1,    43,   106,   645,   653,   670,
     509,   708,  9724,   531,   559,   695, 10466, 10489, 10503, 10524,
     703,   713,   724,   734,   771,   775, 10538,   739,  9724,   807,
     438,  7144,  7177, 10559, 10573,   823,   384,   716,  1327,  2019,
    6747,   190,   290,  1249,  1670,   801,   819,   820,   844,   845,
     863,  2349,   884,  9724,  3028,  3876,   194,    88,   776,  8401,
    8424,  8108,  9724,   615,  8444,  8460,  8502,  8516,  8558,   888,
    9724,  8572,  8614,  9194,   740,  4175,   890,   891,   894,  7210,
    3788,  1563,  7243,  7276,  7309,  7342,  7375,  1162,   916,   917,
     918,   881,  4279,   920,   938,   948,   961,  4541,  1573,   968,
     969,   970,   978,   979,  8194,  9965,  9978, 10014,   949,   991,
     992,   993,  1003,  1030, 10027,   984,  9724, 10063, 10076,  1031,
       9,   701, 10300, 10313,  5002,  4422,  1056,  1057,  1058,   343,
    4652,  1574,   482,   518,   564,   623,   675,  4481,  4785,  9746,
    9746,  9746,  5059,  5059,  5059,  1044,  1117,  9455,  9888,  9888,
    9888,  9888,  9888,  9888,  9888,  9888,  9888,  9888,  9724,  4848,
    9746,  9746,  9746,  5059,  5059,  5059,  1052,  1127,  9474,  5059,
    5059,  5059,  1080,  1129,  9505,  9746,  9746,  9746,  5059,  5059,
    5059,  1081,  1154,  7408,  7441,  1599,  9524,  9910,  9910,  9910,
    9910,  9910,  9910,  9910,  9910,  9910,  9910,  9765,  9746,  9746,
    9746,  5059,  5059,  5059,  1098,  1157,  9555,  9929,  9929,  9929,
    9929,  9929,  9929,  9929,  9929,  9929,  9929,  9787,  1177,   912,
    1179,  1204,  1125,  1207,  9574,  7474,  5181,   960,  9765,  9787,
    7507,  1607,  7540,   943,  1229,  1230,  9746,  9746,  9746,  1104,
    5273,   960,  9765,  9787,  1120,  1626,  1128,  9746,  9746,  9746,
    5059,  5059,  5059,  1133,  1231,  9605,  9951,  9951,  9951,  9951,
    9951,  9951,  9951,  9951,  9951,  9951,  9869,   746,  5309,   960,
    9765,  9787,   924,  1628,  1170,  5358,  1152,  1153,  1155,  1149,
    1161,  1168,  8122,  8158,  8628,  1232,  8664,  8672,  8680,  8716,
    8724,  1200,  9724,  8732,  8768,  1234,  9208,  1241,  1250,   306,
     332,   466,  5843,  6030,  6200,  6711,  1251,  1194,  1202,  1203,
    1188,  1189,  1197,   373,   475,  1225,  1252,  1211,  1227,  1239,
     589,   642,  1259,  1254,  1236,  1277,  1284,  1269,  1271,  1280,
   10594, 10608,  7573, 10741,  1266, 10615, 10629, 10650, 10664, 10671,
    1314,  9724, 10685, 10706,  1319,  2698,  1333,  1350,   797,   837,
     874,   987,  1112,  2370,  2570,  1351,  1361,  1362,  1375,  1381,
    1382,  1383,  5506,  5632,  8172,  1312,  1649,  2328,  3007,  3686,
    8208,  1338,  9724,  8216,  8252,   355,  8776,   356,   445,   101,
     327,   387,  4310,  4952,  5116,  5550,   527,  1022,  1089,  8784,
    8826,  9244,  1313,  7606,  1025,  1400,  1401,  1330,   548,  7639,
    1102,  1119,  1421,  1437,  1438,  1404,  1025,  1447,  1448,  1366,
     572,  1444,  1461,  1462,  1469,  1454,  1467,  1468, 10112, 10125,
   10161,  1367,  8964, 10148, 10184, 10197, 10205,  1503,  9724, 10220,
   10241,  1480, 10336,  1481,  1490,    19,   197,   370,   791,   870,
    1691,  1893,  1504,  1220,  1025,  1521,  1523,  1419,   573,  1303,
    9847,  9847,  9847,  9258,  9266,  9302,  8840,  1548,  1420,  9624,
    9847,  9847,  9847,  1544,  1556,  1559,  1578,  1576,  1577,  1598,
    1610,  9847,  9847,  9847,  3181,  3377,  4002, 10762,  1600,  1433,
    9655,  9847,  9847,  9847,  8876,  8884,  8920,  8260,  1633,  1434,
    9674,  9310,  6821,  9869,  9869,  7672,  9869,  9847,  9847,  9847,
    6821,  9869,  9869,  7705,  9869,  9847,  9847,  9847, 10349, 10357,
   10372, 10256,  1634,  1472,  9705,  6821,  9869,  9869,  7078,  9869,
    1619,  1630,  1631,  8928,  8942,  9324,  1476,  1640,  1641,  1653,
    1668,  1675,  1677, 10720, 10727, 10776,  1497,  1678,  1685,  1689,
    8296,  8304,  8978,  1500,  1700,  1703,  1711,  5740,  1622,  1710,
    1713,   403,  8345,  1673,  1111,  1790,  2469,  4704,  4738,  5440,
    1718,  1720,  1727,  1731,  1732,  1733,  1734,  5797,  1736,  1737,
    1738,   245,  8364,  1686,   322,   417,   516,   543,   621,   630,
    1753,  1755,  1756,  1757, 10277, 10292, 10393,  1502,  1758,  1759,
    1767,  1513,  1769,  9360,  9368,  9376,  9412,  1754,  1787,  1791,
   10782, 10796, 10816, 10830,  8986,  9022,  9030,  9066,  1025,  1025,
    1025,  6114,  5942,   960,  9765,  9787,  6310,  1707,  6344,  1025,
    7672,  1774,  1777,  1779,  6821,  6821,  6821,   643,  6001,   960,
    9765,  9787,   654,  1709,   689,  6821,  7705, 10408, 10416, 10429,
   10452,  7078,  7078,  7078,  7078,  7078,  7738,  7771,  7804,  6511,
    1025,  1801,  1802,  1533,   586,  6544,  7837,  6686,  1788,  1796,
    1797,   705,  1025,  1803,  1806,  1536,   730,   824,  1798,   830,
    1549,  1585,  1621,  1862,  1941,  6821,  9869,  9869,  7672,  9869,
    1025,  6821,  9869,  9869,  7705,  9869,  6821,  7078,  1799,  1804,
    1807,  6719,  1817,  7870,  1818,  1819,  1820,   842,  1825,  1827,
    1995,  7672,  7672,  7672,  7672,  7672,  7705,  7705,  7705,  7705,
    7705,  6880,  6913,  6946,  6979,  7012,   861,   866,   869,   882,
     901,  7672,  7705,  7045,   958
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -358,  -358,  -358,  -261,     6,  -177,   -23,     2,  1581,    -5,
     -32,     3,   -37,  -169,   154,  5357,  4102,  1023,  1702,  5441,
    5201,  4701,  4201,  3685,  3060,  2381,  -357,  5581,  5754,    -7,
    5950
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    94,   249,    96,    18,    39,   251,    10,
      19,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   117,    55,    56,    57,
      58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    13,     8,    11,   358,    77,     7,   202,     8,    11,
     505,    -2,     7,   -39,   -39,   -11,    75,   476,   477,   478,
     -20,    12,   440,   294,    62,   -39,   -17,   -56,   -56,   -56,
     -17,   536,    -3,    14,   -11,   -21,   -11,   543,    98,     1,
     -39,   -11,    -4,   -41,   -41,   -19,   454,    -8,   -20,   554,
     -18,   -17,   -49,    -8,   -18,    63,   -24,     2,     3,     4,
      -3,    97,   -56,   -21,   107,    95,   -20,   -20,   -20,   585,
      -4,   250,   252,   -19,   133,   -18,   200,   -82,    -3,    -3,
      -3,   -21,   -21,   -21,   -24,   -40,   -40,   612,    -4,    -4,
      -4,   -19,   -19,   -19,   -25,    64,   427,   428,   429,   -83,
     305,   201,   -24,   -24,   -24,   -82,   441,    60,    65,   -56,
     -56,   -56,    61,   144,   -17,   -49,    66,   -41,   641,    81,
      82,    83,   -25,   -82,   -82,   -82,   446,   -83,   -56,   -30,
     455,   -49,   -41,   322,    97,   -30,   355,   -49,   148,   -17,
     -25,   -25,   -25,   460,   -56,   -83,   -83,   -83,   -45,   -45,
     -56,    67,   -76,   -76,   -76,   -49,   -76,   -15,   355,    68,
     -49,   -15,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    69,
     -76,    70,   -76,   -76,   -76,   -76,   488,   -76,   164,   -17,
     -76,    71,   -15,   -57,   -57,   -57,    87,    88,   200,   -40,
      72,   -76,    74,   -76,   -76,   -76,   -76,   -76,   -39,   -39,
     -39,   -39,   -39,   -17,   -40,   -54,   -54,   -54,   -45,   -17,
     -39,   -57,    89,   -57,    90,   -57,   -42,   -39,   405,   -57,
     106,   -47,   134,   -45,   -57,   110,   -39,   -39,   -39,   -39,
     -39,   -42,   -39,   -39,   -78,   -78,   -78,   -47,   -78,   -39,
     -54,   -18,   403,   -47,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   283,   -78,   -22,   -78,   -78,   -78,   -78,   -22,   -78,
     171,   301,   -78,   -18,   -66,   -43,   -18,   -56,   -56,   -56,
     -54,   -54,   -54,   -78,   -32,   -78,   -78,   -78,   -78,   -78,
     -43,   -70,   -55,   -55,   -55,    97,    -7,   -18,   -32,    95,
     368,   369,   370,   -18,   318,   135,   388,   351,   -41,   -41,
     -41,   -41,   -41,   -56,   136,    59,   -54,   -22,   -56,    97,
     -41,   -54,   -22,    95,   -56,   -56,   -56,   -41,   -55,   351,
     -16,    77,   746,   -55,   -16,   -49,   -41,   -41,   -41,   -41,
     -41,   -49,   -41,   -41,   137,   -54,   -54,   -54,   -15,   -41,
     -54,   -54,   -54,   756,   366,   -16,   -32,   -32,   -32,   -56,
     -32,   -34,   138,   763,   -54,   -56,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -15,   -32,   -34,   -32,   -32,   -32,   -32,
     -54,   -32,   -32,   387,   -32,   -54,   -54,   807,   -55,   -55,
     -55,   -54,   -52,   -51,   139,   -32,   393,   -32,   -32,   -32,
     -32,   -32,   407,   408,   409,   -55,   -55,   -55,   -52,   -51,
     -44,   -15,   402,   141,   -52,   -51,   -32,   -32,   -32,    77,
     -32,   -49,   142,   -55,   -55,   -44,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,    77,   -32,   -15,   -32,   425,   -32,   -32,
     -55,   -15,   -32,   -16,   -32,   147,   -55,   -62,   -62,   -62,
     -62,   -62,   614,   158,   443,   -32,   855,   -32,   -32,   250,
     252,    77,   159,   -16,   451,    16,   626,    16,   -16,    -8,
     -76,    -8,   160,   250,   252,   -62,   -62,   -62,   -62,   -62,
     161,   465,   -50,   -62,   -55,   -55,   -55,   -16,   -62,   359,
      17,   360,   404,   -16,   664,   -34,   -34,   -34,   -50,   -34,
     474,   250,   252,   -12,   -50,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -46,   -34,   493,   -34,   -34,   -34,   -34,   -55,
     -34,   -34,   -12,   -34,   -12,   -55,   162,   -46,   361,   -12,
     163,   -35,   -35,   -35,   -34,   -35,   -34,   -34,   -34,   -34,
     -34,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     1,   -35,
     165,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   283,   -35,
     -23,   -42,   -42,   362,   -48,   -23,     2,     3,     4,   -35,
     -35,   363,   -35,   -35,   -35,   -35,   -35,   -38,   -38,   -38,
     -48,   -38,   -38,   -43,   -43,   716,   -48,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   364,   -38,   -38,   -38,   -38,   -38,
     -38,   -30,   -38,   -38,   365,   -38,    92,   -30,   832,   724,
     739,   394,   -70,   617,   380,   203,   -38,   305,   -38,   -38,
     -38,   -38,   -38,   899,   386,   -30,   -30,   629,   848,   305,
      93,   -30,   -30,   204,   205,   206,   -36,   -36,   -36,   -30,
     -36,   -44,   -44,   381,    92,   -30,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   203,   -36,   667,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   382,   -36,   -14,   383,   305,   439,   -37,
     384,   204,   205,   206,   -36,   -36,   678,   -36,   -36,   -36,
     -36,   -36,   -82,   -37,   -14,   385,   -14,   -62,   -37,   -37,
     -37,   -14,   -37,   -84,   -46,   -46,   -82,   389,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   390,   -37,   -84,   -37,   -37,
     -37,   -37,    78,   -37,   -37,   322,   -37,    79,   778,   -53,
     -53,   -53,   391,   322,   -13,   699,   798,   -37,   -33,   -37,
     -37,   -37,   -37,   -37,   -53,   -53,   -53,   392,   322,   307,
      -7,   355,   -33,   -13,   -83,   -13,    -7,   479,   -66,   480,
     -13,   481,   -30,   -53,   -53,   395,   709,   -30,   -83,   -82,
     -82,   -82,   410,   -82,   411,   396,   412,   905,   401,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   397,   -82,   301,   -82,
     -82,   -82,   -82,   -30,   -82,   -82,   398,   -82,   203,   -30,
     301,   112,   -11,   -11,   -53,   -53,   -53,   282,   -82,   -11,
     -82,   -82,   -82,   -82,   -82,    77,   204,   205,   206,   -58,
     -58,   -58,   733,   -53,   -47,   -56,   -56,   -56,   -11,   -47,
     -11,    77,   430,   399,   431,   -11,   432,   400,   301,   -53,
      -5,   305,   305,   305,   -56,   -53,    -5,   -58,   870,   -58,
     295,   -58,   305,   778,   -58,   250,   252,   322,   322,   322,
     -53,   -53,   -53,   418,   882,   -54,   -54,   -54,   322,   798,
     -47,   250,   252,   -85,   355,   355,   355,   355,   355,   906,
     113,   419,   420,   305,   -54,    79,   318,   -85,    84,   773,
      85,   929,    86,   -78,   318,   305,   -53,   793,   -59,   -59,
     -59,   -53,   -55,   -55,   -55,   -76,   421,   422,   322,   318,
     -79,   778,   351,   305,   322,   -80,   129,   798,   -81,   322,
     355,   -55,   130,   424,   -79,   423,   -59,   442,   -59,   -80,
     -59,   -75,   -81,   -59,   778,   778,   778,   778,   778,   798,
     798,   798,   798,   798,   -62,   -75,   837,   -84,   -84,   -84,
     942,   -84,   447,   448,   778,   798,   449,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -78,   -84,   853,   -84,   -84,   -84,
     -84,    -9,   -84,   -84,   -12,   -84,   -12,    -9,   456,   457,
     458,   -12,   461,   236,   237,   238,   -84,   239,   -84,   -84,
     -84,   -84,   -84,   240,   241,   242,   243,   244,   245,   246,
     462,   247,   301,   301,   301,   -12,   -12,   -77,     1,   873,
     463,   467,   -12,   301,   773,   -58,   -58,   -58,   318,   318,
     318,   -77,   248,   473,   -32,   885,     2,     3,     4,   318,
     793,   -34,   -35,   -38,   -58,   351,   351,   351,   351,   351,
     131,   -36,   -37,   -58,   301,   -58,   132,   -58,    20,    21,
      22,   143,    23,   468,   469,   470,   301,   282,    24,    25,
      26,    27,    28,    29,    30,   471,    31,   -73,   295,   318,
     296,   297,   773,   -73,   301,   318,   298,   145,   793,   191,
     318,   351,    -6,   146,   -14,   502,   -14,    36,    -6,   299,
     300,   -14,   472,   533,   -47,   773,   773,   773,   773,   773,
     793,   793,   793,   793,   793,   220,   220,   220,   233,   233,
     233,   -10,   253,   253,   274,   773,   793,   -10,   489,   490,
     491,   540,   550,   191,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   -34,   -34,   -34,   -74,   -34,   582,
     -59,   -59,   -59,   -74,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -13,   -34,   -13,   -34,   -30,   -34,   -34,   -13,   -59,
     -34,   -30,   -34,   -47,   -14,   -14,   609,   -82,   -59,   -47,
     -59,   -14,   -59,   -34,   638,   -34,   -34,   233,   233,   233,
     503,   -13,   -13,   -84,   337,   337,   282,   337,   -13,   191,
     534,   -33,   541,   -33,   -33,   -33,   282,   -33,   282,   670,
     671,    92,   672,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     203,   -33,   673,   -33,   -33,   -33,   -33,   551,   -33,   -33,
     583,   -33,   -31,   282,   674,   453,   282,   -31,   204,   205,
     206,   675,   -33,   191,   -33,   -33,   -33,   -33,   -33,   677,
     -31,   680,   607,   -83,   -83,   -83,   -31,   -83,   130,   681,
     682,   683,   684,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     685,   -83,   191,   -83,   -83,   -83,   -83,   608,   -83,   -83,
     610,   -83,   -71,   132,   687,   191,   282,   -40,   -40,   -40,
     -40,   -40,   -83,   691,   -83,   -83,   -83,   -83,   -83,   -40,
     688,   191,   620,   621,   639,   676,   -40,   -52,   130,   132,
     282,   146,   689,   -52,   -51,   -40,   -40,   -40,   -40,   -40,
     -51,   -40,   -40,   -50,   -48,   686,   191,   690,   -40,   -50,
     -48,   146,   -71,   146,   692,   191,   -85,   -85,   -85,   697,
     -85,   693,   694,   191,   695,   146,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   696,   -85,   -52,   -85,   -85,   -85,   -85,
     -52,   -85,   -85,   698,   -85,   -57,   -57,   -57,   413,   414,
     -39,   -39,   -39,   -39,   -39,   -85,   -52,   -85,   -85,   -85,
     -85,   -85,   -39,   -51,   -57,   707,   711,   708,   -51,   191,
     -51,   146,   146,   -57,   415,   -57,   416,   -57,   -39,   -39,
     -39,   -39,   -39,   715,   -39,   -50,   -39,   -50,   -48,   282,
     -50,   -39,   220,   220,   220,   233,   233,   233,   701,   702,
     191,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   191,   703,   220,   220,   220,   233,   233,   233,   723,
     731,   191,   233,   233,   233,   282,   146,   191,   220,   220,
     220,   233,   233,   233,   704,   705,   706,   713,   714,   191,
     562,   562,   562,   562,   562,   562,   562,   562,   562,   562,
     253,   220,   220,   220,   233,   233,   233,   -83,   717,   191,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     274,   -48,   738,   744,   718,   719,   -48,   191,   282,   282,
     253,   253,   274,   379,   721,   722,   754,   761,    61,   220,
     220,   220,   282,   282,   253,   253,   274,   -85,   725,   726,
     220,   220,   220,   233,   233,   233,   727,   728,   191,   649,
     649,   649,   649,   649,   649,   649,   649,   649,   649,   337,
     729,   730,   253,   253,   274,   805,   -76,   -76,   -76,   816,
     -76,   282,   732,   -52,   -51,   146,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -50,   -76,   191,   -76,   -76,   -76,   -76,
     823,   -76,   864,   827,   -76,   860,   146,   -48,   736,   146,
     737,   146,   -79,   -79,   -79,   -76,   -79,   -76,   -76,   -76,
     -76,   -76,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   743,
     -79,   -69,   -79,   -79,   -79,   -79,   898,   -79,   -79,   904,
     -79,     9,   282,   -68,   191,   282,   -67,     9,   -80,   -80,
     -80,   -79,   -80,   -79,   -79,   -79,   -79,   -79,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -72,   -80,   452,   -80,   -80,
     -80,   -80,    79,   -80,   -80,   191,   -80,   466,   494,   -69,
     -68,   753,    79,    79,   -81,   -81,   -81,   -80,   -81,   -80,
     -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -67,   -81,   552,   -81,   -81,   -81,   -81,    61,   -81,
     -81,   619,   -81,   -72,   760,   804,    79,   -39,   -39,   -39,
     -39,   -39,   813,   -81,   833,   -81,   -81,   -81,   -81,   -81,
     631,   191,   669,   814,   815,    79,   -39,    79,   -45,   -45,
     -45,   -45,   -45,   817,   818,   -39,   -39,   -39,   -39,   -39,
     -45,   -39,   -39,   233,   233,   233,   819,   -45,   -39,   -60,
     -60,   -60,   191,   233,   233,   233,   -45,   -45,   -45,   -45,
     -45,   820,   -45,   -45,   233,   233,   233,   838,   821,   -45,
     822,   824,    79,   191,   233,   233,   233,   -60,   825,   -60,
     854,   -60,   826,   191,   -60,    79,   337,   337,   192,   337,
     233,   233,   233,   828,   337,   337,   829,   337,   233,   233,
     233,   875,   834,   887,   830,   835,    79,   191,    79,   337,
     337,   840,   337,   841,   221,   221,   221,   234,   234,   234,
     842,   254,   254,   275,   843,   844,   845,   846,   849,   850,
     851,   -63,   192,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   -76,   -76,   -76,   856,   -76,   857,   858,
     859,   861,   862,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     863,   -76,   865,   -76,   -64,   -76,   -76,   -63,   -65,   839,
     -64,   -76,   -65,   -69,   -69,   -69,   -69,   -69,   896,   897,
     902,   -79,   -76,   903,   -76,   -76,   234,   234,   234,   -80,
     -81,   -75,   921,   338,   338,     0,   338,   922,   192,     0,
     923,   -69,   -69,   -69,   -69,   -69,   253,   253,   274,   -69,
     925,   926,   927,   928,   -69,   -75,   -75,   -75,   930,   -75,
     -77,     0,   253,   253,   274,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,     0,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   192,   -75,     0,     0,     0,     0,     0,     0,
       0,   -61,   -61,   -61,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,   337,
     337,   192,   337,    91,     0,   337,   337,     0,   337,   -61,
       0,   -61,     0,   -61,   192,     0,   -61,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -78,   -78,   -78,   -66,   -78,     0,
     192,     0,   -66,     0,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,     0,   -78,     0,   -78,   -78,   -78,   -78,     0,   -78,
     907,     0,   -78,     0,     0,   192,     0,     0,     0,     0,
       0,     0,     0,   -78,   192,   -78,   -78,   -78,   -78,   -78,
       0,     0,   192,     0,     0,     0,     0,     0,   -77,   -77,
     -77,     0,   -77,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -77,     0,   -77,   -77,
     -77,   -77,     0,   -77,   -77,     0,   -77,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,     0,     0,   -77,   192,   -77,
     -77,   -77,   -77,   -77,     0,     0,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
       0,   221,   221,   221,   234,   234,   234,     0,     0,   192,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     192,     0,   221,   221,   221,   234,   234,   234,     0,     0,
     192,   234,   234,   234,     0,     0,   192,   221,   221,   221,
     234,   234,   234,     0,     0,     0,     0,     0,   192,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   254,
     221,   221,   221,   234,   234,   234,     0,     0,   192,   594,
     594,   594,   594,   594,   594,   594,   594,   594,   594,   275,
       0,     0,     0,     0,     0,     0,   192,     0,     0,   254,
     254,   275,     0,     0,     0,     0,     0,     0,   221,   221,
     221,     0,     0,   254,   254,   275,     0,     0,     0,   221,
     221,   221,   234,   234,   234,     0,     0,   192,   650,   650,
     650,   650,   650,   650,   650,   650,   650,   650,   338,     0,
       0,   254,   254,   275,     0,    20,    21,    22,     0,    23,
       0,     0,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,     0,    31,   192,   173,    32,    33,    34,     0,
     174,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,   -32,   -32,   -32,    36,   -32,    37,    38,   175,   176,
     177,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,   -32,
       0,     0,     0,   192,     0,     0,     0,   -26,   -26,   -26,
     -32,   -26,   -32,   -32,   -32,   -32,   -32,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,
     -26,     0,   -26,     0,   192,   -26,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -26,   -28,   -26,   -26,
     -26,   -26,   -26,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,     0,   -28,   -28,   -28,   -28,     0,   -28,     0,
       0,   -28,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
     192,     0,     0,     0,     0,   -41,     0,   -42,   -42,   -42,
     -42,   -42,     0,     0,   -41,   -41,   -41,   -41,   -41,   -42,
     -41,   -41,   234,   234,   234,     0,   -42,   -41,   -60,   -60,
     -60,   192,   234,   234,   234,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   234,   234,   234,     0,   -60,   -42,     0,
       0,     0,   192,   234,   234,   234,   -60,     0,   -60,     0,
     -60,     0,   192,     0,     0,   338,   338,   199,   338,   234,
     234,   234,     0,   338,   338,     0,   338,   234,   234,   234,
       0,     0,     0,     0,     0,     0,   192,     0,   338,   338,
       0,   338,     0,   100,   100,   100,   235,   235,   235,     0,
     260,   260,   281,     0,     0,     0,     0,     0,     0,     0,
       0,   199,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   -35,   -35,   -35,     0,   -35,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,     0,   -35,     0,   -35,   -35,     0,     0,   -35,     0,
     -35,     0,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -35,     0,   -35,   -35,   235,   235,   235,     0,     0,
       0,     0,   344,   344,     0,   344,     0,   199,     0,     0,
     -68,   -68,   -68,   -68,   -68,   254,   254,   275,   -68,     0,
       0,     0,     0,   -68,    20,    21,    22,     0,    23,     0,
       0,   254,   254,   275,    24,    25,    26,    27,    28,    29,
      30,     0,    31,     0,   173,    76,    33,    34,     0,   174,
       0,   199,    35,     0,     0,     0,     0,     0,   -61,   -61,
     -61,     0,     0,    36,     0,    37,    38,   175,   176,   177,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -61,   338,   338,
     199,   338,   -71,     0,   338,   338,   -61,   338,   -61,     0,
     -61,     0,     0,   199,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -34,   -34,   -34,   -71,   -34,     0,   199,
       0,   -71,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,     0,   -34,   -34,   -34,   -34,     0,   -34,     0,
       0,   -34,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,   -34,   199,   -34,   -34,   -34,   -34,   -34,     0,
       0,   199,     0,     0,     0,     0,     0,   -27,   -27,   -27,
       0,   -27,     0,     0,     0,     0,     0,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,   -27,
     -27,     0,   -27,     0,     0,   -27,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,     0,   -27,   199,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -66,     0,     0,     0,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,
     100,   100,   100,   235,   235,   235,     0,     0,   199,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   199,
       0,   100,   100,   100,   235,   235,   235,     0,     0,   199,
     235,   235,   235,     0,     0,   199,   100,   100,   100,   235,
     235,   235,     0,     0,     0,     0,     0,   199,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   260,   100,
     100,   100,   235,   235,   235,     0,     0,   199,   596,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   281,     0,
       0,     0,     0,     0,     0,   199,     0,     0,   260,   260,
     281,     0,     0,     0,     0,     0,     0,   100,   100,   100,
       0,     0,   260,   260,   281,     0,     0,     0,   100,   100,
     100,   235,   235,   235,     0,     0,   199,   652,   652,   652,
     652,   652,   652,   652,   652,   652,   652,   344,     0,     0,
     260,   260,   281,     0,   -35,   -35,   -35,     0,   -35,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   199,   -35,   -35,   -35,   -35,     0,   -35,
       0,     0,   -35,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,   -38,   -35,   -38,   -35,   -35,   -35,   -35,   -35,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,     0,
     -38,   -38,   -38,   -38,     0,   -38,     0,     0,   -38,     0,
       0,     0,   199,     0,     0,     0,   -36,   -36,   -36,   -38,
     -36,   -38,   -38,   -38,   -38,   -38,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
       0,   -36,     0,   199,   -36,     0,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -36,   -37,   -36,   -36,   -36,
     -36,   -36,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,     0,   -37,   -37,   -37,   -37,     0,   -37,     0,     0,
     -37,     0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
       0,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   199,
       0,     0,     0,     0,   -40,     0,   -43,   -43,   -43,   -43,
     -43,     0,     0,   -40,   -40,   -40,   -40,   -40,   -43,   -40,
     -40,   235,   235,   235,     0,   -43,   -40,     0,     0,     0,
     199,   235,   235,   235,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   235,   235,   235,     0,     0,   -43,     0,     0,
       0,   199,   235,   235,   235,     0,     0,     0,     0,     0,
       0,   199,     0,     0,   344,   344,   198,   344,   235,   235,
     235,     0,   344,   344,     0,   344,   235,   235,   235,     0,
       0,     0,     0,     0,     0,   199,     0,   344,   344,     0,
     344,     0,   222,   222,   222,   103,   104,   105,     0,   259,
     259,   280,   -84,   -84,   -84,     0,   -84,     0,     0,     0,
     198,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,     0,   -84,   -84,   -84,   -84,     0,   -84,     0,     0,
     -84,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      22,   -84,    23,   -84,   -84,   -84,   -84,   -84,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     0,     0,   -69,
     -69,   -69,   -69,   -69,   311,   311,   311,     0,     0,     0,
       0,   343,   343,     0,   343,     0,   198,    36,   -69,    73,
       0,     0,     0,     0,   260,   260,   281,   -69,   -69,   -69,
     -69,   -69,     0,   -29,   -29,   -29,     0,   -29,     0,     0,
     260,   260,   281,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,   -29,   -29,   -29,   -29,     0,   -29,     0,
     198,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,   344,   344,   198,
     344,   -72,     0,   344,   344,     0,   344,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -33,   -33,   -33,   -72,   -33,     0,   198,     0,
     -72,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,
     -33,     0,     0,   198,     0,     0,     0,     0,     0,     0,
       0,   -33,   198,   -33,   -33,   -33,   -33,   -33,     0,     0,
     198,     0,     0,     0,     0,     0,   -85,   -85,   -85,     0,
     -85,     0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,     0,   -85,   -85,   -85,   -85,
       0,   -85,     0,     0,   -85,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,   -85,   198,   -85,   -85,   -85,
     -85,   -85,     0,     0,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,     0,   222,
     222,   222,   499,   500,   501,     0,     0,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,     0,
     222,   222,   222,   530,   531,   532,     0,     0,   198,   537,
     538,   539,     0,     0,   198,   222,   222,   222,   547,   548,
     549,     0,     0,     0,     0,     0,   198,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   222,   222,
     222,   579,   580,   581,     0,     0,   198,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,     0,     0,
       0,     0,     0,     0,   198,     0,     0,   259,   259,   280,
       0,     0,     0,     0,     0,     0,   222,   222,   222,     0,
       0,   259,   259,   280,     0,     0,     0,   222,   222,   222,
     635,   636,   637,     0,     0,   198,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,     0,     0,   259,
     259,   280,     0,   -79,   -79,   -79,     0,   -79,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,   198,   -79,   -79,   -79,   -79,     0,   -79,     0,
       0,   -79,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,   -80,   -79,   -80,   -79,   -79,   -79,   -79,   -79,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,   -80,
     -80,   -80,   -80,     0,   -80,     0,     0,   -80,     0,     0,
       0,   198,     0,     0,     0,   -81,   -81,   -81,   -80,   -81,
     -80,   -80,   -80,   -80,   -80,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,     0,   -81,   -81,   -81,   -81,     0,
     -81,     0,   198,   -81,     0,     0,     0,     0,     0,     0,
       0,   -75,   -75,   -75,   -81,   -75,   -81,   -81,   -81,   -81,
     -81,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
       0,   -75,   -75,   -75,   -75,     0,   -75,     0,     0,   -75,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -75,     0,   -75,   -75,   -75,   -75,   -75,     0,   198,     0,
       0,     0,     0,   -45,     0,     0,     0,     0,     0,     0,
       0,   197,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     311,   311,   311,     0,     0,   -45,     0,     0,     0,   198,
     311,   311,   311,     0,     0,     0,     0,    99,   101,   102,
       0,   311,   311,   311,   258,   258,   279,     0,     0,     0,
     198,   311,   311,   311,     0,   197,     0,     0,     0,     0,
     198,     0,     0,   343,   343,     0,   343,   311,   311,   311,
       0,   343,   343,     0,   343,   311,   311,   311,     0,     0,
       0,    20,    21,    22,   198,    23,   343,   343,     0,   343,
       0,    24,    25,    26,    27,    28,    29,    30,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
     150,   151,     0,     0,     0,     0,   342,   342,     0,   342,
      36,   197,   450,     0,     0,   -77,   -77,   -77,     0,   -77,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,     0,   -77,   -77,   -77,   -77,     0,
     -77,     0,     0,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -77,   197,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,   259,   259,   280,   -70,     0,     0,     0,
       0,     0,     0,   -70,   197,     0,     0,     0,     0,   259,
     259,   280,   -70,   -70,   -70,   -70,   -70,   197,   426,   -70,
       0,     0,     0,     0,     0,   -70,     0,    20,    21,    22,
       0,    23,     0,   197,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,     0,    31,     0,   173,   357,    33,
      34,     0,   174,     0,     0,    35,   343,   343,   197,   343,
       0,     0,   343,   343,     0,   343,    36,   197,    37,    38,
     175,   176,   177,     0,     0,   197,     0,     0,     0,     0,
       0,   -24,   -24,   -24,     0,   -24,     0,     0,     0,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
       0,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,   -24,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
     -24,   197,   -24,   -24,   -24,   -24,   -24,     0,     0,   -67,
       0,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,     0,   496,   497,   498,     0,     0,     0,
       0,     0,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,     0,   527,   528,   529,     0,     0,
       0,     0,     0,   197,     0,     0,     0,     0,     0,   197,
     544,   545,   546,     0,     0,     0,     0,     0,     0,     0,
       0,   197,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   576,   577,   578,     0,     0,   -58,   -58,
     -58,   197,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,     0,     0,     0,     0,     0,     0,   197,
       0,     0,   258,   258,   279,     0,   -58,     0,   -58,     0,
     -58,   622,   623,   624,   -58,     0,   258,   258,   279,   -58,
       0,     0,   632,   633,   634,     0,     0,     0,     0,     0,
     197,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,     0,     0,   258,   258,   279,     0,    20,    21,
      22,     0,    23,     0,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,   197,   173,   445,
      33,    34,     0,   174,     0,     0,    35,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    37,
      38,   175,   176,   177,     0,     0,     0,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,   196,     0,   -39,
       0,     0,   152,     0,     0,   155,   197,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   166,   167,   168,   169,   170,   -39,     0,
     257,   257,   278,   172,     0,     0,     0,   197,     0,     0,
       0,   196,    20,    21,    22,     0,    23,     0,   124,   125,
     126,   127,    24,    25,    26,    27,    28,    29,    30,     0,
      31,     0,   173,   459,    33,    34,     0,   174,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,   -58,   -58,
     -58,    36,     0,    37,    38,   175,   176,   177,     0,     0,
       0,     0,     0,   197,     0,     0,     0,   -58,     0,     0,
       0,     0,   341,   341,     0,   341,   -58,   196,   -58,     0,
     -58,     0,     0,   -58,     0,   740,   741,   742,     0,   -58,
       0,     0,     0,     0,   197,   747,   748,   749,     0,     0,
       0,     0,     0,     0,     0,     0,   750,   751,   752,     0,
       0,     0,     0,     0,     0,   197,   757,   758,   759,     0,
       0,   196,     0,     0,     0,   197,     0,     0,   342,   342,
       0,   342,   781,   782,   783,     0,   342,   342,     0,   342,
     801,   802,   803,     0,     0,     0,     0,     0,     0,   197,
     196,   342,   342,     0,   342,    20,    21,    22,     0,    23,
       0,     0,     0,   196,     0,    24,    25,    26,    27,    28,
      29,    30,     0,    31,     0,   173,   487,    33,    34,   196,
     174,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    37,    38,   175,   176,
     177,     0,     0,     0,   196,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   -82,   -82,   -82,     0,   -82,     0,
       0,   196,     0,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,     0,   -82,   -82,   -82,   -82,     0,   -82,
       0,     0,   -82,     0,     0,     0,     0,     0,   258,   258,
     279,     0,     0,   -82,     0,   -82,   -82,   -82,   -82,   -82,
       0,     0,     0,     0,   258,   258,   279,   196,     0,     0,
       0,     0,     0,     0,    20,    21,    22,     0,    23,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,     0,    31,     0,   -59,   -59,   -59,     0,   196,   196,
     196,   196,   196,   196,   196,   522,   523,   524,   525,   196,
       0,   342,   342,    36,   342,   464,     0,   342,   342,   196,
     342,     0,   -59,     0,   -59,   196,   -59,     0,     0,     0,
     -59,     0,     0,     0,     0,   -59,     0,   196,   257,   257,
     257,   257,   257,   257,   571,   572,   573,   574,   257,     0,
       0,     0,     0,     0,     0,     0,     0,   196,   278,   278,
     278,   278,   278,   278,   602,   603,   604,   605,   278,     0,
       0,     0,     0,     0,     0,   196,     0,     0,   257,   257,
     278,     0,     0,     0,     0,    20,    21,    22,     0,    23,
       0,     0,   257,   257,   278,    24,    25,    26,    27,    28,
      29,    30,     0,    31,     0,     0,   196,   341,   341,   341,
     341,   341,   341,   658,   659,   660,   661,   341,     0,     0,
     257,   257,   278,     0,    36,     0,   492,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
       0,   -38,     0,   196,     0,     0,   712,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,     0,   -38,   720,   -38,
     -38,     0,     0,   -38,     0,   -38,     0,   195,     0,     0,
       0,   -36,   -36,   -36,     0,   -36,   -38,     0,   -38,   -38,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,   -36,   196,   -36,   -36,     0,   735,   -36,     0,   -36,
     256,   256,   277,     0,     0,     0,     0,     0,     0,     0,
     -36,   195,   -36,   -36,     0,   121,   122,   123,    20,    21,
      22,     0,    23,   196,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     0,   173,   495,
      33,    34,     0,   174,   764,     0,    35,   775,   -60,   -60,
     -60,     0,   784,     0,     0,   795,     0,    36,     0,    37,
      38,   175,   176,   177,     0,     0,     0,   808,     0,     0,
     811,     0,   340,   340,     0,   340,   -60,   195,   -60,   196,
     -60,   -25,   -25,   -25,   -60,   -25,     0,     0,     0,   -60,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
       0,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,   -25,
     196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -25,   195,   -25,   -25,   -25,   -25,   -25,     0,     0,     0,
       0,   196,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   196,     0,     0,   341,   341,     0,   341,     0,     0,
     195,     0,   341,   341,     0,   341,     0,     0,     0,     0,
     866,   867,   868,   195,     0,   196,     0,   341,   341,     0,
     341,   876,   877,     0,     0,     0,   878,   879,   880,   195,
       0,     0,     0,     0,     0,     0,     0,   888,   889,     0,
     -59,   -59,   -59,   890,   891,   892,   893,   894,     0,     0,
       0,     0,   895,     0,   195,     0,     0,     0,     0,   -59,
       0,     0,     0,   195,   901,     0,     0,     0,   -59,     0,
     -59,   195,   -59,     0,     0,   -59,     0,   908,     0,     0,
     911,   -59,   913,   914,     0,     0,   917,     0,   919,   920,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,   486,   931,   932,   933,   934,   935,   936,   937,
     938,   939,   940,     0,   257,   257,   278,   195,   -66,   -66,
     -66,   -66,   -66,   943,   944,   -66,     0,     0,     0,     0,
     257,   257,   278,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,   223,   224,   225,   -41,   226,     0,   195,   195,
     195,   195,   519,   520,   521,   227,   228,   229,   230,   195,
     231,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   195,
       0,     0,     0,     0,   -41,   195,     0,   341,   341,     0,
     341,   232,     0,   341,   341,     0,   341,   195,   256,   256,
     256,   568,   569,   570,     0,     0,     0,     0,   256,     0,
       0,     0,     0,     0,   -60,   -60,   -60,   195,   277,   277,
     277,   599,   600,   601,     0,     0,     0,     0,   277,     0,
       0,     0,     0,   -60,     0,   195,     0,     0,   256,   256,
     277,     0,   -60,     0,   -60,     0,   -60,     0,     0,   -60,
       0,     0,   256,   256,   277,   -60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195,   340,   340,   340,
     655,   656,   657,     0,    20,    21,    22,   340,    23,     0,
     256,   256,   277,     0,    24,    25,    26,    27,    28,    29,
      30,     0,    31,     0,   173,   613,    33,    34,     0,   174,
       0,     0,    35,   195,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,   -41,    36,     0,    37,    38,   175,   176,   177,
     -41,     0,     0,   -61,   -61,   -61,     0,   194,     0,     0,
       0,     0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,     0,   -41,     0,     0,     0,     0,   -41,
       0,   -61,   195,   -61,     0,   -61,     0,     0,     0,   -61,
     255,   255,   276,     0,   -61,     0,    20,    21,    22,     0,
      23,   194,   118,   119,   120,     0,    24,    25,    26,    27,
      28,    29,    30,   195,    31,     0,   173,   625,    33,    34,
       0,   174,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    36,    23,    37,    38,   175,
     176,   177,    24,    25,    26,    27,    28,    29,    30,     0,
      31,     0,   173,   663,    33,    34,     0,   174,     0,     0,
      35,     0,   339,   339,     0,   339,     0,   194,     0,   195,
       0,    36,     0,    37,    38,   175,   176,   177,     0,     0,
       0,   -83,   -83,   -83,     0,   -83,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     195,   -83,   -83,   -83,   -83,     0,   -83,     0,     0,   -83,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
     -83,   195,   -83,   -83,   -83,   -83,   -83,     0,     0,     0,
       0,   195,     0,     0,   340,   340,     0,   340,     0,     0,
     194,     0,   340,   340,     0,   340,     0,     0,     0,     0,
       0,     0,     0,   194,     0,   195,     0,   340,   340,     0,
     340,     0,     0,   -37,   -37,   -37,     0,   -37,     0,   194,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,     0,   -37,   302,   -37,   -37,     0,     0,   -37,
       0,   -37,     0,     0,   194,     0,     0,   193,     0,     0,
       0,     0,   -37,   194,   -37,   -37,     0,     0,     0,     0,
       0,   194,     0,     0,     0,     0,     0,   319,     0,     0,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,   111,     0,   -44,   -44,   -44,   -44,   -44,     0,
     114,   116,   352,     0,     0,     0,   -44,     0,     0,     0,
       0,     0,   128,   -44,   256,   256,   277,   194,     0,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     256,   256,   277,     0,     0,   -44,     0,     0,   -61,   -61,
     -61,     0,     0,     0,     0,     0,     0,     0,   194,   515,
     517,   518,     0,     0,     0,     0,     0,   -61,     0,   194,
       0,     0,   153,   154,     0,   156,   -61,   157,   -61,   194,
     -61,     0,     0,   -61,     0,   194,     0,   340,   340,   -61,
     340,     0,     0,   340,   340,     0,   340,   194,   564,   566,
     567,     0,     0,     0,     0,     0,     0,     0,   255,     0,
       0,     0,     0,     0,     0,     0,     0,   194,   595,   597,
     598,   193,     0,     0,     0,     0,     0,     0,   276,     0,
     -46,   -46,   -46,   -46,   -46,   194,     0,     0,   255,   255,
     276,     0,   -46,     0,     0,     0,     0,     0,     0,   -46,
     193,     0,   255,   255,   276,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,   193,   -46,   -46,   194,   651,   653,   654,
       0,   -46,     0,     0,     0,     0,     0,   339,   303,   193,
     255,   255,   276,     0,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,     0,     0,     0,
     -40,     0,     0,   194,   193,     0,     0,     0,     0,     0,
       0,   320,     0,   438,   353,     0,   -40,   -40,   -40,   -40,
     -40,   193,   -40,     0,   -40,     0,     0,     0,     0,   -40,
       0,     0,     0,    20,    21,    22,   353,    23,     0,     0,
       0,     0,     0,    24,    25,    26,    27,    28,    29,    30,
       0,    31,   194,   173,   831,    33,    34,     0,   174,     0,
       0,    35,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,    36,     0,    37,    38,   175,   176,   177,     0,
       0,     0,     0,   194,     0,     0,     0,     0,     0,     0,
      20,    21,    22,     0,    23,     0,     0,     0,   116,     0,
      24,    25,    26,    27,    28,    29,    30,     0,    31,   526,
     173,   847,    33,    34,     0,   174,     0,     0,    35,   116,
       0,     0,     0,     0,     0,   116,   -53,   -53,   -53,    36,
       0,    37,    38,   175,   176,   177,     0,   116,     0,   194,
       0,   -58,   -58,   -58,     0,     0,     0,     0,   575,     0,
       0,   304,     0,     0,   371,     0,   372,   116,   373,     0,
       0,   -53,     0,     0,     0,     0,     0,   -53,   606,   -58,
     194,   -58,     0,   -58,     0,   116,   -58,     0,   615,   616,
     618,     0,   -58,     0,   321,     0,     0,   354,     0,     0,
       0,   194,   627,   628,   630,     0,     0,     0,     0,     0,
       0,   194,     0,     0,   339,   339,   116,   339,     0,   354,
       0,     0,   339,   339,     0,   339,     0,   662,     0,     0,
     665,   666,   668,     0,     0,   194,     0,   339,   339,     0,
     339,     0,     0,     0,     0,    20,    21,    22,     0,    23,
       0,     0,     0,   193,     0,    24,    25,    26,    27,    28,
      29,    30,     0,    31,     0,   173,   869,    33,    34,     0,
     174,   302,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   302,    36,     0,    37,    38,   175,   176,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   193,     0,    20,    21,    22,     0,    23,     0,
       0,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,   302,    31,     0,   173,   881,    33,    34,     0,   174,
       0,     0,    35,   193,   255,   255,   276,     0,   -59,   -59,
     -59,     0,     0,    36,     0,    37,    38,   175,   176,   177,
     255,   255,   276,     0,     0,     0,     0,   306,     0,     0,
       0,     0,     0,     0,     0,     0,   -59,     0,   -59,   319,
     -59,     0,   774,   -59,     0,     0,     0,   319,     0,   -59,
     794,   -57,   -57,   -57,   374,   375,     0,     0,     0,   193,
     323,     0,   319,   356,     0,   352,     0,   339,   339,     0,
     339,     0,     0,   339,   339,     0,   339,     0,     0,   -57,
     376,   -57,   377,   -57,     0,   356,   -57,   -82,   -82,   -82,
     116,   -82,   -57,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,     0,   -82,     0,   -82,
     -82,   116,     0,   -82,     0,   -82,     0,     0,     0,     0,
       0,   116,     0,     0,   765,   766,   -82,   780,   -82,   -82,
       0,     0,   785,   786,     0,   800,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,     0,   809,   810,     0,
     812,     0,     0,     0,     0,   302,   302,   302,     0,     0,
       0,     0,     0,     0,     0,   303,   302,   774,     0,     0,
       0,   319,   319,   319,     0,     0,     0,   303,   -60,   -60,
     -60,     0,   319,   794,     0,     0,     0,     0,   352,   352,
     352,   352,   352,     0,     0,     0,     0,   302,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,     0,   -60,   302,
     -60,     0,     0,   -60,     0,   303,     0,     0,     0,   -60,
       0,     0,   319,     0,     0,   774,     0,   302,   319,     0,
       0,   794,     0,   319,   352,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   871,   872,   874,     0,   774,   774,
     774,   774,   774,   794,   794,   794,   794,   794,     0,     0,
     883,   884,   886,   320,     0,     0,   776,     0,   774,   794,
       0,   320,     0,     0,   796,     0,     0,     0,     0,     0,
       0,     0,     0,   -84,   -84,   -84,   320,   -84,     0,   353,
       0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,     0,   -84,     0,   -84,   -84,   909,   910,   -84,
     912,   -84,     0,   915,   916,     0,   918,   -33,   -33,   -33,
       0,   -33,   -84,     0,   -84,   -84,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   304,   -33,
     -33,     0,     0,   -33,     0,   -33,     0,     0,     0,     0,
     304,     0,     0,     0,     0,     0,   -33,     0,   -33,   -33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,   303,
     303,   303,   -40,     0,     0,     0,     0,     0,   304,     0,
     303,   776,     0,     0,     0,   320,   320,   320,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   320,   796,     0,     0,
       0,   -40,   353,   353,   353,   353,   353,     0,     0,     0,
       0,   303,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   303,     0,     0,   321,     0,     0,   777,
       0,     0,     0,     0,   321,     0,   320,   797,     0,   776,
       0,   303,   320,     0,     0,   796,     0,   320,   353,   321,
       0,     0,   354,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   776,   776,   776,   776,   776,   796,   796,   796,
     796,   796,     0,     0,   -83,   -83,   -83,     0,   -83,     0,
       0,     0,   776,   796,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,     0,   -83,     0,   -83,   -83,     0,     0,
     -83,     0,   -83,     0,     0,     0,     0,   -85,   -85,   -85,
       0,   -85,     0,   -83,     0,   -83,   -83,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   306,   -85,     0,   -85,     0,   -85,
     -85,     0,     0,   -85,     0,   -85,   306,     0,     0,     0,
       0,     0,   304,   304,   304,     0,   -85,     0,   -85,   -85,
       0,     0,     0,   304,   777,     0,     0,     0,   321,   321,
     321,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,   321,
     797,     0,     0,   -45,   306,   354,   354,   354,   354,   354,
       0,     0,     0,     0,   304,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   304,   -45,     0,     0,
       0,     0,   -45,     0,     0,     0,     0,     0,     0,   321,
       0,     0,   777,     0,   304,   321,     0,     0,   797,     0,
     321,   354,   323,     0,     0,   779,     0,     0,     0,     0,
     323,     0,     0,   799,     0,   777,   777,   777,   777,   777,
     797,   797,   797,   797,   797,   323,     0,     0,   356,   -78,
     -78,   -78,     0,   -78,     0,   777,   797,     0,     0,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,     0,   -78,     0,   -78,
       0,   -78,   -78,     0,     0,   900,     0,   -78,     0,   -61,
     -61,   -61,   -76,   -76,   -76,     0,   -76,     0,   -78,     0,
     -78,   -78,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
     -76,     0,   -76,     0,   -76,   -76,     0,   -61,   924,   -61,
     -76,   -61,     0,     0,   -61,   -66,   -66,   -66,   -66,   -66,
     -61,   -76,     0,   -76,   -76,     0,     0,   417,     0,   -45,
     -45,   -45,   -45,   -45,   -66,     0,     0,     0,   306,   306,
     306,   -45,     0,   -66,   -66,   -66,   -66,   -66,     0,   306,
     779,     0,     0,     0,   323,   323,   323,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   323,   799,     0,     0,     0,
     -45,   356,   356,   356,   356,   356,     0,     0,     0,     0,
     306,     0,     0,     0,    20,    21,    22,     0,    23,     0,
       0,     0,   306,     0,    24,    25,    26,    27,    28,    29,
      30,     0,    31,     0,   312,   323,   313,   314,   779,     0,
     306,   323,   315,     0,   799,     0,   323,   356,     0,     0,
       0,     0,     0,    36,     0,   316,   317,     0,     0,     0,
       0,   779,   779,   779,   779,   779,   799,   799,   799,   799,
     799,     0,     0,   -79,   -79,   -79,     0,   -79,     0,     0,
       0,   779,   799,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,     0,   -79,     0,   -79,   -79,     0,     0,   -79,
       0,   -79,     0,     0,     0,     0,   -80,   -80,   -80,     0,
     -80,     0,   -79,     0,   -79,   -79,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,     0,   -80,     0,   -80,   -80,
       0,     0,   -80,     0,   -80,     0,     0,     0,     0,   -81,
     -81,   -81,     0,   -81,     0,   -80,     0,   -80,   -80,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,   -81,
       0,   -81,   -81,     0,     0,   -81,     0,   -81,     0,     0,
       0,     0,   -75,   -75,   -75,     0,   -75,     0,   -81,     0,
     -81,   -81,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
     -75,     0,   -75,     0,   -75,   -75,     0,     0,   -75,     0,
     -75,     0,     0,     0,     0,   -78,   -78,   -78,     0,   -78,
       0,   -75,     0,   -75,   -75,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,     0,   -78,     0,   -78,   -78,     0,
       0,   941,     0,   -78,     0,     0,     0,     0,   -77,   -77,
     -77,     0,   -77,     0,   -78,     0,   -78,   -78,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,     0,   -77,     0,   -77,     0,
     -77,   -77,     0,     0,   -77,     0,   -77,     0,     0,     0,
       0,    20,    21,    22,     0,    23,     0,   -77,     0,   -77,
     -77,    24,    25,    26,    27,    28,    29,    30,     0,    31,
       0,   345,     0,   346,   347,     0,     0,     0,     0,   348,
       0,     0,     0,     0,    20,    21,    22,     0,    23,     0,
      36,     0,   349,   350,    24,    25,    26,    27,    28,    29,
      30,     0,    31,     0,   173,     0,    33,    34,     0,     0,
       0,     0,    35,     0,     0,     0,     0,   -20,   -20,   -20,
       0,   -20,     0,    36,     0,    37,    38,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,     0,   -20,     0,   -20,     0,   -20,
     -20,     0,     0,     0,     0,   -20,     0,     0,     0,     0,
     -21,   -21,   -21,     0,   -21,     0,   -20,     0,   -20,   -20,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,     0,
     -21,     0,   -21,   -21,     0,     0,     0,     0,   -21,     0,
       0,     0,     0,   -32,   -32,   -32,     0,   -32,     0,   -21,
       0,   -21,   -21,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,     0,   -32,     0,   -32,   -32,     0,     0,     0,
       0,   -32,     0,     0,     0,     0,   -34,   -34,   -34,     0,
     -34,     0,   -32,     0,   -32,   -32,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,     0,   -34,     0,   -34,   -34,
       0,     0,     0,     0,   -34,     0,     0,     0,     0,   -35,
     -35,   -35,     0,   -35,     0,   -34,     0,   -34,   -34,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
       0,   -35,   -35,     0,     0,     0,     0,   -35,     0,     0,
       0,     0,   -38,   -38,   -38,     0,   -38,     0,   -35,     0,
     -35,   -35,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,     0,   -38,     0,   -38,   -38,     0,     0,     0,     0,
     -38,     0,     0,     0,     0,   -36,   -36,   -36,     0,   -36,
       0,   -38,     0,   -38,   -38,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,     0,   -36,     0,   -36,   -36,     0,
       0,     0,     0,   -36,     0,     0,     0,     0,   -37,   -37,
     -37,     0,   -37,     0,   -36,     0,   -36,   -36,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,     0,   -37,     0,
     -37,   -37,     0,     0,     0,     0,   -37,     0,     0,     0,
       0,   -19,   -19,   -19,     0,   -19,     0,   -37,     0,   -37,
     -37,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,
       0,   -19,     0,   -19,   -19,     0,     0,     0,     0,   -19,
       0,     0,     0,     0,   -24,   -24,   -24,     0,   -24,     0,
     -19,     0,   -19,   -19,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,     0,   -24,     0,   -24,   -24,     0,     0,
       0,     0,   -24,     0,     0,     0,     0,   -82,   -82,   -82,
       0,   -82,     0,   -24,     0,   -24,   -24,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,     0,   -82,     0,   -82,
     -82,     0,     0,     0,     0,   -82,     0,     0,     0,     0,
     -84,   -84,   -84,     0,   -84,     0,   -82,     0,   -82,   -82,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,     0,
     -84,     0,   -84,   -84,     0,     0,     0,     0,   -84,     0,
       0,     0,     0,   -33,   -33,   -33,     0,   -33,     0,   -84,
       0,   -84,   -84,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,   -33,     0,   -33,   -33,     0,     0,     0,
       0,   -33,     0,     0,     0,     0,   -25,   -25,   -25,     0,
     -25,     0,   -33,     0,   -33,   -33,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,   -25,     0,   -25,   -25,
       0,     0,     0,     0,   -25,     0,     0,     0,     0,   -83,
     -83,   -83,     0,   -83,     0,   -25,     0,   -25,   -25,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,     0,   -83,
       0,   -83,   -83,     0,     0,     0,     0,   -83,     0,     0,
       0,     0,   -85,   -85,   -85,     0,   -85,     0,   -83,     0,
     -83,   -83,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,     0,   -85,     0,   -85,   -85,     0,     0,     0,     0,
     -85,     0,     0,     0,     0,    20,    21,    22,     0,    23,
       0,   -85,     0,   -85,   -85,    24,    25,    26,    27,    28,
      29,    30,     0,    31,     0,   767,     0,   768,   769,     0,
       0,     0,     0,   770,     0,     0,     0,     0,    20,    21,
      22,     0,    23,     0,    36,     0,   771,   772,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     0,   787,     0,
     788,   789,     0,     0,     0,     0,   790,     0,     0,     0,
       0,   -79,   -79,   -79,     0,   -79,     0,    36,     0,   791,
     792,   -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,
       0,   -79,     0,   -79,   -79,     0,     0,     0,     0,   -79,
       0,     0,     0,     0,   -80,   -80,   -80,     0,   -80,     0,
     -79,     0,   -79,   -79,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   -80,     0,   -80,     0,   -80,   -80,     0,     0,
       0,     0,   -80,     0,     0,     0,     0,   -81,   -81,   -81,
       0,   -81,     0,   -80,     0,   -80,   -80,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   -81,     0,   -81,     0,   -81,
     -81,     0,     0,     0,     0,   -81,     0,     0,     0,     0,
     -75,   -75,   -75,     0,   -75,     0,   -81,     0,   -81,   -81,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,     0,
     -75,     0,   -75,   -75,     0,     0,     0,     0,   -75,     0,
       0,     0,     0,   -77,   -77,   -77,     0,   -77,     0,   -75,
       0,   -75,   -75,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,     0,   -77,     0,   -77,   -77,     0,     0,     0,
       0,   -77,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,   -77,     0,   -77,   -77,   -42,     0,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,     0,     0,
     -43,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,     0,
     -42,     0,     0,     0,     0,   -42,   -43,   -43,   -43,   -43,
     -43,     0,   -43,     0,   -43,     0,     0,     0,     0,   -43,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,   -44,   -44,   -44,   -44,   -44,     0,
       0,     0,     0,     0,     0,     0,   -44,     0,   -70,   -70,
     -70,   -70,   -70,     0,    80,     0,   -70,     0,     0,     0,
       0,   -70,   -44,   -44,   -44,   -44,   -44,     0,   -44,     0,
     -44,     0,     0,     0,     0,   -44,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,     0,     0,     0,     0,   -46,     0,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,     0,   -42,     0,   -46,   -46,   -46,   -46,   -46,     0,
     -46,     0,   -46,     0,     0,     0,     0,   -46,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -43,   -43,   -43,   -43,
     -43,   -42,     0,     0,     0,     0,     0,     0,   -43,     0,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,     0,     0,     0,     0,     0,   -43,   -70,   -70,
     -70,   -70,   -70,     0,   367,   -70,   -66,   -66,   -66,   -66,
     -66,   -70,     0,     0,     0,     0,     0,     0,   437,     0,
     -44,   -44,   -44,   -44,   -44,   -66,     0,     0,     0,     0,
       0,     0,   -44,     0,   -66,   -66,   -66,   -66,   -66,     0,
       0,   -66,     0,     0,     0,     0,     0,   -66,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -46,   -46,   -46,   -46,
     -46,   -44,     0,     0,     0,     0,     0,     0,   -46,     0,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,     0,   -71,     0,   -46,   -46,   -46,   -46,   -46,   -71,
     -46,   -46,   -39,   -39,   -39,   -39,   -39,   -46,   -71,   -71,
     -71,   -71,   -71,     0,   -39,   -71,   -42,   -42,   -42,   -42,
     -42,   -71,     0,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -39,   -39,   -39,   -39,   -39,   -42,   -39,   -39,     0,     0,
       0,     0,     0,   -43,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -43,   -43,   -43,   -43,   -43,   -42,   -43,   -43,
     -70,   -70,   -70,   -70,   -70,   -43,     0,     0,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,   -70,
     -72,     0,     0,     0,     0,     0,     0,   -72,   -70,   -70,
     -70,   -70,   -70,     0,   710,   -70,   -72,   -72,   -72,   -72,
     -72,   -70,     0,   -72,   -44,   -44,   -44,   -44,   -44,   -72,
       0,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,   -44,     0,     0,     0,     0,     0,     0,
       0,   -46,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -46,   -46,   -46,   -46,   -46,   -44,   -46,   -46,    20,    21,
      22,     0,    23,   -46,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,    20,    21,    22,
       0,    23,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,     0,    31,     0,    36,     0,   836,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,   378,     0,     0,     0,    36,     0,   852,   -57,
     -57,   -57,   433,   434,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -66,     0,     0,   -57,     0,
       0,   -66,   -62,   -62,   -62,   -62,   -62,   -57,   435,   -57,
     436,   -57,     0,     0,   -57,     0,     0,     0,     0,     0,
     -57,   -62,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,     0,     0,   -62,   -41,   -41,
     -41,   -41,   -41,   -62,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,     0,   -39,     0,
       0,     0,     0,   -39,     0,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,     0,   -41,     0,     0,     0,     0,   -41,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -40,   -40,
     -40,   -40,   -40,     0,   -40,     0,   -40,     0,     0,     0,
       0,   -40,   -45,   -45,   -45,   -45,   -45,     0,   -45,     0,
     -45,     0,     0,     0,     0,   -45,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,
     -42,     0,   -42,     0,     0,     0,     0,   -42,   -43,   -43,
     -43,   -43,   -43,     0,   -43,     0,   -43,     0,     0,     0,
       0,   -43,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,     0,   -71,     0,
     -70,   -70,   -70,   -70,   -70,     0,   444,     0,   -70,     0,
       0,     0,     0,   -70,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -71,   -39,   -39,   -39,   -39,   -39,   -71,     0,     0,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -41,   -41,
     -41,   -41,   -41,   -39,   -41,   -41,   -40,   -40,   -40,   -40,
     -40,   -41,   -40,   -40,   -45,   -45,   -45,   -45,   -45,   -40,
       0,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,
       0,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -42,   -42,   -42,   -42,   -42,   -45,   -42,   -42,   -43,   -43,
     -43,   -43,   -43,   -42,   -43,   -43,   -70,   -70,   -70,   -70,
     -70,   -43,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,
       0,     0,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,   -66,   -70,   -70,   -70,   -70,   -70,     0,
     679,   -70,   -66,   -66,   -66,   -66,   -66,   -70,     0,   -66,
     -44,   -44,   -44,   -44,   -44,   -66,   -44,     0,   -44,     0,
       0,     0,     0,   -44,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,     0,
     -46,     0,     0,     0,     0,   -46,   -72,   -72,   -72,   -72,
     -72,     0,     0,   -72,   -69,   -69,   -69,   -69,   -69,   -72,
       0,     0,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,   -69,     0,     0,     0,     0,     0,     0,
       0,   -68,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,
     -68,   -68,   -68,   -68,   -68,   -69,     0,   -68,   -67,   -67,
     -67,   -67,   -67,   -68,     0,     0,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,   -67,     0,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -67,   -67,   -67,   -67,
     -67,     0,     0,   -67,   -44,   -44,   -44,   -44,   -44,   -67,
     -44,   -44,   -39,   -39,   -39,   -39,   -39,   -44,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -71,   -71,   -71,   -71,
     -71,   -46,     0,     0,   -63,   -63,   -63,   -63,   -63,     0,
     -39,   -39,   -39,   -39,   -39,   -71,   -39,   -39,     0,     0,
       0,     0,     0,   -63,   -71,   -71,   -71,   -71,   -71,     0,
       0,   -71,   -63,   -63,   -63,   -63,   -63,   -71,     0,   -63,
     -64,   -64,   -64,   -64,   -64,   -63,     0,     0,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,   -64,
       0,     0,     0,     0,     0,     0,     0,   -65,   -64,   -64,
     -64,   -64,   -64,     0,     0,   -64,   -65,   -65,   -65,   -65,
     -65,   -64,     0,   -65,   -72,   -72,   -72,   -72,   -72,   -65,
       0,     0,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,   -72,     0,     0,   -63,   -63,   -63,   -63,
     -63,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,
     -67,   -67,   -67,   -67,   -67,   -72,     0,     0,   -67,     0,
       0,     0,     0,   -67,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,   -63,     0,     0,     0,     0,   -63,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,   -64,     0,     0,     0,     0,   -64,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,     0,
       0,     0,     0,   -65,   -62,   -62,   -62,   -62,   -62,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
     -66,   -66,   -66,   -66,   -66,   -62,     0,     0,   -66,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,
       0,   -66,   -71,   -71,   -71,   -71,   -71,   -66,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,     0,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -71,     0,
       0,     0,     0,   -71,   -69,   -69,   -69,   -69,   -69,     0,
       0,   -69,   -68,   -68,   -68,   -68,   -68,   -69,     0,   -68,
     -67,   -67,   -67,   -67,   -67,   -68,     0,     0,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,     0,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -72,   -72,   -72,   -72,
     -72,   -67,     0,     0,   -72,     0,     0,     0,     0,   -72,
     -71,   -71,   -71,   -71,   -71,     0,     0,   -71,   -63,   -63,
     -63,   -63,   -63,   -71,     0,     0,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,     0,     0,   -63,   -64,   -64,   -64,   -64,   -64,   -63,
       0,   -64,   -65,   -65,   -65,   -65,   -65,   -64,     0,   -65,
     -72,   -72,   -72,   -72,   -72,   -65,   178,   179,   180,     0,
     181,     0,     0,     0,     0,     0,   182,   183,   184,   185,
     186,   187,   188,     0,   189,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,     0,     0,   -72,     0,     0,   178,   179,
     180,   -72,   181,     0,     0,   190,   115,     0,   182,   183,
     184,   185,   186,   187,   188,     0,   189,   178,   179,   180,
       0,   181,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,   188,     0,   189,     0,   190,   504,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,     0,   181,     0,     0,     0,   190,   535,   182,   183,
     184,   185,   186,   187,   188,     0,   189,   178,   179,   180,
       0,   181,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,   188,     0,   189,     0,   190,   542,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,     0,   181,     0,     0,     0,   190,   553,   182,   183,
     184,   185,   186,   187,   188,     0,   189,   178,   179,   180,
       0,   181,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,   188,     0,   189,     0,   190,   584,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,     0,   181,     0,     0,     0,   190,   611,   182,   183,
     184,   185,   186,   187,   188,     0,   189,   178,   179,   180,
       0,   181,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,   188,     0,   189,     0,   190,   640,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,     0,   181,     0,     0,     0,   190,   745,   182,   183,
     184,   185,   186,   187,   188,     0,   189,   178,   179,   180,
       0,   181,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,   188,     0,   189,     0,   190,   755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,     0,   181,     0,     0,     0,   190,   762,   182,   183,
     184,   185,   186,   187,   188,     0,   189,   178,   179,   180,
       0,   181,     0,     0,     0,     0,     0,   182,   183,   184,
     185,   186,   187,   188,     0,   189,     0,   190,   806,   207,
     208,   209,     0,   210,     0,     0,     0,     0,     0,   211,
     212,   213,   214,   215,   216,   217,   190,   218,   236,   237,
     238,     0,   239,     0,     0,     0,     0,     0,   240,   241,
     242,   243,   244,   245,   246,     0,   247,     0,   219,     0,
     261,   262,   263,     0,   264,     0,     0,     0,     0,     0,
     265,   266,   267,   268,   269,   270,   271,   248,   272,    20,
      21,    22,     0,    23,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,     0,    31,     0,   273,
       0,   284,   285,   286,     0,   287,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,   288,    36,   289,
     223,   224,   225,     0,   226,     0,     0,     0,     0,     0,
     308,   309,   310,   227,   228,   229,   230,     0,   231,     0,
     290,     0,   324,   325,   326,     0,   327,     0,     0,     0,
       0,     0,   328,   329,   330,   331,   332,   333,   334,   232,
     335,   506,   507,   508,     0,   509,     0,     0,     0,     0,
       0,   182,   183,   184,   185,   186,   187,   510,     0,   511,
       0,   336,     0,   555,   556,   557,     0,   558,     0,     0,
       0,     0,     0,   240,   241,   242,   243,   244,   245,   559,
     512,   560,   586,   587,   588,     0,   589,     0,     0,     0,
       0,     0,   265,   266,   267,   268,   269,   270,   590,     0,
     591,     0,   561,     0,   642,   643,   644,     0,   645,     0,
       0,     0,     0,     0,   328,   329,   330,   331,   332,   333,
     646,   592,   647,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,   -41,   -40,   -40,   -40,   -40,
     -40,     0,     0,   648,     0,     0,     0,     0,   -40,     0,
       0,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,     0,
       0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,     0,   -45,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,     0,   -42,     0,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,     0,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
       0,     0,     0,   -43,   -70,   -70,   -70,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,   -70,     0,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,     0,   475,   -70,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
       0,     0,   -44,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,   -46,     0,     0,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -41,   -41,   -41,   -41,
     -41,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,   -71,     0,     0,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -40,   -40,   -40,   -40,   -40,   -71,   -71,   -71,
     -71,   -71,     0,     0,   -71,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -43,   -43,
     -43,   -43,   -43,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,   -70,   -70,   -70,
     -70,   -70,     0,   734,   -70,   -44,   -44,   -44,   -44,   -44,
       0,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,
     -46,   -46,   -46,   -46,   -46,     0,     0,     0,   -57,   -57,
     -57,   482,   483,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -62,   -62,   -62,   -62,   -62,     0,     0,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -57,   484,   -57,   485,
     -57,     0,     0,   -57,   -66,   -66,   -66,   -66,   -66,   -62,
     -62,   -62,   -62,   -62,     0,     0,   -62,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
       0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,   -66,
     -67,   -67,   -67,   -67,   -67,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -69,   -68,   -68,   -68,   -68,   -68,     0,     0,
     -68,   -71,   -71,   -71,   -71,   -71,     0,     0,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -71,
     -71,   -71,   -71,   -71,     0,     0,   -71,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -64,   -64,   -64,   -64,   -64,     0,     0,   -64,
     -72,   -72,   -72,   -72,   -72,   -65,   -65,   -65,   -65,   -65,
       0,     0,   -65,     0,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,     0,     0,   -39,     0,   -72,   -72,
     -72,   -72,   -72,   -39,     0,   -72,     0,   -41,   -41,   -41,
     -41,   -41,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -41,
       0,   -40,   -40,   -40,   -40,   -40,   -41,     0,     0,     0,
       0,     0,     0,   -40,     0,   -41,   -41,   -41,   -41,   -41,
     -40,   -41,   -45,   -45,   -45,   -45,   -45,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -45,   -40,   -42,   -42,   -42,   -42,
     -42,   -45,     0,     0,     0,     0,     0,     0,   -42,     0,
     -45,   -45,   -45,   -45,   -45,   -42,   -45,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -42,   -42,   -42,   -42,   -42,   -43,
     -42,   -70,   -70,   -70,   -70,   -70,   -43,     0,     0,     0,
       0,     0,     0,   -70,     0,   -43,   -43,   -43,   -43,   -43,
     -70,   -43,   -44,   -44,   -44,   -44,   -44,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -44,   406,   -46,   -46,   -46,   -46,
     -46,   -44,     0,   -39,   -39,   -39,   -39,   -39,   -46,     0,
     -44,   -44,   -44,   -44,   -44,   -46,   -44,   -41,   -41,   -41,
     -41,   -41,   -39,     0,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -39,   -39,   -39,   -39,   -39,   -41,   -39,   -40,   -40,
     -40,   -40,   -40,     0,     0,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -45,   -45,   -45,   -45,   -45,   -40,     0,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -45,   -40,   -43,   -43,   -43,   -43,   -43,   -42,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -42,   -42,   -42,
     -42,   -42,   -43,   -42,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -44,   -44,
     -44,   -44,   -44,   -70,     0,   -46,   -46,   -46,   -46,   -46,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -44,   700,   -71,
     -71,   -71,   -71,   -71,   -46,     0,   -44,   -44,   -44,   -44,
     -44,   -71,   -44,   -46,   -46,   -46,   -46,   -46,   -71,   -46,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -71,   -71,   -71,
     -71,   -71,   -72,     0,   -71,   -71,   -71,   -71,   -71,   -72,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -72,   -72,
     -72,   -72,   -72,   -71,   -64,   -64,   -64,   -64,   -64,   -63,
       0,     0,   -71,   -71,   -71,   -71,   -71,     0,   -63,   -63,
     -63,   -63,   -63,   -64,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,     0,   -72,   -72,
     -72,   -72,   -72,   -65,     0,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -72,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72
};

static const yytype_int16 yycheck[] =
{
       7,     6,     0,     0,   173,    42,     0,    39,     6,     6,
     367,     0,     6,    42,    43,    23,    39,     8,     9,    10,
       0,     0,   283,    19,    42,    27,    19,     8,     9,    10,
      23,   388,     0,    23,    42,     0,    44,   394,    61,    28,
      42,    49,     0,    42,    43,     0,   307,    43,    28,   406,
      19,    44,    43,    49,    23,    42,     0,    46,    47,    48,
      28,    59,    43,    28,    69,    59,    46,    47,    48,   426,
      28,    69,    69,    28,    97,    44,    19,     0,    46,    47,
      48,    46,    47,    48,    28,    42,    43,   444,    46,    47,
      48,    46,    47,    48,     0,    42,     8,     9,    10,     0,
     107,    44,    46,    47,    48,    28,   283,    44,    42,     8,
       9,    10,    49,    27,    19,    27,    42,    27,   475,     8,
       9,    10,    28,    46,    47,    48,   295,    28,    27,    43,
     307,    43,    42,   140,   132,    49,   143,    49,   132,    44,
      46,    47,    48,   312,    43,    46,    47,    48,    42,    43,
      49,    42,     3,     4,     5,    44,     7,    19,   165,    19,
      49,    23,    13,    14,    15,    16,    17,    18,    19,    42,
      21,    42,    23,    24,    25,    26,   345,    28,    29,    19,
      31,    42,    44,     8,     9,    10,    11,    12,    19,    27,
      36,    42,    38,    44,    45,    46,    47,    48,     8,     9,
      10,    11,    12,    43,    42,     8,     9,    10,    27,    49,
      20,    36,    37,    38,    39,    40,    27,    27,   250,    44,
      21,    27,    27,    42,    49,    71,    36,    37,    38,    39,
      40,    42,    42,    43,     3,     4,     5,    43,     7,    49,
      43,    19,   249,    49,    13,    14,    15,    16,    17,    18,
      19,    42,    21,    44,    23,    24,    25,    26,    49,    28,
      29,   107,    31,    19,    27,    27,    44,     8,     9,    10,
       8,     9,    10,    42,    29,    44,    45,    46,    47,    48,
      42,    27,     8,     9,    10,   283,    23,    43,    43,   283,
       8,     9,    10,    49,   140,    27,    42,   143,     8,     9,
      10,    11,    12,    44,    27,    42,    44,    44,    49,   307,
      20,    49,    49,   307,     8,     9,    10,    27,    44,   165,
      19,   358,   679,    49,    23,    43,    36,    37,    38,    39,
      40,    49,    42,    43,    43,     8,     9,    10,    19,    49,
       8,     9,    10,   700,   190,    44,     3,     4,     5,    43,
       7,    29,    43,   710,    27,    49,    13,    14,    15,    16,
      17,    18,    19,    44,    21,    43,    23,    24,    25,    26,
      43,    28,    29,   219,    31,    43,    49,   734,     8,     9,
      10,    49,    27,    27,    43,    42,   232,    44,    45,    46,
      47,    48,     8,     9,    10,     8,     9,    10,    43,    43,
      27,    19,   248,    27,    49,    49,     3,     4,     5,   446,
       7,    27,    27,    43,    27,    42,    13,    14,    15,    16,
      17,    18,    19,   460,    21,    43,    23,   273,    25,    26,
      43,    49,    29,    19,    31,    19,    49,     8,     9,    10,
      11,    12,   447,    43,   290,    42,    29,    44,    45,   447,
     447,   488,    43,    19,   300,    19,   461,    19,    44,    23,
      43,    23,    43,   461,   461,    36,    37,    38,    39,    40,
      43,   317,    27,    44,     8,     9,    10,    43,    49,    42,
      44,    42,    44,    49,   489,     3,     4,     5,    43,     7,
     336,   489,   489,    23,    49,    13,    14,    15,    16,    17,
      18,    19,    27,    21,   350,    23,    24,    25,    26,    43,
      28,    29,    42,    31,    44,    49,    43,    42,    42,    49,
      43,     3,     4,     5,    42,     7,    44,    45,    46,    47,
      48,    13,    14,    15,    16,    17,    18,    19,    28,    21,
      43,    23,    24,    25,    26,    29,    28,    29,    42,    31,
      44,    42,    43,    42,    27,    49,    46,    47,    48,    43,
      42,    42,    44,    45,    46,    47,    48,     3,     4,     5,
      43,     7,    29,    42,    43,    27,    49,    13,    14,    15,
      16,    17,    18,    19,    42,    21,    43,    23,    24,    25,
      26,    43,    28,    29,    19,    31,    19,    49,   767,    27,
      27,    42,    43,   449,    42,    28,    42,   614,    44,    45,
      46,    47,    48,    27,    19,    43,    43,   463,   787,   626,
      43,    49,    49,    46,    47,    48,     3,     4,     5,    43,
       7,    42,    43,    42,    19,    49,    13,    14,    15,    16,
      17,    18,    19,    28,    21,   491,    23,    24,    25,    26,
      29,    28,    29,    42,    31,    23,    42,   664,    43,    29,
      42,    46,    47,    48,    43,    42,   512,    44,    45,    46,
      47,    48,    29,    43,    42,    42,    44,    27,     3,     4,
       5,    49,     7,    29,    42,    43,    43,    42,    13,    14,
      15,    16,    17,    18,    19,    42,    21,    43,    23,    24,
      25,    26,    44,    28,    29,   712,    31,    49,   715,     8,
       9,    10,    42,   720,    23,   561,   723,    42,    29,    44,
      45,    46,    47,    48,     8,     9,    10,    19,   735,    42,
      43,   738,    43,    42,    29,    44,    49,    36,    43,    38,
      49,    40,    44,    27,    43,    42,   592,    49,    43,     3,
       4,     5,    36,     7,    38,    42,    40,    27,    19,    13,
      14,    15,    16,    17,    18,    19,    42,    21,   614,    23,
      24,    25,    26,    43,    28,    29,    42,    31,    28,    49,
     626,    43,    42,    43,     8,     9,    10,    49,    42,    49,
      44,    45,    46,    47,    48,   832,    46,    47,    48,     8,
       9,    10,   648,    27,    44,     8,     9,    10,    42,    49,
      44,   848,    36,    42,    38,    49,    40,    42,   664,    43,
      43,   828,   829,   830,    27,    49,    49,    36,   833,    38,
      23,    40,   839,   840,    43,   833,   833,   844,   845,   846,
       8,     9,    10,    42,   849,     8,     9,    10,   855,   856,
      27,   849,   849,    29,   861,   862,   863,   864,   865,    29,
      44,    42,    42,   870,    27,    49,   712,    43,    36,   715,
      38,    29,    40,    43,   720,   882,    44,   723,     8,     9,
      10,    49,     8,     9,    10,    43,    42,    42,   895,   735,
      29,   898,   738,   900,   901,    29,    43,   904,    29,   906,
     907,    27,    49,    19,    43,    42,    36,    19,    38,    43,
      40,    29,    43,    43,   921,   922,   923,   924,   925,   926,
     927,   928,   929,   930,    43,    43,   772,     3,     4,     5,
      29,     7,    42,    42,   941,   942,    42,    13,    14,    15,
      16,    17,    18,    19,    43,    21,   792,    23,    24,    25,
      26,    43,    28,    29,    42,    31,    44,    49,    42,    42,
      42,    49,    42,     3,     4,     5,    42,     7,    44,    45,
      46,    47,    48,    13,    14,    15,    16,    17,    18,    19,
      42,    21,   828,   829,   830,    42,    43,    29,    28,   835,
      42,    42,    49,   839,   840,     8,     9,    10,   844,   845,
     846,    43,    42,    19,    43,   851,    46,    47,    48,   855,
     856,    43,    43,    43,    27,   861,   862,   863,   864,   865,
      43,    43,    43,    36,   870,    38,    49,    40,     3,     4,
       5,    43,     7,    42,    42,    42,   882,    49,    13,    14,
      15,    16,    17,    18,    19,    42,    21,    43,    23,   895,
      25,    26,   898,    49,   900,   901,    31,    43,   904,    36,
     906,   907,    43,    49,    42,    21,    44,    42,    49,    44,
      45,    49,    42,    21,    43,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,    62,    63,    64,    65,    66,
      67,    43,    69,    70,    71,   941,   942,    49,    42,    42,
      42,    21,    21,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     3,     4,     5,    43,     7,    21,
       8,     9,    10,    49,    13,    14,    15,    16,    17,    18,
      19,    42,    21,    44,    23,    43,    25,    26,    49,    27,
      29,    49,    31,    43,    42,    43,    21,    43,    36,    49,
      38,    49,    40,    42,    21,    44,    45,   134,   135,   136,
      43,    42,    43,    43,   141,   142,    49,   144,    49,   146,
      43,    43,    43,     3,     4,     5,    49,     7,    49,    27,
      27,    19,    27,    13,    14,    15,    16,    17,    18,    19,
      28,    21,    43,    23,    24,    25,    26,    43,    28,    29,
      43,    31,    44,    49,    43,    43,    49,    49,    46,    47,
      48,    43,    42,   190,    44,    45,    46,    47,    48,    19,
      43,    27,    43,     3,     4,     5,    49,     7,    49,    27,
      27,    43,    43,    13,    14,    15,    16,    17,    18,    19,
      43,    21,   219,    23,    24,    25,    26,    43,    28,    29,
      43,    31,    27,    49,    43,   232,    49,     8,     9,    10,
      11,    12,    42,    27,    44,    45,    46,    47,    48,    20,
      43,   248,    43,    43,    43,    43,    27,    43,    49,    49,
      49,    49,    43,    49,    43,    36,    37,    38,    39,    40,
      49,    42,    43,    43,    43,    43,   273,    43,    49,    49,
      49,    49,    43,    49,    27,   282,     3,     4,     5,    43,
       7,    27,    43,   290,    43,    49,    13,    14,    15,    16,
      17,    18,    19,    43,    21,    44,    23,    24,    25,    26,
      49,    28,    29,    19,    31,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,    42,    27,    44,    45,    46,
      47,    48,    20,    44,    27,    43,    43,    19,    49,   336,
      27,    49,    49,    36,    37,    38,    39,    40,    36,    37,
      38,    39,    40,    43,    42,    44,    44,    27,    27,    49,
      49,    49,   359,   360,   361,   362,   363,   364,    27,    27,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,    27,   380,   381,   382,   383,   384,   385,    43,
      43,   388,   389,   390,   391,    49,    49,   394,   395,   396,
     397,   398,   399,   400,    43,    43,    43,    27,    27,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,    43,    27,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,    44,    43,    43,    27,    27,    49,   444,    49,    49,
     447,   448,   449,    44,    27,    27,    43,    43,    49,   456,
     457,   458,    49,    49,   461,   462,   463,    43,    27,    27,
     467,   468,   469,   470,   471,   472,    27,    43,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
      43,    43,   489,   490,   491,    43,     3,     4,     5,    43,
       7,    49,    19,    43,    43,    49,    13,    14,    15,    16,
      17,    18,    19,    43,    21,   512,    23,    24,    25,    26,
      43,    28,    29,    43,    31,    43,    49,    43,    27,    49,
      27,    49,     3,     4,     5,    42,     7,    44,    45,    46,
      47,    48,    13,    14,    15,    16,    17,    18,    19,    21,
      21,    27,    23,    24,    25,    26,    43,    28,    29,    43,
      31,     0,    49,    27,   561,    49,    27,     6,     3,     4,
       5,    42,     7,    44,    45,    46,    47,    48,    13,    14,
      15,    16,    17,    18,    19,    27,    21,    44,    23,    24,
      25,    26,    49,    28,    29,   592,    31,    44,    44,    43,
      43,    21,    49,    49,     3,     4,     5,    42,     7,    44,
      45,    46,    47,    48,    13,    14,    15,    16,    17,    18,
      19,    43,    21,    44,    23,    24,    25,    26,    49,    28,
      29,    44,    31,    43,    21,    21,    49,     8,     9,    10,
      11,    12,    43,    42,    42,    44,    45,    46,    47,    48,
      44,   648,    44,    43,    43,    49,    27,    49,     8,     9,
      10,    11,    12,    43,    43,    36,    37,    38,    39,    40,
      20,    42,    43,   670,   671,   672,    43,    27,    49,     8,
       9,    10,   679,   680,   681,   682,    36,    37,    38,    39,
      40,    43,    42,    43,   691,   692,   693,    44,    43,    49,
      43,    43,    49,   700,   701,   702,   703,    36,    43,    38,
      44,    40,    43,   710,    43,    49,   713,   714,    36,   716,
     717,   718,   719,    43,   721,   722,    43,   724,   725,   726,
     727,    44,    42,    44,    43,    42,    49,   734,    49,   736,
     737,    43,   739,    43,    62,    63,    64,    65,    66,    67,
      43,    69,    70,    71,    43,    43,    43,    43,    42,    42,
      42,    27,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     3,     4,     5,    43,     7,    43,    43,
      43,    43,    43,    13,    14,    15,    16,    17,    18,    19,
      43,    21,    43,    23,    27,    25,    26,    43,    27,    29,
      43,    31,    43,     8,     9,    10,    11,    12,    27,    27,
      27,    43,    42,    27,    44,    45,   134,   135,   136,    43,
      43,    43,    43,   141,   142,    -1,   144,    43,   146,    -1,
      43,    36,    37,    38,    39,    40,   833,   834,   835,    44,
      43,    43,    43,    43,    49,     3,     4,     5,    43,     7,
      43,    -1,   849,   850,   851,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    25,    26,    -1,
      28,    29,   190,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    42,    -1,    44,    45,    46,    47,
      48,     8,     9,    10,    11,    12,    -1,    -1,    -1,   896,
     897,   219,   899,    20,    -1,   902,   903,    -1,   905,    36,
      -1,    38,    -1,    40,   232,    -1,    43,    -1,    -1,    36,
      37,    38,    39,    40,     3,     4,     5,    44,     7,    -1,
     248,    -1,    49,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      29,    -1,    31,    -1,    -1,   273,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,   282,    44,    45,    46,    47,    48,
      -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      25,    26,    -1,    28,    29,    -1,    31,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    42,   336,    44,
      45,    46,    47,    48,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      -1,   359,   360,   361,   362,   363,   364,    -1,    -1,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,    -1,   380,   381,   382,   383,   384,   385,    -1,    -1,
     388,   389,   390,   391,    -1,    -1,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,    -1,    -1,    -1,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,    -1,    -1,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
      -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,   447,
     448,   449,    -1,    -1,    -1,    -1,    -1,    -1,   456,   457,
     458,    -1,    -1,   461,   462,   463,    -1,    -1,    -1,   467,
     468,   469,   470,   471,   472,    -1,    -1,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,    -1,
      -1,   489,   490,   491,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,   512,    23,    24,    25,    26,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    42,     7,    44,    45,    46,    47,
      48,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,   561,    -1,    -1,    -1,     3,     4,     5,
      42,     7,    44,    45,    46,    47,    48,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    25,
      26,    -1,    28,    -1,   592,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    42,     7,    44,    45,
      46,    47,    48,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    42,    -1,    44,    45,    46,    47,    48,    -1,
     648,    -1,    -1,    -1,    -1,    27,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    36,    37,    38,    39,    40,    20,
      42,    43,   670,   671,   672,    -1,    27,    49,     8,     9,
      10,   679,   680,   681,   682,    36,    37,    38,    39,    40,
      -1,    42,    43,   691,   692,   693,    -1,    27,    49,    -1,
      -1,    -1,   700,   701,   702,   703,    36,    -1,    38,    -1,
      40,    -1,   710,    -1,    -1,   713,   714,    36,   716,   717,
     718,   719,    -1,   721,   722,    -1,   724,   725,   726,   727,
      -1,    -1,    -1,    -1,    -1,    -1,   734,    -1,   736,   737,
      -1,   739,    -1,    62,    63,    64,    65,    66,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,
      31,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,   134,   135,   136,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,    -1,   146,    -1,    -1,
      36,    37,    38,    39,    40,   833,   834,   835,    44,    -1,
      -1,    -1,    -1,    49,     3,     4,     5,    -1,     7,    -1,
      -1,   849,   850,   851,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,   190,    31,    -1,    -1,    -1,    -1,    -1,     8,     9,
      10,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
       8,     9,    10,    11,    12,    -1,    -1,    27,   896,   897,
     219,   899,    20,    -1,   902,   903,    36,   905,    38,    -1,
      40,    -1,    -1,   232,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,     3,     4,     5,    44,     7,    -1,   248,
      -1,    49,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,   282,    44,    45,    46,    47,    48,    -1,
      -1,   290,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    31,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    42,   336,    44,    45,
      46,    47,    48,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,
     359,   360,   361,   362,   363,   364,    -1,    -1,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
      -1,   380,   381,   382,   383,   384,   385,    -1,    -1,   388,
     389,   390,   391,    -1,    -1,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,    -1,    -1,    -1,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,    -1,    -1,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,    -1,
      -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,   447,   448,
     449,    -1,    -1,    -1,    -1,    -1,    -1,   456,   457,   458,
      -1,    -1,   461,   462,   463,    -1,    -1,    -1,   467,   468,
     469,   470,   471,   472,    -1,    -1,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,    -1,    -1,
     489,   490,   491,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,   512,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    42,     7,    44,    45,    46,    47,    48,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,   561,    -1,    -1,    -1,     3,     4,     5,    42,
       7,    44,    45,    46,    47,    48,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    24,    25,    26,
      -1,    28,    -1,   592,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    42,     7,    44,    45,    46,
      47,    48,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,   648,
      -1,    -1,    -1,    -1,    27,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    36,    37,    38,    39,    40,    20,    42,
      43,   670,   671,   672,    -1,    27,    49,    -1,    -1,    -1,
     679,   680,   681,   682,    36,    37,    38,    39,    40,    -1,
      42,    43,   691,   692,   693,    -1,    -1,    49,    -1,    -1,
      -1,   700,   701,   702,   703,    -1,    -1,    -1,    -1,    -1,
      -1,   710,    -1,    -1,   713,   714,    36,   716,   717,   718,
     719,    -1,   721,   722,    -1,   724,   725,   726,   727,    -1,
      -1,    -1,    -1,    -1,    -1,   734,    -1,   736,   737,    -1,
     739,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      80,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    42,     7,    44,    45,    46,    47,    48,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    -1,     8,
       9,    10,    11,    12,   134,   135,   136,    -1,    -1,    -1,
      -1,   141,   142,    -1,   144,    -1,   146,    42,    27,    44,
      -1,    -1,    -1,    -1,   833,   834,   835,    36,    37,    38,
      39,    40,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
     849,   850,   851,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    25,    26,    -1,    28,    -1,
     190,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,     8,
       9,    10,    11,    12,    -1,    -1,    -1,   896,   897,   219,
     899,    20,    -1,   902,   903,    -1,   905,    -1,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,     3,     4,     5,    44,     7,    -1,   248,    -1,
      49,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,   282,    44,    45,    46,    47,    48,    -1,    -1,
     290,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    42,   336,    44,    45,    46,
      47,    48,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,   359,
     360,   361,   362,   363,   364,    -1,    -1,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,    -1,
     380,   381,   382,   383,   384,   385,    -1,    -1,   388,   389,
     390,   391,    -1,    -1,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,    -1,    -1,    -1,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,    -1,    -1,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,    -1,    -1,
      -1,    -1,    -1,    -1,   444,    -1,    -1,   447,   448,   449,
      -1,    -1,    -1,    -1,    -1,    -1,   456,   457,   458,    -1,
      -1,   461,   462,   463,    -1,    -1,    -1,   467,   468,   469,
     470,   471,   472,    -1,    -1,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,    -1,    -1,   489,
     490,   491,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,   512,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    42,     7,    44,    45,    46,    47,    48,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,   561,    -1,    -1,    -1,     3,     4,     5,    42,     7,
      44,    45,    46,    47,    48,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    25,    26,    -1,
      28,    -1,   592,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    42,     7,    44,    45,    46,    47,
      48,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      42,    -1,    44,    45,    46,    47,    48,    -1,   648,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    36,    37,    38,    39,    40,    -1,    42,    43,
     670,   671,   672,    -1,    -1,    49,    -1,    -1,    -1,   679,
     680,   681,   682,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,   691,   692,   693,    69,    70,    71,    -1,    -1,    -1,
     700,   701,   702,   703,    -1,    80,    -1,    -1,    -1,    -1,
     710,    -1,    -1,   713,   714,    -1,   716,   717,   718,   719,
      -1,   721,   722,    -1,   724,   725,   726,   727,    -1,    -1,
      -1,     3,     4,     5,   734,     7,   736,   737,    -1,   739,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,   142,    -1,   144,
      42,   146,    44,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    25,    26,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,   190,    44,    45,    46,    47,
      48,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,   833,   834,   835,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,   219,    -1,    -1,    -1,    -1,   849,
     850,   851,    36,    37,    38,    39,    40,   232,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    -1,     3,     4,     5,
      -1,     7,    -1,   248,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    31,   896,   897,   273,   899,
      -1,    -1,   902,   903,    -1,   905,    42,   282,    44,    45,
      46,    47,    48,    -1,    -1,   290,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      42,   336,    44,    45,    46,    47,    48,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,   359,   360,   361,    -1,    -1,    -1,
      -1,    -1,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,    -1,   380,   381,   382,    -1,    -1,
      -1,    -1,    -1,   388,    -1,    -1,    -1,    -1,    -1,   394,
     395,   396,   397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,    -1,    -1,     8,     9,
      10,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,    -1,    -1,    -1,    -1,    -1,    -1,   444,
      -1,    -1,   447,   448,   449,    -1,    36,    -1,    38,    -1,
      40,   456,   457,   458,    44,    -1,   461,   462,   463,    49,
      -1,    -1,   467,   468,   469,    -1,    -1,    -1,    -1,    -1,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,    -1,    -1,   489,   490,   491,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,   512,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    36,    -1,    20,
      -1,    -1,   140,    -1,    -1,   143,   561,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,   161,   162,   163,   164,   165,    49,    -1,
      69,    70,    71,   171,    -1,    -1,    -1,   592,    -1,    -1,
      -1,    80,     3,     4,     5,    -1,     7,    -1,    87,    88,
      89,    90,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
      10,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,   648,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,   141,   142,    -1,   144,    36,   146,    38,    -1,
      40,    -1,    -1,    43,    -1,   670,   671,   672,    -1,    49,
      -1,    -1,    -1,    -1,   679,   680,   681,   682,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   691,   692,   693,    -1,
      -1,    -1,    -1,    -1,    -1,   700,   701,   702,   703,    -1,
      -1,   190,    -1,    -1,    -1,   710,    -1,    -1,   713,   714,
      -1,   716,   717,   718,   719,    -1,   721,   722,    -1,   724,
     725,   726,   727,    -1,    -1,    -1,    -1,    -1,    -1,   734,
     219,   736,   737,    -1,   739,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,   232,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    25,    26,   248,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   282,     3,     4,     5,    -1,     7,    -1,
      -1,   290,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,   833,   834,
     835,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,   849,   850,   851,   336,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,     8,     9,    10,    -1,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
      -1,   896,   897,    42,   899,    44,    -1,   902,   903,   388,
     905,    -1,    36,    -1,    38,   394,    40,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,    -1,
      -1,    -1,    -1,    -1,    -1,   444,    -1,    -1,   447,   448,
     449,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,   461,   462,   463,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    -1,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,    -1,    -1,
     489,   490,   491,    -1,    42,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,   512,    -1,    -1,   614,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,   626,    25,
      26,    -1,    -1,    29,    -1,    31,    -1,    36,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    42,    -1,    44,    45,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,   561,    25,    26,    -1,   664,    29,    -1,    31,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    80,    44,    45,    -1,    84,    85,    86,     3,     4,
       5,    -1,     7,   592,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      25,    26,    -1,    28,   712,    -1,    31,   715,     8,     9,
      10,    -1,   720,    -1,    -1,   723,    -1,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    -1,   735,    -1,    -1,
     738,    -1,   141,   142,    -1,   144,    36,   146,    38,   648,
      40,     3,     4,     5,    44,     7,    -1,    -1,    -1,    49,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
     679,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,   190,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,   700,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   710,    -1,    -1,   713,   714,    -1,   716,    -1,    -1,
     219,    -1,   721,   722,    -1,   724,    -1,    -1,    -1,    -1,
     828,   829,   830,   232,    -1,   734,    -1,   736,   737,    -1,
     739,   839,   840,    -1,    -1,    -1,   844,   845,   846,   248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   855,   856,    -1,
       8,     9,    10,   861,   862,   863,   864,   865,    -1,    -1,
      -1,    -1,   870,    -1,   273,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,   282,   882,    -1,    -1,    -1,    36,    -1,
      38,   290,    40,    -1,    -1,    43,    -1,   895,    -1,    -1,
     898,    49,   900,   901,    -1,    -1,   904,    -1,   906,   907,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,   921,   922,   923,   924,   925,   926,   927,
     928,   929,   930,    -1,   833,   834,   835,   336,    36,    37,
      38,    39,    40,   941,   942,    43,    -1,    -1,    -1,    -1,
     849,   850,   851,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,     3,     4,     5,    20,     7,    -1,   367,   368,
     369,   370,   371,   372,   373,    16,    17,    18,    19,   378,
      21,    36,    37,    38,    39,    40,    -1,    42,    43,   388,
      -1,    -1,    -1,    -1,    49,   394,    -1,   896,   897,    -1,
     899,    42,    -1,   902,   903,    -1,   905,   406,   407,   408,
     409,   410,   411,   412,    -1,    -1,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,     8,     9,    10,   426,   427,   428,
     429,   430,   431,   432,    -1,    -1,    -1,    -1,   437,    -1,
      -1,    -1,    -1,    27,    -1,   444,    -1,    -1,   447,   448,
     449,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,    43,
      -1,    -1,   461,   462,   463,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   475,   476,   477,   478,
     479,   480,   481,    -1,     3,     4,     5,   486,     7,    -1,
     489,   490,   491,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,   512,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    42,    -1,    44,    45,    46,    47,    48,
      20,    -1,    -1,     8,     9,    10,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    49,
      -1,    36,   561,    38,    -1,    40,    -1,    -1,    -1,    44,
      69,    70,    71,    -1,    49,    -1,     3,     4,     5,    -1,
       7,    80,    81,    82,    83,    -1,    13,    14,    15,    16,
      17,    18,    19,   592,    21,    -1,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    42,     7,    44,    45,    46,
      47,    48,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,   141,   142,    -1,   144,    -1,   146,    -1,   648,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
     679,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,   700,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,   710,    -1,    -1,   713,   714,    -1,   716,    -1,    -1,
     219,    -1,   721,   722,    -1,   724,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   232,    -1,   734,    -1,   736,   737,    -1,
     739,    -1,    -1,     3,     4,     5,    -1,     7,    -1,   248,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,   107,    25,    26,    -1,    -1,    29,
      -1,    31,    -1,    -1,   273,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    42,   282,    44,    45,    -1,    -1,    -1,    -1,
      -1,   290,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    -1,     8,     9,    10,    11,    12,    -1,
      79,    80,   165,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    91,    27,   833,   834,   835,   336,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
     849,   850,   851,    -1,    -1,    49,    -1,    -1,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   367,   368,
     369,   370,    -1,    -1,    -1,    -1,    -1,    27,    -1,   378,
      -1,    -1,   141,   142,    -1,   144,    36,   146,    38,   388,
      40,    -1,    -1,    43,    -1,   394,    -1,   896,   897,    49,
     899,    -1,    -1,   902,   903,    -1,   905,   406,   407,   408,
     409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,   190,    -1,    -1,    -1,    -1,    -1,    -1,   437,    -1,
       8,     9,    10,    11,    12,   444,    -1,    -1,   447,   448,
     449,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
     219,    -1,   461,   462,   463,    -1,    -1,    -1,    36,    37,
      38,    39,    40,   232,    42,    43,   475,   476,   477,   478,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   486,   107,   248,
     489,   490,   491,    -1,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,   512,   273,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   282,   143,    -1,    36,    37,    38,    39,
      40,   290,    42,    -1,    44,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,     3,     4,     5,   165,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,   561,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,   592,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,   367,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,   378,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,   388,
      -1,    -1,    -1,    -1,    -1,   394,     8,     9,    10,    42,
      -1,    44,    45,    46,    47,    48,    -1,   406,    -1,   648,
      -1,     8,     9,    10,    -1,    -1,    -1,    -1,   417,    -1,
      -1,   107,    -1,    -1,    36,    -1,    38,   426,    40,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49,   437,    36,
     679,    38,    -1,    40,    -1,   444,    43,    -1,   447,   448,
     449,    -1,    49,    -1,   140,    -1,    -1,   143,    -1,    -1,
      -1,   700,   461,   462,   463,    -1,    -1,    -1,    -1,    -1,
      -1,   710,    -1,    -1,   713,   714,   475,   716,    -1,   165,
      -1,    -1,   721,   722,    -1,   724,    -1,   486,    -1,    -1,
     489,   490,   491,    -1,    -1,   734,    -1,   736,   737,    -1,
     739,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,   512,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    24,    25,    26,    -1,
      28,   614,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   626,    42,    -1,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   561,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,   664,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,   592,   833,   834,   835,    -1,     8,     9,
      10,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
     849,   850,   851,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,   712,
      40,    -1,   715,    43,    -1,    -1,    -1,   720,    -1,    49,
     723,     8,     9,    10,    11,    12,    -1,    -1,    -1,   648,
     140,    -1,   735,   143,    -1,   738,    -1,   896,   897,    -1,
     899,    -1,    -1,   902,   903,    -1,   905,    -1,    -1,    36,
      37,    38,    39,    40,    -1,   165,    43,     3,     4,     5,
     679,     7,    49,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      26,   700,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,   710,    -1,    -1,   713,   714,    42,   716,    44,    45,
      -1,    -1,   721,   722,    -1,   724,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   734,    -1,   736,   737,    -1,
     739,    -1,    -1,    -1,    -1,   828,   829,   830,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   614,   839,   840,    -1,    -1,
      -1,   844,   845,   846,    -1,    -1,    -1,   626,     8,     9,
      10,    -1,   855,   856,    -1,    -1,    -1,    -1,   861,   862,
     863,   864,   865,    -1,    -1,    -1,    -1,   870,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,   882,
      40,    -1,    -1,    43,    -1,   664,    -1,    -1,    -1,    49,
      -1,    -1,   895,    -1,    -1,   898,    -1,   900,   901,    -1,
      -1,   904,    -1,   906,   907,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   833,   834,   835,    -1,   921,   922,
     923,   924,   925,   926,   927,   928,   929,   930,    -1,    -1,
     849,   850,   851,   712,    -1,    -1,   715,    -1,   941,   942,
      -1,   720,    -1,    -1,   723,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,   735,     7,    -1,   738,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,   896,   897,    29,
     899,    31,    -1,   902,   903,    -1,   905,     3,     4,     5,
      -1,     7,    42,    -1,    44,    45,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,   614,    25,
      26,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,
     626,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,   828,
     829,   830,    20,    -1,    -1,    -1,    -1,    -1,   664,    -1,
     839,   840,    -1,    -1,    -1,   844,   845,   846,    36,    37,
      38,    39,    40,    -1,    42,    43,   855,   856,    -1,    -1,
      -1,    49,   861,   862,   863,   864,   865,    -1,    -1,    -1,
      -1,   870,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   882,    -1,    -1,   712,    -1,    -1,   715,
      -1,    -1,    -1,    -1,   720,    -1,   895,   723,    -1,   898,
      -1,   900,   901,    -1,    -1,   904,    -1,   906,   907,   735,
      -1,    -1,   738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,   941,   942,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      29,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    42,    -1,    44,    45,    13,    14,    15,
      16,    17,    18,    19,   614,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    29,    -1,    31,   626,    -1,    -1,    -1,
      -1,    -1,   828,   829,   830,    -1,    42,    -1,    44,    45,
      -1,    -1,    -1,   839,   840,    -1,    -1,    -1,   844,   845,
     846,     8,     9,    10,    11,    12,    -1,    -1,    -1,   855,
     856,    -1,    -1,    20,   664,   861,   862,   863,   864,   865,
      -1,    -1,    -1,    -1,   870,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,   882,    44,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,   895,
      -1,    -1,   898,    -1,   900,   901,    -1,    -1,   904,    -1,
     906,   907,   712,    -1,    -1,   715,    -1,    -1,    -1,    -1,
     720,    -1,    -1,   723,    -1,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   930,   735,    -1,    -1,   738,     3,
       4,     5,    -1,     7,    -1,   941,   942,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,     8,
       9,    10,     3,     4,     5,    -1,     7,    -1,    42,    -1,
      44,    45,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    36,    29,    38,
      31,    40,    -1,    -1,    43,     8,     9,    10,    11,    12,
      49,    42,    -1,    44,    45,    -1,    -1,    20,    -1,     8,
       9,    10,    11,    12,    27,    -1,    -1,    -1,   828,   829,
     830,    20,    -1,    36,    37,    38,    39,    40,    -1,   839,
     840,    -1,    -1,    -1,   844,   845,   846,    36,    37,    38,
      39,    40,    -1,    42,    43,   855,   856,    -1,    -1,    -1,
      49,   861,   862,   863,   864,   865,    -1,    -1,    -1,    -1,
     870,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,   882,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,   895,    25,    26,   898,    -1,
     900,   901,    31,    -1,   904,    -1,   906,   907,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,
      -1,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,   941,   942,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,    29,
      -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    42,    -1,    44,    45,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    42,    -1,    44,    45,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,    -1,
      44,    45,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    42,    -1,    44,    45,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    42,    -1,    44,    45,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    42,    -1,    44,
      45,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      42,    -1,    44,    45,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    42,    -1,    44,    45,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    42,    -1,    44,    45,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,
      -1,    44,    45,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    42,    -1,    44,    45,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    42,    -1,    44,    45,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,    -1,
      44,    45,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    42,    -1,    44,    45,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    42,    -1,    44,    45,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    42,    -1,    44,
      45,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      42,    -1,    44,    45,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    42,    -1,    44,    45,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    42,    -1,    44,    45,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,
      -1,    44,    45,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    42,    -1,    44,    45,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    42,    -1,    44,    45,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,    -1,
      44,    45,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    42,    -1,    44,    45,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    42,    -1,    44,    45,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    42,    -1,    44,
      45,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      42,    -1,    44,    45,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    42,    -1,    44,    45,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    42,    -1,    44,    45,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,
      -1,    44,    45,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    42,    -1,    44,    45,    20,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    36,    37,    38,    39,    40,    -1,    42,    -1,
      44,    -1,    -1,    -1,    -1,    49,    36,    37,    38,    39,
      40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    49,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,    37,
      38,    39,    40,    -1,    42,    -1,    44,    -1,    -1,    -1,
      -1,    49,    36,    37,    38,    39,    40,    -1,    42,    -1,
      44,    -1,    -1,    -1,    -1,    49,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    36,    37,    38,    39,    40,    -1,
      42,    -1,    44,    -1,    -1,    -1,    -1,    49,    36,    37,
      38,    39,    40,    -1,    42,    43,     8,     9,    10,    11,
      12,    49,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    36,    37,
      38,    39,    40,    -1,    42,    43,     8,     9,    10,    11,
      12,    49,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
       8,     9,    10,    11,    12,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    36,    37,
      38,    39,    40,    -1,    42,    43,     8,     9,    10,    11,
      12,    49,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    36,    37,    38,    39,    40,    27,
      42,    43,     8,     9,    10,    11,    12,    49,    36,    37,
      38,    39,    40,    -1,    20,    43,     8,     9,    10,    11,
      12,    49,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      36,    37,    38,    39,    40,    27,    42,    43,    -1,    -1,
      -1,    -1,    -1,    27,    36,    37,    38,    39,    40,    -1,
      42,    43,    36,    37,    38,    39,    40,    49,    42,    43,
       8,     9,    10,    11,    12,    49,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    36,    37,
      38,    39,    40,    -1,    42,    43,    36,    37,    38,    39,
      40,    49,    -1,    43,     8,     9,    10,    11,    12,    49,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    36,    37,    38,    39,    40,    -1,    42,    43,
      36,    37,    38,    39,    40,    49,    42,    43,     3,     4,
       5,    -1,     7,    49,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    -1,    44,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    42,    -1,    44,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    -1,    43,    -1,    -1,    27,    -1,
      -1,    49,     8,     9,    10,    11,    12,    36,    37,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      49,    27,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    -1,    43,     8,     9,
      10,    11,    12,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    -1,    44,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    49,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    -1,    44,    -1,    -1,    -1,
      -1,    49,    36,    37,    38,    39,    40,    -1,    42,    -1,
      44,    -1,    -1,    -1,    -1,    49,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    -1,    44,    -1,    -1,    -1,    -1,    49,    36,    37,
      38,    39,    40,    -1,    42,    -1,    44,    -1,    -1,    -1,
      -1,    49,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      36,    37,    38,    39,    40,    -1,    42,    -1,    44,    -1,
      -1,    -1,    -1,    49,    36,    37,    38,    39,    40,    -1,
      -1,    43,     8,     9,    10,    11,    12,    49,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    36,    37,
      38,    39,    40,    49,    42,    43,    36,    37,    38,    39,
      40,    49,    42,    43,     8,     9,    10,    11,    12,    49,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
      36,    37,    38,    39,    40,    49,    42,    43,    36,    37,
      38,    39,    40,    49,    42,    43,     8,     9,    10,    11,
      12,    49,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    36,    37,    38,    39,    40,    -1,
      42,    43,    36,    37,    38,    39,    40,    49,    -1,    43,
      36,    37,    38,    39,    40,    49,    42,    -1,    44,    -1,
      -1,    -1,    -1,    49,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    36,    37,    38,    39,    40,    -1,    42,    -1,
      44,    -1,    -1,    -1,    -1,    49,    36,    37,    38,    39,
      40,    -1,    -1,    43,     8,     9,    10,    11,    12,    49,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    36,    37,    38,    39,    40,    -1,    -1,    43,
      36,    37,    38,    39,    40,    49,    -1,    43,     8,     9,
      10,    11,    12,    49,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    36,    37,    38,    39,
      40,    -1,    -1,    43,    36,    37,    38,    39,    40,    49,
      42,    43,     8,     9,    10,    11,    12,    49,    36,    37,
      38,    39,    40,    -1,    42,    43,     8,     9,    10,    11,
      12,    49,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      36,    37,    38,    39,    40,    27,    42,    43,    -1,    -1,
      -1,    -1,    -1,    27,    36,    37,    38,    39,    40,    -1,
      -1,    43,    36,    37,    38,    39,    40,    49,    -1,    43,
       8,     9,    10,    11,    12,    49,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    36,    37,
      38,    39,    40,    -1,    -1,    43,    36,    37,    38,    39,
      40,    49,    -1,    43,     8,     9,    10,    11,    12,    49,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    36,    37,    38,    39,    40,    -1,    -1,    43,
      36,    37,    38,    39,    40,    49,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,     8,     9,    10,    11,    12,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    36,    37,    38,    39,    40,    -1,    -1,    43,
      36,    37,    38,    39,    40,    49,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    36,    37,    38,    39,    40,    -1,
      -1,    43,     8,     9,    10,    11,    12,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    36,    37,    38,    39,    40,    -1,
      -1,    43,    36,    37,    38,    39,    40,    49,    -1,    43,
       8,     9,    10,    11,    12,    49,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    -1,    36,    37,
      38,    39,    40,    -1,    -1,    43,    36,    37,    38,    39,
      40,    49,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      36,    37,    38,    39,    40,    -1,    -1,    43,     8,     9,
      10,    11,    12,    49,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    -1,    43,    36,    37,    38,    39,    40,    49,
      -1,    43,    36,    37,    38,    39,    40,    49,    -1,    43,
       8,     9,    10,    11,    12,    49,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    -1,    43,    -1,    -1,     3,     4,
       5,    49,     7,    -1,    -1,    42,    43,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    42,    43,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    43,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    42,    21,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    42,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    42,    21,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    42,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    42,    21,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      42,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    42,
      21,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    42,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      42,    21,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    42,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    42,    21,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,     8,     9,    10,    11,
      12,    -1,    -1,    42,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,     8,     9,    10,    11,
      12,    36,    37,    38,    39,    40,    -1,    42,    43,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,     8,     9,    10,    11,    12,    36,    37,    38,
      39,    40,    -1,    -1,    43,     8,     9,    10,    11,    12,
      -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,     8,     9,
      10,    11,    12,    36,    37,    38,    39,    40,    -1,    42,
      43,    36,    37,    38,    39,    40,    -1,    42,    43,     8,
       9,    10,    11,    12,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    36,    37,    38,
      39,    40,    -1,    42,    43,     8,     9,    10,    11,    12,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,     9,    10,    11,    12,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,    36,    37,    38,    39,
      40,    -1,    -1,    43,     8,     9,    10,    11,    12,    36,
      37,    38,    39,    40,    -1,    -1,    43,     8,     9,    10,
      11,    12,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    36,    37,    38,    39,    40,
      -1,    -1,    43,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    -1,    43,     8,     9,    10,    11,
      12,    -1,    -1,    -1,     8,     9,    10,    11,    12,    36,
      37,    38,    39,    40,    -1,    -1,    43,     8,     9,    10,
      11,    12,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      -1,    43,    36,    37,    38,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    36,    37,    38,    39,    40,
      -1,    -1,    43,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,    37,
      38,    39,    40,    27,    -1,    43,    -1,     8,     9,    10,
      11,    12,    36,    37,    38,    39,    40,    -1,    42,    20,
      -1,     8,     9,    10,    11,    12,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    36,    37,    38,    39,    40,
      27,    42,     8,     9,    10,    11,    12,    -1,    -1,    36,
      37,    38,    39,    40,    20,    42,     8,     9,    10,    11,
      12,    27,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      36,    37,    38,    39,    40,    27,    42,     8,     9,    10,
      11,    12,    -1,    -1,    36,    37,    38,    39,    40,    20,
      42,     8,     9,    10,    11,    12,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    36,    37,    38,    39,    40,
      27,    42,     8,     9,    10,    11,    12,    -1,    -1,    36,
      37,    38,    39,    40,    20,    42,     8,     9,    10,    11,
      12,    27,    -1,     8,     9,    10,    11,    12,    20,    -1,
      36,    37,    38,    39,    40,    27,    42,     8,     9,    10,
      11,    12,    27,    -1,    36,    37,    38,    39,    40,    -1,
      42,    36,    37,    38,    39,    40,    27,    42,     8,     9,
      10,    11,    12,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,     8,     9,    10,    11,    12,    27,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    36,    37,    38,    39,
      40,    27,    42,     8,     9,    10,    11,    12,    27,    -1,
      36,    37,    38,    39,    40,    -1,    42,    36,    37,    38,
      39,    40,    27,    42,     8,     9,    10,    11,    12,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,     8,     9,
      10,    11,    12,    27,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    36,    37,    38,    39,    40,    27,    42,     8,
       9,    10,    11,    12,    27,    -1,    36,    37,    38,    39,
      40,    20,    42,    36,    37,    38,    39,    40,    27,    42,
       8,     9,    10,    11,    12,    -1,    -1,    36,    37,    38,
      39,    40,    20,    -1,     8,     9,    10,    11,    12,    27,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    27,     8,     9,    10,    11,    12,    27,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    36,    37,
      38,    39,    40,    27,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    -1,     8,     9,
      10,    11,    12,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    46,    47,    48,    52,    53,    55,    58,    59,
      60,    62,     0,    60,    23,    80,    19,    44,    57,    61,
       3,     4,     5,     7,    13,    14,    15,    16,    17,    18,
      19,    21,    24,    25,    26,    31,    42,    44,    45,    58,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    78,    79,    80,    81,    42,
      44,    49,    42,    42,    42,    42,    42,    42,    19,    42,
      42,    42,    65,    44,    65,    57,    24,    63,    44,    49,
      42,     8,     9,    10,    36,    38,    40,    11,    12,    37,
      39,    20,    19,    43,    54,    55,    56,    58,    57,    74,
      76,    74,    74,    75,    75,    75,    21,    60,    70,    70,
      65,    70,    43,    44,    70,    43,    70,    77,    71,    71,
      71,    72,    72,    72,    73,    73,    73,    73,    70,    43,
      49,    43,    49,    57,    27,    27,    27,    43,    43,    43,
      67,    27,    27,    43,    27,    43,    49,    19,    55,    74,
      74,    74,    67,    70,    70,    67,    70,    70,    43,    43,
      43,    43,    43,    43,    29,    43,    67,    67,    67,    67,
      67,    29,    67,    23,    28,    46,    47,    48,     3,     4,
       5,     7,    13,    14,    15,    16,    17,    18,    19,    21,
      42,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      19,    44,    61,    28,    46,    47,    48,     3,     4,     5,
       7,    13,    14,    15,    16,    17,    18,    19,    21,    42,
      68,    69,    75,     3,     4,     5,     7,    16,    17,    18,
      19,    21,    42,    68,    69,    76,     3,     4,     5,     7,
      13,    14,    15,    16,    17,    18,    19,    21,    42,    55,
      58,    59,    62,    68,    69,    71,    72,    73,    74,    75,
      76,     3,     4,     5,     7,    13,    14,    15,    16,    17,
      18,    19,    21,    42,    68,    69,    71,    72,    73,    74,
      75,    76,    49,    42,     3,     4,     5,     7,    19,    21,
      42,    68,    69,    76,    19,    23,    25,    26,    31,    44,
      45,    65,    66,    78,    79,    80,    81,    42,    13,    14,
      15,    75,    23,    25,    26,    31,    44,    45,    65,    66,
      78,    79,    80,    81,     3,     4,     5,     7,    13,    14,
      15,    16,    17,    18,    19,    21,    42,    68,    69,    71,
      72,    73,    74,    75,    76,    23,    25,    26,    31,    44,
      45,    65,    66,    78,    79,    80,    81,    24,    64,    42,
      42,    42,    42,    42,    42,    19,    65,    42,     8,     9,
      10,    36,    38,    40,    11,    12,    37,    39,    20,    44,
      42,    42,    42,    42,    42,    42,    19,    65,    42,    42,
      42,    42,    19,    65,    42,    42,    42,    42,    42,    42,
      42,    19,    65,    80,    44,    61,    42,     8,     9,    10,
      36,    38,    40,    11,    12,    37,    39,    20,    42,    42,
      42,    42,    42,    42,    19,    65,    42,     8,     9,    10,
      36,    38,    40,    11,    12,    37,    39,    20,    70,    43,
      54,    56,    19,    65,    42,    24,    64,    42,    42,    42,
      44,    65,    44,    43,    54,    56,    42,    42,    42,    24,
      64,    42,    42,    42,    44,    65,    44,    42,    42,    42,
      42,    42,    42,    19,    65,    42,     8,     9,    10,    36,
      38,    40,    11,    12,    37,    39,    20,    24,    64,    42,
      42,    42,    44,    65,    44,    24,    74,    74,    74,    75,
      75,    75,    21,    43,    43,    77,     3,     4,     5,     7,
      19,    21,    42,    68,    69,    71,    76,    71,    71,    72,
      72,    72,    73,    73,    73,    73,    70,    74,    74,    74,
      75,    75,    75,    21,    43,    43,    77,    75,    75,    75,
      21,    43,    43,    77,    74,    74,    74,    75,    75,    75,
      21,    43,    44,    43,    77,     3,     4,     5,     7,    19,
      21,    42,    68,    69,    71,    76,    71,    71,    72,    72,
      72,    73,    73,    73,    73,    70,    74,    74,    74,    75,
      75,    75,    21,    43,    43,    77,     3,     4,     5,     7,
      19,    21,    42,    68,    69,    71,    76,    71,    71,    72,
      72,    72,    73,    73,    73,    73,    70,    43,    43,    21,
      43,    43,    77,    24,    60,    70,    70,    65,    70,    44,
      43,    43,    74,    74,    74,    24,    60,    70,    70,    65,
      70,    44,    74,    74,    74,    75,    75,    75,    21,    43,
      43,    77,     3,     4,     5,     7,    19,    21,    42,    68,
      69,    71,    76,    71,    71,    72,    72,    72,    73,    73,
      73,    73,    70,    24,    60,    70,    70,    65,    70,    44,
      27,    27,    27,    43,    43,    43,    43,    19,    65,    42,
      27,    27,    27,    43,    43,    43,    43,    43,    43,    43,
      43,    27,    27,    27,    43,    43,    43,    43,    19,    65,
      42,    27,    27,    27,    43,    43,    43,    43,    19,    65,
      42,    43,    67,    27,    27,    43,    27,    27,    27,    27,
      67,    27,    27,    43,    27,    27,    27,    27,    43,    43,
      43,    43,    19,    65,    42,    67,    27,    27,    43,    27,
      74,    74,    74,    21,    43,    43,    77,    74,    74,    74,
      74,    74,    74,    21,    43,    43,    77,    74,    74,    74,
      21,    43,    43,    77,    67,    70,    70,    23,    25,    26,
      31,    44,    45,    65,    66,    67,    78,    79,    80,    81,
      70,    74,    74,    74,    67,    70,    70,    23,    25,    26,
      31,    44,    45,    65,    66,    67,    78,    79,    80,    81,
      70,    74,    74,    74,    21,    43,    43,    77,    67,    70,
      70,    67,    70,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    24,    64,    42,    42,    42,    44,    65,    44,    29,
      43,    43,    43,    43,    43,    43,    43,    24,    64,    42,
      42,    42,    44,    65,    44,    29,    43,    43,    43,    43,
      43,    43,    43,    43,    29,    43,    67,    67,    67,    24,
      60,    70,    70,    65,    70,    44,    67,    67,    67,    67,
      67,    24,    60,    70,    70,    65,    70,    44,    67,    67,
      67,    67,    67,    67,    67,    67,    27,    27,    43,    27,
      29,    67,    27,    27,    43,    27,    29,    29,    67,    70,
      70,    67,    70,    67,    67,    70,    70,    67,    70,    67,
      67,    43,    43,    43,    29,    43,    43,    43,    43,    29,
      43,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    29,    29,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    57,    57,    58,    58,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     2,     1,     1,
       3,     1,     3,     4,     4,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     2,     3,     1,     1,     1,     2,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
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
#line 66 "parser/clang.y"
                        {
                            liberar_ast((yyvsp[0].no));
                        }
#line 3942 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 72 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 3950 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 76 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 3959 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 87 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 3968 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 91 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 3974 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 95 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 3982 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 99 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 3991 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 106 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 4000 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 111 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4010 "clang.tab.c"
    break;

  case 13: /* def_declaracao: def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D  */
#line 117 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-1].no);
                            (yyvsp[-3].simbolo)->funcao.parametros_no = novo_no->parametros_no;
                            (yyvsp[-3].simbolo)->funcao.parametros = novo_no->parametros;
                            liberar_ast((yyvsp[-1].no));
                            (yyval.simbolo) = (yyvsp[-3].simbolo);
                        }
#line 4022 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 127 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 4028 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 128 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 4034 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 129 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 4040 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 130 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 4046 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 135 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4055 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 143 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4064 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 148 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4073 "clang.tab.c"
    break;

  case 22: /* lista_inicializar_atrib: def_declaracao  */
#line 155 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4081 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA def_declaracao  */
#line 159 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4089 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 164 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4095 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
#line 166 "parser/clang.y"
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
#line 4115 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 183 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4121 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 184 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4127 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 188 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4135 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 192 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4144 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 198 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4150 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 199 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4156 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 202 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4162 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 203 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4168 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 206 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4174 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 207 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4180 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 208 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4186 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 209 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4192 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 210 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4198 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 213 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4204 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 214 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4210 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 215 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4216 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 219 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4224 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 223 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4232 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 227 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4238 "clang.tab.c"
    break;

  case 45: /* expressao_principal: TOKEN_CADEIA  */
#line 229 "parser/clang.y"
                        { (yyval.no) = novo_no_ast_constante(TIPO_CADEIA, (yyvsp[0].valor)); }
#line 4244 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 230 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4250 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_relacional  */
#line 233 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4256 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_chamada ATRIBUICAO expressao_atribuicao  */
#line 235 "parser/clang.y"
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
#line 4284 "clang.tab.c"
    break;

  case 49: /* expressao_relacional: expressao_logica  */
#line 260 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4290 "clang.tab.c"
    break;

  case 50: /* expressao_relacional: expressao_logica OP_MENOR_QUE expressao_relacional  */
#line 262 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4298 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 266 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4306 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 270 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4314 "clang.tab.c"
    break;

  case 53: /* expressao_logica: expressao_aritmetica  */
#line 276 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4320 "clang.tab.c"
    break;

  case 57: /* expressao_aritmetica: expressao_conjunto  */
#line 282 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4326 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto OP_SOMA expressao_aritmetica  */
#line 284 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4334 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_conjunto OP_SUBTRACAO expressao_aritmetica  */
#line 288 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4342 "clang.tab.c"
    break;

  case 62: /* expressao_conjunto: expressao_io  */
#line 295 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4348 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 297 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4356 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 301 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4364 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 305 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4372 "clang.tab.c"
    break;

  case 66: /* expressao_io: expressao_chamada  */
#line 310 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4378 "clang.tab.c"
    break;

  case 67: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 312 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                            // pular +1 linha
                        }
#line 4392 "clang.tab.c"
    break;

  case 68: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 322 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                        }
#line 4405 "clang.tab.c"
    break;

  case 69: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 331 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4413 "clang.tab.c"
    break;

  case 70: /* expressao_chamada: expressao_principal  */
#line 336 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4419 "clang.tab.c"
    break;

  case 72: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 339 "parser/clang.y"
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
#line 4447 "clang.tab.c"
    break;

  case 73: /* expressao_lista_param: expressao_atribuicao  */
#line 365 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4455 "clang.tab.c"
    break;

  case 74: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 369 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4464 "clang.tab.c"
    break;

  case 75: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 376 "parser/clang.y"
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
#line 4492 "clang.tab.c"
    break;

  case 76: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 400 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4500 "clang.tab.c"
    break;

  case 77: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 404 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4508 "clang.tab.c"
    break;

  case 78: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 408 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4516 "clang.tab.c"
    break;

  case 79: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 414 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4524 "clang.tab.c"
    break;

  case 80: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 418 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4532 "clang.tab.c"
    break;

  case 81: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 422 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4540 "clang.tab.c"
    break;

  case 82: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 428 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4548 "clang.tab.c"
    break;

  case 83: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 432 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4556 "clang.tab.c"
    break;

  case 84: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 438 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4564 "clang.tab.c"
    break;

  case 85: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 442 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4572 "clang.tab.c"
    break;


#line 4576 "clang.tab.c"

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

#line 447 "parser/clang.y"


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
