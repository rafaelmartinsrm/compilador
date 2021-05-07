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
#define YYLAST   11998

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  871

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
       0,    66,    66,    73,    77,    84,    85,    88,    93,    96,
     100,   107,   112,   118,   126,   129,   130,   131,   132,   136,
     144,   149,   156,   160,   166,   167,   185,   186,   189,   193,
     200,   201,   204,   205,   208,   209,   210,   211,   212,   215,
     216,   217,   220,   224,   228,   230,   232,   236,   237,   265,
     266,   270,   277,   278,   282,   286,   290,   294,   300,   301,
     305,   309,   313,   319,   320,   324,   328,   335,   336,   342,
     346,   347,   357,   366,   372,   373,   374,   400,   404,   411,
     435,   439,   443,   449,   453,   457,   461,   465,   471,   475,
     481,   485
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

#define YYPACT_NINF (-204)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     354,    85,    88,   203,   225,     8,    18,   -18,   327,    74,
      78,   109,  -204,   132,  2930,   140,   202,   159,   222,   230,
    1292,  1386,  1538,  2162,   800,    -5,    16,    39,    56,    60,
      64,  3304,    25,   167,    75,   117,   121,  9661,  4162,   755,
       0,  4227,  4278,  4411,   269,  5021,  5076,  4589,  4633,   278,
      61,   295,  8178,  8221,   589,   964,  5215,  6814,  5166,  5232,
    5267,  5314,   661,   170,    28,  9687,  9687,  9687,  1645,  1645,
    1645,   101,   239,  9713,  9739,    -3,  5349,   350,    86,   191,
    5384,  5419,  9765,  9175,  9791,  9791,  9791,  9791,  9791,  9791,
    9791,  9791,  9791,  9791,  9791,  9765,  6834,   386,   240,   417,
     421,   449,     7,   474,   150,   161,   208,   220,    -8,   166,
     211,  4719,  4197,  4197,   267,   492,     4,  4935,  5454,   473,
    6857,   519,   521,  1148,  1513,  8232,  8243,  8286,  8297,  8308,
    8351,  8362,  8373,  8416,   488,   275,   210,   298,   359,   485,
    9817,  9817,  9817,  6877,  6900,  6920,  9202,  9229,  9843,  1610,
    9843,  6943,  9661,   564,   568,   259,   307,   318,  1972,   573,
    1972,   600,   326,   527,   372,   631,  8427,  8438,  8481,  5489,
    1972,  5524,  1972,  1972,  1972,  1610,  5559,  5594,  5629,  5664,
     606,  1972,  5699,  5734,    35,    79,   120,   137,  3122,  3559,
    3996,  6021,   317,   391,   392,   394,   395,   409,  6040,   438,
    9661,  6083,  6102,   635,    91,  1522,  5118,  8492,  6963,  1925,
    6986,  7006,   624,  5769,   532,    94,   146,   177,   180,   104,
     152,   193,   238,   423,   432,   433,   435,   436,   458,   246,
     495,  9661,   279,   316,  2353,   507,   508,   -24,   154,   179,
     234,   478,   510,   512,   272,   541,  9661,   330,   353,   523,
    4987,   175,   626, 10827, 10863, 10899, 10935,   525,   536,   537,
     538,   552,   553, 10971,   620,  9661, 11007, 11043,    23,   444,
    9154, 11584, 11350,  3452, 11376, 11402,   321,  1043,  1668,  2015,
     603,   604,   605,   615,   616,   648,  2394,   678,  9661,  2507,
    2568,    11,   493,  7029,  7072,  1445,  3496,  6145,  6188,  9661,
     956,  3323,  7083,  7126,  7137,   676,   677,   685,  7148,   696,
    9661,  7191,  7202,  8503,  3537,  8546,  8557,   634,  9256,   736,
    1047,   686,   687,   699,   720,  1645,   721,  2618,  9967,  9986,
   10005,   724,   741,   742,   752,   754,   774, 10024,   793,  9661,
   10043, 10062,    20,   282, 10401, 10419, 10119,  3889, 10138, 10157,
    5804,   783,   785,   792,   898,  5136,   765,   994,  1099,  1309,
    1344,  1403,  5839,  5874,  9687,  9687,  9687,  1645,  1645,  1645,
     810,   643,  9283,  9869,  9869,  9869,  9869,  9869,  9869,  9869,
    9869,  9869,  9869,  9869,  9661,  7213,  5909,  9687,  9687,  9687,
    1645,  1645,  1645,   819,   652,  9310,   814,  1645,  1645,  1645,
     822,   657,  9337,  6204,   920,  6232,  9687,  9687,  9687,  1645,
    1645,  1645,   823,   694,  9364,  9895,  9895,  9895,  9895,  9895,
    9895,  9895,  9895,  9895,  9895,  9895,  9713, 11428,  9687,  9687,
    9687,  1645,  1645,  1645,   832,   758,  9391,  9921,  9921,  9921,
    9921,  9921,  9921,  9921,  9921,  9921,  9921,  9921,  9739,  6252,
     762,   654,   786,   794,  1645,  1645,  1645,   833,   798,  9418,
    8568,  9445,   697,   808,   854,  9687,  9687,  9687,   826,  9687,
    9687,  9687,  1645,  1645,  1645,   844,   862,  9472,  9947,  9947,
    9947,  9947,  9947,  9947,  9947,  9947,  9947,  9947,  9947,  9843,
   10176,  1724,  5944,   239,  9713,  9739,  1935,   977,  2059,  5979,
     840,   866,   875,   865,   880,   882,  6295,  6314,  7256,   863,
    6126,  7275,  7299,  7318,   868,   895,   896,  7342,   885,  9661,
    7361,  7385,  1773,  8611,  3933,  8622,  8633,  2420,  8676,  8687,
    8698,  8741,  8752,  8763,  8806,  8817,  8828,   887,   923,   933,
     947,   938,   948,   949,   356,   361,   961,   890,   951,   952,
     962,   369,   371,   965,   892,  6347,   975,   987,   997,   966,
     990,   991, 11079, 11115, 11454,   909, 11151, 11162, 11198, 11209,
    1002,  1003,  1004, 11245,  1024,  9661, 11256, 11292,   867, 11595,
    3974, 11621, 11632,  1241, 11658, 11669, 11695, 11706, 11732, 11743,
   11769, 11780, 11806,  1049,  1052,  1055,  1056,  1019,  1022,  1048,
    2788,  2873,  6367,   911,  6410,  6422,  6465,  6477,  1054,  1057,
    1062,  6520,  1074,  9661,  6532,  6575,   650,  7404,  4326,  7447,
    7459,  2971,  7502,  7514,  7557,  7569,  7612,  7624,  7667,  7679,
    7722,   311,   668,   751,  1063,  1064,  1065,  7733,  7776,  8871,
     913,   713,   770,  1077,  1078,  1080,  1081,  1082,  1092,  1083,
    1088,  1091, 10081, 10100, 10195,   914,   576,  4577,  6064, 10214,
    1094,  1095,  1096, 10232,  1115,  9661, 10251, 10269,   500, 10438,
    4474, 10456, 10475,   739, 10493, 10512, 10530, 10549, 10567, 10586,
   10604, 10623, 10641,  1106,  2115,  4197,  4197,  1110,   929,   313,
    2179,  9817,  9817,  9817,  7787,  7830,  7849,  7874,  1645,  1645,
    1645,  1124,   934,  9499,  8882,  9817,  9817,  9817,  1120,  1121,
    1122,  1123,  1125,  1126,  1127,  1128,  9817,  9817,  9817, 11480,
   11506, 11532, 11558,  1645,  1645,  1645,  1146,   988,  9526, 11817,
    9817,  9817,  9817,  6587,  6630,  6673,  6716,  1645,  1645,  1645,
    1160,  1000,  9553,  7893,  8893,  8936,  8947,  8958,  9817,  9817,
    9817,  9817,  9817,  9817, 10288, 10307, 10326, 10345,  1645,  1645,
    1645,  1161,  1018,  9580, 10660,  9607,  9634,  9843,  1610,  9843,
    1150,  1151,  1152,  1155,  1156,  1157,  7936,  7947,  9001,  1020,
    1158,  1159,  1162,  1163,  1167,  1168,  1169,  1170,  1171, 11303,
   11339, 11843,  1021,  1185,  1189,  1190,  1191,  1192,  1193,  6759,
    6771,  7959,  1029,  1214,  1215,  1216,  1218,  1219,  1220,  1221,
    1222,  1226, 10364, 10382, 10678,  1030,  1610,  1033,  1610,  1034,
    1231,  2228,  1232,  9012,  9023,  9066,  9077,  9088,  9131,  9142,
    1172,  1244,  1245, 11854, 11880, 11891, 11917, 11928, 11954, 11965,
    8002,  8014,  8057,  8069,  8112,  8124,  8167,  1248,  1249,  1254,
   10697, 10715, 10734, 10752, 10771, 10789, 10808,  2295,  1610,  2458,
    1610,  1610,  1610,  1610,  3077,  3367,  3404,  3735,  3804,  1610,
    3841
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,  -166,    10,   -91,    -2,     1,  -204,  1186,
     -38,     9,   -39,  -178,  1788,   -29,  -146,     3,   802,  4540,
    4479,  4409,  4089,  3654,  2780,  3217,  2300,  1427,  -203,  -136,
    -126,    -7,   -70
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    99,   100,   101,    78,    40,     9,    10,
      19,    41,    42,    43,    44,    45,    46,   247,   248,    49,
      50,    51,    52,    53,    54,    55,    56,   249,   122,    58,
      59,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,     8,   214,   163,    80,   363,    18,     8,    12,    11,
       7,    14,   169,   358,   171,    11,     7,    47,    -2,   -39,
     -39,   437,   438,   359,   176,   212,   177,   178,   179,   180,
     478,   479,   317,   415,   416,   182,   143,   150,    65,   358,
     201,   117,    47,   113,   -47,   213,    47,   299,   -30,   359,
      71,    -8,     1,   212,   -30,   -47,   -47,    -8,    47,    66,
     -17,   -47,   103,   102,   -47,     2,     3,     4,   232,   232,
     232,    84,    85,   251,   -20,    47,   266,   289,    -3,   361,
     -17,   112,    67,   146,   147,    47,   201,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,    47,    68,
     139,   373,   374,    69,   -18,   361,   -47,    70,   -20,   -21,
     -17,   -47,    -3,   -18,   -17,    47,    47,   -18,    72,   -17,
     357,   -20,   -20,   -20,   -18,    -3,    -3,    -3,   111,   300,
     -17,   -22,    -4,   -18,   452,   -47,   -22,   -39,   -17,   102,
     -19,   -47,   360,   -21,   -17,   -15,   357,   -39,   154,   201,
     201,   340,    47,   340,   463,   201,   -21,   -21,   -21,   -24,
      73,    47,   -16,    47,    74,   -15,    -4,   -88,   360,   509,
     -25,   -18,   492,    47,   -19,    47,    47,    47,    47,    -4,
      -4,    -4,   -16,   140,    47,   -41,    47,   -19,   -19,   -19,
     -18,   -89,   547,   -24,   -63,   -41,   -18,   -41,   -41,   554,
     212,   -88,   -15,   201,   -25,   -16,   -24,   -24,   -24,   453,
     144,   565,   201,   404,   -88,   -88,   -88,   -25,   -25,   -25,
     403,   -15,   -40,   -40,   -16,   -89,   -40,   -15,   -15,   464,
     -16,   -11,   -15,   603,   201,   153,   -40,   232,   -89,   -89,
     -89,   141,    20,    21,    22,   -11,    23,   -11,   -15,   201,
     -16,    -7,   -11,   142,   -16,   145,   640,    24,    25,    26,
      27,    28,    29,    30,    31,    62,    32,   -22,   201,   -12,
     -16,   -45,   -22,   184,   655,    63,   266,   -45,   -45,   -42,
      64,   -45,    37,   -12,   250,   -12,   185,   186,   187,   -42,
     -12,   201,   -49,   -49,   480,   481,   482,   483,   484,   289,
     148,   102,   201,   166,   -14,   -49,   -49,    86,    87,    88,
      89,    90,   -43,   201,    81,   -42,   -42,   311,   -14,    82,
     -14,   102,   -43,   -30,    80,   -14,   -49,   -13,   -30,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -49,   -13,   201,   -13,   -48,   -49,   769,   -39,   -13,   -74,
     340,   167,    16,    47,   -39,   -48,    -8,   -30,    47,   395,
     364,   -48,   168,   -30,   -39,   -39,    47,   232,   232,   232,
     173,   -39,    17,   -43,   -43,   201,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   201,     1,   -44,
     232,   232,   232,   215,   -46,   118,   402,   -74,   201,   -44,
      82,     2,     3,     4,   -46,   201,   216,   217,   218,   232,
     232,   232,   -44,   -44,   -46,   -46,   175,   201,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   266,
      -5,   232,   232,   232,   365,   366,    -5,   367,   368,   201,
     614,   614,   614,   614,   614,   614,   614,   614,   614,   614,
     614,   289,   369,    80,   -49,   -49,   417,   418,   419,   420,
     421,   135,   201,   370,   686,    -9,   387,   136,   232,   232,
     232,    -9,   232,   232,   232,   388,   389,   -49,   390,   391,
     201,   666,   666,   666,   666,   666,   666,   666,   666,   666,
     666,   666,   340,   137,   251,    47,    47,   266,   289,   138,
     779,   392,   685,   -49,   -49,   439,   440,   441,   442,   443,
     -50,   -50,   480,   481,   482,   483,   484,   300,   -31,   -23,
     393,   397,   201,   -31,   -23,   792,   -49,   520,   320,    -7,
     -80,   -80,   -80,   -48,   -80,    -7,   149,   -49,   -48,   802,
     -67,   -70,   299,   -49,   -50,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   398,   -80,   399,   -80,   -80,   -80,   -80,
     815,   -80,   174,   -77,   -80,   151,   400,   -70,   406,   -77,
     -80,   152,   -80,   -80,   -80,   -80,   -80,   386,   201,   407,
     408,   409,    64,   576,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   410,   411,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,    -6,   -82,
     -82,   -82,   -10,   -82,    -6,    95,   201,   170,   -10,   -39,
     -39,   614,   821,   299,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   358,   -82,   -63,   -82,   -82,   -82,   -82,   -63,
     -82,   181,   359,   -82,   172,   412,   428,   429,   430,   -82,
     299,   -82,   -82,   -82,   -82,   -82,   765,   766,   431,   432,
     -50,   -50,   439,   440,   441,   442,   443,   -11,   201,   -11,
     857,   405,   859,   666,   -11,   -78,    82,   -11,   -11,   -30,
     358,   -78,   358,   -50,   -11,   -30,    97,   507,    47,    47,
     359,   433,   359,   299,   -50,   215,   545,   -12,   361,   -12,
     -50,   552,   299,   434,   -12,    98,   201,   299,   216,   217,
     218,   -14,   864,   -14,   865,   866,   867,   868,   -14,   454,
     455,   457,   358,   870,   358,   358,   358,   358,   456,   465,
     466,   201,   359,   358,   359,   359,   359,   359,   563,   357,
     -12,   -12,   467,   359,   299,   201,   361,   -12,   361,   -51,
     -51,   480,   481,   482,   483,   484,   -14,   -14,    20,    21,
      22,   360,    23,   -14,   -63,   -67,   201,   469,   201,   201,
     340,    47,   340,    24,    25,    26,    27,    28,    29,    30,
      31,   461,    32,   -51,   470,   471,    82,   357,   361,   357,
     361,   361,   361,   361,   -13,   472,   -13,   473,    37,   361,
      76,   -13,   601,   -69,   -69,   -69,   -31,   -69,   299,   360,
     498,   360,   -31,   -13,   -13,    82,    48,   474,   475,    47,
     -13,    47,   -69,   -69,   -69,   -69,   493,   -69,   494,   357,
     632,   357,   357,   357,   357,   495,   136,   506,   633,   202,
     357,    48,   638,   -69,   138,    48,   544,   -68,   299,   551,
     562,   360,   641,   360,   360,   360,   360,    48,   136,   600,
     637,    47,   360,    47,    47,    47,    47,   233,   233,   233,
     -68,   652,    47,   691,    48,   267,   290,   -50,   -50,   417,
     418,   419,   420,   421,    48,   202,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,    48,   642,   692,
     -50,   -32,   -32,   -32,   138,   -32,   653,   697,   693,   694,
     701,   698,   299,   152,    48,    48,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   695,   -32,   696,   -32,   -32,   -32,
     -32,   -48,   -32,   -32,   711,   -32,   715,   -48,   699,   700,
     152,   -32,   152,   -32,   -32,   -32,   -32,   -32,   202,   202,
     341,    48,   341,   722,   202,   736,   705,   747,   757,   152,
      48,   152,    48,   152,   152,   555,   706,    20,    21,    22,
      64,    23,    48,   768,    48,    48,    48,    48,   777,   299,
     707,    97,   708,    48,   299,    48,    28,    29,    30,    31,
     215,    32,   709,   710,   -75,   712,   713,   -34,   -34,   -34,
     451,   -34,   202,   216,   217,   218,   714,    37,   716,   -75,
     719,   202,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     717,   -34,   690,   -34,   -34,   -34,   -34,    82,   -34,   -34,
     718,   -34,   790,   202,   720,   721,   233,   -34,   299,   -34,
     -34,   -34,   -34,   -34,   800,   723,   724,   725,   202,   726,
     299,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   813,   733,   829,   839,   734,   202,   299,   -41,
     152,   152,    97,   846,   856,   267,   -41,   858,   860,   152,
     152,   215,   -48,   299,   299,   730,   -41,   -41,   731,   732,
     202,   462,   735,   -41,   216,   217,   218,   737,   290,   740,
     738,   202,   -35,   -35,   -35,   739,   -35,   744,   745,   746,
     748,   749,   202,   750,   751,   752,   312,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   753,   -35,   754,   -35,   -35,
     -35,   -35,   755,   -35,   -35,   756,   -35,   758,   759,   760,
     761,   202,   -35,   767,   -35,   -35,   -35,   -35,   -35,   341,
     -48,   776,    48,   -73,   -72,   -71,   -76,    48,   -50,   -50,
      86,    87,    88,    89,    90,    48,   233,   233,   233,   -73,
     -72,   -71,   -76,   789,   202,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   202,   799,   812,   233,
     233,   233,    13,   -50,   823,   824,   825,   202,   -50,   826,
     827,   828,   830,   831,   202,   -64,   832,   833,   233,   233,
     233,   834,   835,   836,   837,   838,   202,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   267,   840,
     233,   233,   233,   841,   842,   843,   844,   845,   202,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     290,   -51,   -51,   417,   418,   419,   420,   421,   847,   848,
     849,   202,   850,   851,   852,   853,   854,   233,   233,   233,
     855,   233,   233,   233,   -51,   861,   863,   -65,   -66,   202,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   341,   -64,   -65,    48,    48,   267,   290,   -66,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,   -38,   -38,   -38,     0,   -38,     0,   -39,     0,
       0,   202,     0,     0,     0,     0,   521,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -39,   -38,   -39,   -38,   -38,
     -38,   -38,   -39,   -38,   -38,     0,   -38,   -36,   -36,   -36,
       0,   -36,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   202,   -36,   -36,
       0,   -36,   577,     0,     0,     0,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -37,   -37,   -37,     0,
     -37,     0,   -41,     0,     0,   202,     0,     0,     0,     0,
     615,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -41,
     -37,   -41,   -37,   -37,   -37,   -37,   -41,   -37,   -37,     0,
     -37,    57,     0,     0,     0,     0,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   211,     0,    57,   202,     0,     0,
      57,   448,   667,     0,     0,     0,     0,     0,   -63,     0,
       0,     0,    57,     0,     0,     0,     0,    48,    48,   -63,
       0,     0,   236,   236,   236,   -63,     0,     0,     0,    57,
     275,   298,     0,     0,     0,   202,     0,     0,     0,    57,
     211,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,    57,   -51,   -51,    86,    87,    88,    89,    90,
     202,     0,   -49,   -49,   375,   376,   377,   378,   379,    57,
      57,     0,     0,     0,   202,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -51,     0,
       0,     0,     0,   -51,   -40,   202,   -49,   202,   202,   341,
      48,   341,   -49,   211,   211,   349,    57,   349,     0,   211,
       0,   -40,     0,   -40,     0,    57,     0,    57,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    57,
      57,    57,    57,     0,     0,     0,     0,     0,    57,     0,
      57,     0,     0,    20,    21,    22,     0,    23,    48,     0,
      48,     0,     0,     0,     0,     0,     0,   211,    24,    25,
      26,    27,    28,    29,    30,    31,   211,    32,     0,   350,
       0,   351,   352,     0,     0,     0,     0,   353,   237,   238,
     239,     0,   240,    37,     0,   354,   355,     0,   211,     0,
      48,   236,    48,    48,    48,    48,     0,   241,   242,   243,
     244,    48,   245,   211,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,   246,     0,
       0,     0,   211,     0,   -40,     0,     0,     0,     0,     0,
     275,   -40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -40,     0,     0,   211,     0,     0,   -40,     0,
       0,     0,     0,   298,     0,     0,   211,   -88,   -88,   -88,
       0,   -88,     0,     0,     0,     0,     0,   211,     0,     0,
       0,   316,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,     0,   -88,   -88,   -88,   -88,     0,   -88,   -88,
       0,   -88,     0,     0,     0,     0,   211,   -88,     0,   -88,
     -88,   -88,   -88,   -88,   349,     0,     0,    57,     0,     0,
       0,     0,    57,   -50,   -50,   375,   376,   377,   378,   379,
      57,   236,   236,   236,     0,     0,     0,     0,     0,   211,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   211,     0,     0,   236,   236,   236,   -50,     0,     0,
       0,     0,   211,   -50,     0,    75,     0,    77,     0,   211,
       0,     0,     0,   236,   236,   236,     0,     0,     0,     0,
       0,   211,   582,   582,   582,   582,   582,   582,   582,   582,
     582,   582,   582,   275,     0,   236,   236,   236,     0,     0,
     252,     0,   115,   211,   620,   620,   620,   620,   620,   620,
     620,   620,   620,   620,   620,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,     0,     0,     0,
       0,     0,   236,   236,   236,     0,   236,   236,   236,     0,
     319,   319,     0,     0,   211,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   672,   349,     0,     0,    57,
      57,   275,   298,     0,     0,     0,     0,     0,   188,   189,
     190,     0,   191,     0,   159,   161,     0,   356,   -90,   -90,
     -90,     0,   -90,     0,     0,     0,   211,   195,   196,   197,
     198,   526,   199,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,     0,   -90,   356,   -90,   -90,   -90,   -90,   200,   -90,
     -90,     0,   -90,     0,     0,    20,    21,    22,   -90,    23,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,   371,     0,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,   183,   211,    34,    35,     0,     0,   582,     0,    36,
       0,     0,     0,     0,     0,    37,     0,    38,    39,   394,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   401,     0,     0,     0,     0,     0,
     211,   -45,     0,     0,     0,   620,     0,     0,   -45,     0,
       0,     0,     0,   413,     0,     0,     0,     0,   -45,   -45,
       0,     0,   -33,   -33,   -33,   -45,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   435,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,   -33,   211,   -33,   -33,     0,   -33,   672,   458,     0,
       0,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,    57,    57,     0,     0,     0,     0,   -89,   -89,
     -89,     0,   -89,     0,     0,     0,     0,   476,     0,     0,
     211,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   497,   -89,   -89,   -89,   -89,     0,   -89,
     -89,     0,   -89,     0,     0,   211,     0,     0,   -89,     0,
     -89,   -89,   -89,   -89,   -89,     0,     0,     0,     0,   211,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -91,   -91,   -91,     0,   -91,     0,   -45,     0,
     211,     0,   211,   211,   349,    57,   349,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -45,   -91,   -45,   -91,   -91,
     -91,   -91,   -45,   -91,   -91,     0,   -91,     0,     0,     0,
       0,     0,   -91,     0,   -91,   -91,   -91,   -91,   -91,     0,
       0,   -80,   -80,   -80,     0,   -80,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    57,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,     0,   -80,     0,   -80,   -80,   -80,
     -80,     0,   -80,   862,     0,   -80,     0,     0,     0,     0,
       0,   -80,     0,   -80,   -80,   -80,   -80,   -80,     0,     0,
       0,   252,     0,   688,     0,    57,     0,    57,    57,    57,
      57,     0,     0,     0,     0,     0,    57,     0,   -83,   -83,
     -83,     0,   -83,     0,     0,     0,     0,   702,     0,     0,
       0,     0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,     0,   -83,   -83,   -83,   -83,     0,   -83,
     -83,     0,   -83,     0,     0,     0,     0,   210,   -83,     0,
     -83,   -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,   219,   220,   221,     0,
     222,     0,     0,   727,     0,   235,   235,   235,   108,   109,
     110,     0,     0,   274,   297,   226,   227,   228,   229,     0,
     230,     0,     0,   210,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,     0,   231,     0,     0,     0,
       0,   741,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,     0,     0,
     -42,     0,     0,     0,     0,     0,     0,   -42,     0,     0,
     -51,   -51,   375,   376,   377,   378,   379,   -42,   -42,     0,
     326,   326,   326,     0,   -42,     0,   210,   210,   348,     0,
     348,     0,   210,   762,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -51,   -84,     0,     0,     0,     0,
     -51,     0,     0,   319,   319,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,     0,   -84,     0,   -84,   -84,   -84,
     -84,     0,   -84,   -84,     0,   -84,     0,     0,     0,     0,
     210,   -84,     0,   -84,   -84,   -84,   -84,   -84,     0,   385,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
       0,   210,     0,   -43,   396,     0,     0,     0,     0,     0,
     -43,     0,     0,     0,     0,     0,   210,     0,     0,     0,
     -43,   -43,     0,   817,   819,     0,   356,   -43,     0,     0,
       0,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,     0,     0,   427,     0,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,   210,     0,
       0,     0,     0,     0,   -74,     0,   449,     0,     0,   210,
       0,   -74,     0,     0,   356,     0,   356,     0,     0,     0,
     210,   436,   -74,     0,   460,     0,     0,     0,   -74,     0,
       0,     0,     0,     0,     0,   468,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   210,
       0,     0,     0,     0,   -39,     0,   356,   490,   356,   356,
     356,   356,     0,     0,     0,     0,     0,   356,     0,     0,
       0,   -39,   -39,     0,   235,   235,   235,   503,   504,   505,
       0,     0,   210,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   210,     0,     0,   235,   235,   235,
     541,   542,   543,     0,     0,   210,     0,   548,   549,   550,
       0,     0,   210,     0,     0,     0,   235,   235,   235,   559,
     560,   561,     0,     0,   210,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   274,     0,   235,   235,
     235,   597,   598,   599,     0,     0,   210,   619,   619,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   297,     0,
       0,     0,     0,     0,   634,   635,   636,     0,     0,   210,
       0,     0,     0,     0,     0,   235,   235,   235,     0,   235,
     235,   235,   649,   650,   651,     0,     0,   210,   671,   671,
     671,   671,   671,   671,   671,   671,   671,   671,   671,   348,
       0,     0,     0,     0,   274,   297,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,     0,     0,   -44,     0,     0,   208,     0,   210,
       0,   -44,     0,     0,   704,     0,     0,     0,     0,     0,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,     0,
       0,     0,     0,     0,     0,   105,   105,   105,     0,     0,
       0,     0,     0,   272,   295,     0,     0,     0,     0,     0,
       0,     0,     0,   208,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   210,     0,     0,     0,     0,
     729,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,     0,   -46,
       0,     0,     0,     0,     0,     0,   -46,     0,     0,     0,
       0,     0,     0,   210,     0,     0,   -46,   -46,   743,     0,
     324,   324,   324,   -46,     0,     0,   208,   208,   346,     0,
     346,     0,   208,    20,    21,    22,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
      26,    27,    28,    29,    30,    31,     0,    32,     0,   183,
      33,    34,    35,     0,   184,   210,     0,    36,     0,     0,
     764,     0,     0,    37,     0,    38,    39,   185,   186,   187,
     208,   -51,   -51,   439,   440,   441,   442,   443,     0,     0,
       0,   326,   326,   326,     0,     0,     0,     0,   773,   774,
     775,     0,     0,   210,   -51,   326,   326,   326,     0,     0,
       0,   208,     0,     0,     0,   -51,   326,   326,   326,     0,
       0,   -51,     0,   786,   787,   788,   208,     0,   210,     0,
     326,   326,   326,     0,     0,     0,     0,   796,   797,   798,
       0,     0,   210,     0,     0,   208,     0,     0,   326,   326,
     326,   326,   326,   326,     0,     0,     0,     0,   809,   810,
     811,     0,     0,   210,     0,   210,   210,   348,   208,   348,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   208,
     -85,   -85,   -85,     0,   -85,     0,     0,     0,     0,     0,
     208,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,     0,   -85,     0,   -85,   -85,   -85,   -85,
       0,   -85,   -85,     0,   -85,     0,     0,     0,     0,   208,
     -85,     0,   -85,   -85,   -85,   -85,   -85,     0,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,   105,   105,   105,     0,   -39,     0,
       0,     0,   208,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   208,   -39,   -39,   105,   105,   105,
       0,     0,   -39,     0,     0,   208,     0,     0,     0,     0,
       0,     0,   208,     0,     0,     0,   105,   105,   105,     0,
       0,     0,     0,     0,   208,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   272,     0,   105,   105,
     105,     0,     0,     0,     0,     0,   208,   617,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   295,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   208,
       0,     0,     0,     0,     0,   105,   105,   105,     0,   105,
     105,   105,     0,     0,   209,     0,     0,   208,   669,   669,
     669,   669,   669,   669,   669,   669,   669,   669,   669,   346,
       0,     0,     0,     0,   272,   295,     0,     0,     0,     0,
       0,     0,   234,   234,   234,     0,     0,     0,     0,     0,
     273,   296,     0,     0,     0,     0,     0,     0,     0,   208,
     209,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,     0,     0,
     -42,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,   -42,     0,   -42,
       0,     0,     0,     0,   -42,   208,     0,   325,   325,   325,
       0,     0,     0,   209,   209,   347,   -39,   347,   -39,   209,
     -86,   -86,   -86,   -39,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   208,   -86,     0,   -86,   -86,   -86,   -86,
       0,   -86,   -86,     0,   -86,     0,     0,   -87,   -87,   -87,
     -86,   -87,   -86,   -86,   -86,   -86,   -86,   209,     0,     0,
       0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,     0,   -87,   -87,   -87,   -87,     0,   -87,   -87,
       0,   -87,     0,     0,     0,   208,     0,   -87,   209,   -87,
     -87,   -87,   -87,   -87,     0,   253,   254,   255,     0,   256,
       0,     0,     0,   209,     0,     0,     0,     0,     0,     0,
       0,   324,   324,   324,   260,   261,   262,   263,     0,   264,
       0,     0,   209,   208,     0,   324,   324,   324,     0,     0,
       0,     0,     0,     0,     0,   265,   324,   324,   324,   276,
     277,   278,     0,   279,     0,   209,     0,     0,   208,     0,
     324,   324,   324,     0,     0,     0,   209,     0,   283,   284,
     285,   286,   208,   287,     0,     0,     0,   209,   324,   324,
     324,   324,   324,   324,     0,     0,     0,     0,     0,   288,
     301,   302,   303,   208,   304,   208,   208,   346,     0,   346,
       0,     0,     0,     0,     0,     0,   209,     0,     0,   305,
     306,   307,   308,     0,   309,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     310,   234,   234,   234,     0,   -41,     0,     0,     0,   209,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   209,   -41,   -41,   234,   234,   234,     0,     0,   -41,
       0,     0,   209,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,   234,   234,   234,     0,     0,     0,     0,
       0,   209,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   273,     0,   234,   234,   234,     0,     0,
       0,     0,     0,   209,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,     0,
       0,     0,   234,   234,   234,     0,   234,   234,   234,     0,
       0,   207,     0,     0,   209,   670,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   347,     0,     0,     0,
       0,   273,   296,     0,     0,     0,     0,     0,     0,   104,
     106,   107,     0,     0,     0,     0,     0,   271,   294,     0,
       0,     0,     0,     0,     0,     0,   209,   207,   -79,   -79,
     -79,     0,   -79,     0,     0,   130,   131,   132,   133,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,     0,   -79,   -79,   -79,   -79,     0,   -79,
     -79,     0,   -79,     0,     0,     0,     0,     0,   -79,     0,
     -79,   -79,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,   209,     0,   155,   156,   157,     0,     0,     0,
     207,   207,   345,     0,   345,     0,   207,   -82,   -82,   -82,
       0,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     209,   -82,     0,   -82,   -82,   -82,   -82,     0,   -82,   869,
       0,   -82,     0,     0,   -81,   -81,   -81,   -82,   -81,   -82,
     -82,   -82,   -82,   -82,   207,     0,     0,     0,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,
     -81,   -81,   -81,   -81,     0,   -81,   -81,     0,   -81,     0,
       0,     0,   209,     0,   -81,   207,   -81,   -81,   -81,   -81,
     -81,     0,   327,   328,   329,     0,   330,     0,     0,     0,
     207,     0,     0,     0,     0,     0,     0,     0,   325,   325,
     325,   334,   335,   336,   337,     0,   338,     0,     0,   207,
     209,     0,   325,   325,   325,     0,     0,     0,     0,     0,
       0,     0,   339,   325,   325,   325,   510,   511,   512,     0,
     513,     0,   207,     0,     0,   209,     0,   325,   325,   325,
       0,     0,     0,   207,     0,   514,   515,   516,   517,   209,
     518,     0,     0,     0,   207,   325,   325,   325,   325,   325,
     325,     0,     0,     0,     0,     0,   519,   566,   567,   568,
     209,   569,   209,   209,   347,     0,   347,     0,     0,     0,
       0,     0,     0,   207,     0,     0,   570,   571,   572,   573,
       0,   574,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,   575,   500,   501,
     502,     0,   -40,     0,     0,     0,   207,   207,   207,   207,
     207,   207,   207,   207,   533,   534,   535,   536,   207,   -40,
     -40,   538,   539,   540,     0,     0,   -40,     0,     0,   207,
       0,     0,     0,     0,     0,     0,   207,     0,     0,     0,
     556,   557,   558,     0,     0,     0,     0,     0,   207,   271,
     271,   271,   271,   271,   271,   271,   589,   590,   591,   592,
     271,     0,   594,   595,   596,     0,     0,     0,     0,     0,
     207,   294,   294,   294,   294,   294,   294,   294,   627,   628,
     629,   630,   294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,   643,
     644,   645,     0,   646,   647,   648,   206,     0,     0,     0,
       0,   207,   345,   345,   345,   345,   345,   345,   345,   679,
     680,   681,   682,   345,     0,     0,     0,     0,   271,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   270,   293,     0,   -32,   -32,   -32,     0,   -32,
       0,     0,   206,   207,     0,   125,   126,   127,   128,   129,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,   -32,
      20,    21,    22,     0,    23,   -32,     0,   -32,   -32,   -32,
     -32,   -32,     0,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,     0,    32,     0,     0,     0,     0,   207,
     -26,   -26,   -26,     0,   -26,   206,   206,   344,     0,   344,
      37,   206,   318,     0,     0,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,     0,   -26,   -26,   -26,   -26,
       0,   -26,     0,     0,   -26,     0,     0,   207,     0,     0,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,   -28,   -28,   -28,     0,   -28,     0,     0,     0,   206,
       0,     0,     0,     0,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,   -28,
     -28,     0,   -28,     0,     0,   -28,     0,     0,     0,   207,
     206,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   604,
     605,   606,     0,   607,     0,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,   771,   772,   608,   609,
     610,   611,     0,   612,   206,     0,     0,   207,     0,   780,
     781,   782,     0,     0,     0,     0,     0,     0,     0,   613,
     783,   784,   785,     0,     0,     0,     0,   206,     0,     0,
       0,     0,   207,     0,   793,   794,   795,     0,   206,     0,
       0,     0,     0,     0,     0,     0,   207,     0,     0,   206,
       0,     0,   803,   804,   805,   806,   807,   808,     0,     0,
       0,     0,     0,     0,    20,    21,    22,   207,    23,   207,
     207,   345,     0,   345,     0,     0,     0,     0,   206,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
     183,    79,    34,    35,     0,   184,   205,     0,    36,     0,
       0,     0,     0,     0,    37,     0,    38,    39,   185,   186,
     187,   206,   206,   206,   528,   529,   530,   531,   532,     0,
       0,     0,     0,   206,     0,     0,     0,   656,   657,   658,
       0,   659,   269,   292,   206,     0,     0,     0,     0,     0,
       0,   206,   205,   123,   124,     0,   660,   661,   662,   663,
       0,   664,     0,   206,   270,   270,   584,   585,   586,   587,
     588,     0,     0,     0,     0,   270,   204,   665,     0,     0,
       0,     0,     0,     0,     0,   206,   293,   293,   622,   623,
     624,   625,   626,     0,     0,     0,     0,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   206,     0,
       0,     0,   268,   291,     0,   205,   205,   343,     0,   343,
       0,   205,   204,     0,     0,     0,   206,   344,   344,   674,
     675,   676,   677,   678,     0,     0,     0,   203,   344,     0,
       0,     0,     0,   270,   293,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   206,   205,
       0,     0,     0,   114,   116,   -43,     0,     0,     0,     0,
     -41,   -41,   119,   121,     0,   204,   204,   342,     0,   342,
       0,   204,   -43,     0,   -43,   134,     0,     0,     0,   -43,
     205,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,   205,     0,     0,     0,   -74,
       0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,     0,    83,     0,   -74,   204,
       0,     0,     0,   -74,     0,     0,   203,   203,   162,     0,
     164,     0,   165,     0,     0,     0,     0,   205,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,   205,     0,
     204,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,     0,     0,     0,     0,   204,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
     203,     0,     0,     0,   204,   -44,     0,     0,   205,     0,
       0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,   -44,     0,   -44,     0,     0,   204,     0,   -44,
       0,   203,     0,     0,     0,     0,     0,     0,   204,     0,
       0,   205,   522,   527,     0,     0,   203,     0,     0,   204,
       0,     0,   206,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   203,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,   206,   204,     0,
       0,     0,     0,   205,   578,   583,     0,     0,   203,     0,
       0,   206,     0,     0,     0,   269,     0,     0,     0,   450,
       0,     0,     0,     0,     0,   205,   616,   621,     0,     0,
     203,   204,   206,     0,   206,   206,   344,   292,   344,     0,
       0,     0,     0,   204,     0,     0,     0,     0,   205,     0,
       0,     0,     0,     0,   204,     0,     0,     0,     0,   203,
       0,   204,     0,     0,     0,     0,   205,   668,   673,     0,
       0,     0,     0,   204,     0,     0,     0,     0,   343,     0,
       0,     0,     0,   269,   292,   268,     0,     0,     0,     0,
       0,     0,   121,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,   537,     0,     0,   291,   205,     0,
       0,     0,     0,     0,     0,   121,     0,     0,   204,     0,
       0,     0,   121,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   121,     0,   204,     0,     0,     0,
       0,   -46,     0,     0,     0,     0,   593,     0,   342,     0,
       0,     0,     0,   268,   291,     0,   121,     0,   -46,     0,
     -46,     0,     0,     0,   205,   -46,     0,     0,   631,     0,
     -32,   -32,   -32,     0,   -32,     0,     0,     0,   204,   121,
       0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,     0,     0,   121,     0,     0,
       0,     0,   205,     0,   -34,   -34,   -34,     0,   -34,   683,
     -32,     0,   -32,     0,   687,   689,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,   204,   -34,     0,     0,   -34,   203,
       0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   205,     0,     0,     0,     0,   -27,
     -27,   -27,     0,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,   204,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,     0,   -27,     0,   -27,   -27,   -27,   -27,     0,
     -27,     0,   205,   -27,     0,   203,     0,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   380,   381,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   382,   383,   205,     0,    20,
      21,    22,     0,    23,   204,     0,     0,     0,     0,     0,
       0,   205,     0,   203,    24,    25,    26,    27,    28,    29,
      30,    31,   -52,    32,     0,     0,     0,     0,   -52,   -35,
     -35,   -35,   205,   -35,   205,   205,   343,     0,   343,    37,
       0,   496,   204,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,
     -35,     0,     0,   -35,     0,   203,     0,   204,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,   204,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -38,   -38,   -38,     0,   -38,
       0,   -67,   204,   121,   204,   204,   342,     0,   342,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -67,   -38,   -38,   -38,   -38,   -67,   -38,     0,   121,   -38,
     -36,   -36,   -36,     0,   -36,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   121,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
       0,   -36,     0,   121,   -36,   203,   203,   820,     0,   822,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -37,   -37,   -37,
       0,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,   -37,     0,   -37,     0,
       0,   -37,   -90,   -90,   -90,     0,   -90,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,     0,   -90,   -90,
     -90,   -90,     0,   -90,     0,     0,   -90,   -29,   -29,   -29,
       0,   -29,   -90,     0,   -90,   -90,   -90,   -90,   -90,     0,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,     0,   -29,   -29,   -29,   -29,     0,   -29,     0,
       0,   -29,   -33,   -33,   -33,     0,   -33,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,   -33,   -91,   -91,   -91,
       0,   -91,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,     0,   -91,   -91,   -91,   -91,     0,   -91,     0,
       0,   -91,   -83,   -83,   -83,     0,   -83,   -91,     0,   -91,
     -91,   -91,   -91,   -91,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,     0,   -83,   -83,
     -83,   -83,     0,   -83,     0,     0,   -83,   -84,   -84,   -84,
       0,   -84,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
       0,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
       0,   -84,     0,   -84,   -84,   -84,   -84,     0,   -84,     0,
       0,   -84,   -85,   -85,   -85,     0,   -85,   -84,     0,   -84,
     -84,   -84,   -84,   -84,     0,     0,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,   -85,
     -85,   -85,     0,   -85,     0,     0,   -85,   -86,   -86,   -86,
       0,   -86,   -85,     0,   -85,   -85,   -85,   -85,   -85,     0,
       0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
       0,   -86,     0,   -86,   -86,   -86,   -86,     0,   -86,     0,
       0,   -86,   -87,   -87,   -87,     0,   -87,   -86,     0,   -86,
     -86,   -86,   -86,   -86,     0,     0,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,     0,   -87,     0,   -87,   -87,
     -87,   -87,     0,   -87,     0,     0,   -87,   -79,   -79,   -79,
       0,   -79,   -87,     0,   -87,   -87,   -87,   -87,   -87,     0,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,     0,   -79,   -79,   -79,   -79,     0,   -79,     0,
       0,   -79,   -81,   -81,   -81,     0,   -81,   -79,     0,   -79,
     -79,   -79,   -79,   -79,     0,     0,     0,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,     0,   -81,   -81,
     -81,   -81,     0,   -81,     0,     0,   -81,    20,    21,    22,
       0,    23,   -81,     0,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
       0,    32,     0,   183,   362,    34,    35,     0,   184,     0,
       0,    36,   -24,   -24,   -24,     0,   -24,    37,     0,    38,
      39,   185,   186,   187,     0,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,   -24,
     -24,   -24,     0,   -24,     0,     0,   -24,    20,    21,    22,
       0,    23,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
       0,    32,     0,   183,   491,    34,    35,     0,   184,     0,
       0,    36,   -88,   -88,   -88,     0,   -88,    37,     0,    38,
      39,   185,   186,   187,     0,     0,     0,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,     0,   -88,   -88,
     -88,   -88,     0,   -88,     0,     0,   -88,    20,    21,    22,
       0,    23,   -88,     0,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
       0,    32,     0,   183,   499,    34,    35,     0,   184,     0,
       0,    36,   -25,   -25,   -25,     0,   -25,    37,     0,    38,
      39,   185,   186,   187,     0,     0,     0,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,     0,   -25,   -25,
     -25,   -25,     0,   -25,     0,     0,   -25,    20,    21,    22,
       0,    23,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
       0,    32,     0,   183,   684,    34,    35,     0,   184,     0,
       0,    36,   -89,   -89,   -89,     0,   -89,    37,     0,    38,
      39,   185,   186,   187,     0,     0,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,     0,   -89,     0,   -89,   -89,
     -89,   -89,     0,   -89,     0,     0,   -89,     0,     0,     0,
       0,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,   -45,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,   -45,   -45,   -42,     0,     0,     0,
       0,   -45,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -42,   -42,     0,     0,     0,     0,     0,
     -42,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,   -40,   -40,   -43,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,   -43,   -43,   -74,     0,
       0,     0,     0,   -43,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   372,   -74,     0,     0,     0,
       0,     0,   -74,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,   -39,
     -39,   -67,     0,     0,     0,     0,   -39,     0,   -67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -67,
       0,     0,     0,     0,     0,   -67,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -24,   -24,   -24,
       0,   -24,     0,     0,   -70,     0,     0,     0,     0,     0,
       0,   -70,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -70,     0,     0,   -33,   -33,   -33,   -70,   -33,
       0,     0,     0,     0,     0,     0,     0,   -24,     0,   -24,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,     0,     0,     0,     0,   -33,     0,   -33,   -68,     0,
       0,     0,     0,     0,     0,   -68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -68,     0,     0,     0,
       0,     0,   -68,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
       0,   -44,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,     0,     0,     0,   -44,   -44,
     -46,     0,     0,     0,     0,   -44,     0,     0,     0,     0,
     -25,   -25,   -25,     0,   -25,     0,     0,   -46,   -46,     0,
       0,     0,     0,     0,   -46,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
     -25,     0,   -25,   -75,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,     0,   -75,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,   -39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -39,   -39,   -41,     0,     0,     0,     0,
     -39,     0,     0,     0,     0,   -41,   -41,     0,     0,     0,
       0,     0,   -41,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,   -40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -40,   -40,
     -45,     0,     0,     0,     0,   -40,     0,     0,     0,     0,
     -45,   -45,     0,     0,     0,     0,     0,   -45,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -42,   -42,   -43,     0,     0,     0,     0,
     -42,     0,     0,     0,     0,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,   -74,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,   742,   -74,
     -73,     0,     0,     0,     0,   -74,     0,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,     0,   -73,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,     0,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,     0,     0,     0,     0,     0,
     -72,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,     0,     0,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,     0,   -71,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,   -76,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,     0,     0,     0,     0,   -76,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,     0,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -44,   -44,   -46,     0,     0,     0,     0,   -44,
       0,     0,     0,     0,   -46,   -46,     0,     0,     0,     0,
       0,   -46,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,   -70,
     -68,     0,     0,     0,   -70,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,   -68,
       0,     0,     0,   -75,   -68,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,   -75,   -73,     0,     0,     0,   -75,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,   -73,     0,     0,     0,   -72,   -73,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,   -72,   -71,     0,     0,     0,
     -72,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,   -71,     0,     0,     0,   -76,
     -71,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,   -76,   384,
       0,     0,     0,   -76,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -63,     0,     0,
       0,     0,   -67,   -63,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
     -67,     0,   -70,     0,     0,     0,   -67,   444,   445,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   446,   447,     0,     0,
     -70,     0,     0,     0,     0,     0,   -70,     0,     0,     0,
       0,     0,   -52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -52,     0,     0,     0,     0,     0,   -52,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,   -58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -58,     0,     0,     0,
       0,     0,   -58,     0,     0,     0,   -41,     0,   -41,     0,
       0,     0,     0,   -41,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -40,
       0,   -40,     0,     0,     0,     0,   -40,     0,     0,     0,
     -45,     0,   -45,     0,     0,     0,     0,   -45,     0,     0,
       0,   -42,     0,   -42,     0,     0,     0,     0,   -42,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -43,     0,   -43,     0,     0,   -68,
       0,   -43,     0,     0,     0,   459,     0,   -74,     0,     0,
       0,     0,   -74,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,   -68,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,   -75,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,     0,     0,     0,   -75,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -41,   -41,
       0,     0,     0,     0,     0,   -41,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,   -40,   -40,     0,     0,     0,     0,     0,   -40,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -45,   -45,     0,     0,     0,     0,     0,   -45,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -43,   -43,     0,     0,     0,     0,
       0,   -43,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,     0,     0,   703,   -74,
       0,     0,     0,     0,     0,   -74,     0,   -63,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -63,     0,
       0,     0,     0,     0,   -63,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -67,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -70,     0,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,     0,     0,   -70,
     444,   445,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   446,
     447,     0,   444,   445,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   446,   447,     0,     0,   -55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -55,   -54,     0,     0,
       0,     0,   -55,     0,     0,     0,     0,     0,   -54,     0,
       0,     0,     0,     0,   -54,   444,   445,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   446,   447,     0,   444,   445,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   446,   447,     0,     0,
     -53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,   -56,     0,     0,     0,     0,   -53,     0,     0,
       0,     0,     0,   -56,     0,     0,     0,     0,     0,   -56,
     444,   445,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   446,
     447,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,     0,     0,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -61,     0,     0,
       0,     0,   -57,     0,     0,     0,     0,     0,   -61,     0,
       0,     0,     0,     0,   -61,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,     0,
     -62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,   -59,     0,     0,     0,     0,   -62,     0,     0,
       0,     0,     0,   -59,     0,     0,     0,     0,     0,   -59,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,   -60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,     0,     0,     0,
       0,     0,   -60,     0,     0,     0,   -44,     0,   -44,     0,
       0,     0,     0,   -44,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,     0,   -46,
       0,   -46,     0,     0,     0,     0,   -46,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,     0,   -73,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,   -72,   -71,     0,     0,     0,     0,
     -72,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -71,     0,     0,     0,     0,     0,   -71,
     -76,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,     0,     0,     0,   -76,     0,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,   -68,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -44,
     -44,     0,     0,     0,     0,     0,   -44,     0,     0,     0,
     -46,   -46,   -75,     0,     0,     0,     0,   -46,     0,     0,
       0,     0,     0,   -75,     0,     0,     0,     0,     0,   -75,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,   -64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -64,   -65,     0,     0,
       0,     0,   -64,     0,     0,     0,     0,     0,   -65,     0,
       0,     0,     0,     0,   -65,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
     -66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,   -73,     0,     0,     0,     0,   -66,     0,     0,
       0,     0,     0,   -73,     0,     0,     0,     0,     0,   -73,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,   -71,     0,     0,
       0,     0,   -72,     0,     0,     0,     0,     0,   -71,     0,
       0,     0,     0,     0,   -71,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,    91,    92,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,    93,    94,     0,     0,     0,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,     0,     0,     0,     0,     0,   -76,     0,     0,
       0,     0,     0,   -52,     0,     0,     0,     0,   -52,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
      91,    92,   -55,   -55,   -55,   -55,   -55,   -55,   -55,    93,
      94,    91,    92,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
      93,    94,     0,     0,     0,     0,   -58,     0,     0,     0,
       0,   -58,     0,     0,     0,     0,     0,   -55,     0,     0,
       0,     0,   -55,     0,     0,     0,     0,     0,   -54,     0,
       0,     0,     0,   -54,    91,    92,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,    93,    94,    91,    92,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,    93,    94,    91,    92,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,    93,    94,     0,     0,     0,
       0,   -53,     0,     0,     0,     0,   -53,     0,     0,     0,
       0,     0,   -56,     0,     0,     0,     0,   -56,     0,     0,
       0,     0,     0,   -57,     0,     0,     0,     0,   -57,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,     0,     0,   -61,     0,     0,     0,
       0,   -61,     0,     0,     0,     0,     0,   -62,     0,     0,
       0,     0,   -62,     0,     0,     0,     0,     0,   -59,     0,
       0,     0,     0,   -59,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,
       0,   -60,     0,     0,     0,     0,   -60,     0,     0,     0,
       0,     0,   -64,     0,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,   -65,     0,     0,     0,     0,   -65,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,     0,     0,   -66,     0,     0,     0,
       0,   -66,     0,     0,     0,     0,   -58,     0,     0,     0,
       0,     0,   -58,     0,     0,     0,     0,     0,   -63,     0,
       0,     0,     0,   -63,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -67,     0,     0,     0,     0,   -67,     0,     0,     0,
       0,     0,   -70,     0,     0,     0,     0,   -70,     0,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,   -68,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   -63,     0,     0,     0,     0,
       0,   -63,     0,     0,     0,     0,   -67,     0,     0,     0,
       0,     0,   -67,     0,     0,     0,     0,   -70,     0,     0,
       0,     0,     0,   -70,   380,   381,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   382,   383,   380,   381,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   382,   383,   380,   381,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   382,   383,     0,     0,     0,
     -55,     0,     0,     0,     0,     0,   -55,     0,     0,     0,
       0,   -54,     0,     0,     0,     0,     0,   -54,     0,     0,
       0,     0,   -53,     0,     0,     0,     0,     0,   -53,   380,
     381,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   382,   383,
     380,   381,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   382,
     383,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,   -56,     0,     0,     0,     0,
       0,   -56,     0,     0,     0,     0,   -57,     0,     0,     0,
       0,     0,   -57,     0,     0,     0,     0,   -61,     0,     0,
       0,     0,     0,   -61,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,
     -62,     0,     0,     0,     0,     0,   -62,     0,     0,     0,
       0,   -59,     0,     0,     0,     0,     0,   -59,     0,     0,
       0,     0,   -60,     0,     0,     0,     0,     0,   -60,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -75,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,   -68,     0,     0,     0,
       0,     0,   -68,     0,     0,     0,     0,     0,   -73,     0,
       0,     0,     0,   -73,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,   -72,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,     0,   -71,     0,     0,     0,     0,   -71,     0,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,   -76,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,     0,   -75,     0,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,   -64,     0,     0,     0,
       0,     0,   -64,     0,     0,     0,     0,   -65,     0,     0,
       0,     0,     0,   -65,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
     -66,     0,     0,     0,     0,     0,   -66,     0,     0,     0,
       0,   -73,     0,     0,     0,     0,     0,   -73,     0,     0,
       0,     0,   -72,     0,     0,     0,     0,     0,   -72,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,   422,   423,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   424,   425,     0,     0,   -71,     0,     0,   188,   189,
     190,   -71,   191,     0,     0,     0,   -76,   -52,     0,     0,
       0,     0,   -76,    24,   192,   193,   194,   195,   196,   197,
     198,     0,   199,     0,     0,   188,   189,   190,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,   200,   120,
      24,   192,   193,   194,   195,   196,   197,   198,     0,   199,
       0,     0,   188,   189,   190,     0,   191,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   158,    24,   192,   193,
     194,   195,   196,   197,   198,     0,   199,     0,     0,   -32,
     -32,   -32,     0,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,   200,   160,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,     0,     0,   188,   189,   190,     0,
     191,     0,     0,     0,     0,     0,     0,     0,     0,   -32,
     -32,    24,   192,   193,   194,   195,   196,   197,   198,     0,
     199,     0,     0,   188,   189,   190,     0,   191,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   508,    24,   192,
     193,   194,   195,   196,   197,   198,     0,   199,     0,     0,
     188,   189,   190,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,   200,   546,    24,   192,   193,   194,   195,
     196,   197,   198,     0,   199,     0,     0,   188,   189,   190,
       0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
     200,   553,    24,   192,   193,   194,   195,   196,   197,   198,
       0,   199,     0,     0,   188,   189,   190,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,   200,   564,    24,
     192,   193,   194,   195,   196,   197,   198,     0,   199,     0,
       0,   188,   189,   190,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,   200,   602,    24,   192,   193,   194,
     195,   196,   197,   198,     0,   199,     0,     0,   -33,   -33,
     -33,     0,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,   200,   639,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,     0,   188,   189,   190,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,   -33,
      24,   192,   193,   194,   195,   196,   197,   198,     0,   199,
       0,     0,   188,   189,   190,     0,   191,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   654,    24,   192,   193,
     194,   195,   196,   197,   198,     0,   199,     0,     0,   188,
     189,   190,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,   200,   778,    24,   192,   193,   194,   195,   196,
     197,   198,     0,   199,     0,     0,   188,   189,   190,     0,
     191,     0,     0,     0,     0,     0,     0,     0,     0,   200,
     791,    24,   192,   193,   194,   195,   196,   197,   198,     0,
     199,     0,     0,   188,   189,   190,     0,   191,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   801,    24,   192,
     193,   194,   195,   196,   197,   198,     0,   199,     0,     0,
     188,   189,   190,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,   200,   814,    24,   192,   193,   194,   195,
     196,   197,   198,     0,   199,     0,     0,   188,   189,   190,
       0,   191,     0,     0,     0,     0,     0,     0,     0,     0,
     200,   816,    24,   192,   193,   194,   195,   196,   197,   198,
       0,   199,     0,     0,   188,   189,   190,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,   200,   818,    24,
     192,   193,   194,   195,   196,   197,   198,     0,   199,     0,
     219,   220,   221,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   200,    24,   223,   224,   225,   226,
     227,   228,   229,     0,   230,     0,   253,   254,   255,     0,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     231,    24,   257,   258,   259,   260,   261,   262,   263,     0,
     264,     0,   276,   277,   278,     0,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   265,    24,   280,   281,
     282,   283,   284,   285,   286,     0,   287,     0,    20,    21,
      22,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   288,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,   301,   302,   303,     0,   304,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    24,
      25,    26,    27,   305,   306,   307,   308,     0,   309,     0,
     237,   238,   239,     0,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   310,    24,   321,   322,   323,   241,
     242,   243,   244,     0,   245,     0,   327,   328,   329,     0,
     330,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,    24,   331,   332,   333,   334,   335,   336,   337,     0,
     338,     0,   510,   511,   512,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   339,    24,   192,   193,
     194,   514,   515,   516,   517,     0,   518,     0,   566,   567,
     568,     0,   569,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   519,    24,   257,   258,   259,   570,   571,   572,
     573,     0,   574,     0,   604,   605,   606,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   575,    24,
     280,   281,   282,   608,   609,   610,   611,     0,   612,     0,
     656,   657,   658,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   613,    24,   331,   332,   333,   660,
     661,   662,   663,     0,   664,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,     0,
     665,     0,     0,   -41,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,
     -41,   -41,   -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,   -40,
     -40,   -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,     0,   -45,   -45,
     -42,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,   -42,   -42,   -43,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,   -43,   -43,   -74,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,     0,   477,   -74,   -44,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,     0,     0,   -44,   -44,   -46,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,
       0,     0,     0,   -46,   -46,   489,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,   -63,   -67,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,   -67,   -70,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,   -70,   -68,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
     -68,   -75,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,     0,   -75,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,     0,     0,     0,   -45,   -45,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,   -42,   -42,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,   -43,   -43,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,
       0,     0,   763,   -74,   -73,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,   -73,   -72,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,   -72,   -71,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,     0,     0,     0,
     -71,   -76,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,   -76,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,     0,     0,     0,   -44,   -44,   485,
     486,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   487,   488,
       0,     0,     0,     0,     0,   -46,   -46,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,     0,
       0,     0,     0,     0,     0,   -52,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,   -58,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -63,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
     -67,   485,   486,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     487,   488,     0,     0,     0,     0,     0,     0,     0,   -70,
     485,   486,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   487,
     488,     0,     0,     0,     0,     0,     0,   -55,   485,   486,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   487,   488,     0,
       0,     0,     0,     0,     0,     0,   -54,   485,   486,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   487,   488,     0,     0,
       0,     0,     0,     0,   -53,   485,   486,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   487,   488,     0,     0,     0,     0,
       0,     0,     0,   -56,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,     0,     0,     0,     0,
       0,   -57,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
     -61,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,     0,     0,     0,     0,   -62,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,     0,     0,     0,     0,     0,     0,   -59,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,   -60,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,
       0,     0,     0,     0,   -68,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,   -75,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,     0,
       0,   -64,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,     0,     0,   -65,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,   -66,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   -73,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,   -72,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,   -71,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,
       0,     0,   -76,   -39,     0,     0,     0,     0,     0,     0,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,     0,     0,   -41,
       0,     0,     0,     0,     0,     0,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -41,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,     0,     0,     0,   -40,     0,     0,     0,     0,
       0,     0,   -40,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,     0,
       0,   -45,     0,     0,     0,     0,     0,     0,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -45,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,     0,   -42,     0,     0,
       0,     0,     0,     0,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -42,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
       0,     0,     0,   -43,     0,     0,     0,     0,     0,     0,
     -43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -74,
       0,     0,     0,     0,     0,     0,   -74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   414,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,   -44,     0,     0,     0,     0,
       0,     0,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -44,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,     0,
       0,   -46,     0,     0,     0,     0,     0,     0,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -46,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,   -40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -40,   -45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -45,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,     0,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -43,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,   -74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   728,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -44,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,     0,   -46,     0,     0,     0,   426,     0,     0,     0,
       0,     0,   -46,   -63,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -67,     0,     0,     0,     0,     0,     0,   -67,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,     0,     0,   -70,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,   -68,     0,     0,     0,     0,     0,
       0,   -68,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,     0,     0,     0,     0,   -75,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,     0,     0,   -73,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,   -72,     0,     0,     0,     0,     0,     0,   -72,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,     0,   -71,     0,
       0,     0,     0,     0,     0,   -71,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -76,     0,     0,     0,     0,     0,
       0,   -76,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,   -58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -63,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,   -67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   422,   423,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   424,   425,   422,   423,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   424,   425,     0,     0,
       0,   -55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -54,   422,   423,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   424,   425,   422,   423,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   424,   425,     0,     0,     0,   -53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -56,
     422,   423,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   424,
     425,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,   -57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -61,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,
       0,     0,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -59,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,   -60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -68,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -64,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,   -65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -66,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
     -73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,     0,     0,     0,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -76
};

