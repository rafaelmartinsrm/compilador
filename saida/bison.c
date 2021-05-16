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
#define YYLAST   11372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  853

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
       0,    66,    66,    73,    77,    84,    85,    88,    94,    97,
     101,   108,   113,   119,   127,   130,   131,   132,   133,   137,
     145,   150,   157,   161,   167,   168,   186,   187,   190,   194,
     201,   202,   205,   206,   209,   210,   211,   212,   213,   216,
     217,   218,   221,   225,   229,   231,   233,   237,   238,   266,
     267,   271,   278,   279,   283,   287,   291,   295,   301,   302,
     306,   310,   314,   320,   321,   325,   329,   336,   337,   343,
     347,   348,   358,   367,   373,   374,   375,   401,   405,   412,
     439,   443,   447,   453,   457,   461,   467,   471,   477,   481
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

#define YYPACT_NINF (-261)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     130,    67,    77,   227,   253,     4,     2,   -12,   255,    60,
      66,    69,  -261,   105,  3922,   126,    -4,   148,   606,    43,
    1197,  2140,  2427,  2488,  1318,   -17,     0,   129,   137,   163,
     178,  2562,    22,   151,   203,   210,   243,  8998,  4631,  2233,
     -18,  4666,  4701,  4736,   229,  4771,  4806,  2723,  3257,   452,
       3,   553,  3757,  7569,  2850,  1355,  2910,  3011,  4841,  4876,
    4911,  4946,   211,   176,    95,  9024,  9024,  9024,  1524,  1524,
    1524,   104,  2661,  9050,  9076,   200,  4981,   512,    -5,   194,
    5016,  5051,  9102,  8566,  9128,  9128,  9128,  9128,  9128,  9128,
    9128,  9128,  9128,  9128,  9128,  9102,  3071,   283,   667,   495,
     499,   551,   -13,   387,   159,   180,   204,   237,   259,   266,
     281,  3967,  3198,   264,   560,   170,  5583,  5086,   617,  3126,
     581,   616,  1055,  1668,  7612,  7623,  7634,  7677,  7688,  7699,
    7742,  7753,  7764,   811,   668,   263,   723,   304,    47,  9154,
    9154,  9154,  6247,  6267,  6290,  8593,  9180,   244,  9180,  6310,
    8998,   630,   655,   290,   330,   349,   501,   703,   362,  1006,
     371,   705,  7807,  7818,  7829,  5121,   501,   501,   501,   244,
    5156,  5191,  5226,  1214,   501,  5261,  5296,   -16,   -10,    98,
     116,   467,  3672,  3805,  5603,   256,   411,   412,   426,   443,
     447,  5626,   473,  8998,  5646,  5669,   707,    75,   911,  7872,
    7883,  6333,  1813,  6353,  6376,   393,  5331,   897,    45,   143,
     158,   165,   138,   168,   179,   296,   456,   464,   466,   491,
     492,   505,   297,   534,  8998,   299,   332,  1948,   527,   537,
     161,   195,   338,   340,   528,   536,   538,   348,   555,  8998,
     370,   385,   564,  3520,   954, 10201, 10237, 10273, 10309,   539,
     568,   578,   579,   580,   589, 10345,   608,  8998, 10381, 10417,
     100,   965,  8545, 10958, 10724,  2137, 10750, 10776,   628,   920,
    1320,  1441,   591,   604,   612,   622,   636,   638,  1500,   678,
    8998,  1563,  1816,    88,  1450,  6396,  6439,   576,  2190,  2746,
    3277,  8998,   260,  6450,  6493,  6504,  6515,   649,   661,   663,
    6558,   695,  8998,  6569,  6580,  7894,  3358,  7937,  7948,   445,
    8620,   970,   493,   679,   680,   681,   689,  1524,   690,  2511,
    2953,  9304,  9323,   699,   724,   751,   752,   754,   755,  9342,
     725,  8998,  9361,  9380,    23,     8,  9775,  9793,  9437,  3422,
    9456,  9475,  5366,   770,   771,   772,  1269,  5702,   971,  1619,
    1866,  2444,  3557,  3611,  5401,  5436,  9024,  9024,  9024,  1524,
    1524,  1524,   747,   715,  8647,  9206,  9206,  9206,  9206,  9206,
    9206,  9206,  9206,  9206,  9206,  9206,  8998,  6623,  5471,  9024,
    9024,  9024,  1524,  1524,  1524,   759,   726,  8674,   745,  1524,
    1524,  1524,   789,   727,  8701,  5730,  9024,  9024,  9024,  1524,
    1524,  1524,   790,   731,  8728,  9232,  9232,  9232,  9232,  9232,
    9232,  9232,  9232,  9232,  9232,  9232,  9050, 10802,  9024,  9024,
    9024,  1524,  1524,  1524,   799,   735,  8755,  9258,  9258,  9258,
    9258,  9258,  9258,  9258,  9258,  9258,  9258,  9258,  9076,  5750,
     743,   451,   774,   781,  1524,  1524,  1524,   800,   816,  8782,
    7959,  8809,   556,   824,   827,  9024,  9024,  9024,   714,  9024,
    9024,  9024,  1524,  1524,  1524,   803,   828,  8836,  9284,  9284,
    9284,  9284,  9284,  9284,  9284,  9284,  9284,  9284,  9284,  9180,
    9494,  3847,  5506,  2661,  9050,  9076,  4067,   972,  4174,  5541,
     808,   809,   810,   813,   814,   815,  5793,  5812,  6642,   832,
    5836,  6666,  6685,  6709,   836,   873,   875,  6728,   850,  8998,
    6752,  6771,  2281,  8002,  3506,  8013,  8024,  2700,  8067,  8078,
    8089,  8132,  8143,  8154,  8197,  8208,  8219,   844,   907,   917,
     921,   925,   927,   939,   333,   334,   951,   845,   941,   942,
     943,   396,   398,   958,   846,   973,   981,   999,   959,   990,
     995, 10453, 10489, 10828,   848, 10525, 10536, 10572, 10583,   908,
    1001,  1002, 10619,  1017,  8998, 10630, 10666,  1146, 10969,  3648,
   10995, 11006,  1525, 11032, 11043, 11069, 11080, 11106, 11117, 11143,
   11154, 11180,  1013,  1014,  1024,  1025,  1016,  1018,  1019,  1950,
    2054,  5855,   853,   837,  3334,  5898,  5910,  1007,  1033,  1034,
    5953,  1036,  8998,  5965,  6008,  2063,  6795,  3894,  6838,  6850,
    2191,  6893,  6905,  6948,  6960,  7003,  7015,  7058,  7070,  7113,
     291,   486,   562,  1035,  1050,  1051,  7124,  7167,  8262,   858,
     609,   614,  1045,  1047,  1066,  1068,  1069,  1070,  1062,  1063,
    1064,  9399,  9418,  9513,   861,  9532,  9550,  9569,  9587,  1067,
    1073,  1074,  9606,  1084,  8998,  9624,  9643,   675,  9812,  4025,
    9830,  9849,  1425,  9867,  9886,  9904,  9923,  9941,  9960,  9978,
    9997, 10015,  1075,  4234,  3198,  1079,   862,   293,  4271,  9154,
    9154,  9154,  7178,  7221,  7240,  7265,  1524,  1524,  1524,  1091,
     863,  8863,  8273,  9154,  9154,  9154,  1087,  1101,  1105,  1106,
    1096,  1097,  1098,  1119,  9154,  9154,  9154, 10854, 10880, 10906,
   10932,  1524,  1524,  1524,  1137,   865,  8890, 11191,  9154,  9154,
    9154,  6020,  6063,  6106,  6149,  1524,  1524,  1524,  1138,   870,
    8917,  7284,  8284,  8327,  8338,  8349,  9154,  9154,  9154,  9154,
    9154,  9154,  9662,  9681,  9700,  9719,  1524,  1524,  1524,  1140,
     895,  8944, 10034,  8971,  9180,   244,  9180,  1124,  1125,  1126,
    1127,  1131,  1136,  7327,  7338,  8392,   899,  1139,  1153,  1154,
    1159,  1160,  1172,  1176,  1178,  1180, 10677, 10713, 11217,   918,
    1181,  1183,  1184,  1185,  1186,  1206,  6192,  6204,  7350,   922,
    1208,  1209,  1210,  1211,  1212,  1220,  1221,  1222,  1223,  9738,
    9756, 10052,   923,   244,   957,  1224,  4326,  1225,  8403,  8414,
    8457,  8468,  8479,  8522,  8533,  1148,  1149,  1237, 11228, 11254,
   11265, 11291, 11302, 11328, 11339,  7393,  7405,  7448,  7460,  7503,
    7515,  7558,  1227,  1231,  1233, 10071, 10089, 10108, 10126, 10145,
   10163, 10182,  4374,   244,   244,   244,   244,  4422,  4479,  4526,
    4561,   244,  4596
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -261,  -261,  -261,  -143,     5,  -142,   -34,    10,  -261,  1252,
    1238,  1012,   -35,  -175,  3481,   114,   149,   717,  1330,  3764,
    1780,  3088,   145,  3321,  2474,  2635,   -11,  1943,  -260,  -105,
     -82,    -7,   -23
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    99,   100,   101,    18,    40,     9,    10,
      19,    41,    42,    43,    44,    45,    46,   240,   241,    49,
     197,   198,   199,   200,   201,   202,   203,   242,   121,    58,
      59,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   355,    -2,    56,    12,     7,    78,   205,    80,   -17,
       8,     7,   309,    84,    85,   -18,     8,    14,   -49,   -49,
     470,   471,   472,   473,   474,   -11,    65,   206,    56,   -17,
     103,    -8,    56,   468,   469,   -18,     1,    -8,   292,   -11,
     -22,   -11,   350,    66,    96,   -22,   -11,    71,   -47,     2,
       3,     4,   -49,   -47,   228,   228,   228,   108,   109,   110,
     -20,    56,   266,   289,   350,   351,    -3,   -47,   138,   -21,
     -17,    56,   102,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,    56,   365,   366,   351,    63,   -17,
     312,    -7,   -17,    64,   -20,   -17,   -17,    -7,   427,   428,
      -3,    56,   -18,   -21,   499,    -4,   -18,   -20,   -20,   -20,
     405,   406,   -17,    -3,    -3,    -3,   -21,   -21,   -21,   -47,
     205,   -47,   -18,   -15,   353,   -47,   -19,   537,   318,   318,
     318,   111,   -47,   -47,   544,   340,    56,   340,   -47,    -4,
     352,   -16,   152,   -15,   554,    56,   353,   102,   -24,   442,
     443,   -86,    -4,    -4,    -4,    56,    56,    56,    56,    52,
     -19,   -16,   352,    56,     1,    56,   592,   482,   -18,   453,
     454,   -39,    67,   -19,   -19,   -19,   -25,     2,     3,     4,
      68,   -39,   -24,   -15,    52,   -86,   112,   -18,    52,   629,
     -16,   377,   139,   -18,   -87,   -24,   -24,   -24,   -86,   -86,
     -86,   -41,   -15,   148,   -39,   -39,    69,   644,   -15,   -16,
     -25,   -41,   -40,   -63,   -30,   -16,   388,    52,   262,   285,
     -30,    70,   -40,   -25,   -25,   -25,   145,    52,   -87,    52,
      52,   124,   125,   126,   127,   128,    97,   140,   -41,   -41,
      52,   -87,   -87,   -87,   116,   208,    72,    20,    21,    22,
     291,    23,   -15,    73,   417,    98,   -15,    52,   209,   210,
     211,   349,    24,    25,    26,    27,    28,    29,    30,    31,
     141,    32,   -15,   342,    81,   343,   344,   439,   -16,    82,
      16,   345,   -16,   349,    -8,    97,    74,    37,   151,   346,
     347,   336,    52,   336,   208,   450,   159,   146,   -16,   356,
      17,    52,   102,   142,   441,   165,   458,   209,   210,   211,
     143,    52,    52,    52,    52,   170,   171,   172,   173,    52,
      80,    52,   102,   175,   -48,   144,   756,    -5,   480,   -45,
     -42,    56,   -43,    -5,   162,   -48,    56,   -30,   208,   -45,
     -42,   -48,   -43,   -30,    56,   228,   228,   228,   493,   494,
     495,   209,   210,   211,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   -74,   -44,   -46,   228,   228,
     228,   531,   532,   533,   163,   387,   -44,   -46,   538,   539,
     540,   -40,   -40,   -45,   -45,   228,   228,   228,   548,   549,
     550,   -42,   -42,   164,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   266,   167,   228,   228,   228,
     586,   587,   588,   -43,   -43,   169,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   289,   394,   -74,
     292,   766,   -23,   623,   624,   625,   -11,   -23,   -11,   -44,
     -44,   -46,   -46,   -11,   228,   228,   228,    80,   228,   228,
     228,   638,   639,   640,   357,   358,   779,   660,   660,   660,
     660,   660,   660,   660,   660,   660,   660,   660,   340,   359,
     789,    56,    56,   266,   289,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   360,    52,   -11,   -11,
     361,   802,    52,   -39,   -12,   -11,   -12,   -30,   362,   379,
      52,   -12,   -30,   692,    20,    21,    22,   380,    23,   381,
     -39,   -39,   518,   519,   520,   521,   522,   -39,    97,    24,
      25,    26,    27,    28,    29,    30,    31,   208,    32,   -14,
     176,   -14,    34,    35,   382,   383,   -14,   452,    36,   134,
     209,   210,   211,    -9,    37,   135,    38,    39,   384,    -9,
     262,   262,   573,   574,   575,   576,   577,   117,   717,   385,
     -67,   262,    82,   -49,   -49,    86,    87,    88,    89,    90,
     -70,   389,   285,   285,   611,   612,   613,   614,   615,   390,
     392,   391,   396,   285,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   136,   731,   674,   -49,   -12,
     -12,   137,   438,   -49,   147,   -13,   -12,   -13,   -70,   -63,
     291,   397,   -13,   336,   336,   663,   664,   665,   666,   667,
     -63,   398,   399,   400,   336,   -77,   -63,    52,    52,   262,
     285,   -77,   401,   402,   418,    -7,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   419,   752,    62,
     350,   -22,   -14,   -14,   -39,   420,   -22,   -13,   -13,   -14,
     149,   -39,   -31,    56,   -13,   421,   150,   -31,   318,   318,
     318,   -39,   -39,   351,    -6,   760,   761,   762,   -39,   422,
      -6,   423,   318,   318,   318,   -50,   -50,   470,   471,   472,
     473,   474,   444,   318,   318,   318,   -12,   -14,   350,   -10,
     773,   774,   775,   424,   445,   -10,   446,   318,   318,   318,
     -12,   -14,   -12,   -14,   783,   784,   785,   -12,   -14,   -50,
     447,   351,   455,   456,   457,   318,   318,   318,   318,   318,
     318,    47,   353,   -63,   -67,   796,   797,   798,   350,   350,
     350,   350,   459,   340,    56,   340,   350,   166,   352,   -78,
     465,   -30,   -13,   291,   194,   -78,    47,   -30,   -68,   497,
      47,   351,   351,   351,   351,   291,   -13,   460,   -13,   351,
     535,   542,    47,   -13,   496,   552,   291,   291,   -68,   590,
     353,   291,   225,   225,   225,   291,   534,   -31,   753,    47,
     258,   281,    56,   -31,   461,   462,   352,   463,   464,    47,
     194,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,    47,   483,   484,   485,   541,   551,   621,    52,
     353,   353,   353,   353,   135,   622,   589,   626,   353,    47,
     641,   137,    56,    56,    56,    56,   352,   352,   352,   352,
      56,   679,   680,   681,   352,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -48,   682,   683,   684,
     627,   -48,   194,   332,    47,   332,   291,   194,   630,   349,
     -39,   631,   642,    47,   135,   689,   685,   137,   291,   686,
     -39,   -39,   150,    47,    47,    47,    47,   -39,   -48,   699,
     703,    47,   710,    47,   -48,   150,   150,   724,   150,   336,
      52,   336,   735,   150,   806,   745,   755,   764,   150,   777,
     194,   150,   291,   291,   787,   291,   687,   349,   688,   194,
     291,   -49,   -49,   367,   368,   369,   370,   371,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   800,
     693,   194,   378,   814,   225,   291,   -41,    64,    52,   150,
     694,   711,   842,   -41,   695,   -49,   194,   349,   349,   349,
     349,   -49,   824,   -41,   -41,   349,   831,   841,   150,   696,
     -41,   697,   150,   150,   194,   -49,   -49,   407,   408,   409,
     410,   411,   258,   698,   -75,   700,   701,   702,    52,    52,
      52,    52,   847,   848,   849,   850,    52,   194,   -49,   395,
     852,   843,   -75,   707,    82,   281,   704,   291,   194,   -80,
     -80,   -80,    11,   -80,   705,   451,   488,   678,    11,   194,
      82,    82,    82,   303,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   706,   -80,   708,   -80,   -80,   -80,   -80,   709,
     -80,   168,   714,   -80,   712,   713,   -48,   718,   194,   -80,
     725,   -80,   -80,   -80,   -80,   -80,   332,   719,   720,    47,
     721,   728,   722,   723,    47,   -50,   -50,    86,    87,    88,
      89,    90,    47,   225,   225,   225,   726,   727,   736,   732,
     737,   194,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   194,   733,   734,   225,   225,   225,   738,
     -50,   739,   740,   741,   194,   -50,   742,   743,   744,   749,
     746,   194,   754,   225,   225,   225,   747,   748,   763,   -48,
     -73,   194,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   258,   -72,   225,   225,   225,   -71,   -76,
     -73,   -72,   -71,   194,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   603,   281,   -50,   -50,   407,   408,
     409,   410,   411,   -76,   776,   786,   194,   799,   808,   809,
     810,   811,   225,   225,   225,   812,   225,   225,   225,   -50,
     813,   -64,   -65,   815,   194,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   332,   816,   817,    47,
      47,   258,   281,   818,   819,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   820,   -82,   -82,   -82,
     821,   -82,   822,   -39,   823,   825,   194,   826,   827,   828,
     829,   510,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -39,   -82,   -39,   -82,   -82,   -82,   -82,   -39,   -82,   174,
     830,   -82,   832,   833,   834,   835,   836,   -82,    13,   -82,
     -82,   -82,   -82,   -82,   837,   838,   839,   840,   844,   846,
     -66,   -64,   -32,   -32,   -32,   -65,   -32,   -66,   207,     0,
       0,   194,     0,     0,     0,     0,   565,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,
     -32,   -32,     0,   -32,   -32,     0,   -32,     0,     0,     0,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,   194,
       0,   -69,   -69,   -69,   603,   -69,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -69,   -69,   -69,   -69,    48,   -69,   -40,     0,     0,     0,
       0,     0,     0,   -40,     0,     0,     0,     0,    20,    21,
      22,   -69,    23,   -40,   -40,     0,     0,   195,     0,    48,
     -40,   194,     0,    48,     0,     0,   655,    28,    29,    30,
      31,     0,    32,     0,     0,    48,     0,     0,     0,     0,
       0,    47,     0,     0,     0,   226,   226,   226,    37,     0,
       0,     0,    48,   259,   282,     0,     0,     0,   194,     0,
       0,     0,    48,   195,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,    48,     0,     0,     0,     0,
       0,     0,     0,   194,     0,   -51,   -51,   470,   471,   472,
     473,   474,    48,     0,     0,     0,     0,   194,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -49,   -49,   429,   430,   431,   432,   433,   -45,   194,   -51,
     194,   332,    47,   332,   -45,   195,   333,    48,   333,     0,
     195,     0,     0,   -49,   -45,   -45,    48,     0,     0,     0,
       0,   -45,     0,     0,   -49,     0,    48,    48,    48,    48,
     -49,     0,     0,     0,    48,     0,    48,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
      47,     0,     0,   195,     0,     0,   -42,   230,   231,   232,
       0,   233,   195,   -42,     0,   -51,   -51,   407,   408,   409,
     410,   411,     0,   -42,   -42,     0,   234,   235,   236,   237,
     -42,   238,     0,     0,   195,     0,     0,   226,   -51,     0,
      47,    47,    47,    47,     0,     0,     0,   239,    47,   195,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,   195,     0,   -43,
       0,     0,     0,     0,     0,   259,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -43,   -43,     0,     0,
     195,     0,     0,   -43,     0,     0,     0,     0,   282,     0,
       0,   195,   -34,   -34,   -34,     0,   -34,     0,     0,     0,
       0,     0,   195,     0,     0,     0,   304,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,
     -34,   -34,     0,   -34,   -34,     0,   -34,     0,     0,     0,
       0,   195,   -34,     0,   -34,   -34,   -34,   -34,   -34,   333,
       0,     0,    48,     0,     0,     0,     0,    48,   -51,   -51,
      86,    87,    88,    89,    90,    48,   226,   226,   226,     0,
       0,     0,     0,     0,   195,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   195,     0,     0,   226,
     226,   226,     0,   -51,     0,     0,     0,   195,   -51,     0,
       0,     0,     0,     0,   195,     0,   226,   226,   226,     0,
       0,     0,     0,     0,   195,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   259,     0,   226,   226,
     226,     0,     0,     0,     0,     0,   195,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   282,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   195,
       0,     0,     0,     0,     0,   226,   226,   226,     0,   226,
     226,   226,     0,     0,    50,     0,     0,   195,   656,   656,
     656,   656,   656,   656,   656,   656,   656,   656,   656,   333,
       0,     0,    48,    48,   259,   282,   181,   182,   183,    50,
     184,     0,     0,    50,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   188,   189,   190,   191,   195,
     192,     0,   -74,     0,   511,     0,     0,     0,     0,   -74,
       0,     0,    50,   260,   283,     0,   193,     0,     0,   426,
     -74,     0,    50,     0,     0,     0,   -74,     0,     0,   -35,
     -35,   -35,     0,   -35,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,    50,   -35,   195,   -35,   -35,   -35,   -35,   566,
     -35,   -35,     0,   -35,     0,     0,     0,     0,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,    50,   334,     0,
       0,     0,   195,     0,     0,     0,    50,   604,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    50,    50,    50,
       0,   212,   213,   214,    50,   215,    50,    57,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     219,   220,   221,   222,     0,   223,   -44,     0,     0,     0,
     204,     0,    57,   -44,   195,     0,    57,     0,     0,   656,
       0,   224,     0,   -44,   -44,     0,     0,     0,    57,     0,
     -44,     0,     0,     0,    48,     0,     0,     0,   229,   229,
     229,     0,     0,     0,     0,    57,   267,   290,     0,     0,
       0,   195,     0,     0,     0,    57,   204,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,    57,     0,
       0,     0,     0,     0,     0,     0,   195,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,     0,
     195,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -50,   -50,   429,   430,   431,   432,   433,
     -46,   195,     0,   195,   333,    48,   333,   -46,   204,   341,
      57,   341,     0,   204,     0,     0,   -50,   -46,   -46,    57,
       0,     0,     0,     0,   -46,     0,     0,   -50,     0,    57,
      57,    57,    57,   -50,     0,     0,     0,    57,     0,    57,
       0,     0,    50,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,    48,     0,    50,   204,     0,     0,     0,
     245,   246,   247,     0,   248,   204,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   252,
     253,   254,   255,     0,   256,     0,   -41,   204,     0,     0,
     229,     0,     0,    48,    48,    48,    48,     0,     0,     0,
     257,    48,   204,   -41,     0,   -41,     0,     0,     0,     0,
     -41,     0,     0,   268,   269,   270,   260,   271,     0,     0,
     204,   -51,   -51,   429,   430,   431,   432,   433,   267,     0,
       0,     0,   275,   276,   277,   278,     0,   279,   283,     0,
       0,     0,     0,   204,   -51,     0,     0,     0,     0,     0,
       0,   290,     0,   280,   204,   -51,    20,    21,    22,     0,
      23,   -51,     0,     0,     0,   204,     0,     0,     0,   308,
       0,    24,    25,    26,    27,    28,    29,    30,    31,   334,
      32,     0,    50,    50,   260,   283,     0,     0,     0,     0,
       0,     0,     0,     0,   204,     0,    37,     0,    76,     0,
       0,     0,   341,     0,     0,    57,     0,     0,     0,     0,
      57,   -50,   -50,   367,   368,   369,   370,   371,    57,   229,
     229,   229,     0,     0,     0,     0,     0,   204,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   204,
       0,     0,   229,   229,   229,   -50,     0,     0,     0,     0,
     204,   -50,     0,     0,     0,     0,     0,   204,     0,   229,
     229,   229,     0,     0,     0,     0,     0,   204,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   267,
       0,   229,   229,   229,     0,     0,     0,     0,     0,   204,
     609,   609,   609,   609,   609,   609,   609,   609,   609,   609,
     609,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   204,     0,     0,     0,     0,     0,   229,   229,
     229,     0,   229,   229,   229,     0,     0,     0,     0,     0,
     204,   661,   661,   661,   661,   661,   661,   661,   661,   661,
     661,   661,   341,     0,     0,    57,    57,   267,   290,     0,
       0,     0,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -38,   -38,   -38,
       0,   -38,   204,   -40,    50,     0,     0,   516,     0,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -40,   -38,   -40,   -38,   -38,   -38,   -38,   -40,   -38,   -38,
       0,   -38,     0,     0,     0,     0,     0,   -38,    54,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   204,     0,     0,
       0,     0,   571,    54,   -45,     0,     0,    54,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -45,     0,   -45,   334,    50,   334,   -39,   -45,   105,
     105,   105,     0,     0,     0,   204,    54,   264,   287,     0,
     609,     0,     0,     0,   -39,   -39,    54,     0,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,    54,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,    50,     0,     0,    54,     0,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,   204,     0,     0,
       0,     0,   661,     0,     0,   -42,     0,   -42,     0,     0,
       0,     0,   -42,   316,   316,   316,     0,    57,     0,     0,
     338,    54,   338,    50,    50,    50,    50,     0,     0,     0,
      54,    50,     0,     0,   204,     0,     0,     0,     0,     0,
      54,    54,    54,    54,     0,     0,     0,     0,    54,    55,
      54,     0,     0,     0,     0,     0,     0,     0,     0,   204,
       0,     0,     0,     0,    20,    21,    22,     0,    23,     0,
       0,     0,     0,   204,    55,     0,     0,     0,    55,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
       0,     0,     0,     0,   204,     0,   204,   341,    57,   341,
     227,   227,   227,     0,    37,     0,   243,    55,   265,   288,
     -51,   -51,   367,   368,   369,   370,   371,    55,     0,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
      55,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -51,     0,    57,    55,     0,   -43,
     -51,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -43,     0,   -43,     0,
       0,     0,   -67,   -43,   317,   317,   317,     0,     0,   -67,
       0,   339,    55,   339,     0,     0,    57,    57,    57,    57,
     -67,    55,     0,     0,    57,     0,   -67,     0,     0,     0,
       0,    55,    55,    55,    55,     0,     0,     0,     0,    55,
       0,    55,     0,     0,     0,     0,    54,     0,     0,     0,
       0,    54,     0,     0,     0,     0,     0,     0,     0,    54,
     105,   105,   105,     0,     0,     0,     0,     0,     0,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
       0,     0,     0,   105,   105,   105,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     105,   105,   105,     0,     0,     0,    95,     0,     0,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     264,     0,   105,   105,   105,   -63,     0,     0,     0,     0,
     -63,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   287,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   105,
     105,   105,     0,   105,   105,   105,   -67,     0,     0,     0,
       0,     0,   658,   658,   658,   658,   658,   658,   658,   658,
     658,   658,   658,   338,     0,   -67,    54,    54,   264,   287,
     -67,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,    55,     0,   -41,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
      55,   227,   227,   227,     0,     0,   -41,   -41,     0,     0,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,     0,     0,     0,   227,   227,   227,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   227,   227,   227,     0,     0,     0,   -70,     0,     0,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   265,     0,   227,   227,   227,   -70,     0,     0,     0,
       0,   -70,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   288,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     227,   227,   227,     0,   227,   227,   227,   -68,     0,     0,
       0,     0,    51,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   339,     0,   -68,    55,    55,   265,
     288,   -68,     0,     0,     0,     0,     0,    51,     0,     0,
       0,    51,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,    54,     0,
       0,     0,   -75,   316,   316,   316,     0,     0,     0,     0,
      51,   261,   284,     0,     0,     0,     0,   316,   316,   316,
      51,   -75,   122,   123,     0,     0,   -75,     0,   316,   316,
     316,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,   316,   316,   316,     0,     0,     0,     0,     0,
      51,    20,    21,    22,     0,    23,     0,     0,     0,     0,
     316,   316,   316,   316,   316,   316,    24,    25,    26,    27,
      28,    29,    30,    31,     0,    32,     0,     0,   338,    54,
     338,     0,     0,     0,   335,    51,   335,     0,     0,     0,
       0,    37,     0,   310,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    51,    51,    51,     0,     0,
       0,     0,    51,     0,    51,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,    54,     0,     0,
       0,     0,     0,   -74,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
      83,     0,   -74,   -70,     0,     0,     0,   -74,     0,    55,
     -70,     0,     0,     0,   317,   317,   317,    54,    54,    54,
      54,   -70,     0,     0,     0,    54,     0,   -70,   317,   317,
     317,     0,     0,     0,     0,    53,     0,     0,     0,   317,
     317,   317,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   317,   317,   317,     0,     0,     0,     0,
      53,   293,   294,   295,    53,   296,     0,   -41,     0,     0,
       0,   317,   317,   317,   317,   317,   317,   -41,   -41,     0,
     297,   298,   299,   300,   -41,   301,   104,   106,   107,   339,
      55,   339,     0,    53,   263,   286,     0,     0,     0,     0,
       0,   302,     0,    53,     0,    53,    53,    53,    53,    53,
      53,    53,   129,   130,   131,   132,    53,     0,     0,     0,
       0,     0,     0,     0,     0,   319,   320,   321,     0,   322,
      51,     0,     0,    53,     0,    51,     0,     0,    55,     0,
       0,     0,     0,    51,   326,   327,   328,   329,     0,   330,
       0,     0,     0,   512,   517,     0,     0,     0,     0,     0,
     153,   154,   155,     0,     0,   331,     0,   337,    53,   337,
       0,     0,     0,     0,     0,     0,     0,    53,    55,    55,
      55,    55,     0,     0,     0,     0,    55,    53,    53,    53,
      53,     0,     0,   567,   572,    53,     0,    53,     0,     0,
       0,     0,     0,     0,   261,     0,     0,     0,     0,   500,
     501,   502,     0,   503,     0,   605,   610,     0,    75,     0,
      77,     0,     0,   -32,   -32,   -32,   284,   -32,   504,   505,
     506,   507,     0,   508,     0,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   509,
       0,     0,     0,   244,     0,   114,   657,   662,     0,     0,
     -36,   -36,   -36,   -32,   -36,   -32,     0,   335,     0,     0,
      51,    51,   261,   284,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   311,   -36,     0,     0,     0,     0,     0,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,     0,   -37,     0,
       0,     0,     0,     0,     0,     0,   157,     0,   348,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
     -37,   -37,   -37,   -37,     0,   -37,   -37,     0,   -37,     0,
     348,   555,   556,   557,   -37,   558,   -37,   -37,   -37,   -37,
     -37,     0,     0,    53,     0,     0,     0,     0,    53,     0,
     559,   560,   561,   562,   363,   563,    53,   490,   491,   492,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   564,     0,   523,   524,   525,   526,     0,   -41,     0,
     528,   529,   530,     0,     0,   386,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,   545,   546,   547,
     393,     0,   -41,     0,     0,     0,   263,   263,   263,   263,
     263,   263,   263,   578,   579,   580,   581,   263,   403,   583,
     584,   585,     0,     0,     0,     0,     0,     0,   286,   286,
     286,   286,   286,   286,   286,   616,   617,   618,   619,   286,
       0,   425,    51,     0,     0,    91,    92,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,    93,    94,   632,   633,   634,     0,
     635,   636,   637,   448,     0,     0,     0,     0,     0,   337,
     337,   337,   337,   337,   337,   337,   668,   669,   670,   671,
     337,   196,   -52,    53,    53,   263,   286,   -52,     0,     0,
       0,     0,   466,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,   487,     0,
       0,   -40,     0,     0,     0,     0,     0,   113,   115,     0,
       0,     0,   335,    51,   335,     0,   118,   120,   -40,   -40,
     -86,   -86,   -86,     0,   -86,   -40,     0,     0,     0,   133,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,     0,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,   -86,     0,     0,     0,     0,     0,
     -86,    51,   -86,   -86,   -86,   -86,   -86,   593,   594,   595,
       0,   596,     0,     0,     0,     0,     0,     0,     0,   196,
     158,     0,   160,     0,   161,     0,   597,   598,   599,   600,
       0,   601,     0,     0,     0,    20,    21,    22,     0,    23,
       0,    51,    51,    51,    51,     0,     0,   602,     0,    51,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,   176,    33,    34,    35,     0,   177,   196,     0,    36,
       0,     0,     0,     0,   244,    37,   676,    38,    39,   178,
     179,   180,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,     0,   196,     0,
     690,     0,     0,   -44,     0,    53,     0,     0,     0,     0,
     757,   758,   759,   196,     0,     0,     0,     0,     0,     0,
     -44,     0,   -44,     0,   767,   768,   769,   -44,     0,     0,
       0,   196,     0,     0,     0,   770,   771,   772,   645,   646,
     647,     0,   648,     0,     0,     0,     0,     0,     0,   780,
     781,   782,     0,     0,   196,   715,     0,   649,   650,   651,
     652,     0,   653,     0,     0,   440,     0,   790,   791,   792,
     793,   794,   795,     0,     0,     0,   196,     0,   654,     0,
     -88,   -88,   -88,     0,   -88,   337,    53,   337,     0,     0,
       0,     0,     0,   729,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   196,   -88,   -88,   -88,   -88,
       0,   -88,   -88,     0,   -88,     0,     0,     0,     0,     0,
     -88,     0,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,   750,     0,     0,     0,     0,
     527,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,   311,     0,     0,   120,     0,
       0,     0,     0,     0,    53,    53,    53,    53,   120,     0,
       0,     0,    53,     0,     0,     0,     0,   -33,   -33,   -33,
     582,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   620,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,   -33,     0,   120,     0,     0,     0,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,   804,     0,   348,   -87,   -87,   -87,
       0,   -87,     0,   672,     0,     0,     0,     0,   675,   677,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,   -87,     0,   196,   -89,   -89,   -89,   -87,   -89,   -87,
     -87,   -87,   -87,   -87,   348,     0,     0,     0,     0,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,     0,
     -89,   -89,   -89,   -89,     0,   -89,   -89,     0,   -89,     0,
       0,     0,     0,     0,   -89,     0,   -89,   -89,   -89,   -89,
     -89,     0,     0,     0,   348,   348,   348,   348,   196,   -80,
     -80,   -80,   348,   -80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,     0,   -80,   -80,   -80,   -80,     0,
     -80,   845,     0,   -80,     0,     0,   196,     0,     0,   -80,
       0,   -80,   -80,   -80,   -80,   -80,     0,   -83,   -83,   -83,
       0,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,     0,   -83,   -83,   -83,   -83,     0,   -83,   -83,
       0,   -83,     0,     0,     0,     0,     0,   -83,   196,   -83,
     -83,   -83,   -83,   -83,     0,   -84,   -84,   -84,     0,   -84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,
       0,   -84,   -84,   -84,   -84,   120,   -84,   -84,     0,   -84,
       0,     0,     0,     0,     0,   -84,     0,   -84,   -84,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,   -85,   -85,   -85,     0,   -85,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,   -85,
     -85,   -85,     0,   -85,   -85,   120,   -85,   196,   805,     0,
     807,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -79,
     -79,   -79,     0,   -79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,     0,   -79,   -79,   -79,   -79,     0,
     -79,   -79,     0,   -79,   -82,   -82,   -82,     0,   -82,   -79,
       0,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,
     -82,   -82,   -82,   -82,     0,   -82,   851,     0,   -82,   -81,
     -81,   -81,     0,   -81,   -82,     0,   -82,   -82,   -82,   -82,
     -82,     0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,   -81,     0,   -81,   -81,   -81,   -81,     0,
     -81,   -81,     0,   -81,   -32,   -32,   -32,     0,   -32,   -81,
       0,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,
     -32,   -32,   -32,   -32,     0,   -32,     0,     0,   -32,   -26,
     -26,   -26,     0,   -26,   -32,     0,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,     0,
     -26,     0,     0,   -26,   -28,   -28,   -28,     0,   -28,   -26,
       0,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,     0,
     -28,   -28,   -28,   -28,     0,   -28,     0,     0,   -28,    20,
      21,    22,     0,    23,   -28,     0,   -28,   -28,   -28,   -28,
     -28,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,   176,    79,    34,    35,     0,
     177,     0,     0,    36,   -34,   -34,   -34,     0,   -34,    37,
       0,    38,    39,   178,   179,   180,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,     0,   -34,     0,     0,   -34,   -27,
     -27,   -27,     0,   -27,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,
     -27,     0,     0,   -27,   -35,   -35,   -35,     0,   -35,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,
     -35,   -35,   -35,   -35,     0,   -35,     0,     0,   -35,   -38,
     -38,   -38,     0,   -38,   -35,     0,   -35,   -35,   -35,   -35,
     -35,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,     0,
     -38,     0,     0,   -38,   -36,   -36,   -36,     0,   -36,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,     0,
     -36,   -36,   -36,   -36,     0,   -36,     0,     0,   -36,   -37,
     -37,   -37,     0,   -37,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,
     -37,     0,     0,   -37,   -88,   -88,   -88,     0,   -88,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,     0,
     -88,   -88,   -88,   -88,     0,   -88,     0,     0,   -88,   -29,
     -29,   -29,     0,   -29,   -88,     0,   -88,   -88,   -88,   -88,
     -88,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,
     -29,     0,     0,   -29,   -33,   -33,   -33,     0,   -33,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,     0,   -33,     0,     0,   -33,   -89,
     -89,   -89,     0,   -89,   -33,     0,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,     0,   -89,     0,   -89,   -89,   -89,   -89,     0,
     -89,     0,     0,   -89,   -83,   -83,   -83,     0,   -83,   -89,
       0,   -89,   -89,   -89,   -89,   -89,     0,     0,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,     0,
     -83,   -83,   -83,   -83,     0,   -83,     0,     0,   -83,   -84,
     -84,   -84,     0,   -84,   -83,     0,   -83,   -83,   -83,   -83,
     -83,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,     0,   -84,   -84,   -84,   -84,     0,
     -84,     0,     0,   -84,   -85,   -85,   -85,     0,   -85,   -84,
       0,   -84,   -84,   -84,   -84,   -84,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,     0,
     -85,   -85,   -85,   -85,     0,   -85,     0,     0,   -85,   -79,
     -79,   -79,     0,   -79,   -85,     0,   -85,   -85,   -85,   -85,
     -85,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,     0,   -79,   -79,   -79,   -79,     0,
     -79,     0,     0,   -79,   -81,   -81,   -81,     0,   -81,   -79,
       0,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,
     -81,   -81,   -81,   -81,     0,   -81,     0,     0,   -81,    20,
      21,    22,     0,    23,   -81,     0,   -81,   -81,   -81,   -81,
     -81,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,   176,   354,    34,    35,     0,
     177,     0,     0,    36,   -24,   -24,   -24,     0,   -24,    37,
       0,    38,    39,   178,   179,   180,     0,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,     0,
     -24,   -24,   -24,   -24,     0,   -24,     0,     0,   -24,    20,
      21,    22,     0,    23,   -24,     0,   -24,   -24,   -24,   -24,
     -24,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,   176,   481,    34,    35,     0,
     177,     0,     0,    36,   -86,   -86,   -86,     0,   -86,    37,
       0,    38,    39,   178,   179,   180,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,     0,
     -86,   -86,   -86,   -86,     0,   -86,     0,     0,   -86,    20,
      21,    22,     0,    23,   -86,     0,   -86,   -86,   -86,   -86,
     -86,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,   176,   489,    34,    35,     0,
     177,     0,     0,    36,   -25,   -25,   -25,     0,   -25,    37,
       0,    38,    39,   178,   179,   180,     0,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,
     -25,   -25,   -25,   -25,     0,   -25,     0,     0,   -25,    20,
      21,    22,     0,    23,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,    24,    25,    26,    27,    28,    29,
      30,    31,     0,    32,     0,   176,   673,    34,    35,     0,
     177,     0,     0,    36,   -87,   -87,   -87,     0,   -87,    37,
       0,    38,    39,   178,   179,   180,     0,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,     0,
     -87,   -87,   -87,   -87,     0,   -87,     0,     0,   -87,     0,
       0,     0,     0,     0,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,     0,   -46,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,     0,   -46,     0,   -46,   -45,
       0,     0,     0,   -46,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -45,   -45,     0,     0,
       0,     0,   -42,   -45,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,   -42,
     -42,     0,   -43,     0,     0,     0,   -42,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -43,
     -43,     0,     0,     0,     0,   -74,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,     0,    23,
       0,     0,   364,   -74,     0,     0,     0,     0,     0,   -74,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,     0,     0,   -33,   -33,   -33,     0,   -33,     0,     0,
       0,     0,     0,     0,     0,    37,     0,   486,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,   -33,     0,   -33,   -68,     0,     0,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -68,     0,     0,     0,     0,     0,
     -68,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,   -44,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,     0,     0,   -44,   -44,   -46,     0,
       0,     0,     0,   -44,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -46,   -46,     0,     0,     0,
       0,     0,   -46,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,   -39,
     -39,   -75,     0,     0,     0,     0,   -39,     0,   -75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,     0,     0,     0,     0,   -75,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -40,   -45,     0,     0,     0,     0,   -40,     0,
       0,     0,     0,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,   -42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -42,   -42,   -43,     0,
       0,     0,     0,   -42,     0,     0,     0,     0,   -43,   -43,
       0,     0,     0,     0,     0,   -43,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,   -74,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,   730,   -74,   -73,     0,     0,     0,     0,   -74,     0,
       0,     0,     0,     0,   -73,     0,     0,     0,     0,     0,
     -73,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,   -72,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,     0,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,     0,   -71,     0,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,     0,     0,     0,   -71,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,     0,   -76,     0,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,     0,   -76,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,   -44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,   -46,     0,     0,
       0,     0,   -44,     0,     0,     0,     0,   -46,   -46,     0,
       0,     0,     0,     0,   -46,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,   -73,   -72,     0,     0,     0,   -73,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,   -72,     0,     0,     0,   -71,   -72,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,     0,     0,   -71,   -76,     0,     0,     0,
     -71,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,   -76,     0,     0,     0,   376,
     -76,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,   -63,     0,   -67,
       0,     0,     0,   -63,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,   -67,     0,     0,
       0,     0,   -70,   -67,   434,   435,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   436,   437,     0,     0,     0,     0,     0,
     -70,     0,     0,     0,     0,     0,   -70,     0,     0,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -52,     0,     0,     0,     0,     0,   -52,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -58,     0,     0,     0,     0,     0,   -58,
       0,     0,     0,   -39,     0,   -39,     0,     0,     0,     0,
     -39,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -41,     0,   -41,     0,
       0,     0,     0,   -41,     0,     0,     0,   -40,     0,   -40,
       0,     0,     0,     0,   -40,     0,     0,     0,   -45,     0,
     -45,     0,     0,     0,     0,   -45,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,   -42,     0,   -42,     0,     0,     0,     0,   -42,     0,
       0,     0,   -43,     0,   -43,     0,     0,     0,     0,   -43,
       0,     0,     0,   449,     0,   -74,     0,     0,     0,     0,
     -74,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,   -68,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,   -68,   -75,     0,
       0,     0,     0,   -68,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -75,     0,     0,     0,
       0,     0,   -75,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,   -41,
     -41,     0,     0,     0,     0,     0,   -41,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -40,   -40,
       0,     0,     0,     0,     0,   -40,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,
       0,     0,   -45,   -45,     0,     0,     0,     0,     0,   -45,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -42,   -42,     0,     0,     0,     0,     0,   -42,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   691,   -74,     0,     0,     0,     0,
       0,   -74,     0,     0,     0,     0,     0,     0,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
       0,     0,     0,     0,     0,   -63,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -67,   -70,     0,     0,     0,     0,   -67,     0,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,     0,
     -70,   434,   435,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     436,   437,     0,   434,   435,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   436,   437,     0,     0,   -55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -55,   -54,     0,
       0,     0,     0,   -55,     0,     0,     0,     0,     0,   -54,
       0,     0,     0,     0,     0,   -54,   434,   435,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   436,   437,     0,   434,   435,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   436,   437,     0,
       0,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -53,   -56,     0,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,   -56,     0,     0,     0,     0,     0,
     -56,   434,   435,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     436,   437,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
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
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,   -76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,   -58,     0,     0,     0,     0,   -58,
      91,    92,   -55,   -55,   -55,   -55,   -55,   -55,   -55,    93,
      94,    91,    92,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
      93,    94,    91,    92,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,    93,    94,     0,     0,     0,     0,   -55,     0,     0,
       0,     0,   -55,     0,     0,     0,     0,     0,   -54,     0,
       0,     0,     0,   -54,     0,     0,     0,     0,     0,   -53,
       0,     0,     0,     0,   -53,    91,    92,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,    93,    94,    91,    92,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,    93,    94,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,
       0,     0,   -56,     0,     0,     0,     0,   -56,     0,     0,
       0,     0,     0,   -57,     0,     0,     0,     0,   -57,     0,
       0,     0,     0,     0,   -61,     0,     0,     0,     0,   -61,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,   -62,     0,     0,
       0,     0,   -62,     0,     0,     0,     0,     0,   -59,     0,
       0,     0,     0,   -59,     0,     0,     0,     0,     0,   -60,
       0,     0,     0,     0,   -60,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,   -64,     0,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,   -65,     0,     0,     0,     0,   -65,     0,
       0,     0,     0,     0,   -66,     0,     0,     0,     0,   -66,
     372,   373,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   374,
     375,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,   -52,     0,     0,     0,
       0,     0,   -52,     0,     0,     0,     0,   -58,     0,     0,
       0,     0,     0,   -58,     0,     0,     0,     0,     0,   -63,
       0,     0,     0,     0,   -63,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -67,     0,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,     0,   -68,     0,     0,     0,     0,   -68,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,   -63,     0,     0,     0,
       0,     0,   -63,     0,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,   -67,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,     0,   -70,   372,   373,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   374,   375,   372,   373,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   374,   375,   372,   373,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   374,   375,     0,     0,
       0,   -55,     0,     0,     0,     0,     0,   -55,     0,     0,
       0,     0,   -54,     0,     0,     0,     0,     0,   -54,     0,
       0,     0,     0,   -53,     0,     0,     0,     0,     0,   -53,
     372,   373,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   374,
     375,   372,   373,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     374,   375,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,     0,   -56,     0,     0,     0,
       0,     0,   -56,     0,     0,     0,     0,   -57,     0,     0,
       0,     0,     0,   -57,     0,     0,     0,     0,   -61,     0,
       0,     0,     0,     0,   -61,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,
       0,   -62,     0,     0,     0,     0,     0,   -62,     0,     0,
       0,     0,   -59,     0,     0,     0,     0,     0,   -59,     0,
       0,     0,     0,   -60,     0,     0,     0,     0,     0,   -60,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   -75,     0,     0,
       0,     0,   -75,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,     0,   -73,
       0,     0,     0,     0,   -73,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,   -72,     0,     0,     0,     0,   -72,     0,     0,
       0,     0,     0,   -71,     0,     0,     0,     0,   -71,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,   -76,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,   -75,     0,     0,     0,
       0,     0,   -75,     0,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,   -64,     0,     0,     0,     0,   -65,     0,
       0,     0,     0,     0,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,   -66,     0,     0,     0,     0,     0,   -66,     0,     0,
       0,     0,   -73,     0,     0,     0,     0,     0,   -73,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,     0,   -72,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   412,   413,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   414,   415,     0,     0,   -71,     0,     0,   181,
     182,   183,   -71,   184,     0,     0,     0,   -76,   -52,     0,
       0,     0,     0,   -76,    24,   185,   186,   187,   188,   189,
     190,   191,     0,   192,     0,     0,   181,   182,   183,     0,
     184,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     119,    24,   185,   186,   187,   188,   189,   190,   191,     0,
     192,     0,     0,   -32,   -32,   -32,     0,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   156,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
     181,   182,   183,     0,   184,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,    24,   185,   186,   187,   188,
     189,   190,   191,     0,   192,     0,     0,   181,   182,   183,
       0,   184,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   498,    24,   185,   186,   187,   188,   189,   190,   191,
       0,   192,     0,     0,   181,   182,   183,     0,   184,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   536,    24,
     185,   186,   187,   188,   189,   190,   191,     0,   192,     0,
       0,   181,   182,   183,     0,   184,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   543,    24,   185,   186,   187,
     188,   189,   190,   191,     0,   192,     0,     0,   181,   182,
     183,     0,   184,     0,     0,     0,     0,     0,     0,     0,
       0,   193,   553,    24,   185,   186,   187,   188,   189,   190,
     191,     0,   192,     0,     0,   181,   182,   183,     0,   184,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   591,
      24,   185,   186,   187,   188,   189,   190,   191,     0,   192,
       0,     0,   -33,   -33,   -33,     0,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,   193,   628,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,   181,
     182,   183,     0,   184,     0,     0,     0,     0,     0,     0,
       0,     0,   -33,   -33,    24,   185,   186,   187,   188,   189,
     190,   191,     0,   192,     0,     0,   181,   182,   183,     0,
     184,     0,     0,     0,     0,     0,     0,     0,     0,   193,
     643,    24,   185,   186,   187,   188,   189,   190,   191,     0,
     192,     0,     0,   181,   182,   183,     0,   184,     0,     0,
       0,     0,     0,     0,     0,     0,   193,   765,    24,   185,
     186,   187,   188,   189,   190,   191,     0,   192,     0,     0,
     181,   182,   183,     0,   184,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   778,    24,   185,   186,   187,   188,
     189,   190,   191,     0,   192,     0,     0,   181,   182,   183,
       0,   184,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   788,    24,   185,   186,   187,   188,   189,   190,   191,
       0,   192,     0,     0,   181,   182,   183,     0,   184,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   801,    24,
     185,   186,   187,   188,   189,   190,   191,     0,   192,     0,
       0,   181,   182,   183,     0,   184,     0,     0,     0,     0,
       0,     0,     0,     0,   193,   803,    24,   185,   186,   187,
     188,   189,   190,   191,     0,   192,     0,   212,   213,   214,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   193,    24,   216,   217,   218,   219,   220,   221,   222,
       0,   223,     0,   245,   246,   247,     0,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,    24,   249,
     250,   251,   252,   253,   254,   255,     0,   256,     0,   268,
     269,   270,     0,   271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   257,    24,   272,   273,   274,   275,   276,
     277,   278,     0,   279,     0,    20,    21,    22,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   280,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,   293,   294,   295,     0,   296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    24,    25,    26,    27,
     297,   298,   299,   300,     0,   301,     0,   230,   231,   232,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   302,    24,   313,   314,   315,   234,   235,   236,   237,
       0,   238,     0,   319,   320,   321,     0,   322,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   239,    24,   323,
     324,   325,   326,   327,   328,   329,     0,   330,     0,   500,
     501,   502,     0,   503,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   331,    24,   185,   186,   187,   504,   505,
     506,   507,     0,   508,     0,   555,   556,   557,     0,   558,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   509,
      24,   249,   250,   251,   559,   560,   561,   562,     0,   563,
       0,   593,   594,   595,     0,   596,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   564,    24,   272,   273,   274,
     597,   598,   599,   600,     0,   601,     0,   645,   646,   647,
       0,   648,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   602,    24,   323,   324,   325,   649,   650,   651,   652,
       0,   653,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,   654,     0,     0,
     -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,     0,     0,   -40,   -40,   -45,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,   -45,   -45,   -42,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,   -42,   -42,   -43,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,     0,   -43,   -43,   -74,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,   467,   -74,   -44,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,   -44,   -44,   -46,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,     0,
       0,   -46,   -46,   479,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,   -63,   -67,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
     -67,   -70,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -70,
     -68,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,   -68,   -75,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,   -75,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,   -41,   -41,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,   -40,   -40,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
     -45,   -45,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,     0,     0,     0,   -42,
     -42,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,   -43,   -43,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,   751,   -74,   -73,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -73,   -72,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,   -72,   -71,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,     0,     0,     0,   -71,   -76,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,   -76,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
       0,   -44,   -44,   475,   476,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   477,   478,     0,     0,     0,     0,     0,   -46,
     -46,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,     0,   -52,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,   -58,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,     0,   -63,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,   -67,   475,   476,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   477,   478,     0,     0,     0,     0,
       0,     0,     0,   -70,   475,   476,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   477,   478,     0,     0,     0,     0,     0,
       0,   -55,   475,   476,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   477,   478,     0,     0,     0,     0,     0,     0,     0,
     -54,   475,   476,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     477,   478,     0,     0,     0,     0,     0,     0,   -53,   475,
     476,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   477,   478,
       0,     0,     0,     0,     0,     0,     0,   -56,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,     0,     0,     0,   -57,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,
       0,     0,     0,     0,   -61,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,     0,     0,     0,     0,
       0,     0,   -62,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,     0,
       0,   -59,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -60,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,   -68,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,   -75,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,     0,   -64,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,     0,     0,   -65,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,   -66,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
     -73,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -72,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,   -71,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,     0,     0,   -76,   -39,     0,     0,
       0,     0,     0,     0,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
       0,     0,     0,   -41,     0,     0,     0,     0,     0,     0,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,     0,     0,     0,     0,     0,   -40,
       0,     0,     0,     0,     0,     0,   -40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,     0,     0,     0,     0,   -45,     0,     0,     0,     0,
       0,     0,   -45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
       0,   -42,     0,     0,     0,     0,     0,     0,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,   -43,     0,     0,
       0,     0,     0,     0,   -43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -43,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,   -74,     0,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     404,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,   -44,
       0,     0,     0,     0,     0,     0,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,   -46,     0,     0,     0,     0,
       0,     0,   -46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -46,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,     0,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -41,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,     0,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -40,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -45,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,   -42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -43,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   716,
     -44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -44,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,   -46,     0,     0,     0,
     416,     0,     0,     0,     0,     0,   -46,   -63,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,     0,   -67,     0,     0,     0,
       0,     0,     0,   -67,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,     0,     0,   -70,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,     0,     0,     0,   -68,     0,
       0,     0,     0,     0,     0,   -68,   -75,   -75,   -75,   -75,
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
     412,   413,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   414,
     415,   412,   413,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     414,   415,     0,     0,     0,   -55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -54,   412,   413,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   414,   415,   412,   413,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   414,   415,     0,
       0,     0,   -53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -56,   412,   413,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   414,   415,   -61,   -61,   -61,   -61,   -61,
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
       7,   176,     0,    14,     0,     0,    40,    25,    43,    25,
       0,     6,    25,    10,    11,    25,     6,    29,    10,    11,
      12,    13,    14,    15,    16,    29,    43,    45,    39,    45,
      64,    44,    43,    10,    11,    45,    34,    50,    43,    43,
      45,    45,   147,    43,    55,    50,    50,    25,    45,    47,
      48,    49,    44,    50,    65,    66,    67,    68,    69,    70,
       0,    72,    73,    74,   169,   147,     0,    44,   102,     0,
      25,    82,    62,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    10,    11,   169,    45,    44,
      43,    44,    25,    50,    34,    50,    29,    50,    10,    11,
      34,   112,    25,    34,   364,     0,    29,    47,    48,    49,
      10,    11,    45,    47,    48,    49,    47,    48,    49,    44,
      25,    33,    45,    25,   147,    50,     0,   387,   139,   140,
     141,    27,    44,    33,   394,   146,   147,   148,    50,    34,
     147,    25,   137,    45,   404,   156,   169,   137,     0,   292,
     292,     0,    47,    48,    49,   166,   167,   168,   169,    14,
      34,    45,   169,   174,    34,   176,   426,   342,    25,   312,
     312,    33,    43,    47,    48,    49,     0,    47,    48,    49,
      43,    43,    34,    25,    39,    34,    72,    44,    43,   449,
      25,   202,    33,    50,     0,    47,    48,    49,    47,    48,
      49,    33,    44,    33,    43,    44,    43,   467,    50,    44,
      34,    43,    33,    33,    44,    50,   227,    72,    73,    74,
      50,    43,    43,    47,    48,    49,   112,    82,    34,    84,
      85,    86,    87,    88,    89,    90,    25,    33,    43,    44,
      95,    47,    48,    49,    44,    34,    43,     3,     4,     5,
      50,     7,    25,    43,   265,    44,    29,   112,    47,    48,
      49,   147,    18,    19,    20,    21,    22,    23,    24,    25,
      33,    27,    45,    29,    45,    31,    32,   288,    25,    50,
      25,    37,    29,   169,    29,    25,    43,    43,    25,    45,
      46,   146,   147,   148,    34,   306,   147,    33,    45,    43,
      45,   156,   292,    44,    44,   156,   317,    47,    48,    49,
      44,   166,   167,   168,   169,   166,   167,   168,   169,   174,
     355,   176,   312,   174,    33,    44,    33,    44,   339,    33,
      33,   342,    33,    50,    44,    44,   347,    44,    34,    43,
      43,    50,    43,    50,   355,   356,   357,   358,   359,   360,
     361,    47,    48,    49,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,    33,    33,    33,   379,   380,
     381,   382,   383,   384,    44,    43,    43,    43,   389,   390,
     391,    43,    44,    43,    44,   396,   397,   398,   399,   400,
     401,    43,    44,    44,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,    44,   418,   419,   420,
     421,   422,   423,    43,    44,    44,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,    43,    44,
      43,   691,    45,   444,   445,   446,    43,    50,    45,    43,
      44,    43,    44,    50,   455,   456,   457,   482,   459,   460,
     461,   462,   463,   464,    43,    43,   716,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,    43,
     730,   482,   483,   484,   485,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    43,   342,    43,    44,
      43,   751,   347,    26,    43,    50,    45,    45,    25,    43,
     355,    50,    50,   514,     3,     4,     5,    43,     7,    43,
      43,    44,   367,   368,   369,   370,   371,    50,    25,    18,
      19,    20,    21,    22,    23,    24,    25,    34,    27,    43,
      29,    45,    31,    32,    43,    43,    50,    44,    37,    44,
      47,    48,    49,    44,    43,    50,    45,    46,    43,    50,
     405,   406,   407,   408,   409,   410,   411,    45,   569,    25,
      33,   416,    50,    10,    11,    12,    13,    14,    15,    16,
      33,    43,   427,   428,   429,   430,   431,   432,   433,    43,
      25,    43,    43,   438,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    44,   607,   483,    45,    43,
      44,    50,    26,    50,    44,    43,    50,    45,    44,    33,
      50,    43,    50,   468,   469,   470,   471,   472,   473,   474,
      44,    43,    43,    43,   479,    44,    50,   482,   483,   484,
     485,    50,    43,    25,    43,    29,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    43,   659,    43,
     755,    45,    43,    44,    26,    43,    50,    43,    44,    50,
      44,    33,    45,   674,    50,    43,    50,    50,   679,   680,
     681,    43,    44,   755,    44,   686,   687,   688,    50,    43,
      50,    43,   693,   694,   695,    10,    11,    12,    13,    14,
      15,    16,    43,   704,   705,   706,    29,    29,   803,    44,
     711,   712,   713,    25,    43,    50,    43,   718,   719,   720,
      43,    43,    45,    45,   725,   726,   727,    50,    50,    44,
      25,   803,    43,    43,    43,   736,   737,   738,   739,   740,
     741,    14,   755,    44,    44,   746,   747,   748,   843,   844,
     845,   846,    43,   754,   755,   756,   851,    44,   755,    44,
      25,    44,    29,    50,    37,    50,    39,    50,    44,    44,
      43,   843,   844,   845,   846,    50,    43,    43,    45,   851,
      44,    44,    55,    50,    27,    44,    50,    50,    33,    44,
     803,    50,    65,    66,    67,    50,    27,    44,   674,    72,
      73,    74,   803,    50,    43,    43,   803,    43,    43,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    43,    43,    43,    27,    27,    44,   674,
     843,   844,   845,   846,    50,    44,    27,    27,   851,   112,
      27,    50,   843,   844,   845,   846,   843,   844,   845,   846,
     851,    33,    33,    33,   851,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    45,    44,    44,    44,
      44,    50,   145,   146,   147,   148,    50,   150,    44,   755,
      33,    44,    44,   156,    50,    25,    44,    50,    50,    43,
      43,    44,    50,   166,   167,   168,   169,    50,    44,    44,
      44,   174,    44,   176,    50,    50,    50,    44,    50,   754,
     755,   756,    44,    50,   755,    44,    44,    44,    50,    44,
     193,    50,    50,    50,    44,    50,    43,   803,    43,   202,
      50,    10,    11,    12,    13,    14,    15,    16,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    44,
      33,   224,    45,    44,   227,    50,    26,    50,   803,    50,
      33,    43,   803,    33,    33,    44,   239,   843,   844,   845,
     846,    50,    44,    43,    44,   851,    44,    44,    50,    44,
      50,    44,    50,    50,   257,    10,    11,    12,    13,    14,
      15,    16,   265,    44,    33,    44,    44,    44,   843,   844,
     845,   846,   843,   844,   845,   846,   851,   280,    33,    45,
     851,    44,    44,    44,    50,   288,    33,    50,   291,     3,
       4,     5,     0,     7,    33,    45,    45,    45,     6,   302,
      50,    50,    50,   306,    18,    19,    20,    21,    22,    23,
      24,    25,    33,    27,    44,    29,    30,    31,    32,    44,
      34,    35,    25,    37,    43,    43,    33,    33,   331,    43,
      43,    45,    46,    47,    48,    49,   339,    33,    33,   342,
      44,    25,    44,    44,   347,    10,    11,    12,    13,    14,
      15,    16,   355,   356,   357,   358,    43,    43,    33,    44,
      33,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,    44,    44,   379,   380,   381,    33,
      45,    33,    33,    33,   387,    50,    44,    44,    44,    25,
      43,   394,    33,   396,   397,   398,    43,    43,    27,    44,
      33,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,    33,   418,   419,   420,    33,    33,
      44,    44,    44,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,    10,    11,    12,    13,
      14,    15,    16,    44,    27,    27,   449,    27,    44,    44,
      44,    44,   455,   456,   457,    44,   459,   460,   461,    33,
      44,    33,    33,    44,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,    44,    44,   482,
     483,   484,   485,    44,    44,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    44,     3,     4,     5,
      44,     7,    44,    26,    44,    44,   509,    44,    44,    44,
      44,   514,    18,    19,    20,    21,    22,    23,    24,    25,
      43,    27,    45,    29,    30,    31,    32,    50,    34,    35,
      44,    37,    44,    44,    44,    44,    44,    43,     6,    45,
      46,    47,    48,    49,    44,    44,    44,    44,    44,    44,
      33,    44,     3,     4,     5,    44,     7,    44,    40,    -1,
      -1,   564,    -1,    -1,    -1,    -1,   569,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    35,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    49,   602,
      -1,     3,     4,     5,   607,     7,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      22,    23,    24,    25,    14,    27,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,     3,     4,
       5,    43,     7,    43,    44,    -1,    -1,    37,    -1,    39,
      50,   654,    -1,    43,    -1,    -1,   659,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,   674,    -1,    -1,    -1,    65,    66,    67,    43,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,   691,    -1,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   716,    -1,    10,    11,    12,    13,    14,
      15,    16,   112,    -1,    -1,    -1,    -1,   730,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      10,    11,    12,    13,    14,    15,    16,    26,   751,    44,
     753,   754,   755,   756,    33,   145,   146,   147,   148,    -1,
     150,    -1,    -1,    33,    43,    44,   156,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    44,    -1,   166,   167,   168,   169,
      50,    -1,    -1,    -1,   174,    -1,   176,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
     803,    -1,    -1,   193,    -1,    -1,    26,     3,     4,     5,
      -1,     7,   202,    33,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    43,    44,    -1,    22,    23,    24,    25,
      50,    27,    -1,    -1,   224,    -1,    -1,   227,    33,    -1,
     843,   844,   845,   846,    -1,    -1,    -1,    43,   851,   239,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,   257,    -1,    26,
      -1,    -1,    -1,    -1,    -1,   265,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
     280,    -1,    -1,    50,    -1,    -1,    -1,    -1,   288,    -1,
      -1,   291,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,   302,    -1,    -1,    -1,   306,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    35,    -1,    37,    -1,    -1,    -1,
      -1,   331,    43,    -1,    45,    46,    47,    48,    49,   339,
      -1,    -1,   342,    -1,    -1,    -1,    -1,   347,    10,    11,
      12,    13,    14,    15,    16,   355,   356,   357,   358,    -1,
      -1,    -1,    -1,    -1,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,    -1,    -1,   379,
     380,   381,    -1,    45,    -1,    -1,    -1,   387,    50,    -1,
      -1,    -1,    -1,    -1,   394,    -1,   396,   397,   398,    -1,
      -1,    -1,    -1,    -1,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,    -1,   418,   419,
     420,    -1,    -1,    -1,    -1,    -1,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   449,
      -1,    -1,    -1,    -1,    -1,   455,   456,   457,    -1,   459,
     460,   461,    -1,    -1,    14,    -1,    -1,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
      -1,    -1,   482,   483,   484,   485,     3,     4,     5,    39,
       7,    -1,    -1,    43,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    22,    23,    24,    25,   509,
      27,    -1,    26,    -1,   514,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    72,    73,    74,    -1,    43,    -1,    -1,    43,
      44,    -1,    82,    -1,    -1,    -1,    50,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,   112,    27,   564,    29,    30,    31,    32,   569,
      34,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,   147,   148,    -1,
      -1,    -1,   602,    -1,    -1,    -1,   156,   607,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   166,   167,   168,   169,
      -1,     3,     4,     5,   174,     7,   176,    14,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      22,    23,    24,    25,    -1,    27,    26,    -1,    -1,    -1,
      37,    -1,    39,    33,   654,    -1,    43,    -1,    -1,   659,
      -1,    43,    -1,    43,    44,    -1,    -1,    -1,    55,    -1,
      50,    -1,    -1,    -1,   674,    -1,    -1,    -1,    65,    66,
      67,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,
      -1,   691,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   716,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
     730,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    10,    11,    12,    13,    14,    15,    16,
      26,   751,    -1,   753,   754,   755,   756,    33,   145,   146,
     147,   148,    -1,   150,    -1,    -1,    33,    43,    44,   156,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    44,    -1,   166,
     167,   168,   169,    50,    -1,    -1,    -1,   174,    -1,   176,
      -1,    -1,   342,    -1,    -1,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,   803,    -1,   355,   193,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,   202,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    22,
      23,    24,    25,    -1,    27,    -1,    26,   224,    -1,    -1,
     227,    -1,    -1,   843,   844,   845,   846,    -1,    -1,    -1,
      43,   851,   239,    43,    -1,    45,    -1,    -1,    -1,    -1,
      50,    -1,    -1,     3,     4,     5,   416,     7,    -1,    -1,
     257,    10,    11,    12,    13,    14,    15,    16,   265,    -1,
      -1,    -1,    22,    23,    24,    25,    -1,    27,   438,    -1,
      -1,    -1,    -1,   280,    33,    -1,    -1,    -1,    -1,    -1,
      -1,   288,    -1,    43,   291,    44,     3,     4,     5,    -1,
       7,    50,    -1,    -1,    -1,   302,    -1,    -1,    -1,   306,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,   479,
      27,    -1,   482,   483,   484,   485,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   331,    -1,    43,    -1,    45,    -1,
      -1,    -1,   339,    -1,    -1,   342,    -1,    -1,    -1,    -1,
     347,    10,    11,    12,    13,    14,    15,    16,   355,   356,
     357,   358,    -1,    -1,    -1,    -1,    -1,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
      -1,    -1,   379,   380,   381,    44,    -1,    -1,    -1,    -1,
     387,    50,    -1,    -1,    -1,    -1,    -1,   394,    -1,   396,
     397,   398,    -1,    -1,    -1,    -1,    -1,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
      -1,   418,   419,   420,    -1,    -1,    -1,    -1,    -1,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   449,    -1,    -1,    -1,    -1,    -1,   455,   456,
     457,    -1,   459,   460,   461,    -1,    -1,    -1,    -1,    -1,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,    -1,    -1,   482,   483,   484,   485,    -1,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     3,     4,     5,
      -1,     7,   509,    26,   674,    -1,    -1,   514,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      43,    27,    45,    29,    30,    31,    32,    50,    34,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    14,    45,
      46,    47,    48,    49,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   564,    -1,    -1,
      -1,    -1,   569,    39,    26,    -1,    -1,    43,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    43,    -1,    45,   754,   755,   756,    26,    50,    65,
      66,    67,    -1,    -1,    -1,   602,    72,    73,    74,    -1,
     607,    -1,    -1,    -1,    43,    44,    82,    -1,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,   803,    -1,    -1,   112,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   654,    -1,    -1,
      -1,    -1,   659,    -1,    -1,    43,    -1,    45,    -1,    -1,
      -1,    -1,    50,   139,   140,   141,    -1,   674,    -1,    -1,
     146,   147,   148,   843,   844,   845,   846,    -1,    -1,    -1,
     156,   851,    -1,    -1,   691,    -1,    -1,    -1,    -1,    -1,
     166,   167,   168,   169,    -1,    -1,    -1,    -1,   174,    14,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   716,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,   730,    39,    -1,    -1,    -1,    43,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,   751,    -1,   753,   754,   755,   756,
      65,    66,    67,    -1,    43,    -1,    45,    72,    73,    74,
      10,    11,    12,    13,    14,    15,    16,    82,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    44,    -1,   803,   112,    -1,    26,
      50,    -1,    -1,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    43,    -1,    45,    -1,
      -1,    -1,    26,    50,   139,   140,   141,    -1,    -1,    33,
      -1,   146,   147,   148,    -1,    -1,   843,   844,   845,   846,
      44,   156,    -1,    -1,   851,    -1,    50,    -1,    -1,    -1,
      -1,   166,   167,   168,   169,    -1,    -1,    -1,    -1,   174,
      -1,   176,    -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,
      -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
     356,   357,   358,    -1,    -1,    -1,    -1,    -1,    -1,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
      -1,    -1,    -1,   379,   380,   381,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
     396,   397,   398,    -1,    -1,    -1,    26,    -1,    -1,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,    -1,   418,   419,   420,    45,    -1,    -1,    -1,    -1,
      50,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,    -1,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   455,
     456,   457,    -1,   459,   460,   461,    26,    -1,    -1,    -1,
      -1,    -1,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,    -1,    45,   482,   483,   484,   485,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,   342,    -1,    26,
      -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,   356,   357,   358,    -1,    -1,    43,    44,    -1,    -1,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,    -1,    -1,    -1,   379,   380,   381,    -1,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,   396,   397,   398,    -1,    -1,    -1,    26,    -1,    -1,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,    -1,   418,   419,   420,    45,    -1,    -1,    -1,
      -1,    50,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     455,   456,   457,    -1,   459,   460,   461,    26,    -1,    -1,
      -1,    -1,    14,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,    -1,    45,   482,   483,   484,
     485,    50,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,   674,    -1,
      -1,    -1,    26,   679,   680,   681,    -1,    -1,    -1,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,   693,   694,   695,
      82,    45,    84,    85,    -1,    -1,    50,    -1,   704,   705,
     706,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   718,   719,   720,    -1,    -1,    -1,    -1,    -1,
     112,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
     736,   737,   738,   739,   740,   741,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    -1,   754,   755,
     756,    -1,    -1,    -1,   146,   147,   148,    -1,    -1,    -1,
      -1,    43,    -1,    45,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,   174,    -1,   176,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,   803,    -1,    -1,
      -1,    -1,    -1,    26,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      43,    -1,    45,    26,    -1,    -1,    -1,    50,    -1,   674,
      33,    -1,    -1,    -1,   679,   680,   681,   843,   844,   845,
     846,    44,    -1,    -1,    -1,   851,    -1,    50,   693,   694,
     695,    -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,   704,
     705,   706,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   718,   719,   720,    -1,    -1,    -1,    -1,
      39,     3,     4,     5,    43,     7,    -1,    33,    -1,    -1,
      -1,   736,   737,   738,   739,   740,   741,    43,    44,    -1,
      22,    23,    24,    25,    50,    27,    65,    66,    67,   754,
     755,   756,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    82,    -1,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
     342,    -1,    -1,   112,    -1,   347,    -1,    -1,   803,    -1,
      -1,    -1,    -1,   355,    22,    23,    24,    25,    -1,    27,
      -1,    -1,    -1,   365,   366,    -1,    -1,    -1,    -1,    -1,
     139,   140,   141,    -1,    -1,    43,    -1,   146,   147,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   843,   844,
     845,   846,    -1,    -1,    -1,    -1,   851,   166,   167,   168,
     169,    -1,    -1,   405,   406,   174,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,   427,   428,    -1,    37,    -1,
      39,    -1,    -1,     3,     4,     5,   438,     7,    22,    23,
      24,    25,    -1,    27,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    43,
      -1,    -1,    -1,    72,    -1,    74,   468,   469,    -1,    -1,
       3,     4,     5,    43,     7,    45,    -1,   479,    -1,    -1,
     482,   483,   484,   485,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    35,   112,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,   147,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    35,    -1,    37,    -1,
     169,     3,     4,     5,    43,     7,    45,    46,    47,    48,
      49,    -1,    -1,   342,    -1,    -1,    -1,    -1,   347,    -1,
      22,    23,    24,    25,   193,    27,   355,   356,   357,   358,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    43,    -1,   372,   373,   374,   375,    -1,    26,    -1,
     379,   380,   381,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,   396,   397,   398,
     239,    -1,    50,    -1,    -1,    -1,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   257,   418,
     419,   420,    -1,    -1,    -1,    -1,    -1,    -1,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
      -1,   280,   674,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   455,   456,   457,    -1,
     459,   460,   461,   302,    -1,    -1,    -1,    -1,    -1,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,    37,    45,   482,   483,   484,   485,    50,    -1,    -1,
      -1,    -1,   331,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,   347,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,   754,   755,   756,    -1,    82,    83,    43,    44,
       3,     4,     5,    -1,     7,    50,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      43,   803,    45,    46,    47,    48,    49,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,    -1,   148,    -1,   150,    -1,    22,    23,    24,    25,
      -1,    27,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,   843,   844,   845,   846,    -1,    -1,    43,    -1,   851,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,    30,    31,    32,    -1,    34,   193,    -1,    37,
      -1,    -1,    -1,    -1,   483,    43,   485,    45,    46,    47,
      48,    49,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,   224,    -1,
     509,    -1,    -1,    26,    -1,   674,    -1,    -1,    -1,    -1,
     679,   680,   681,   239,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    -1,   693,   694,   695,    50,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   704,   705,   706,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,   718,
     719,   720,    -1,    -1,   280,   564,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    -1,   291,    -1,   736,   737,   738,
     739,   740,   741,    -1,    -1,    -1,   302,    -1,    43,    -1,
       3,     4,     5,    -1,     7,   754,   755,   756,    -1,    -1,
      -1,    -1,    -1,   602,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,   331,    29,    30,    31,    32,
      -1,    34,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   803,    -1,    -1,    -1,   364,    -1,
      -1,    -1,    -1,    -1,    -1,   654,    -1,    -1,    -1,    -1,
     376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   387,    -1,    -1,    -1,   674,    -1,    -1,   394,    -1,
      -1,    -1,    -1,    -1,   843,   844,   845,   846,   404,    -1,
      -1,    -1,   851,    -1,    -1,    -1,    -1,     3,     4,     5,
     416,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     426,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,   438,    29,    30,    31,    32,    -1,    34,    35,
      -1,    37,    -1,   449,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   467,    -1,    -1,   753,    -1,   755,     3,     4,     5,
      -1,     7,    -1,   479,    -1,    -1,    -1,    -1,   484,   485,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    35,
      -1,    37,    -1,   509,     3,     4,     5,    43,     7,    45,
      46,    47,    48,    49,   803,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    35,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,   843,   844,   845,   846,   564,     3,
       4,     5,   851,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    35,    -1,    37,    -1,    -1,   602,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    35,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,   654,    45,
      46,    47,    48,    49,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,    30,    31,    32,   691,    34,    35,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     716,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   730,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    35,   751,    37,   753,   754,    -1,
     756,    -1,    43,    -1,    45,    46,    47,    48,    49,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    35,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    35,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    35,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,     3,
       4,     5,    -1,     7,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,     3,     4,     5,    -1,     7,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    43,    -1,    45,    26,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    43,    44,    -1,    -1,
      -1,    -1,    26,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    43,
      44,    -1,    26,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    43,
      44,    -1,    -1,    -1,    -1,    26,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    43,    -1,    45,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    43,    44,    26,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,
      44,    26,    -1,    -1,    -1,    -1,    50,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
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
      12,    13,    14,    15,    16,    17,    18,    -1,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    43,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    33,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    26,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    26,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    26,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    45,    -1,    -1,    -1,    26,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    44,    -1,    26,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    26,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,
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
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    44,    26,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
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
      16,    17,    18,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
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
      16,    17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
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
      17,    18,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    44,    -1,    -1,     3,
       4,     5,    50,     7,    -1,    -1,    -1,    44,    33,    -1,
      -1,    -1,    -1,    50,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    18,    19,    20,    21,    22,
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
      27,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    43,    -1,    -1,
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
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,    26,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    44,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    43,    44,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      43,    44,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    43,    44,    26,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    26,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    26,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    26,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    44,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,
      44,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    44,     8,     9,
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
      18,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    26,    -1,    -1,
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
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    43,    33,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,     8,     9,    10,    11,
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
      78,    27,    67,    71,    66,    71,    44,    45,    71,    44,
      71,    80,    73,    73,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    71,    44,    50,    44,    50,    58,    33,
      33,    33,    44,    44,    44,    67,    33,    44,    33,    44,
      50,    25,    56,    75,    75,    75,    44,    66,    71,    68,
      71,    71,    44,    44,    44,    68,    44,    44,    35,    44,
      68,    68,    68,    68,    35,    68,    29,    34,    47,    48,
      49,     3,     4,     5,     7,    19,    20,    21,    22,    23,
      24,    25,    27,    43,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    25,    45,    62,    34,    47,
      48,    49,     3,     4,     5,     7,    19,    20,    21,    22,
      23,    24,    25,    27,    43,    69,    70,    77,    78,    79,
       3,     4,     5,     7,    22,    23,    24,    25,    27,    43,
      69,    70,    79,    45,    66,     3,     4,     5,     7,    19,
      20,    21,    22,    23,    24,    25,    27,    43,    69,    70,
      72,    73,    74,    75,    76,    77,    78,    79,     3,     4,
       5,     7,    19,    20,    21,    22,    23,    24,    25,    27,
      43,    69,    70,    72,    73,    74,    75,    76,    77,    78,
      79,    50,    43,     3,     4,     5,     7,    22,    23,    24,
      25,    27,    43,    69,    70,    76,    77,    78,    79,    25,
      45,    66,    43,    19,    20,    21,    76,    77,    78,     3,
       4,     5,     7,    19,    20,    21,    22,    23,    24,    25,
      27,    43,    69,    70,    72,    73,    74,    75,    76,    77,
      78,    79,    29,    31,    32,    37,    45,    46,    66,    67,
      81,    82,    83,    84,    30,    65,    43,    43,    43,    43,
      43,    43,    25,    66,    43,    10,    11,    12,    13,    14,
      15,    16,     8,     9,    17,    18,    26,    78,    45,    43,
      43,    43,    43,    43,    43,    25,    66,    43,    78,    43,
      43,    43,    25,    66,    43,    45,    43,    43,    43,    43,
      43,    43,    25,    66,    43,    10,    11,    12,    13,    14,
      15,    16,     8,     9,    17,    18,    26,    78,    43,    43,
      43,    43,    43,    43,    25,    66,    43,    10,    11,    12,
      13,    14,    15,    16,     8,     9,    17,    18,    26,    78,
      71,    44,    55,    57,    43,    43,    43,    25,    66,    43,
      78,    45,    44,    55,    57,    43,    43,    43,    78,    43,
      43,    43,    43,    43,    43,    25,    66,    43,    10,    11,
      12,    13,    14,    15,    16,     8,     9,    17,    18,    26,
      78,    30,    65,    43,    43,    43,    45,    66,    45,    30,
      75,    75,    75,    78,    78,    78,    27,    44,    44,    80,
       3,     4,     5,     7,    22,    23,    24,    25,    27,    43,
      69,    70,    73,    76,    77,    78,    79,    73,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    71,    75,    75,
      75,    78,    78,    78,    27,    44,    44,    80,    78,    78,
      78,    27,    44,    44,    80,    75,    75,    75,    78,    78,
      78,    27,    44,    44,    80,     3,     4,     5,     7,    22,
      23,    24,    25,    27,    43,    69,    70,    73,    76,    77,
      78,    79,    73,    74,    74,    74,    74,    74,    75,    75,
      75,    75,    71,    75,    75,    75,    78,    78,    78,    27,
      44,    44,    80,     3,     4,     5,     7,    22,    23,    24,
      25,    27,    43,    69,    70,    73,    76,    77,    78,    79,
      73,    74,    74,    74,    74,    74,    75,    75,    75,    75,
      71,    44,    44,    78,    78,    78,    27,    44,    44,    80,
      44,    44,    75,    75,    75,    75,    75,    75,    78,    78,
      78,    27,    44,    44,    80,     3,     4,     5,     7,    22,
      23,    24,    25,    27,    43,    69,    70,    73,    76,    77,
      78,    79,    73,    74,    74,    74,    74,    74,    75,    75,
      75,    75,    71,    30,    67,    71,    66,    71,    45,    33,
      33,    33,    44,    44,    44,    44,    43,    43,    43,    25,
      66,    43,    78,    33,    33,    33,    44,    44,    44,    44,
      44,    44,    44,    44,    33,    33,    33,    44,    44,    44,
      44,    43,    43,    43,    25,    66,    43,    78,    33,    33,
      33,    44,    44,    44,    44,    43,    43,    43,    25,    66,
      43,    78,    44,    44,    44,    44,    33,    33,    33,    33,
      33,    33,    44,    44,    44,    44,    43,    43,    43,    25,
      66,    43,    78,    67,    33,    44,    33,    75,    75,    75,
      78,    78,    78,    27,    44,    44,    80,    75,    75,    75,
      75,    75,    75,    78,    78,    78,    27,    44,    44,    80,
      75,    75,    75,    78,    78,    78,    27,    44,    44,    80,
      75,    75,    75,    75,    75,    75,    78,    78,    78,    27,
      44,    44,    80,    44,    66,    71,    68,    71,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    68,    44,    44,    35,    44,    68,    68,    68,
      68,    35,    68
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
       5,     9,     7,     6,     7,     7,     2,     3,     2,     3
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
                            tac((yyvsp[0].no));
                            liberar_ast((yyvsp[0].no));
                        }