static const yytype_int16 yycheck[] =
{
       7,     0,    40,   149,    43,   183,     8,     6,     0,     0,
       0,    29,   158,   149,   160,     6,     6,    14,     0,    43,
      44,    10,    11,   149,   170,    25,   172,   173,   174,   175,
      10,    11,    25,    10,    11,   181,    44,    33,    43,   175,
      37,    44,    39,    72,    33,    45,    43,    50,    44,   175,
      25,    44,    34,    25,    50,    44,    33,    50,    55,    43,
      25,    50,    64,    62,    44,    47,    48,    49,    65,    66,
      67,    10,    11,    72,     0,    72,    73,    74,     0,   149,
      45,    72,    43,   112,   113,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    43,
     102,    10,    11,    43,    25,   175,    45,    43,    34,     0,
      25,    50,    34,    25,    29,   112,   113,    29,    43,    25,
     149,    47,    48,    49,    45,    47,    48,    49,    27,    43,
      45,    45,     0,    45,   300,    44,    50,    33,    44,   138,
       0,    50,   149,    34,    50,    25,   175,    43,   138,   146,
     147,   148,   149,   150,   320,   152,    47,    48,    49,     0,
      43,   158,    25,   160,    43,    45,    34,     0,   175,   372,
       0,    25,   350,   170,    34,   172,   173,   174,   175,    47,
      48,    49,    45,    33,   181,    33,   183,    47,    48,    49,
      44,     0,   395,    34,    33,    43,    50,    43,    44,   402,
      25,    34,    25,   200,    34,    25,    47,    48,    49,   300,
      44,   414,   209,   251,    47,    48,    49,    47,    48,    49,
      45,    44,    43,    44,    44,    34,    33,    50,    25,   320,
      50,    29,    29,   436,   231,    25,    43,   234,    47,    48,
      49,    33,     3,     4,     5,    43,     7,    45,    45,   246,
      25,    29,    50,    33,    29,    44,   459,    18,    19,    20,
      21,    22,    23,    24,    25,    43,    27,    45,   265,    29,
      45,    33,    50,    34,   477,    45,   273,    43,    44,    33,
      50,    43,    43,    43,    45,    45,    47,    48,    49,    43,
      50,   288,    10,    11,    12,    13,    14,    15,    16,   296,
      33,   300,   299,    44,    29,    10,    11,    12,    13,    14,
      15,    16,    33,   310,    45,    43,    44,   314,    43,    50,
      45,   320,    43,    45,   363,    50,    44,    29,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      45,    43,   339,    45,    33,    50,    33,    26,    50,    33,
     347,    44,    25,   350,    33,    44,    29,    44,   355,    43,
      43,    50,    44,    50,    43,    44,   363,   364,   365,   366,
      44,    50,    45,    43,    44,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,    34,    33,
     387,   388,   389,    34,    33,    45,    43,    44,   395,    43,
      50,    47,    48,    49,    43,   402,    47,    48,    49,   406,
     407,   408,    43,    44,    43,    44,    44,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
      44,   428,   429,   430,    43,    43,    50,    43,    43,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,    43,   492,    10,    11,    12,    13,    14,    15,
      16,    44,   459,    25,   493,    44,    43,    50,   465,   466,
     467,    50,   469,   470,   471,    43,    43,    33,    43,    43,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,    44,   493,   492,   493,   494,   495,    50,
     703,    43,   493,    10,    11,    12,    13,    14,    15,    16,
      10,    11,    12,    13,    14,    15,    16,    43,    45,    45,
      25,    43,   519,    50,    50,   728,    33,   524,    43,    44,
       3,     4,     5,    45,     7,    50,    44,    44,    50,   742,
      33,    33,    50,    50,    44,    18,    19,    20,    21,    22,
      23,    24,    25,    43,    27,    43,    29,    30,    31,    32,
     763,    34,    35,    44,    37,    44,    25,    44,    43,    50,
      43,    50,    45,    46,    47,    48,    49,    45,   575,    43,
      43,    43,    50,   580,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    43,    43,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    44,     3,
       4,     5,    44,     7,    50,    26,   613,    44,    50,    43,
      44,   618,   768,    50,    18,    19,    20,    21,    22,    23,
      24,    25,   768,    27,    45,    29,    30,    31,    32,    50,
      34,    35,   768,    37,    44,    25,    43,    43,    43,    43,
      50,    45,    46,    47,    48,    49,   685,   686,    43,    43,
      10,    11,    12,    13,    14,    15,    16,    43,   665,    45,
     816,    45,   818,   670,    50,    44,    50,    43,    44,    44,
     816,    50,   818,    33,    50,    50,    25,    44,   685,   686,
     816,    43,   818,    50,    44,    34,    44,    43,   768,    45,
      50,    44,    50,    25,    50,    44,   703,    50,    47,    48,
      49,    43,   858,    45,   860,   861,   862,   863,    50,    43,
      43,    25,   858,   869,   860,   861,   862,   863,    43,    43,
      43,   728,   858,   869,   860,   861,   862,   863,    44,   768,
      43,    44,    43,   869,    50,   742,   816,    50,   818,    10,
      11,    12,    13,    14,    15,    16,    43,    44,     3,     4,
       5,   768,     7,    50,    44,    44,   763,    43,   765,   766,
     767,   768,   769,    18,    19,    20,    21,    22,    23,    24,
      25,    45,    27,    44,    43,    43,    50,   816,   858,   818,
     860,   861,   862,   863,    43,    43,    45,    43,    43,   869,
      45,    50,    44,     3,     4,     5,    44,     7,    50,   816,
      45,   818,    50,    43,    44,    50,    14,    43,    25,   816,
      50,   818,    22,    23,    24,    25,    43,    27,    43,   858,
      44,   860,   861,   862,   863,    43,    50,    27,    44,    37,
     869,    39,    44,    43,    50,    43,    27,    33,    50,    27,
      27,   858,    44,   860,   861,   862,   863,    55,    50,    27,
      27,   858,   869,   860,   861,   862,   863,    65,    66,    67,
      44,    27,   869,    33,    72,    73,    74,    10,    11,    12,
      13,    14,    15,    16,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    44,    33,
      33,     3,     4,     5,    50,     7,    44,    44,    33,    44,
      25,    43,    50,    50,   112,   113,    18,    19,    20,    21,
      22,    23,    24,    25,    44,    27,    44,    29,    30,    31,
      32,    44,    34,    35,    44,    37,    44,    50,    43,    43,
      50,    43,    50,    45,    46,    47,    48,    49,   146,   147,
     148,   149,   150,    44,   152,    44,    33,    44,    44,    50,
     158,    50,   160,    50,    50,    45,    33,     3,     4,     5,
      50,     7,   170,    44,   172,   173,   174,   175,    44,    50,
      33,    25,    44,   181,    50,   183,    22,    23,    24,    25,
      34,    27,    44,    44,    33,    44,    44,     3,     4,     5,
      44,     7,   200,    47,    48,    49,    44,    43,    33,    44,
      44,   209,    18,    19,    20,    21,    22,    23,    24,    25,
      33,    27,    45,    29,    30,    31,    32,    50,    34,    35,
      33,    37,    44,   231,    44,    44,   234,    43,    50,    45,
      46,    47,    48,    49,    44,    43,    43,    43,   246,    25,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    44,    44,    44,    44,    44,   265,    50,    26,
      50,    50,    25,    44,    44,   273,    33,    44,    44,    50,
      50,    34,    33,    50,    50,    33,    43,    44,    33,    33,
     288,    44,    44,    50,    47,    48,    49,    43,   296,    25,
      43,   299,     3,     4,     5,    43,     7,    44,    44,    44,
      33,    33,   310,    33,    33,    33,   314,    18,    19,    20,
      21,    22,    23,    24,    25,    33,    27,    44,    29,    30,
      31,    32,    44,    34,    35,    44,    37,    43,    43,    43,
      25,   339,    43,    33,    45,    46,    47,    48,    49,   347,
      44,    27,   350,    33,    33,    33,    33,   355,    10,    11,
      12,    13,    14,    15,    16,   363,   364,   365,   366,    44,
      44,    44,    44,    27,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    27,    27,   387,
     388,   389,     6,    45,    44,    44,    44,   395,    50,    44,
      44,    44,    44,    44,   402,    33,    44,    44,   406,   407,
     408,    44,    44,    44,    44,    44,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,    44,
     428,   429,   430,    44,    44,    44,    44,    44,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,    10,    11,    12,    13,    14,    15,    16,    44,    44,
      44,   459,    44,    44,    44,    44,    44,   465,   466,   467,
      44,   469,   470,   471,    33,    44,    44,    33,    33,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,    44,    44,   492,   493,   494,   495,    44,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     3,     4,     5,    -1,     7,    -1,    26,    -1,
      -1,   519,    -1,    -1,    -1,    -1,   524,    18,    19,    20,
      21,    22,    23,    24,    25,    43,    27,    45,    29,    30,
      31,    32,    50,    34,    35,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,   575,    34,    35,
      -1,    37,   580,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    49,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,     3,     4,     5,    -1,
       7,    -1,    26,    -1,    -1,   613,    -1,    -1,    -1,    -1,
     618,    18,    19,    20,    21,    22,    23,    24,    25,    43,
      27,    45,    29,    30,    31,    32,    50,    34,    35,    -1,
      37,    14,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    49,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    37,    -1,    39,   665,    -1,    -1,
      43,    26,   670,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,   685,   686,    44,
      -1,    -1,    65,    66,    67,    50,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,   703,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    10,    11,    12,    13,    14,    15,    16,
     728,    -1,    10,    11,    12,    13,    14,    15,    16,   112,
     113,    -1,    -1,    -1,   742,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    45,    -1,
      -1,    -1,    -1,    50,    26,   763,    44,   765,   766,   767,
     768,   769,    50,   146,   147,   148,   149,   150,    -1,   152,
      -1,    43,    -1,    45,    -1,   158,    -1,   160,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,    -1,    -1,     3,     4,     5,    -1,     7,   816,    -1,
     818,    -1,    -1,    -1,    -1,    -1,    -1,   200,    18,    19,
      20,    21,    22,    23,    24,    25,   209,    27,    -1,    29,
      -1,    31,    32,    -1,    -1,    -1,    -1,    37,     3,     4,
       5,    -1,     7,    43,    -1,    45,    46,    -1,   231,    -1,
     858,   234,   860,   861,   862,   863,    -1,    22,    23,    24,
      25,   869,    27,   246,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    43,    -1,
      -1,    -1,   265,    -1,    26,    -1,    -1,    -1,    -1,    -1,
     273,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,   288,    -1,    -1,    50,    -1,
      -1,    -1,    -1,   296,    -1,    -1,   299,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,
      -1,   314,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    35,
      -1,    37,    -1,    -1,    -1,    -1,   339,    43,    -1,    45,
      46,    47,    48,    49,   347,    -1,    -1,   350,    -1,    -1,
      -1,    -1,   355,    10,    11,    12,    13,    14,    15,    16,
     363,   364,   365,   366,    -1,    -1,    -1,    -1,    -1,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,    -1,    -1,   387,   388,   389,    44,    -1,    -1,
      -1,    -1,   395,    50,    -1,    37,    -1,    39,    -1,   402,
      -1,    -1,    -1,   406,   407,   408,    -1,    -1,    -1,    -1,
      -1,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,    -1,   428,   429,   430,    -1,    -1,
      72,    -1,    74,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   459,    -1,    -1,    -1,
      -1,    -1,   465,   466,   467,    -1,   469,   470,   471,    -1,
     112,   113,    -1,    -1,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,    -1,    -1,   492,
     493,   494,   495,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,   146,   147,    -1,   149,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,   519,    22,    23,    24,
      25,   524,    27,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,   175,    29,    30,    31,    32,    43,    34,
      35,    -1,    37,    -1,    -1,     3,     4,     5,    43,     7,
      45,    46,    47,    48,    49,    -1,    -1,    -1,   200,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,   575,    31,    32,    -1,    -1,   580,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,   231,
      -1,    -1,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   246,    -1,    -1,    -1,    -1,    -1,
     613,    26,    -1,    -1,    -1,   618,    -1,    -1,    33,    -1,
      -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,     3,     4,     5,    50,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,   665,    34,    35,    -1,    37,   670,   310,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,   685,   686,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,   339,    -1,    -1,
     703,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,   355,    29,    30,    31,    32,    -1,    34,
      35,    -1,    37,    -1,    -1,   728,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,   742,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     3,     4,     5,    -1,     7,    -1,    26,    -1,
     763,    -1,   765,   766,   767,   768,   769,    18,    19,    20,
      21,    22,    23,    24,    25,    43,    27,    45,    29,    30,
      31,    32,    50,    34,    35,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   816,    -1,   818,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    29,    30,    31,
      32,    -1,    34,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      -1,   493,    -1,   495,    -1,   858,    -1,   860,   861,   862,
     863,    -1,    -1,    -1,    -1,    -1,   869,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,   519,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    31,    32,    -1,    34,
      35,    -1,    37,    -1,    -1,    -1,    -1,    37,    43,    -1,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,     3,     4,     5,    -1,
       7,    -1,    -1,   575,    -1,    65,    66,    67,    68,    69,
      70,    -1,    -1,    73,    74,    22,    23,    24,    25,    -1,
      27,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    43,    -1,    -1,    -1,
      -1,   613,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    43,    44,    -1,
     140,   141,   142,    -1,    50,    -1,   146,   147,   148,    -1,
     150,    -1,   152,   665,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    44,     7,    -1,    -1,    -1,    -1,
      50,    -1,    -1,   685,   686,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    29,    30,    31,
      32,    -1,    34,    35,    -1,    37,    -1,    -1,    -1,    -1,
     200,    43,    -1,    45,    46,    47,    48,    49,    -1,   209,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,   231,    -1,    26,   234,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
      43,    44,    -1,   765,   766,    -1,   768,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   273,    -1,    -1,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,   288,    -1,
      -1,    -1,    -1,    -1,    26,    -1,   296,    -1,    -1,   299,
      -1,    33,    -1,    -1,   816,    -1,   818,    -1,    -1,    -1,
     310,    43,    44,    -1,   314,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,   325,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,   339,
      -1,    -1,    -1,    -1,    26,    -1,   858,   347,   860,   861,
     862,   863,    -1,    -1,    -1,    -1,    -1,   869,    -1,    -1,
      -1,    43,    44,    -1,   364,   365,   366,   367,   368,   369,
      -1,    -1,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,    -1,    -1,   387,   388,   389,
     390,   391,   392,    -1,    -1,   395,    -1,   397,   398,   399,
      -1,    -1,   402,    -1,    -1,    -1,   406,   407,   408,   409,
     410,   411,    -1,    -1,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,    -1,   428,   429,
     430,   431,   432,   433,    -1,    -1,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,    -1,
      -1,    -1,    -1,    -1,   454,   455,   456,    -1,    -1,   459,
      -1,    -1,    -1,    -1,    -1,   465,   466,   467,    -1,   469,
     470,   471,   472,   473,   474,    -1,    -1,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
      -1,    -1,    -1,    -1,   494,   495,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    37,    -1,   519,
      -1,    33,    -1,    -1,   524,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,   575,    -1,    -1,    -1,    -1,
     580,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,   613,    -1,    -1,    43,    44,   618,    -1,
     140,   141,   142,    50,    -1,    -1,   146,   147,   148,    -1,
     150,    -1,   152,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    29,
      30,    31,    32,    -1,    34,   665,    -1,    37,    -1,    -1,
     670,    -1,    -1,    43,    -1,    45,    46,    47,    48,    49,
     200,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      -1,   691,   692,   693,    -1,    -1,    -1,    -1,   698,   699,
     700,    -1,    -1,   703,    33,   705,   706,   707,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    44,   716,   717,   718,    -1,
      -1,    50,    -1,   723,   724,   725,   246,    -1,   728,    -1,
     730,   731,   732,    -1,    -1,    -1,    -1,   737,   738,   739,
      -1,    -1,   742,    -1,    -1,   265,    -1,    -1,   748,   749,
     750,   751,   752,   753,    -1,    -1,    -1,    -1,   758,   759,
     760,    -1,    -1,   763,    -1,   765,   766,   767,   288,   769,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    35,    -1,    37,    -1,    -1,    -1,    -1,   339,
      43,    -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,   364,   365,   366,    -1,    26,    -1,
      -1,    -1,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,    43,    44,   387,   388,   389,
      -1,    -1,    50,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,   402,    -1,    -1,    -1,   406,   407,   408,    -1,
      -1,    -1,    -1,    -1,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,    -1,   428,   429,
     430,    -1,    -1,    -1,    -1,    -1,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   459,
      -1,    -1,    -1,    -1,    -1,   465,   466,   467,    -1,   469,
     470,   471,    -1,    -1,    37,    -1,    -1,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
      -1,    -1,    -1,    -1,   494,   495,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   519,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      -1,    -1,    -1,    -1,    50,   575,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,   147,   148,    43,   150,    45,   152,
       3,     4,     5,    50,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,   613,    27,    -1,    29,    30,    31,    32,
      -1,    34,    35,    -1,    37,    -1,    -1,     3,     4,     5,
      43,     7,    45,    46,    47,    48,    49,   200,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    35,
      -1,    37,    -1,    -1,    -1,   665,    -1,    43,   231,    45,
      46,    47,    48,    49,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   691,   692,   693,    22,    23,    24,    25,    -1,    27,
      -1,    -1,   265,   703,    -1,   705,   706,   707,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,   716,   717,   718,     3,
       4,     5,    -1,     7,    -1,   288,    -1,    -1,   728,    -1,
     730,   731,   732,    -1,    -1,    -1,   299,    -1,    22,    23,
      24,    25,   742,    27,    -1,    -1,    -1,   310,   748,   749,
     750,   751,   752,   753,    -1,    -1,    -1,    -1,    -1,    43,
       3,     4,     5,   763,     7,   765,   766,   767,    -1,   769,
      -1,    -1,    -1,    -1,    -1,    -1,   339,    -1,    -1,    22,
      23,    24,    25,    -1,    27,    -1,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      43,   364,   365,   366,    -1,    26,    -1,    -1,    -1,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,    43,    44,   387,   388,   389,    -1,    -1,    50,
      -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,   402,
      -1,    -1,    -1,   406,   407,   408,    -1,    -1,    -1,    -1,
      -1,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,    -1,   428,   429,   430,    -1,    -1,
      -1,    -1,    -1,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   459,    -1,    -1,    -1,
      -1,    -1,   465,   466,   467,    -1,   469,   470,   471,    -1,
      -1,    37,    -1,    -1,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,    -1,    -1,    -1,
      -1,   494,   495,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   519,    83,     3,     4,
       5,    -1,     7,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    31,    32,    -1,    34,
      35,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   575,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,   148,    -1,   150,    -1,   152,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
     613,    27,    -1,    29,    30,    31,    32,    -1,    34,    35,
      -1,    37,    -1,    -1,     3,     4,     5,    43,     7,    45,
      46,    47,    48,    49,   200,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    35,    -1,    37,    -1,
      -1,    -1,   665,    -1,    43,   231,    45,    46,    47,    48,
      49,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   691,   692,
     693,    22,    23,    24,    25,    -1,    27,    -1,    -1,   265,
     703,    -1,   705,   706,   707,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,   716,   717,   718,     3,     4,     5,    -1,
       7,    -1,   288,    -1,    -1,   728,    -1,   730,   731,   732,
      -1,    -1,    -1,   299,    -1,    22,    23,    24,    25,   742,
      27,    -1,    -1,    -1,   310,   748,   749,   750,   751,   752,
     753,    -1,    -1,    -1,    -1,    -1,    43,     3,     4,     5,
     763,     7,   765,   766,   767,    -1,   769,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    22,    23,    24,    25,
      -1,    27,    -1,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    43,   364,   365,
     366,    -1,    26,    -1,    -1,    -1,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    43,
      44,   387,   388,   389,    -1,    -1,    50,    -1,    -1,   395,
      -1,    -1,    -1,    -1,    -1,    -1,   402,    -1,    -1,    -1,
     406,   407,   408,    -1,    -1,    -1,    -1,    -1,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,    -1,   428,   429,   430,    -1,    -1,    -1,    -1,    -1,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   459,    -1,    -1,    -1,    -1,    -1,   465,
     466,   467,    -1,   469,   470,   471,    37,    -1,    -1,    -1,
      -1,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,    -1,    -1,    -1,    -1,   494,   495,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    83,   519,    -1,    86,    87,    88,    89,    90,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      -1,    29,    30,    31,    32,    -1,    34,    -1,    -1,    37,
       3,     4,     5,    -1,     7,    43,    -1,    45,    46,    47,
      48,    49,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    -1,    -1,    -1,   575,
       3,     4,     5,    -1,     7,   146,   147,   148,    -1,   150,
      43,   152,    45,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    -1,    -1,   613,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    -1,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,   665,
     231,    43,    -1,    45,    46,    47,    48,    49,    -1,     3,
       4,     5,    -1,     7,    -1,   246,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   691,   692,   693,    22,    23,
      24,    25,    -1,    27,   265,    -1,    -1,   703,    -1,   705,
     706,   707,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
     716,   717,   718,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,   728,    -1,   730,   731,   732,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   742,    -1,    -1,   310,
      -1,    -1,   748,   749,   750,   751,   752,   753,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,   763,     7,   765,
     766,   767,    -1,   769,    -1,    -1,    -1,    -1,   339,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,    -1,    34,    37,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,   372,   373,   374,   375,   376,   377,   378,   379,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    73,    74,   395,    -1,    -1,    -1,    -1,    -1,
      -1,   402,    83,    84,    85,    -1,    22,    23,    24,    25,
      -1,    27,    -1,   414,   415,   416,   417,   418,   419,   420,
     421,    -1,    -1,    -1,    -1,   426,    37,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   436,   437,   438,   439,   440,
     441,   442,   443,    -1,    -1,    -1,    -1,   448,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   459,    -1,
      -1,    -1,    73,    74,    -1,   146,   147,   148,    -1,   150,
      -1,   152,    83,    -1,    -1,    -1,   477,   478,   479,   480,
     481,   482,   483,   484,    -1,    -1,    -1,    37,   489,    -1,
      -1,    -1,    -1,   494,   495,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   519,   200,
      -1,    -1,    -1,    73,    74,    26,    -1,    -1,    -1,    -1,
      43,    44,    82,    83,    -1,   146,   147,   148,    -1,   150,
      -1,   152,    43,    -1,    45,    95,    -1,    -1,    -1,    50,
     231,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,   246,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,   575,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   265,    -1,    43,    -1,    45,   200,
      -1,    -1,    -1,    50,    -1,    -1,   146,   147,   148,    -1,
     150,    -1,   152,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,   613,    -1,    -1,    -1,    -1,    -1,   299,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,
      -1,    -1,    -1,    -1,    -1,   246,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
     200,    -1,    -1,    -1,   265,    26,    -1,    -1,   339,    -1,
      -1,    -1,    -1,    -1,   665,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    -1,    -1,   288,    -1,    50,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,
      -1,   372,   373,   374,    -1,    -1,   246,    -1,    -1,   310,
      -1,    -1,   703,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   395,   265,    -1,    -1,    -1,    -1,
      -1,   402,    -1,    -1,    -1,    -1,    -1,   728,   339,    -1,
      -1,    -1,    -1,   414,   415,   416,    -1,    -1,   288,    -1,
      -1,   742,    -1,    -1,    -1,   426,    -1,    -1,    -1,   299,
      -1,    -1,    -1,    -1,    -1,   436,   437,   438,    -1,    -1,
     310,   372,   763,    -1,   765,   766,   767,   448,   769,    -1,
      -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,   459,    -1,
      -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,   339,
      -1,   402,    -1,    -1,    -1,    -1,   477,   478,   479,    -1,
      -1,    -1,    -1,   414,    -1,    -1,    -1,    -1,   489,    -1,
      -1,    -1,    -1,   494,   495,   426,    -1,    -1,    -1,    -1,
      -1,    -1,   372,    -1,    -1,   436,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,    -1,   448,   519,    -1,
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,   459,    -1,
      -1,    -1,   402,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   414,    -1,   477,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,   426,    -1,   489,    -1,
      -1,    -1,    -1,   494,   495,    -1,   436,    -1,    43,    -1,
      45,    -1,    -1,    -1,   575,    50,    -1,    -1,   448,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,   519,   459,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    -1,   477,    -1,    -1,
      -1,    -1,   613,    -1,     3,     4,     5,    -1,     7,   489,
      43,    -1,    45,    -1,   494,   495,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
      29,    30,    31,    32,   575,    34,    -1,    -1,    37,   519,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      49,    -1,    -1,    -1,   665,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   613,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,   703,    37,    -1,   575,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   728,    -1,     3,
       4,     5,    -1,     7,   665,    -1,    -1,    -1,    -1,    -1,
      -1,   742,    -1,   613,    18,    19,    20,    21,    22,    23,
      24,    25,    44,    27,    -1,    -1,    -1,    -1,    50,     3,
       4,     5,   763,     7,   765,   766,   767,    -1,   769,    43,
      -1,    45,   703,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,    -1,   665,    -1,   728,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,   742,    -1,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,     3,     4,     5,    -1,     7,
      -1,    26,   763,   703,   765,   766,   767,    -1,   769,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      45,    29,    30,    31,    32,    50,    34,    -1,   728,    37,
       3,     4,     5,    -1,     7,    43,    -1,    45,    46,    47,
      48,    49,   742,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    -1,    29,    30,    31,    32,
      -1,    34,    -1,   763,    37,   765,   766,   767,    -1,   769,
      43,    -1,    45,    46,    47,    48,    49,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,     3,     4,     5,
      -1,     7,    43,    -1,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    -1,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    37,     3,     4,     5,    -1,     7,    43,    -1,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    27,    -1,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    49,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    43,    44,    26,    -1,    -1,    -1,
      -1,    50,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    43,    44,    -1,    -1,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,    26,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    43,    44,    26,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,
      44,    26,    -1,    -1,    -1,    -1,    50,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     3,     4,     5,
      -1,     7,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    44,    -1,    -1,     3,     4,     5,    50,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    43,    -1,    45,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,
      26,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      43,    -1,    45,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    33,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      33,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    33,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    -1,    50,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    43,    44,
      33,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
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
      11,    12,    13,    14,    15,    16,    17,    18,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    33,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      26,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    26,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    26,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    26,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    26,    -1,    -1,    -1,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    45,    -1,    -1,    -1,    26,
      50,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    45,    26,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    26,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    26,    -1,    -1,    -1,    50,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    43,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    43,    -1,    45,    -1,    -1,    26,
      -1,    50,    -1,    -1,    -1,    43,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    50,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    26,    -1,    -1,    -1,    -1,
      50,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    44,    -1,    -1,    -1,    -1,    -1,    50,
      26,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      43,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    33,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    33,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    44,    -1,    -1,     3,     4,
       5,    50,     7,    -1,    -1,    -1,    44,    33,    -1,    -1,
      -1,    -1,    50,    18,    19,    20,    21,    22,    23,    24,
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
      25,    -1,    27,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      43,    44,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    43,
      44,    26,     8,     9,    10,    11,    12,    13,    14,    15,
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
      -1,    -1,    -1,    44,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    43,    44,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    43,    44,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    26,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    26,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    44,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    43,    44,     8,     9,    10,
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
      -1,    -1,    -1,    44,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    26,    -1,    -1,    -1,    -1,    -1,    -1,
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
      15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    33,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    43,    33,     8,     9,    10,    11,    12,    13,
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
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33
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
      78,    27,    63,    67,    71,    66,    71,    44,    45,    71,
      44,    71,    80,    73,    73,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    71,    44,    50,    44,    50,    58,
      33,    33,    33,    44,    44,    44,    67,    67,    33,    44,
      33,    44,    50,    25,    56,    75,    75,    75,    44,    66,
      44,    66,    71,    68,    71,    71,    44,    44,    44,    68,
      44,    68,    44,    44,    35,    44,    68,    68,    68,    68,
      68,    35,    68,    29,    34,    47,    48,    49,     3,     4,
       5,     7,    19,    20,    21,    22,    23,    24,    25,    27,
      43,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    25,    45,    62,    34,    47,    48,    49,     3,
       4,     5,     7,    19,    20,    21,    22,    23,    24,    25,
      27,    43,    69,    70,    77,    78,    79,     3,     4,     5,
       7,    22,    23,    24,    25,    27,    43,    69,    70,    79,
      45,    59,    66,     3,     4,     5,     7,    19,    20,    21,
      22,    23,    24,    25,    27,    43,    69,    70,    72,    73,
      74,    75,    76,    77,    78,    79,     3,     4,     5,     7,
      19,    20,    21,    22,    23,    24,    25,    27,    43,    69,
      70,    72,    73,    74,    75,    76,    77,    78,    79,    50,
      43,     3,     4,     5,     7,    22,    23,    24,    25,    27,
      43,    69,    70,    76,    77,    78,    79,    25,    45,    66,
      43,    19,    20,    21,    76,    77,    78,     3,     4,     5,
       7,    19,    20,    21,    22,    23,    24,    25,    27,    43,
      69,    70,    72,    73,    74,    75,    76,    77,    78,    79,
      29,    31,    32,    37,    45,    46,    66,    67,    81,    82,
      83,    84,    30,    65,    43,    43,    43,    43,    43,    43,
      25,    66,    43,    10,    11,    12,    13,    14,    15,    16,
       8,     9,    17,    18,    26,    78,    45,    43,    43,    43,
      43,    43,    43,    25,    66,    43,    78,    43,    43,    43,
      25,    66,    43,    45,    62,    45,    43,    43,    43,    43,
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
      78,    27,    44,    44,    80,    45,    75,    75,    75,    78,
      78,    78,    27,    44,    44,    80,     3,     4,     5,     7,
      22,    23,    24,    25,    27,    43,    69,    70,    73,    76,
      77,    78,    79,    73,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    71,    75,    75,    75,    78,    78,    78,
      27,    44,    44,    80,     3,     4,     5,     7,    22,    23,
      24,    25,    27,    43,    69,    70,    73,    76,    77,    78,
      79,    73,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    71,    44,    44,    78,    78,    78,    27,    44,    44,
      80,    44,    44,    75,    75,    75,    75,    75,    75,    78,
      78,    78,    27,    44,    44,    80,     3,     4,     5,     7,
      22,    23,    24,    25,    27,    43,    69,    70,    73,    76,
      77,    78,    79,    73,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    71,    30,    63,    67,    71,    66,    71,
      45,    33,    33,    33,    44,    44,    44,    44,    43,    43,
      43,    25,    66,    43,    78,    33,    33,    33,    44,    44,
      44,    44,    44,    44,    44,    44,    33,    33,    33,    44,
      44,    44,    44,    43,    43,    43,    25,    66,    43,    78,
      33,    33,    33,    44,    44,    44,    44,    43,    43,    43,
      25,    66,    43,    78,    44,    44,    44,    44,    33,    33,
      33,    33,    33,    33,    44,    44,    44,    44,    43,    43,
      43,    25,    66,    43,    78,    67,    67,    33,    44,    33,
      75,    75,    75,    78,    78,    78,    27,    44,    44,    80,
      75,    75,    75,    75,    75,    75,    78,    78,    78,    27,
      44,    44,    80,    75,    75,    75,    78,    78,    78,    27,
      44,    44,    80,    75,    75,    75,    75,    75,    75,    78,
      78,    78,    27,    44,    44,    80,    44,    66,    44,    66,
      71,    68,    71,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    68,    44,    68,
      44,    44,    35,    44,    68,    68,    68,    68,    68,    35,
      68
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
      81,    81,    81,    82,    82,    82,    82,    82,    83,    83,
      84,    84
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
       5,     9,     7,     6,     6,     7,     7,     7,     2,     3,
       2,     3
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
#line 4154 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 74 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 4162 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 78 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 4171 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 89 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 4180 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 93 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 4186 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 97 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 4194 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 101 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 4203 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 108 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 4212 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 113 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4222 "clang.tab.c"
    break;

  case 13: /* def_declaracao: def_declaracao PARENTESE_E lista_tipo_parametro PARENTESE_D  */
#line 119 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-1].no);
                            (yyvsp[-3].simbolo)->funcao.parametros_no = novo_no->parametros_no;
                            (yyvsp[-3].simbolo)->funcao.parametros = novo_no->parametros;
                            liberar_ast((yyvsp[-1].no));
                            (yyval.simbolo) = (yyvsp[-3].simbolo);
                        }
#line 4234 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 129 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 4240 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 130 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 4246 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 131 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 4252 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 132 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 4258 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 137 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4267 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 145 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4276 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 150 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4285 "clang.tab.c"
    break;

  case 22: /* lista_inicializar_atrib: def_declaracao  */
#line 157 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4293 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA def_declaracao  */
#line 161 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4301 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 166 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4307 "clang.tab.c"
    break;

  case 25: /* declaracao_var: def_declaracao_tipo lista_inicializar_atrib PONTO_E_VIRGULA  */
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

                            simbolos_no = 0;
                            simbolos = NULL;
                        }
#line 4327 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 185 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4333 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 186 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4339 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 190 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4347 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 194 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4356 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 200 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4362 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 201 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4368 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 204 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4374 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 205 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4380 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 208 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4386 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 209 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4392 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 210 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4398 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 211 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4404 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 212 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4410 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 215 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4416 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 216 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4422 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 217 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4428 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 221 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4436 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 225 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4444 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 229 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4450 "clang.tab.c"
    break;

  case 45: /* expressao_principal: TOKEN_CADEIA  */
#line 231 "parser/clang.y"
                        { (yyval.no) = novo_no_ast_constante(TIPO_CADEIA, (yyvsp[0].valor)); }
#line 4456 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 232 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4462 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_logica  */
#line 236 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4468 "clang.tab.c"
    break;

  case 48: /* expressao_atribuicao: expressao_operacao ATRIBUICAO expressao_atribuicao  */
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
#line 4496 "clang.tab.c"
    break;

  case 49: /* expressao_logica: expressao_relacional  */