#line 4021 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 74 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 4029 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 78 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 4038 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 89 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = PARAMETRO;
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 4048 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 94 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 4054 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 98 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 4062 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 102 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 4071 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 109 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 4080 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 114 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4090 "clang.tab.c"
    break;

  case 13: /* def_declaracao: def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D  */
#line 120 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-1].no);
                            (yyvsp[-3].simbolo)->funcao.parametros_no = novo_no->parametros_no;
                            (yyvsp[-3].simbolo)->funcao.parametros = novo_no->parametros;
                            liberar_ast((yyvsp[-1].no));
                            (yyval.simbolo) = (yyvsp[-3].simbolo);
                        }
#line 4102 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 130 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 4108 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 131 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 4114 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 132 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 4120 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 133 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 4126 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 138 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4135 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 146 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4144 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 151 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4153 "clang.tab.c"
    break;

  case 22: /* lista_inicializar_atrib: def_declaracao  */
#line 158 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4161 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA def_declaracao  */
#line 162 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4169 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 167 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4175 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
#line 169 "parser/clang.y"
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
#line 4195 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 186 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4201 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 187 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4207 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 191 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4215 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 195 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4224 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 201 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4230 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 202 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4236 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 205 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4242 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 206 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4248 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 209 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4254 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 210 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4260 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 211 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4266 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 212 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4272 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 213 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4278 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 216 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4284 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 217 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4290 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 218 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4296 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 222 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4304 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 226 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4312 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 230 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4318 "clang.tab.c"
    break;

  case 45: /* expressao_principal: TOKEN_CADEIA  */
#line 232 "parser/clang.y"
                        { (yyval.no) = novo_no_ast_constante(TIPO_CADEIA, (yyvsp[0].valor)); }
#line 4324 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 233 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4330 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_logica  */
#line 237 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4336 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_operacao ATRIBUICAO expressao_atribuicao  */
#line 239 "parser/clang.y"
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
#line 4364 "clang.tab.c"
    break;

  case 49: /* expressao_logica: expressao_relacional  */
#line 266 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4370 "clang.tab.c"
    break;

  case 50: /* expressao_logica: expressao_logica OP_E expressao_relacional  */
#line 268 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4378 "clang.tab.c"
    break;

  case 51: /* expressao_logica: expressao_logica OP_OU expressao_relacional  */
#line 272 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4386 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_aritmetica  */
#line 278 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4392 "clang.tab.c"
    break;

  case 53: /* expressao_relacional: expressao_relacional OP_MENOR_QUE expressao_aritmetica  */
#line 280 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4400 "clang.tab.c"
    break;

  case 54: /* expressao_relacional: expressao_relacional OP_MAIOR_QUE expressao_aritmetica  */
#line 284 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4408 "clang.tab.c"
    break;

  case 55: /* expressao_relacional: expressao_relacional OP_IGUALDADE expressao_aritmetica  */