#line 265 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4502 "clang.tab.c"
    break;

  case 50: /* expressao_logica: expressao_logica OP_E expressao_relacional  */
#line 267 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4510 "clang.tab.c"
    break;

  case 51: /* expressao_logica: expressao_logica OP_OU expressao_relacional  */
#line 271 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4518 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_aritmetica  */
#line 277 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4524 "clang.tab.c"
    break;

  case 53: /* expressao_relacional: expressao_relacional OP_MENOR_QUE expressao_aritmetica  */
#line 279 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4532 "clang.tab.c"
    break;

  case 54: /* expressao_relacional: expressao_relacional OP_MAIOR_QUE expressao_aritmetica  */
#line 283 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4540 "clang.tab.c"
    break;

  case 55: /* expressao_relacional: expressao_relacional OP_IGUALDADE expressao_aritmetica  */
#line 287 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4548 "clang.tab.c"
    break;

  case 56: /* expressao_relacional: expressao_relacional OP_MAIOR_IGUAL expressao_aritmetica  */
#line 291 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4556 "clang.tab.c"
    break;

  case 57: /* expressao_relacional: expressao_relacional OP_MENOR_IGUAL expressao_aritmetica  */
#line 295 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4564 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_conjunto  */
#line 300 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4570 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_aritmetica OP_SOMA expressao_conjunto  */
#line 302 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4578 "clang.tab.c"
    break;

  case 60: /* expressao_aritmetica: expressao_aritmetica OP_SUBTRACAO expressao_conjunto  */
#line 306 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4586 "clang.tab.c"
    break;

  case 61: /* expressao_aritmetica: expressao_aritmetica OP_DIVISAO expressao_conjunto  */
#line 310 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4594 "clang.tab.c"
    break;

  case 62: /* expressao_aritmetica: expressao_aritmetica OP_MULTIPLICACAO expressao_conjunto  */
#line 314 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4602 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: expressao_operacao  */
#line 319 "parser/clang.y"
                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4608 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 321 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4616 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 325 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4624 "clang.tab.c"
    break;

  case 66: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 329 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4632 "clang.tab.c"
    break;

  case 68: /* expressao_operacao: operadores_expressao expressao_io  */
#line 337 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_operacao((yyvsp[-1].valor).intval, (yyvsp[0].no));
                        }
#line 4640 "clang.tab.c"
    break;

  case 70: /* expressao_io: expressao_chamada  */
#line 346 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4646 "clang.tab.c"
    break;

  case 71: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 348 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                            // pular +1 linha
                        }
#line 4660 "clang.tab.c"
    break;

  case 72: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 358 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                        }
#line 4673 "clang.tab.c"
    break;

  case 73: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 367 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4681 "clang.tab.c"
    break;

  case 74: /* expressao_chamada: expressao_principal  */
#line 372 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4687 "clang.tab.c"
    break;

  case 76: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 375 "parser/clang.y"
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
#line 4715 "clang.tab.c"
    break;

  case 77: /* expressao_lista_param: expressao_atribuicao  */