#line 288 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4416 "clang.tab.c"
    break;

  case 56: /* expressao_relacional: expressao_relacional OP_MAIOR_IGUAL expressao_aritmetica  */
#line 292 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4424 "clang.tab.c"
    break;

  case 57: /* expressao_relacional: expressao_relacional OP_MENOR_IGUAL expressao_aritmetica  */
#line 296 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4432 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto  */
#line 301 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4438 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_aritmetica OP_SOMA expressao_conjunto  */
#line 303 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4446 "clang.tab.c"
    break;

  case 60: /* expressao_aritmetica: expressao_aritmetica OP_SUBTRACAO expressao_conjunto  */
#line 307 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4454 "clang.tab.c"
    break;

  case 61: /* expressao_aritmetica: expressao_aritmetica OP_DIVISAO expressao_conjunto  */
#line 311 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4462 "clang.tab.c"
    break;

  case 62: /* expressao_aritmetica: expressao_aritmetica OP_MULTIPLICACAO expressao_conjunto  */
#line 315 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4470 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: expressao_operacao  */
#line 320 "parser/clang.y"
                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4476 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 322 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4484 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 326 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4492 "clang.tab.c"
    break;

  case 66: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 330 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4500 "clang.tab.c"
    break;

  case 68: /* expressao_operacao: operadores_expressao expressao_io  */