#line 401 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 4723 "clang.tab.c"
    break;

  case 78: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 405 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 4732 "clang.tab.c"
    break;

  case 79: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 412 "parser/clang.y"
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
#line 4760 "clang.tab.c"
    break;

  case 80: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 436 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 4768 "clang.tab.c"
    break;

  case 81: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 440 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4776 "clang.tab.c"
    break;

  case 82: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 444 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4784 "clang.tab.c"
    break;

  case 83: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao_var expressao_declaracao PARENTESE_D tipos_expressao  */
#line 450 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4792 "clang.tab.c"
    break;

  case 84: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_declaracao expressao_declaracao PARENTESE_D tipos_expressao  */
#line 454 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4800 "clang.tab.c"
    break;

  case 85: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao_var expressao_declaracao expressao PARENTESE_D tipos_expressao  */
#line 458 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4808 "clang.tab.c"
    break;

  case 86: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_declaracao expressao_declaracao expressao PARENTESE_D tipos_expressao  */
#line 462 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4816 "clang.tab.c"
    break;

  case 87: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 466 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4824 "clang.tab.c"
    break;

  case 88: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 472 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4832 "clang.tab.c"
    break;

  case 89: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 476 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 4840 "clang.tab.c"
    break;

  case 90: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 482 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4848 "clang.tab.c"
    break;

  case 91: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 486 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 4856 "clang.tab.c"
    break;


#line 4860 "clang.tab.c"

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

#line 491 "parser/clang.y"


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