#line 338 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_operacao((yyvsp[-1].valor).intval, (yyvsp[0].no));
                        }
#line 4508 "clang.tab.c"
    break;

  case 70: /* expressao_io: expressao_chamada  */
#line 347 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4514 "clang.tab.c"
    break;

  case 71: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 349 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                            // pular +1 linha
                        }
#line 4528 "clang.tab.c"
    break;

  case 72: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 359 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                        }
#line 4541 "clang.tab.c"
    break;

  case 73: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 368 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4549 "clang.tab.c"
    break;

  case 74: /* expressao_chamada: expressao_principal  */
#line 373 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4555 "clang.tab.c"
    break;

  case 76: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 376 "parser/clang.y"
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
#line 4583 "clang.tab.c"
    break;

  case 77: /* expressao_lista_param: expressao_atribuicao  */
#line 402 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4591 "clang.tab.c"
    break;

  case 78: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 406 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4600 "clang.tab.c"
    break;

  case 79: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 413 "parser/clang.y"
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
                            else{
                            printf("%p\n\n", (yyvsp[0].no));
                            }
                        }
#line 4631 "clang.tab.c"
    break;

  case 80: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 440 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4639 "clang.tab.c"
    break;

  case 81: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 444 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4647 "clang.tab.c"
    break;

  case 82: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 448 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4655 "clang.tab.c"
    break;

  case 83: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_declaracao expressao_declaracao PARENTESE_D tipos_expressao  */
#line 454 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_for((yyvsp[-3].no), (yyvsp[-2].no), NULL, (yyvsp[0].no));
                        }
#line 4663 "clang.tab.c"
    break;

  case 84: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_declaracao expressao_declaracao expressao PARENTESE_D tipos_expressao  */
#line 458 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_for((yyvsp[-4].no), (yyvsp[-3].no), (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4671 "clang.tab.c"
    break;

  case 85: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 462 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4679 "clang.tab.c"
    break;

  case 86: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 468 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4687 "clang.tab.c"
    break;

  case 87: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 472 "parser/clang.y"
                            { 
                                (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4695 "clang.tab.c"
    break;

  case 88: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 478 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4703 "clang.tab.c"
    break;

  case 89: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 482 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4711 "clang.tab.c"
    break;


#line 4715 "clang.tab.c"

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

#line 487 "parser/clang.y"


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
