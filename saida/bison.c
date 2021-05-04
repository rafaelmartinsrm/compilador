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
  YYSYMBOL_expressao_operacao = 75,        /* expressao_operacao  */
  YYSYMBOL_operadores_expressao = 76,      /* operadores_expressao  */
  YYSYMBOL_expressao_io = 77,              /* expressao_io  */
  YYSYMBOL_expressao_chamada = 78,         /* expressao_chamada  */
  YYSYMBOL_expressao_lista_param = 79,     /* expressao_lista_param  */
  YYSYMBOL_expressao_decisao = 80,         /* expressao_decisao  */
  YYSYMBOL_expressao_iteracao = 81,        /* expressao_iteracao  */
  YYSYMBOL_expressao_composta = 82,        /* expressao_composta  */
  YYSYMBOL_expressao_return = 83           /* expressao_return  */
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
#define YYLAST   13418

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1047

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
       0,    67,    67,    73,    77,    84,    85,    88,    93,    96,
     100,   107,   112,   118,   126,   129,   130,   131,   132,   136,
     144,   149,   156,   160,   166,   167,   185,   186,   189,   193,
     200,   201,   204,   205,   208,   209,   210,   211,   212,   215,
     216,   217,   220,   224,   228,   230,   232,   236,   237,   263,
     264,   268,   272,   279,   280,   281,   282,   285,   286,   290,
     294,   295,   298,   299,   303,   307,   314,   315,   321,   325,
     326,   336,   345,   351,   352,   353,   379,   383,   390,   414,
     418,   422,   428,   432,   436,   442,   446,   452,   456
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
     305
};
#endif

#define YYPACT_NINF (-384)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     637,    10,   123,   156,   187,    12,    11,   -10,   355,    32,
      37,    41,  -384,    48,  3580,    53,   326,    63,   354,   -13,
     432,  1079,  6596,  6658,   652,   -18,    -8,    30,    50,    73,
      85,  6759,    26,    86,   105,   109,   122,  1392,  3646,   267,
      84,  3825,  3875,  3947,   289,  4258,  4310,  6954,  7182,   895,
     940,    17,  9709, 10877,  9731,  1714,  9773,  9787,  4646,  4703,
    4750,  4924,   552,   102,    36, 11856, 11856, 11856,  1780,  1780,
    1780,   153,   220, 11878, 11897,   214,  4974,   986,   756,   107,
    5046,  5289, 11919,  6268, 11938, 11938, 11938, 11938, 11938, 11938,
   11938, 11938, 11938, 11938, 11919,  9829,   337,   382,   396,   481,
     563,   120,   770,    78,   178,   189,   195,   171,   186,   210,
    7292,  5568,   242,   260,   644,     3,  9243,  5357,  1063,  9843,
     681,   737,  1162,  1192,  1202, 10899, 10919,   108, 10941,   112,
   10961,   246,  1209,   469,   110,   565,   675,   478, 11960, 11960,
   11960,  9885,  9899,  9941,  7841, 11979, 11979,  8401, 11979,  9955,
    1392,   758,   772,   253,   269,   271,   279,   313,   333,   173,
     359,   802, 10983, 11003, 11025,  8435,  8435,  8435,  8435,  8401,
    5409,  5745,  5802,  5848,   539,  8435,  5936,  6030,    87,   100,
     139,   207,   496,  9257,  9293,  9307,   247,   284,   368,   423,
     442,   524,  9343,   463,  1392,  9357,  9393,   853,   863,   293,
   11045, 11067,  9997,  2058, 10011, 10033,   856,  6079,  1212,   256,
     272,   294,   310,    40,    66,    70,    71,   527,   537,   540,
     577,   600,   608,   216,   476,  1392,   250,   283,  2347,   567,
     583,   222,   506,   619,   677,   612,   616,   650,   685,   710,
    1392,   719,   746,   716, 12804, 12818, 12839, 12853,   730,   736,
     739,   771,   782,   793, 12874,   750,  1392,   820,   454,  8469,
    8503, 12888, 12909,   827,   405,  1284,  3331,  6161,  2413,  7790,
   13077,   308,   352,   669,   943,   814,   826,   828,   839,   841,
     866,  1289,   890,  1392,  2044,  2677,   357,    13, 10047, 10083,
    7513,  2691,  9407,  9443,  1392,   585,   755, 10069, 10091, 10133,
     869,   883,   885, 10147,   921,  1392, 10189, 10203, 11081,  2980,
   11103, 11123,   804,  6321,   899,   901,   932,  8537,  3315,  1222,
    8571,  8605,  8639,  8673,  8707,   667,   933,   934,   945,   962,
    1780,   963,  6434,   965,   973,   984,  1000,  4362,  1238,  1007,
    1019,  1023,  1034,  1035,  4779,  6617, 12077, 12090,  1039,  1043,
    1067,  1068,  1080,  1083, 12126,  1008,  1392, 12139, 12175,  1105,
       8,  4831,  9565, 12237,  3046, 12273, 12286,  6516,  1124,  1125,
    1128,   729,  5461,  1266,   813,  1260,  1338,  1412,  1634,  6813,
    6859, 11856, 11856, 11856,  1780,  1780,  1780,   848,   918, 11582,
   12001, 12001, 12001, 12001, 12001, 12001, 12001, 12001, 12001, 12001,
    1392, 10245,  6913, 11856, 11856, 11856,  1780,  1780,  1780,  1130,
     948, 11601,  1160,  1780,  1780,  1780,  1167,   951, 11633, 11856,
   11856, 11856,  1780,  1780,  1780,  1168,   955,  8741,  8775,  1269,
   11652, 12020, 12020, 12020, 12020, 12020, 12020, 12020, 12020, 12020,
   12020, 11878, 13091, 11856, 11856, 11856,  1780,  1780,  1780,  1187,
     960, 11684, 12042, 12042, 12042, 12042, 12042, 12042, 12042, 12042,
   12042, 12042, 11897,  9457,   985,   875,  1003,  1010,  1780,  1780,
    1780,  1188,  1011, 11703, 11145,  8809,  7049,   220, 11878, 11897,
    8843,  1270,  8877,   850,  1012,  1021, 11856, 11856, 11856,  1177,
    1194,  7107,   220, 11878, 11897,  1196,  1286,  1207, 11856, 11856,
   11856,  1780,  1780,  1780,  1214,  1022, 11735, 12061, 12061, 12061,
   12061, 12061, 12061, 12061, 12061, 12061, 12061, 11979, 12322,  1681,
    7423,   220, 11878, 11897,  1747,  1295,  1971,  7471,  1183,  1216,
    1225,  1217,  1219,  1226,  9479,  9493, 10259,  1026, 10281, 10295,
   10303, 10317,  1228,  1248,  1275, 10339,  1249,  1392, 10353, 10361,
    1033, 11165,  3344, 11187, 11201,  1037,  1059, 11209, 11223,   322,
   11245,   448, 11259,   453,  1062,  1253,  1306,  1309,  1297,  1303,
    1304,   325,   339,  1321,  1071,  1315,  1317,  1329,   768,   780,
    1335,  1081,  1354,  1360,  1361,  1346,  1347,  1348, 12923, 12944,
    8911, 13112,  1084, 12930, 12965, 12979, 12986,  1351,  1352,  1356,
   13000,  1382,  1392, 13021, 13035,  1375,  6106,  3613, 13168, 13202,
    1385,  1393, 13216, 13222,   690, 13236,   775, 13256,   840,  1394,
    1395,  1396,  1405,  1399,  1401,  1402,  4437,  5877,  9529,  1091,
    1002,  1439,  5507,  6391,  1404,  1410,  1411,  7382,  1436,  1392,
    9543,  9579,   410, 10397,  3679, 10405, 10441,   411,   440, 10449,
   10485,   116, 10493,   203, 10529,   251,   460,   920,   924,  1418,
    1419,  1420, 10537, 10551, 11267,  1093,  8945,  5568,  1437,  1440,
    1096,   488,  8979,   886,   929,  1441,  1442,  1443,  1428,  5568,
    1445,  1447,  1098,   498,  1444,  1453,  1456,  1457,  1446,  1454,
    1467, 12188, 12224, 12335,  1100, 12358, 12371, 12379, 12394,  1469,
    1476,  1477, 12415,  1466,  1392, 12430, 12438,  1478,  9601,  3911,
   12572, 12580,  1482,  1483, 12595, 12616,    34, 12631,   199, 12639,
     298,  1491,  2267,  5568,  1459,  1508,  1101,   547,  2314, 11960,
   11960, 11960, 10593, 10607, 10629, 10643,  1780,  1780,  1780,  1475,
    1119, 11754, 11281, 11960, 11960, 11960,  1509,  1510,  1511,  1524,
    1515,  1516,  1529,  1530, 11960, 11960, 11960, 13126, 13147, 13161,
   13182,  1780,  1780,  1780,  1553,  1120, 11786, 13270, 11960, 11960,
   11960,  9587,  9623,  9637,  9673,  1780,  1780,  1780,  1554,  1122,
   11805, 10679, 11317, 11331, 11373, 11387,  7841, 11979, 11979,  9013,
   11979, 11960, 11960, 11960,  7841, 11979, 11979,  9047, 11979, 11960,
   11960, 11960, 12451, 12487, 12500, 12536,  1780,  1780,  1780,  1555,
    1137, 11837, 12652,  7841, 11979, 11979,  8401, 11979,  1537,  1538,
    1540,  1541,  1542,  1546, 10665, 10687, 11429,  1141,  1547,  1548,
    1549,  1550,  1551,  1556,  1557,  1561,  1562, 13042, 13056, 13276,
    1142,  1563,  1570,  1571,  1584,  1585,  1586,  9687,  9723, 10723,
    1179,  1590,  1591,  1592,  7699,  1594,  1598,  1600,   404,  5689,
    1324,   622,   859,  1200,  1935,  2568,  3201,  1601,  1602,  1611,
    1621,  1623,  1624,  1625,  7745,  1627,  1628,  1629,   141,  6145,
    1326,   344,   421,   457,   483,   485,   530,  1630,  1631,  1632,
    1640,  1644,  1646,  1647, 12523, 12559, 12675,  1181,  1648,  1649,
    1658,  2380,  1660, 11437, 11445, 11481, 11489, 11497, 11533, 11541,
    1616,  1645,  1650, 13290, 13310, 13324, 13330, 13344, 13364, 13378,
   10731, 10767, 10775, 10811, 10819, 10855, 10863,  5568,  5568,  5568,
    4206,  7901,   220, 11878, 11897,  7993,  1327,  8027,  5568,  9013,
    1665,  1670,  1671,  7841,  7841,  7841,   546,  7947,   220, 11878,
   11897,   568,  1330,   572,  7841,  9047, 12688, 12696, 12711, 12732,
   12747, 12755, 12768,  8401,  8401,  8401,  8401,  8401,  9081,  9115,
    9149,  8061,  5568,  1688,  1693,  1184,   575,  8095,  9183,  8129,
    1679,  1691,  1694,   574,  5568,  1697,  1709,  1189,   648,   601,
    1695,   620,  2604,  2900,  2947,  3013,  3237,  7841, 11979, 11979,
    9013, 11979,  5568,  7841, 11979, 11979,  9047, 11979,  7841,  8401,
    1696,  1698,  1699,  8163,  1700,  9217,  1701,  1702,  1703,   645,
    1704,  1706,  3533,  9013,  9013,  9013,  9013,  9013,  9047,  9047,
    9047,  9047,  9047,  8197,  8231,  8265,  8299,  8333,   661,   696,
     697,   706,   708,  9013,  9047,  8367,   727
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -384,  -384,  -384,  -276,     9,  -275,   -26,     2,  1234,    -2,
     -30,     1,   -40,  -172,   129,  6353,  6244,  1742,  2375,    99,
    6231,  5206,  5785,  4740,  3641,  4107,  1109,  3008,  -383,  6616,
    6666,    -7,  6868
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    98,   257,   100,    18,    40,   259,    10,
      19,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,   121,    58,
      59,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    11,     8,    80,    13,   380,   537,    11,     8,     7,
     208,    -2,    12,    14,    78,     7,   507,   508,   509,   466,
     467,   452,   453,   454,    65,    84,    85,    86,   574,   -17,
     148,    63,   -20,   -17,    66,   581,    64,    -3,   102,     1,
     -49,   -21,   -56,   -56,   -56,    71,   -30,   592,    -4,   484,
     485,   -49,   -30,   -19,   -17,   206,   -49,     2,     3,     4,
     -20,   -49,   -49,   -24,   101,    -3,   -49,   -39,   629,   -21,
     111,    99,    67,   260,   258,   137,    -4,   -56,   -20,   -20,
     -20,   -19,   -39,    -3,    -3,    -3,   -85,   -21,   -21,   -21,
     665,   -24,    68,   -41,    -4,    -4,    -4,   -40,   -45,   -19,
     -19,   -19,   -25,   206,   323,   138,   -17,   -86,   -41,   -24,
     -24,   -24,   -40,   -45,   -85,    69,   -56,   -56,   -56,   -18,
     -54,   -54,   -54,   694,   -56,   -56,   -56,    70,   207,   151,
     -25,   -17,   -85,   -85,   -85,   -86,   197,   342,   101,   312,
     377,   476,   -18,   -56,   -18,   152,   -18,    72,   -25,   -25,
     -25,    73,   -56,   -86,   -86,   -86,   -54,   -56,   -15,   -56,
     491,   -54,   377,    -8,    74,   -56,    75,   -18,    77,    -8,
     -32,   112,   113,   115,   110,   -15,   -79,   -79,   -79,   -15,
     -79,   118,   120,   -15,   -32,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   132,   -79,   520,   -79,   -79,   -79,   -79,
     -15,   -79,   168,   114,   -79,   -62,   -16,   -54,   -54,   -54,
     -16,   -54,   -54,   -54,   141,   -79,   139,   -79,   -79,   -79,
     -79,   -79,   140,   244,   245,   246,   -16,   247,   429,   142,
     -54,   -16,    24,   248,   249,   250,   251,   252,   253,   254,
     319,   255,   -54,   -42,   157,   158,   -54,   160,     1,   161,
     427,   -16,   -54,   143,   -55,   -55,   -55,   116,   -42,   -55,
     -55,   -55,   256,   294,   -39,   -39,     2,     3,     4,   145,
      20,    21,    22,   338,    23,   -17,   373,   -43,   -55,    24,
      25,    26,    27,    28,    29,    30,    31,   146,    32,   381,
     -55,   -18,   -43,   197,   -55,   -55,   162,   101,   373,   -17,
     -55,   390,   391,   392,    99,   -17,   -55,   -55,   -55,    37,
     -73,    76,   163,   -15,   164,   -18,   -39,   -39,   -39,   -39,
     -39,   -18,   165,   388,   197,   411,   382,   101,   -39,   -16,
     -56,   -56,   -56,    81,    99,   -39,   -49,   -15,    82,   197,
      80,   -55,   -49,   -15,   -39,   -39,   -39,   -39,   -39,   -11,
     -39,   -39,   -44,   -16,   410,   197,   166,   -39,   827,   -16,
     -41,   -41,   -41,   -41,   -41,   -56,   -46,   -44,   -11,   417,
     -11,   -56,   -41,   -34,    16,   -11,   167,    -7,    -8,   -41,
      -5,   -46,   197,   840,   -47,   426,    -5,   -34,   -41,   -41,
     -41,   -41,   -41,   464,   -41,   -41,    62,   850,   -22,    17,
     -47,   -41,   169,   -22,   197,   -12,   -47,   -32,   -32,   -32,
     383,   -32,   450,   431,   432,   433,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -12,   -32,   -12,   -32,   897,   -32,
     -32,   -12,   -49,   -32,   472,   -32,    80,   -52,   -51,   133,
     -39,   -39,   -39,   -39,   -39,   134,   -32,   481,   -32,   -32,
     954,    80,   -39,   -52,   -51,   197,   -54,   -54,   -54,   -52,
     -51,   -55,   -55,   -55,   -79,   384,   496,   -50,   -39,   -39,
     -39,   -39,   -39,    16,   -39,   667,   -39,    -8,   260,   258,
      80,   -39,   387,   -50,   385,   505,   -35,   -48,   120,   -50,
     679,   -54,   -14,   260,   258,   409,   -55,   -54,   428,   564,
     -35,   525,   -55,   -48,   -39,   -39,   -39,   -39,   -39,   -48,
     120,   -14,   -38,   -14,   -36,   790,   -39,   120,   -14,   723,
     325,    -7,   260,   258,    -9,   798,   -38,    -7,   -36,   120,
      -9,   -30,   -39,   -39,   -39,   -39,   -39,   -30,   -39,   -39,
     619,   -30,   -81,   -81,   -81,   -39,   -81,   -30,   -41,   -41,
     120,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -37,
     -81,   656,   -81,   -81,   -81,   -81,   386,   -81,   175,   403,
     -81,    96,   120,   -37,   817,   -85,   668,   669,   671,   404,
     209,   -81,   405,   -81,   -81,   -81,   -81,   -81,   -13,   -85,
     -30,   680,   681,   683,   -66,    97,   -30,   -87,   210,   211,
     212,   -33,  1001,   -86,    96,   120,   135,   -13,   670,   -13,
     -69,   -87,   136,   209,   -13,   -33,   721,   -86,   -30,   406,
     724,   725,   727,   682,   -30,   -34,   -34,   -34,   465,   -34,
     -88,   210,   211,   212,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   407,   -34,   -88,   -34,   197,   -34,   -34,  1008,
     408,   -34,   726,   -34,   413,   -68,   -68,   -68,   414,   -68,
     323,   -40,   -40,   -81,   -34,     1,   -34,   -34,   -68,   -68,
     -68,   -68,   323,   -68,  1031,  1007,   740,   -40,   -40,   -40,
     -40,   -40,   931,     2,     3,     4,    96,   147,   -79,   -40,
     -82,   -30,   415,   294,   -68,   209,   -40,   -30,   -56,   -56,
     -56,   197,   947,   209,   -82,   -40,   -40,   -40,   -40,   -40,
     483,   -40,   -40,   210,   211,   212,   323,   -56,   -40,   -45,
     -45,   210,   211,   212,   -76,   -83,   -84,   -42,   -42,   416,
     -76,   765,   -32,   -32,   -32,   -78,   -32,  1044,   197,   -83,
     -84,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -78,
     -32,   -81,   -32,   -32,   -32,   -32,   -80,   -32,   -32,   -69,
     -32,   -43,   -43,   -39,   -39,   -39,   -39,   -39,   779,   425,
     -80,   -32,   419,   -32,   -32,   -32,   -32,   -32,   420,   342,
     149,   421,   865,   -54,   -54,   -54,   150,   342,   418,   -73,
     885,   -39,   -39,   -39,   -39,   -39,   319,   -39,   295,   -39,
     -22,    -6,   -54,   197,   -39,   -22,   342,    -6,   319,   377,
     -44,   -44,   295,   422,   -23,   -10,   -34,   -34,   -34,   -23,
     -34,   -10,   -46,   -46,   423,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   810,   -34,   424,   -34,   -34,   -34,   -34,
     120,   -34,   -34,   313,   -34,   -77,   -11,   -11,   -55,   -55,
     -55,   -77,   319,   -11,   -47,   -34,   443,   -34,   -34,   -34,
     -34,   -34,   -79,   -79,   -79,   120,   -79,   -55,   444,   534,
     445,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   120,
     -79,   446,   -79,   447,   -79,   -79,   852,   853,   938,   867,
     -79,    80,   -12,   -12,   872,   873,   -30,   887,   -11,   -12,
     -11,   -79,   -30,   -79,   -79,   -11,   -47,    80,   448,   449,
     120,   468,   -47,   899,   900,   338,   902,   -12,   860,   -12,
     323,   323,   323,   338,   -12,   469,   880,   470,   -14,   -14,
     972,   323,   865,   260,   258,   -14,   342,   342,   342,   -30,
     471,   477,   338,   478,   -30,   373,   984,   342,   885,   260,
     258,   -45,   -45,   -45,   -45,   -45,   377,   377,   377,   377,
     377,   535,   -14,   -45,   -14,   323,   -13,   294,   -13,   -14,
     -45,   -13,   -13,   -13,   479,   486,   487,   323,   -13,   -45,
     -45,   -45,   -45,   -45,   -47,   -45,   -45,   488,   936,   -47,
     342,   572,   -45,   865,   579,   323,   342,   294,   589,   885,
     294,   342,   377,   627,   294,   -62,   -66,   492,   952,   294,
     -39,   -39,   -39,   -39,   -39,   493,   865,   865,   865,   865,
     865,   885,   885,   885,   885,   885,   494,   504,   -31,   -39,
     117,   973,   974,   976,   -31,    82,   865,   885,   -39,   -39,
     -39,   -39,   -39,   -32,   -39,   -39,   657,   985,   986,   988,
     -34,   -39,   134,   658,   663,   673,   319,   319,   319,   136,
     294,   134,   -35,   975,   674,   692,   -38,   319,   860,   735,
     136,   294,   338,   338,   338,   150,   -52,   -36,   -37,   987,
     -51,   498,   -52,   338,   880,   499,   -51,   -41,   -41,   -41,
     -41,   -41,   373,   373,   373,   373,   373,  1011,  1012,   -41,
    1014,   319,   -50,  1017,  1018,   -48,  1020,   -31,   -50,   500,
     501,   -48,   -31,   319,   749,   -41,   -41,   -41,   -41,   -41,
     150,   -41,   502,   -41,   753,   503,   338,   760,   -41,   860,
     150,   319,   338,   150,   774,   880,   785,   338,   373,   789,
     150,   797,   150,   805,   816,   294,   204,   294,   -47,   150,
     294,   571,   860,   860,   860,   860,   860,   880,   880,   880,
     880,   880,   825,   838,    95,   848,   521,   522,   294,   294,
     523,   294,   860,   880,   229,   229,   229,   107,   108,   109,
     895,   269,   269,   292,   909,   919,   294,   -67,   578,   588,
     150,   150,   204,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   -35,   -35,   -35,   -52,   -35,   626,   662,
     729,   -52,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -67,   -35,   926,   -35,   962,   -35,   -35,  1000,   150,   -35,
     150,   -35,  1006,   294,     9,   691,   -51,   -85,   294,   -87,
       9,   -51,   -35,   730,   -35,   -35,   -50,   331,   331,   331,
     -33,   -50,   731,   -48,   365,   365,   402,   365,   -48,   204,
     732,    64,   733,   -35,   -35,   -35,   482,   -35,   739,   734,
     736,    82,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     743,   -35,   497,   -35,   -35,   -35,   -35,    82,   -35,   -35,
     737,   -35,   -53,   -53,   -53,   434,   435,   -42,   -42,   -42,
     -42,   -42,   -35,   204,   -35,   -35,   -35,   -35,   -35,   -42,
     526,   -53,   401,   590,   672,    82,   -42,   738,    64,    82,
     436,   437,   438,   439,   440,   -42,   -42,   -42,   -42,   -42,
     684,   -42,   -42,   744,   204,    82,   745,   412,   -42,   728,
     746,   -38,   -38,   -38,    82,   -38,   747,   748,   -74,   204,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   750,   -38,
     751,   -38,   -38,   -38,   -38,   204,   -38,   -38,   937,   -38,
     953,   977,   752,    82,   989,    82,    82,   442,   -74,    82,
     -38,   754,   -38,   -38,   -38,   -38,   -38,   755,   756,   757,
     758,   759,   204,   761,   762,   182,   183,   184,   763,   185,
     463,   764,   -52,   204,    24,   186,   187,   188,   189,   190,
     191,   192,   -51,   193,   204,   -36,   -36,   -36,   474,   -36,
     -50,   -48,   768,   769,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   770,   -36,   194,   -36,   -36,   -36,   -36,   489,
     -36,   -36,   771,   -36,   772,   773,   775,   -41,   -41,   -41,
     -41,   -41,   776,   777,   -36,   778,   -36,   -36,   -36,   -36,
     -36,   782,   783,   784,   787,   204,   -41,   788,   791,   792,
     793,   -86,   795,   518,   796,   -41,   -41,   -41,   -41,   -41,
     799,   -41,   -41,   800,   801,   809,   814,   -88,   -41,   802,
     229,   229,   229,   531,   532,   533,   824,   803,   204,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   204,
     804,   806,   229,   229,   229,   568,   569,   570,   807,   808,
     204,   -52,   575,   576,   577,   -51,   -50,   204,   229,   229,
     229,   585,   586,   587,   -48,   815,   -72,   -71,   -70,   204,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     269,   -75,   229,   229,   229,   623,   624,   625,   -72,   -71,
     204,   645,   645,   645,   645,   645,   645,   645,   645,   645,
     645,   292,   -70,   -75,   837,   847,   894,   659,   660,   661,
     903,   904,   204,   905,   906,   907,   269,   269,   292,   908,
     910,   911,   912,   913,   914,   229,   229,   229,     0,   915,
     916,   269,   269,   292,   917,   918,   920,   229,   229,   229,
     688,   689,   690,   921,   922,   204,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   710,   365,   923,   924,   925,
     269,   269,   292,   927,   928,   929,   932,   -37,   -37,   -37,
     933,   -37,   934,   -63,   939,   940,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   941,   -37,   204,   -37,   -37,   -37,
     -37,   742,   -37,   -37,   942,   -37,   943,   944,   945,   948,
     949,   950,   -64,   955,   956,   957,   -37,   -65,   -37,   -37,
     -37,   -37,   -37,   958,   -85,   -85,   -85,   959,   -85,   960,
     961,   963,   964,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   965,   -85,   967,   -85,   -85,   -85,   -85,   -63,   -85,
     -85,   204,   -85,   -64,   -65,   998,   767,    20,    21,    22,
     999,    23,   -82,   -85,  1004,   -85,   -85,   -85,   -85,   -85,
      28,    29,    30,    31,   -83,    32,  1005,   -84,   -78,  1023,
       0,  1024,  1025,  1027,  1028,  1029,  1030,  1032,   204,   -80,
     -87,   -87,   -87,   781,   -87,     0,    37,     0,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,     0,
     -87,   -87,   -87,   -87,     0,   -87,   -87,     0,   -87,   195,
       0,     0,     0,   231,   232,   233,     0,   234,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   235,   236,   237,   238,
       0,   239,     0,     0,     0,     0,     0,   226,   226,   226,
     241,   241,   241,   204,   261,   261,   284,     0,   812,     0,
       0,     0,   240,     0,     0,   195,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,     0,     0,   331,   331,
     331,     0,     0,     0,     0,   821,   822,   823,     0,     0,
     204,     0,   331,   331,   331,     0,     0,     0,     0,     0,
       0,     0,     0,   331,   331,   331,     0,     0,     0,     0,
     834,   835,   836,     0,     0,   204,     0,   331,   331,   331,
     241,   241,   241,     0,   844,   845,   846,   357,   357,   204,
     357,     0,   195,     0,     0,     0,   365,   365,     0,   365,
     331,   331,   331,     0,   365,   365,     0,   365,   331,   331,
     331,     0,     0,     0,     0,   891,   892,   893,     0,     0,
     204,     0,     0,   365,   365,     0,   365,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195,     0,   -38,   -38,
     -38,     0,   -38,     0,     0,   195,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,     0,   -38,     0,
     -38,   -38,     0,     0,   -38,     0,   -38,   195,     0,     0,
     226,     0,     0,     0,   -33,   -33,   -33,   -38,   -33,   -38,
     -38,     0,   195,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,   -33,   -33,   -33,   -33,   195,   -33,
     -33,     0,   -33,     0,     0,     0,     0,     0,     0,     0,
     261,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,     0,   284,     0,     0,   195,     0,     0,     0,
       0,   269,   269,   292,     0,     0,     0,   195,     0,     0,
       0,   306,   -43,   -43,   -43,   -43,   -43,   269,   269,   292,
       0,   182,   183,   184,   -43,   185,     0,     0,     0,     0,
       0,   -43,   241,     0,   189,   190,   191,   192,     0,   193,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,
       0,     0,     0,   -43,     0,     0,     0,     0,   195,     0,
     194,     0,     0,     0,     0,     0,   357,   365,   365,     0,
     365,     0,     0,   365,   365,     0,   365,     0,     0,     0,
       0,     0,     0,   226,   226,   226,   241,   241,   241,     0,
       0,   195,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   195,     0,     0,   226,   226,   226,   241,   241,
     241,     0,     0,   195,     0,   241,   241,   241,     0,     0,
     195,   226,   226,   226,   241,   241,   241,     0,     0,     0,
       0,     0,   195,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   261,     0,   226,   226,   226,   241,   241,
     241,     0,     0,   195,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   284,     0,     0,     0,     0,     0,
     241,   241,   241,     0,     0,   195,     0,     0,     0,   261,
     261,   284,     0,     0,     0,     0,     0,     0,   226,   226,
     226,     0,     0,     0,   261,   261,   284,     0,     0,     0,
     226,   226,   226,   241,   241,   241,     0,     0,   195,   705,
     705,   705,   705,   705,   705,   705,   705,   705,   705,   357,
       0,     0,     0,   261,   261,   284,     0,     0,     0,     0,
     -86,   -86,   -86,     0,   -86,     0,     0,     0,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,     0,   -86,   195,
     -86,   -86,   -86,   -86,   548,   -86,   -86,     0,   -86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -86,
       0,   -86,   -86,   -86,   -86,   -86,     0,   -88,   -88,   -88,
       0,   -88,     0,     0,     0,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,     0,   -88,     0,   -88,   -88,   -88,
     -88,     0,   -88,   -88,   195,   -88,     0,     0,     0,   603,
     213,   214,   215,     0,   216,     0,   -88,     0,   -88,   -88,
     -88,   -88,   -88,   220,   221,   222,   223,     0,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   195,     0,   -79,   -79,   -79,   640,   -79,     0,   225,
       0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,   -79,     0,   -79,   -79,   -79,   -79,     0,   -79,   966,
       0,   -79,   196,     0,     0,     0,   244,   245,   246,     0,
     247,     0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   251,
     252,   253,   254,     0,   255,     0,     0,     0,     0,     0,
     227,   227,   227,   242,   242,   242,   195,   262,   262,   285,
       0,   705,     0,     0,     0,   256,     0,     0,   196,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,     0,
       0,   241,   241,   241,     0,     0,     0,     0,   241,   241,
     241,     0,     0,   195,     0,   241,   241,   241,     0,     0,
       0,     0,     0,     0,     0,     0,   241,   241,   241,     0,
       0,     0,     0,   241,   241,   241,     0,     0,   195,     0,
     241,   241,   241,   242,   242,   242,     0,   241,   241,   241,
     358,   358,   195,   358,     0,   196,     0,     0,     0,   357,
     357,     0,   357,   241,   241,   241,     0,   357,   357,     0,
     357,   241,   241,   241,     0,     0,     0,     0,   241,   241,
     241,     0,     0,   195,     0,     0,   357,   357,     0,   357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,   -36,   -36,   -36,     0,   -36,     0,     0,   196,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,   -36,     0,   -36,   -36,     0,     0,   -36,     0,   -36,
     196,     0,     0,   227,     0,     0,     0,   -82,   -82,   -82,
     -36,   -82,   -36,   -36,     0,   196,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   -82,     0,   -82,   -82,   -82,
     -82,   196,   -82,   -82,     0,   -82,     0,     0,     0,     0,
       0,     0,     0,   262,     0,     0,   -82,     0,   -82,   -82,
     -82,   -82,   -82,     0,     0,     0,     0,     0,   196,     0,
       0,     0,     0,     0,     0,     0,   285,     0,     0,   196,
       0,     0,     0,     0,   261,   261,   284,     0,     0,     0,
     196,     0,     0,     0,   307,   -73,   -73,   -73,   -73,   -73,
     261,   261,   284,     0,   271,   272,   273,   -73,   274,     0,
       0,     0,     0,     0,   -73,   242,     0,   278,   279,   280,
     281,     0,   282,   -73,   -73,   -73,   -73,   -73,     0,   451,
     -73,     0,     0,     0,     0,     0,   -73,     0,     0,     0,
       0,   196,     0,   283,     0,     0,     0,     0,     0,   358,
     357,   357,     0,   357,     0,     0,   357,   357,     0,   357,
       0,     0,     0,     0,     0,     0,   227,   227,   227,   242,
     242,   242,     0,     0,   196,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   196,     0,     0,   227,   227,
     227,   242,   242,   242,     0,     0,   196,     0,   242,   242,
     242,     0,     0,   196,   227,   227,   227,   242,   242,   242,
       0,     0,     0,     0,     0,   196,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   262,     0,   227,   227,
     227,   242,   242,   242,     0,     0,   196,   641,   641,   641,
     641,   641,   641,   641,   641,   641,   641,   285,     0,     0,
       0,     0,     0,   242,   242,   242,     0,     0,   196,     0,
       0,     0,   262,   262,   285,     0,     0,     0,     0,     0,
       0,   227,   227,   227,     0,     0,     0,   262,   262,   285,
       0,     0,     0,   227,   227,   227,   242,   242,   242,     0,
       0,   196,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   358,     0,     0,     0,   262,   262,   285,     0,
       0,     0,     0,   -83,   -83,   -83,     0,   -83,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
       0,   -83,   196,   -83,   -83,   -83,   -83,   549,   -83,   -83,
       0,   -83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,     0,
     -84,   -84,   -84,     0,   -84,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,     0,
     -84,   -84,   -84,   -84,     0,   -84,   -84,   196,   -84,     0,
       0,     0,   604,   296,   297,   298,     0,   299,     0,   -84,
       0,   -84,   -84,   -84,   -84,   -84,   300,   301,   302,   303,
       0,   304,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,     0,   -78,   -78,   -78,   641,
     -78,     0,   305,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,     0,   -78,   -78,   -78,   -78,
       0,   -78,   -78,     0,   -78,   205,     0,     0,     0,   344,
     345,   346,     0,   347,     0,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   351,   352,   353,   354,     0,   355,     0,     0,
       0,     0,     0,   230,   230,   230,   243,   243,   243,   196,
     270,   270,   293,     0,   706,     0,     0,     0,   356,     0,
       0,   205,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,     0,     0,   242,   242,   242,     0,     0,     0,
       0,   242,   242,   242,     0,     0,   196,     0,   242,   242,
     242,     0,     0,     0,     0,     0,     0,     0,     0,   242,
     242,   242,     0,     0,     0,     0,   242,   242,   242,     0,
       0,   196,     0,   242,   242,   242,   243,   243,   243,     0,
     242,   242,   242,   366,   366,   196,   366,     0,   205,     0,
       0,     0,   358,   358,     0,   358,   242,   242,   242,     0,
     358,   358,     0,   358,   242,   242,   242,     0,     0,     0,
       0,   242,   242,   242,     0,     0,   196,     0,     0,   358,
     358,     0,   358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,     0,   -37,   -37,   -37,     0,   -37,     0,
       0,   205,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,     0,   -37,     0,   -37,   -37,     0,     0,
     -37,     0,   -37,   205,     0,     0,   230,     0,     0,     0,
     -81,   -81,   -81,   -37,   -81,   -37,   -37,     0,   205,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,     0,
     -81,   -81,   -81,   -81,   205,   -81,  1009,     0,   -81,     0,
       0,     0,     0,     0,     0,     0,   270,     0,     0,   -81,
       0,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,     0,     0,   293,
       0,     0,   205,     0,     0,     0,     0,   262,   262,   285,
       0,     0,     0,   205,     0,     0,     0,   311,    20,    21,
      22,     0,    23,   262,   262,   285,     0,    24,    25,    26,
      27,    28,    29,    30,    31,     0,    32,     0,   243,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,   538,   539,   540,
       0,   541,     0,     0,     0,     0,     0,    37,   -57,   480,
     542,   543,   544,   545,   205,   546,     0,   -57,   -57,   -57,
     -57,   -57,   366,   358,   358,     0,   358,     0,     0,   358,
     358,     0,   358,     0,     0,     0,   547,     0,     0,   230,
     230,   230,   243,   243,   243,     0,     0,   205,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   205,     0,
       0,   230,   230,   230,   243,   243,   243,     0,     0,   205,
       0,   243,   243,   243,     0,     0,   205,   230,   230,   230,
     243,   243,   243,     0,     0,     0,     0,     0,   205,   609,
     609,   609,   609,   609,   609,   609,   609,   609,   609,   270,
       0,   230,   230,   230,   243,   243,   243,     0,     0,   205,
     646,   646,   646,   646,   646,   646,   646,   646,   646,   646,
     293,     0,     0,     0,     0,     0,   243,   243,   243,     0,
       0,   205,     0,     0,     0,   270,   270,   293,     0,     0,
       0,     0,     0,     0,   230,   230,   230,     0,     0,     0,
     270,   270,   293,     0,     0,     0,   230,   230,   230,   243,
     243,   243,     0,     0,   205,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   366,     0,     0,     0,   270,
     270,   293,     0,     0,     0,     0,   -80,   -80,   -80,     0,
     -80,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,   -80,   205,   -80,   -80,   -80,   -80,
     554,   -80,   -80,     0,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,     0,   -80,   -80,   -80,
     -80,   -80,     0,    20,    21,    22,     0,    23,     0,     0,
       0,     0,    24,    25,    26,    27,    28,    29,    30,    31,
       0,    32,     0,   177,    33,    34,    35,     0,   178,     0,
     205,    36,     0,     0,     0,   609,   593,   594,   595,     0,
     596,     0,    37,     0,    38,    39,   179,   180,   181,   597,
     598,   599,   600,     0,   601,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   205,     0,   -32,
     -32,   -32,   646,   -32,     0,   602,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,   -32,
     -32,   -32,   -32,     0,   -32,     0,     0,   -32,   202,     0,
       0,     0,   630,   631,   632,     0,   633,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   634,   635,   636,   637,     0,
     638,     0,     0,     0,     0,     0,   104,   104,   104,     0,
       0,     0,   205,   267,   267,   290,     0,   711,     0,     0,
       0,   639,     0,     0,   202,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,     0,     0,   243,   243,   243,
       0,     0,     0,     0,   243,   243,   243,     0,     0,   205,
       0,   243,   243,   243,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   243,   243,     0,     0,     0,     0,   243,
     243,   243,     0,     0,   205,     0,   243,   243,   243,   329,
     329,   329,     0,   243,   243,   243,   363,   363,   205,   363,
       0,   202,     0,     0,     0,   366,   366,     0,   366,   243,
     243,   243,     0,   366,   366,     0,   366,   243,   243,   243,
       0,     0,     0,     0,   243,   243,   243,     0,     0,   205,
       0,     0,   366,   366,     0,   366,     0,     0,   -26,   -26,
     -26,     0,   -26,     0,     0,   202,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,     0,   -26,   -26,
     -26,   -26,     0,   -26,     0,     0,   -26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,   -26,     0,   -26,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,   -28,   -28,
     -28,   202,   -28,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   202,   -28,   -28,
     -28,   -28,     0,   -28,     0,     0,   -28,     0,     0,     0,
       0,     0,     0,     0,   695,   696,   697,   -28,   698,   -28,
     -28,   -28,   -28,   -28,   202,     0,     0,   699,   700,   701,
     702,     0,   703,     0,     0,   202,     0,     0,     0,     0,
     270,   270,   293,     0,     0,     0,   202,     0,     0,     0,
      20,    21,    22,   704,    23,     0,   270,   270,   293,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
     177,    79,    34,    35,     0,   178,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    38,    39,   179,   180,   181,     0,   202,     0,     0,
       0,     0,     0,     0,     0,     0,   366,   366,     0,   366,
       0,     0,   366,   366,     0,   366,     0,     0,     0,     0,
       0,     0,   104,   104,   104,     0,     0,     0,     0,     0,
     202,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   202,     0,     0,   104,   104,   104,     0,     0,     0,
       0,     0,   202,     0,     0,     0,     0,     0,     0,   202,
     104,   104,   104,     0,     0,     0,     0,     0,     0,     0,
       0,   202,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   267,     0,   104,   104,   104,     0,     0,     0,
       0,     0,   202,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   202,     0,     0,     0,   267,   267,
     290,     0,     0,     0,     0,     0,     0,   104,   104,   104,
       0,     0,     0,   267,   267,   290,     0,     0,     0,   104,
     104,   104,     0,     0,   203,     0,     0,   202,   708,   708,
     708,   708,   708,   708,   708,   708,   708,   708,   363,     0,
       0,     0,   267,   267,   290,     0,     0,     0,     0,     0,
       0,     0,   228,   228,   228,     0,     0,     0,     0,   268,
     268,   291,     0,     0,     0,     0,     0,     0,   202,     0,
     203,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,     0,     0,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,     0,   -85,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,     0,   -85,
       0,   -85,   -85,     0,     0,   -85,     0,   -85,     0,     0,
       0,     0,     0,   202,     0,   330,   330,   330,   -85,     0,
     -85,   -85,   364,   364,     0,   364,     0,   203,     0,     0,
       0,   -34,   -34,   -34,     0,   -34,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     202,   -34,   -34,   -34,   -34,     0,   -34,     0,     0,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   203,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,
       0,     0,     0,   -27,   -27,   -27,     0,   -27,     0,     0,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   203,   -27,   -27,   -27,   -27,     0,   -27,     0,
       0,   -27,     0,     0,     0,   202,     0,   203,     0,     0,
       0,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,   203,     0,    20,    21,    22,     0,    23,
     329,   329,   329,     0,    24,    25,    26,    27,    28,    29,
      30,    31,   202,    32,   329,   329,   329,     0,     0,     0,
     203,     0,     0,     0,     0,   329,   329,   329,     0,     0,
       0,   203,     0,     0,    37,     0,   495,   202,     0,   329,
     329,   329,   203,     0,     0,     0,     0,     0,     0,     0,
       0,   202,     0,     0,     0,     0,     0,     0,   363,   363,
       0,   363,   329,   329,   329,     0,   363,   363,     0,   363,
     329,   329,   329,     0,     0,   -44,   -44,   -44,   -44,   -44,
       0,     0,   202,     0,     0,   363,   363,   -44,   363,     0,
       0,     0,     0,   203,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,     0,     0,     0,     0,     0,   -44,     0,   228,   228,
     228,     0,     0,     0,     0,     0,   203,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   203,     0,     0,
     228,   228,   228,     0,     0,     0,     0,     0,   203,     0,
       0,     0,     0,     0,     0,   203,   228,   228,   228,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   268,     0,
     228,   228,   228,     0,     0,     0,     0,     0,   203,   644,
     644,   644,   644,   644,   644,   644,   644,   644,   644,   291,
       0,     0,     0,   267,   267,   290,     0,     0,     0,     0,
     203,     0,     0,     0,   268,   268,   291,     0,     0,   267,
     267,   290,     0,   228,   228,   228,     0,     0,     0,   268,
     268,   291,     0,     0,     0,   228,   228,   228,     0,     0,
       0,     0,     0,   203,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   364,     0,     0,     0,   268,   268,
     291,     0,     0,     0,     0,     0,     0,     0,     0,   363,
     363,     0,   363,     0,     0,   363,   363,     0,   363,   -35,
     -35,   -35,     0,   -35,   203,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,
     -35,   -35,   -35,     0,   -35,     0,     0,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -38,   -38,   -38,   203,
     -38,     0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,   -38,
       0,   -38,     0,     0,   -38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,   203,   -38,   -38,   -38,
     -38,   -38,     0,   -36,   -36,   -36,     0,   -36,     0,     0,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   201,   -36,     0,
       0,   -36,     0,     0,     0,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -39,
       0,     0,     0,     0,     0,   103,   105,   106,     0,     0,
       0,   203,   266,   266,   289,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   201,     0,     0,     0,   125,   126,     0,
     128,     0,   130,     0,     0,     0,   330,   330,   330,   -53,
     -53,   -53,   510,   511,     0,     0,     0,     0,   203,     0,
     330,   330,   330,     0,     0,     0,     0,     0,     0,     0,
       0,   330,   330,   330,     0,     0,     0,   512,   513,   514,
     515,   516,     0,   203,   -53,   330,   330,   330,   153,   154,
     155,     0,     0,     0,     0,   362,   362,   203,   362,     0,
     201,     0,     0,     0,   364,   364,     0,   364,   330,   330,
     330,     0,   364,   364,     0,   364,   330,   330,   330,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,     0,
       0,   364,   364,     0,   364,     0,     0,   -37,   -37,   -37,
       0,   -37,     0,     0,   201,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,     0,   -37,     0,     0,   -37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,   -87,   -87,   -87,
     201,   -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,     0,   -87,   201,   -87,   -87,   -87,
     -87,     0,   -87,     0,     0,   -87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   201,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,     0,     0,     0,     0,   268,
     268,   291,     0,     0,     0,   201,     0,     0,     0,   -29,
     -29,   -29,     0,   -29,     0,   268,   268,   291,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,     0,   -29,
     -29,   -29,   -29,     0,   -29,     0,     0,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -29,     0,
     -29,   -29,   -29,   -29,   -29,     0,   201,     0,     0,     0,
       0,     0,     0,     0,     0,   364,   364,     0,   364,     0,
       0,   364,   364,     0,   364,     0,     0,     0,     0,     0,
       0,   528,   529,   530,     0,     0,     0,     0,     0,   201,
     201,   201,   201,   557,   558,   201,   560,   201,   562,   201,
     201,     0,     0,   565,   566,   567,     0,     0,     0,     0,
       0,   201,     0,     0,     0,     0,     0,     0,   201,   582,
     583,   584,     0,     0,     0,     0,     0,     0,     0,     0,
     201,   266,   266,   266,   612,   613,   266,   615,   266,   617,
     266,   266,     0,   620,   621,   622,     0,     0,     0,     0,
       0,   201,   289,   289,   289,   649,   650,   289,   652,   289,
     654,   289,   289,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,     0,   266,   266,   289,
       0,     0,     0,     0,     0,     0,   675,   676,   677,     0,
       0,     0,   266,   266,   289,     0,     0,     0,   685,   686,
     687,     0,     0,   199,     0,     0,   201,   362,   362,   362,
     714,   715,   362,   717,   362,   719,   362,   362,     0,     0,
       0,   266,   266,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   264,   264,
     287,     0,     0,     0,     0,     0,     0,   201,     0,   199,
       0,     0,   -33,   -33,   -33,   127,   -33,   129,     0,   131,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,   201,     0,     0,     0,     0,     0,     0,     0,
       0,   360,   360,     0,   360,     0,   199,     0,     0,     0,
     -88,   -88,   -88,     0,   -88,     0,     0,     0,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,   -88,   201,
     -88,   -88,   -88,   -88,     0,   -88,     0,     0,   -88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
     199,   -88,   -88,   -88,   -88,   -88,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,     0,   -82,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,
     -82,   199,   -82,   -82,   -82,   -82,     0,   -82,     0,     0,
     -82,     0,     0,     0,   201,     0,   199,     0,     0,     0,
       0,   -82,     0,   -82,   -82,   -82,   -82,   -82,     0,     0,
       0,     0,   199,     0,    20,    21,    22,     0,    23,   818,
     819,   820,     0,    24,    25,    26,    27,    28,    29,    30,
      31,   201,    32,   828,   829,   830,     0,     0,     0,   199,
       0,     0,     0,     0,   831,   832,   833,     0,     0,     0,
     199,     0,     0,    37,     0,   524,   201,     0,   841,   842,
     843,   199,     0,     0,     0,   -40,   -40,   -40,   -40,   -40,
     201,     0,     0,     0,     0,     0,     0,   362,   362,     0,
     362,   868,   869,   870,   -40,   362,   362,     0,   362,   888,
     889,   890,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   201,     0,     0,   362,   362,   -40,   362,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,     0,    23,     0,     0,     0,     0,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,   313,     0,   314,   315,   199,   199,   199,   199,   316,
       0,   559,     0,   561,     0,   563,   199,     0,     0,     0,
      37,     0,   317,   318,     0,     0,     0,   199,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   199,   264,   264,   264,
       0,     0,   614,     0,   616,     0,   618,   264,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   199,   287,   287,
     287,     0,     0,   651,     0,   653,     0,   655,   287,     0,
       0,     0,   266,   266,   289,     0,     0,     0,     0,   199,
       0,     0,     0,   264,   264,   287,     0,     0,   266,   266,
     289,     0,    20,    21,    22,     0,    23,     0,   264,   264,
     287,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   199,   360,   360,   360,     0,     0,   716,     0,
     718,     0,   720,   360,     0,     0,     0,   264,   264,   287,
       0,    37,     0,   935,     0,     0,     0,     0,   362,   362,
       0,   362,     0,     0,   362,   362,     0,   362,   -83,   -83,
     -83,     0,   -83,   199,     0,     0,     0,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,     0,   -83,   -83,
     -83,   -83,     0,   -83,     0,     0,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -83,     0,   -83,
     -83,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -84,   -84,   -84,   199,   -84,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   200,   -84,     0,   -84,   -84,   -84,   -84,     0,
     -84,     0,     0,   -84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -84,   199,   -84,   -84,   -84,   -84,
     -84,   -78,   -78,   -78,     0,   -78,     0,   265,   265,   288,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   200,   -78,
       0,   -78,   -78,   -78,   -78,     0,   -78,     0,     0,   -78,
       0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -46,     0,     0,
       0,     0,     0,     0,   -46,     0,     0,     0,     0,     0,
     199,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,     0,     0,     0,     0,     0,   -46,     0,     0,     0,
     361,   361,     0,   361,     0,   200,     0,     0,     0,   -80,
     -80,   -80,     0,   -80,     0,     0,     0,   199,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,   -80,
     -80,   -80,   -80,     0,   -80,     0,     0,   -80,     0,     0,
       0,     0,   199,     0,     0,     0,     0,     0,   -80,   200,
     -80,   -80,   -80,   -80,   -80,     0,   199,     0,     0,     0,
       0,     0,     0,   360,   360,     0,   360,     0,     0,     0,
       0,   360,   360,     0,   360,     0,     0,     0,     0,     0,
     200,     0,     0,     0,     0,     0,     0,   199,     0,     0,
     360,   360,     0,   360,     0,   200,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,     0,    23,     0,     0,
       0,   200,    24,    25,    26,    27,    28,    29,    30,    31,
       0,    32,     0,   177,   379,    34,    35,     0,   178,     0,
       0,    36,     0,     0,     0,     0,     0,     0,   200,     0,
       0,     0,    37,     0,    38,    39,   179,   180,   181,   200,
       0,     0,   -24,   -24,   -24,     0,   -24,     0,     0,     0,
     200,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,
     -24,     0,   -24,   -24,   -24,   -24,     0,   -24,     0,     0,
     -24,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,     0,   -62,     0,     0,     0,     0,   264,   264,
     287,   200,   -62,   -62,   -62,   -62,   -62,     0,    20,    21,
      22,     0,    23,     0,   264,   264,   287,    24,    25,    26,
      27,    28,    29,    30,    31,     0,    32,     0,     0,   -62,
     -62,   -62,   -62,   -62,   200,   200,   200,   200,     0,     0,
     200,   441,   200,     0,   200,   200,     0,    37,   -62,   951,
       0,     0,     0,     0,     0,     0,   200,   -62,   -62,   -62,
     -62,   -62,     0,   200,   360,   360,     0,   360,     0,     0,
     360,   360,     0,   360,     0,   200,   265,   265,   265,     0,
       0,   265,     0,   265,     0,   265,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   288,   288,   288,
       0,     0,   288,     0,   288,     0,   288,   288,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,     0,   265,   265,   288,     0,     0,     0,   198,     0,
       0,   182,   183,   184,     0,   185,     0,   265,   265,   288,
      24,   186,   187,   188,   189,   190,   191,   192,     0,   193,
       0,   200,   361,   361,   361,     0,     0,   361,     0,   361,
       0,   361,   361,   263,   263,   286,   265,   265,   288,     0,
     194,   119,     0,     0,   198,   122,   123,   124,     0,     0,
       0,     0,     0,     0,    20,    21,    22,     0,    23,     0,
       0,     0,   200,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,   177,   475,    34,    35,     0,   178,
       0,     0,    36,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,    37,     0,    38,    39,   179,   180,   181,
       0,     0,     0,     0,     0,     0,   359,   359,     0,   359,
       0,   198,     0,     0,     0,     0,     0,   200,   156,     0,
       0,   159,     0,     0,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,   170,
     171,   172,   173,   174,     0,     0,     0,     0,   -45,   176,
       0,     0,     0,     0,   200,   198,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,     0,     0,    20,    21,    22,
     -45,    23,     0,     0,     0,     0,    24,    25,    26,    27,
      28,    29,    30,    31,     0,    32,   198,   177,   490,    34,
      35,     0,   178,     0,   320,    36,     0,     0,     0,     0,
       0,   198,     0,     0,     0,     0,    37,     0,    38,    39,
     179,   180,   181,     0,     0,     0,     0,   198,     0,   200,
       0,     0,     0,     0,     0,     0,     0,   339,     0,     0,
     374,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,    20,
      21,    22,   374,    23,     0,   198,   200,     0,    24,    25,
      26,    27,    28,    29,    30,    31,   198,    32,     0,   177,
     519,    34,    35,     0,   178,     0,     0,    36,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    37,     0,
      38,    39,   179,   180,   181,   200,     0,     0,     0,     0,
       0,     0,   361,   361,     0,   361,     0,     0,     0,     0,
     361,   361,     0,   361,     0,     0,     0,   198,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,   361,
     361,     0,   361,     0,   -40,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,     0,   -40,     0,     0,     0,
     198,   550,   555,   556,     0,   -41,   -41,   -41,   -41,   -41,
       0,   198,   -40,   -40,   -40,   -40,   -40,   -41,   -40,     0,
     -40,     0,   198,     0,     0,   -40,     0,     0,     0,   198,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   198,   605,   610,   611,     0,   -45,   -45,   -45,   -45,
     -45,     0,   263,     0,     0,     0,     0,     0,   -45,     0,
       0,     0,   198,   642,   647,   648,     0,     0,     0,     0,
       0,     0,     0,   286,   -45,   -45,   -45,   -45,   -45,     0,
     -45,     0,   -45,     0,   198,     0,     0,   -45,   263,   263,
     286,     0,     0,     0,     0,     0,     0,   265,   265,   288,
       0,     0,     0,   263,   263,   286,     0,   321,     0,     0,
       0,     0,     0,   265,   265,   288,     0,   198,   707,   712,
     713,     0,     0,     0,     0,     0,     0,     0,   359,     0,
       0,     0,   263,   263,   286,     0,     0,     0,     0,     0,
     340,     0,     0,   375,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,   322,   198,   -42,
       0,     0,     0,   361,   361,   375,   361,     0,     0,   361,
     361,     0,   361,     0,     0,   -42,   -42,   -42,   -42,   -42,
       0,   -42,     0,   -42,     0,     0,     0,     0,   -42,     0,
     341,     0,     0,   376,     0,     0,   -85,   -85,   -85,     0,
     -85,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   198,   -85,   376,   -85,   -85,   -85,   -85,
       0,   -85,     0,     0,   -85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,     0,   -85,   -85,   -85,
     -85,   -85,    20,    21,    22,     0,    23,     0,     0,     0,
     198,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   177,   527,    34,    35,     0,   178,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    38,    39,   179,   180,   181,     0,     0,
       0,   786,     0,     0,     0,     0,   -25,   -25,   -25,     0,
     -25,     0,     0,   794,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   198,   -25,   -25,   -25,   -25,
       0,   -25,     0,     0,   -25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -43,   -43,   -43,   -43,   -43,   813,     0,     0,
       0,     0,   198,     0,   -43,     0,     0,     0,     0,   324,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   198,   -43,     0,
       0,     0,     0,   -43,     0,     0,     0,     0,     0,     0,
       0,   198,   343,     0,     0,   378,     0,     0,   359,   359,
     320,   359,     0,     0,     0,     0,   359,   359,     0,   359,
     851,     0,   320,   862,     0,     0,     0,   378,   871,     0,
       0,   882,   198,     0,     0,   359,   359,     0,   359,     0,
       0,     0,    20,    21,    22,     0,    23,   898,     0,     0,
     901,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   177,   666,    34,    35,   320,   178,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    38,    39,   179,   180,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    22,     0,    23,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
     177,   678,    34,    35,     0,   178,     0,     0,    36,   339,
       0,     0,   861,     0,     0,     0,     0,   339,     0,    37,
     881,    38,    39,   179,   180,   181,     0,     0,     0,     0,
       0,     0,     0,   263,   263,   286,   339,     0,     0,   374,
       0,   968,   969,   970,     0,     0,     0,     0,     0,   263,
     263,   286,   978,   979,     0,     0,     0,   980,   981,   982,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,   990,   991,
       0,     0,   -73,     0,     0,     0,     0,   992,   993,   994,
     995,   996,     0,     0,     0,     0,   997,     0,   -73,   -73,
     -73,   -73,   -73,     0,    83,     0,   -73,     0,  1003,   359,
     359,   -73,   359,     0,     0,   359,   359,     0,   359,     0,
       0,  1010,     0,     0,  1013,     0,  1015,  1016,     0,     0,
    1019,     0,  1021,  1022,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1042,     0,     0,     0,
     320,   320,   320,   321,     0,     0,     0,  1045,  1046,     0,
       0,   320,   861,     0,     0,   321,   339,   339,   339,     0,
     -44,   -44,   -44,   -44,   -44,     0,     0,   339,   881,     0,
       0,     0,   -44,     0,     0,     0,   374,   374,   374,   374,
     374,     0,     0,     0,     0,   320,     0,     0,   -44,   -44,
     -44,   -44,   -44,   322,   -44,     0,   -44,   320,     0,   321,
       0,   -44,     0,     0,     0,   322,     0,     0,     0,     0,
     339,     0,     0,   861,     0,   320,   339,     0,     0,   881,
       0,   339,   374,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   861,   861,   861,   861,
     861,   881,   881,   881,   881,   881,     0,     0,     0,   322,
     -42,   -42,   -42,   -42,   -42,     0,   861,   881,     0,     0,
       0,     0,   340,     0,     0,   863,     0,     0,     0,   -42,
     340,     0,     0,   883,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,    20,    21,    22,   340,
      23,   -42,   375,     0,     0,    24,    25,    26,    27,    28,
      29,    30,    31,     0,    32,     0,   177,   722,    34,    35,
       0,   178,   341,     0,    36,   864,     0,     0,     0,     0,
     341,     0,     0,   884,     0,    37,     0,    38,    39,   179,
     180,   181,     0,     0,   -86,   -86,   -86,     0,   -86,   341,
       0,     0,   376,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,     0,   -86,   -86,   -86,   -86,     0,   -86,
       0,     0,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,     0,   -86,   -86,   -86,   -86,   -86,
       0,   -62,   -62,   -62,   -62,   -62,     0,     0,     0,     0,
       0,     0,     0,   462,     0,   324,     0,     0,     0,     0,
     -62,     0,     0,   321,   321,   321,     0,   324,     0,   -62,
     -62,   -62,   -62,   -62,   321,   863,   -62,     0,     0,   340,
     340,   340,   -62,     0,     0,     0,     0,     0,     0,     0,
     340,   883,     0,     0,     0,     0,     0,     0,     0,   375,
     375,   375,   375,   375,     0,     0,     0,     0,   321,     0,
       0,   324,     0,   322,   322,   322,     0,     0,     0,     0,
     321,     0,     0,     0,   322,   864,     0,     0,     0,   341,
     341,   341,     0,   340,     0,     0,   863,     0,   321,   340,
     341,   884,   883,     0,   340,   375,     0,     0,     0,   376,
     376,   376,   376,   376,     0,     0,     0,     0,   322,   863,
     863,   863,   863,   863,   883,   883,   883,   883,   883,     0,
     322,     0,     0,     0,   343,     0,     0,   866,     0,   863,
     883,     0,   343,   341,     0,   886,   864,     0,   322,   341,
       0,     0,   884,     0,   341,   376,     0,     0,     0,     0,
       0,   343,     0,     0,   378,     0,     0,     0,     0,   864,
     864,   864,   864,   864,   884,   884,   884,   884,   884,     0,
       0,     0,    20,    21,    22,     0,    23,     0,     0,   864,
     884,    24,    25,    26,    27,    28,    29,    30,    31,     0,
      32,     0,   177,   930,    34,    35,     0,   178,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,    38,    39,   179,   180,   181,    20,    21,
      22,     0,    23,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,     0,    32,     0,   177,   946,
      34,    35,     0,   178,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,    38,
      39,   179,   180,   181,     0,   324,   324,   324,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,   324,   866,     0,     0,
     -66,   343,   343,   343,     0,     0,     0,   -66,     0,     0,
       0,     0,   343,   886,     0,     0,   -66,   -66,   -66,   -66,
     -66,   378,   378,   378,   378,   378,     0,     0,     0,     0,
     324,     0,     0,     0,    20,    21,    22,     0,    23,     0,
       0,     0,   324,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,   332,   343,   333,   334,   866,     0,
     324,   343,   335,     0,   886,     0,   343,   378,     0,     0,
       0,     0,     0,    37,     0,   336,   337,     0,     0,     0,
       0,   866,   866,   866,   866,   866,   886,   886,   886,   886,
     886,     0,     0,     0,    20,    21,    22,     0,    23,     0,
       0,   866,   886,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,   177,   971,    34,    35,     0,   178,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,    38,    39,   179,   180,   181,
      20,    21,    22,     0,    23,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
     177,   983,    34,    35,     0,   178,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    38,    39,   179,   180,   181,   -87,   -87,   -87,     0,
     -87,     0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,     0,   -87,     0,   -87,   -87,
       0,     0,   -87,     0,   -87,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,   -33,   -87,     0,   -87,   -87,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,     0,   -33,   -33,     0,     0,   -33,     0,   -33,     0,
       0,     0,     0,     0,   -86,   -86,   -86,     0,   -86,   -33,
       0,   -33,   -33,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,     0,   -86,     0,   -86,     0,   -86,   -86,     0,     0,
     -86,     0,   -86,     0,     0,     0,     0,     0,   -88,   -88,
     -88,     0,   -88,   -86,     0,   -86,   -86,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,     0,   -88,     0,
     -88,   -88,     0,     0,   -88,     0,   -88,     0,     0,     0,
       0,     0,   -81,   -81,   -81,     0,   -81,   -88,     0,   -88,
     -88,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,
     -81,     0,   -81,     0,   -81,   -81,     0,     0,  1002,     0,
     -81,     0,     0,     0,     0,     0,   -79,   -79,   -79,     0,
     -79,   -81,     0,   -81,   -81,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   -79,     0,   -79,     0,   -79,   -79,
       0,     0,  1026,     0,   -79,     0,     0,     0,     0,     0,
     -82,   -82,   -82,     0,   -82,   -79,     0,   -79,   -79,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,     0,
     -82,     0,   -82,   -82,     0,     0,   -82,     0,   -82,     0,
       0,     0,     0,     0,   -83,   -83,   -83,     0,   -83,   -82,
       0,   -82,   -82,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,     0,   -83,     0,   -83,   -83,     0,     0,
     -83,     0,   -83,     0,     0,     0,     0,     0,   -84,   -84,
     -84,     0,   -84,   -83,     0,   -83,   -83,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,     0,   -84,     0,
     -84,   -84,     0,     0,   -84,     0,   -84,     0,     0,     0,
       0,     0,   -78,   -78,   -78,     0,   -78,   -84,     0,   -84,
     -84,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     -78,     0,   -78,     0,   -78,   -78,     0,     0,   -78,     0,
     -78,     0,     0,     0,     0,     0,   -81,   -81,   -81,     0,
     -81,   -78,     0,   -78,   -78,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,     0,   -81,     0,   -81,   -81,
       0,     0,  1043,     0,   -81,     0,     0,     0,     0,     0,
     -80,   -80,   -80,     0,   -80,   -81,     0,   -81,   -81,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -80,     0,   -80,   -80,     0,     0,   -80,     0,   -80,     0,
       0,     0,     0,     0,    20,    21,    22,     0,    23,   -80,
       0,   -80,   -80,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,   367,     0,   368,   369,     0,     0,
       0,     0,   370,     0,     0,     0,     0,     0,    20,    21,
      22,     0,    23,    37,     0,   371,   372,    24,    25,    26,
      27,    28,    29,    30,    31,     0,    32,     0,   177,     0,
      34,    35,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,   -20,   -20,   -20,     0,   -20,    37,     0,    38,
      39,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,     0,   -20,     0,   -20,   -20,     0,     0,     0,     0,
     -20,     0,     0,     0,     0,     0,   -21,   -21,   -21,     0,
     -21,   -20,     0,   -20,   -20,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,     0,   -21,     0,   -21,   -21,
       0,     0,     0,     0,   -21,     0,     0,     0,     0,     0,
     -32,   -32,   -32,     0,   -32,   -21,     0,   -21,   -21,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,
     -32,     0,   -32,   -32,     0,     0,     0,     0,   -32,     0,
       0,     0,     0,     0,   -34,   -34,   -34,     0,   -34,   -32,
       0,   -32,   -32,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,     0,   -34,     0,   -34,   -34,     0,     0,
       0,     0,   -34,     0,     0,     0,     0,     0,   -35,   -35,
     -35,     0,   -35,   -34,     0,   -34,   -34,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,     0,   -35,     0,   -35,     0,
     -35,   -35,     0,     0,     0,     0,   -35,     0,     0,     0,
       0,     0,   -38,   -38,   -38,     0,   -38,   -35,     0,   -35,
     -35,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
     -38,     0,   -38,     0,   -38,   -38,     0,     0,     0,     0,
     -38,     0,     0,     0,     0,     0,   -36,   -36,   -36,     0,
     -36,   -38,     0,   -38,   -38,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,     0,   -36,     0,   -36,   -36,
       0,     0,     0,     0,   -36,     0,     0,     0,     0,     0,
     -37,   -37,   -37,     0,   -37,   -36,     0,   -36,   -36,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,     0,
     -37,     0,   -37,   -37,     0,     0,     0,     0,   -37,     0,
       0,     0,     0,     0,   -19,   -19,   -19,     0,   -19,   -37,
       0,   -37,   -37,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,     0,   -19,     0,   -19,     0,   -19,   -19,     0,     0,
       0,     0,   -19,     0,     0,     0,     0,     0,   -24,   -24,
     -24,     0,   -24,   -19,     0,   -19,   -19,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,     0,   -24,     0,
     -24,   -24,     0,     0,     0,     0,   -24,     0,     0,     0,
       0,     0,   -85,   -85,   -85,     0,   -85,   -24,     0,   -24,
     -24,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,     0,   -85,     0,   -85,   -85,     0,     0,     0,     0,
     -85,     0,     0,     0,     0,     0,   -87,   -87,   -87,     0,
     -87,   -85,     0,   -85,   -85,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,     0,   -87,     0,   -87,     0,   -87,   -87,
       0,     0,     0,     0,   -87,     0,     0,     0,     0,     0,
     -33,   -33,   -33,     0,   -33,   -87,     0,   -87,   -87,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,
     -33,     0,   -33,   -33,     0,     0,     0,     0,   -33,     0,
       0,     0,     0,     0,   -25,   -25,   -25,     0,   -25,   -33,
       0,   -33,   -33,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,     0,   -25,     0,   -25,   -25,     0,     0,
       0,     0,   -25,     0,     0,     0,     0,     0,   -86,   -86,
     -86,     0,   -86,   -25,     0,   -25,   -25,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,     0,   -86,     0,
     -86,   -86,     0,     0,     0,     0,   -86,     0,     0,     0,
       0,     0,   -88,   -88,   -88,     0,   -88,   -86,     0,   -86,
     -86,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,     0,   -88,     0,   -88,   -88,     0,     0,     0,     0,
     -88,     0,     0,     0,     0,     0,    20,    21,    22,     0,
      23,   -88,     0,   -88,   -88,    24,    25,    26,    27,    28,
      29,    30,    31,     0,    32,     0,   854,     0,   855,   856,
       0,     0,     0,     0,   857,     0,     0,     0,     0,     0,
      20,    21,    22,     0,    23,    37,     0,   858,   859,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,     0,
     874,     0,   875,   876,     0,     0,     0,     0,   877,     0,
       0,     0,     0,     0,   -82,   -82,   -82,     0,   -82,    37,
       0,   878,   879,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,     0,   -82,     0,   -82,     0,   -82,   -82,     0,     0,
       0,     0,   -82,     0,     0,     0,     0,     0,   -83,   -83,
     -83,     0,   -83,   -82,     0,   -82,   -82,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,   -83,     0,   -83,     0,
     -83,   -83,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,     0,   -84,   -84,   -84,     0,   -84,   -83,     0,   -83,
     -83,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,     0,
     -84,     0,   -84,     0,   -84,   -84,     0,     0,     0,     0,
     -84,     0,     0,     0,     0,     0,   -78,   -78,   -78,     0,
     -78,   -84,     0,   -84,   -84,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,     0,   -78,     0,   -78,     0,   -78,   -78,
       0,     0,     0,     0,   -78,     0,     0,     0,     0,     0,
     -80,   -80,   -80,     0,   -80,   -78,     0,   -78,   -78,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,     0,
     -80,     0,   -80,   -80,     0,     0,     0,     0,   -80,     0,
       0,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,   -80,
       0,   -80,   -80,   -46,     0,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,     0,     0,     0,   -41,     0,   -46,
     -46,   -46,   -46,   -46,     0,   -46,     0,   -46,     0,     0,
       0,     0,   -46,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -40,   -40,   -40,   -40,   -40,   -41,     0,     0,     0,
       0,     0,     0,   -40,     0,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,   -45,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,     0,     0,     0,
       0,     0,   -40,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -42,   -42,   -42,   -42,   -42,   -45,     0,     0,     0,
       0,     0,     0,   -42,     0,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,   -43,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,     0,
       0,     0,   -42,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -73,   -73,   -73,   -73,   -73,   -43,     0,     0,     0,
       0,     0,     0,   -73,     0,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,   -66,     0,   -73,
     -73,   -73,   -73,   -73,   -66,   389,   -73,     0,     0,     0,
       0,     0,   -73,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -66,   -69,   -69,   -69,   -69,   -69,   -66,     0,     0,     0,
       0,     0,     0,   -69,     0,   -67,   -67,   -67,   -67,   -67,
     -69,     0,     0,     0,     0,     0,     0,   -67,     0,   -69,
     -69,   -69,   -69,   -69,   -67,     0,   -69,   -44,   -44,   -44,
     -44,   -44,   -69,   -67,   -67,   -67,   -67,   -67,     0,   -44,
     -67,   -46,   -46,   -46,   -46,   -46,   -67,     0,     0,     0,
       0,     0,     0,   -46,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,     0,     0,     0,     0,     0,   -44,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -74,   -74,   -74,
     -74,   -74,   -46,     0,     0,     0,     0,     0,     0,   -74,
       0,   -43,   -43,   -43,   -43,   -43,   -74,     0,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -43,     0,   -74,   -57,   -57,   -57,   -57,   -57,   -74,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -73,   -73,   -73,
     -73,   -73,   -43,     0,     0,   -72,   -72,   -72,   -72,   -72,
       0,   -57,   -57,   -57,   -57,   -57,   -73,   -72,   -57,   -62,
     -62,   -62,   -62,   -62,   -72,   -73,   -73,   -73,   -73,   -73,
       0,   780,   -73,   -72,   -72,   -72,   -72,   -72,   -73,     0,
     -72,   -71,   -71,   -71,   -71,   -71,   -72,   -62,   -62,   -62,
     -62,   -62,     0,   -71,   -62,   -70,   -70,   -70,   -70,   -70,
     -71,     0,     0,     0,     0,     0,     0,   -70,     0,   -71,
     -71,   -71,   -71,   -71,   -70,     0,   -71,     0,     0,     0,
       0,     0,   -71,   -70,   -70,   -70,   -70,   -70,     0,     0,
     -70,   -75,   -75,   -75,   -75,   -75,   -70,     0,     0,     0,
       0,     0,     0,   -75,     0,   -44,   -44,   -44,   -44,   -44,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -44,     0,   -75,   -53,   -53,   -53,
      87,    88,   -75,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -46,   -46,   -46,   -46,   -46,   -44,     0,     0,   -62,
     -62,   -62,   -62,   -62,     0,    89,    90,    91,    92,    93,
     -46,    94,     0,   -53,     0,     0,     0,     0,   -53,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -62,   -62,   -62,
     -62,   -62,   -46,     0,     0,   -62,     0,     0,     0,     0,
     -62,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,   -66,     0,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,   -69,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,   -66,     0,     0,
       0,     0,   -66,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,   -69,     0,     0,     0,     0,   -69,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,   -67,
       0,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
       0,     0,     0,   -74,     0,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -67,     0,     0,     0,     0,   -67,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,   -74,     0,     0,
       0,     0,   -74,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,   -72,     0,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,   -71,
       0,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -72,
       0,     0,     0,     0,   -72,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -71,     0,     0,     0,     0,   -71,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
       0,   -70,     0,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,   -75,     0,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,   -70,     0,     0,     0,     0,
     -70,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,   -75,
       0,     0,     0,     0,   -75,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,     0,     0,     0,     0,   400,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
       0,   -66,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -62,   -69,   -69,   -69,   -69,   -69,   -62,   -66,   -66,   -66,
     -66,   -66,     0,   -69,   -66,   -53,   -53,   -53,   455,   456,
     -66,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -53,     0,   -69,   -41,   -41,   -41,
     -41,   -41,   -69,   457,   458,   459,   460,   461,     0,     0,
     -53,   -57,   -57,   -57,   -57,   -57,   -53,     0,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -41,   -41,   -41,   -41,   -41,
     -57,   -41,     0,   -41,     0,     0,     0,     0,   -41,   -57,
     -57,   -57,   -57,   -57,     0,     0,   -57,   -40,   -40,   -40,
     -40,   -40,   -57,   -40,     0,   -40,     0,     0,     0,     0,
     -40,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,     0,   -45,     0,     0,
       0,     0,   -45,   -42,   -42,   -42,   -42,   -42,     0,   -42,
       0,   -42,     0,     0,     0,     0,   -42,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
       0,   -43,     0,   -43,     0,     0,     0,     0,   -43,   -73,
     -73,   -73,   -73,   -73,     0,   473,     0,   -73,     0,     0,
       0,     0,   -73,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,     0,     0,   -67,     0,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,     0,     0,     0,     0,   -74,
       0,   -67,   -67,   -67,   -67,   -67,     0,     0,   -67,   -39,
     -39,   -39,   -39,   -39,   -67,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -74,   -41,   -41,   -41,   -41,   -41,   -74,     0,
       0,   -40,   -40,   -40,   -40,   -40,     0,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -45,   -45,   -45,   -45,   -45,
     -39,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -40,
     -40,   -40,   -40,   -40,   -41,   -40,   -40,   -42,   -42,   -42,
     -42,   -42,   -40,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -43,   -43,   -43,   -43,   -43,   -45,     0,     0,   -73,
     -73,   -73,   -73,   -73,     0,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,     0,     0,     0,     0,     0,   -42,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -73,   -73,   -73,
     -73,   -73,   -43,   741,   -73,   -62,   -62,   -62,   -62,   -62,
     -73,     0,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,   -62,     0,     0,     0,     0,     0,
       0,     0,   -66,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -62,   -66,   -66,   -66,   -66,   -66,   -62,     0,   -66,   -69,
     -69,   -69,   -69,   -69,   -66,     0,     0,   -58,   -58,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,   -69,     0,
       0,     0,     0,     0,     0,     0,   -58,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,   -58,   -58,   -58,   -58,   -58,
     -69,     0,   -58,   -59,   -59,   -59,   -59,   -59,   -58,     0,
       0,   -60,   -60,   -60,   -60,   -60,     0,     0,     0,     0,
       0,     0,   -59,     0,     0,     0,     0,     0,     0,     0,
     -60,   -59,   -59,   -59,   -59,   -59,     0,     0,   -59,   -60,
     -60,   -60,   -60,   -60,   -59,     0,   -60,   -61,   -61,   -61,
     -61,   -61,   -60,     0,     0,   -44,   -44,   -44,   -44,   -44,
       0,     0,     0,     0,     0,     0,   -61,     0,     0,   -46,
     -46,   -46,   -46,   -46,     0,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,   -44,   -44,   -44,   -44,   -44,   -61,   -44,
       0,   -44,     0,     0,     0,     0,   -44,   -46,   -46,   -46,
     -46,   -46,     0,   -46,     0,   -46,     0,     0,     0,     0,
     -46,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,   -72,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -71,     0,   -72,
     -72,   -72,   -72,   -72,     0,     0,   -72,   -70,   -70,   -70,
     -70,   -70,   -72,   -71,   -71,   -71,   -71,   -71,     0,   -70,
     -71,   -75,   -75,   -75,   -75,   -75,   -71,     0,     0,     0,
       0,     0,     0,   -75,     0,   -70,   -70,   -70,   -70,   -70,
       0,     0,   -70,   -44,   -44,   -44,   -44,   -44,   -70,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -75,   -67,   -67,   -67,
     -67,   -67,   -75,     0,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -44,   -44,   -44,   -44,   -44,   -67,   -44,   -44,     0,
       0,     0,     0,     0,   -44,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -67,   -46,   -46,   -46,   -46,   -46,   -67,   -46,
     -46,   -74,   -74,   -74,   -74,   -74,   -46,     0,     0,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,     0,
     -74,     0,     0,     0,     0,     0,     0,     0,   -63,   -74,
     -74,   -74,   -74,   -74,     0,     0,   -74,   -63,   -63,   -63,
     -63,   -63,   -74,     0,   -63,   -64,   -64,   -64,   -64,   -64,
     -63,     0,     0,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,     0,
       0,     0,   -65,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -64,   -65,   -65,   -65,   -65,   -65,   -64,     0,   -65,   -72,
     -72,   -72,   -72,   -72,   -65,     0,     0,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,     0,     0,   -71,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -72,   -71,   -71,   -71,   -71,   -71,
     -72,     0,   -71,   -70,   -70,   -70,   -70,   -70,   -71,     0,
       0,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -75,   -70,   -70,   -70,   -70,   -70,     0,     0,   -70,   -75,
     -75,   -75,   -75,   -75,   -70,     0,   -75,   -58,   -58,   -58,
     -58,   -58,   -75,   -57,   -57,   -57,   -57,   -57,     0,     0,
       0,   -57,     0,     0,     0,     0,   -57,   -59,   -59,   -59,
     -59,   -59,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,   -58,     0,     0,     0,     0,   -58,   -60,
     -60,   -60,   -60,   -60,     0,   -59,   -59,   -59,   -59,   -59,
       0,     0,     0,   -59,     0,     0,     0,     0,   -59,   -61,
     -61,   -61,   -61,   -61,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,     0,     0,     0,   -60,     0,     0,     0,     0,
     -60,   -63,   -63,   -63,   -63,   -63,     0,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,   -61,     0,     0,     0,     0,
     -61,   -64,   -64,   -64,   -64,   -64,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,     0,     0,     0,   -63,     0,     0,
       0,     0,   -63,   -65,   -65,   -65,   -65,   -65,     0,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,   -64,     0,     0,
       0,     0,   -64,   -53,   -53,   -53,   393,   394,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,     0,     0,     0,   -65,
       0,     0,     0,     0,   -65,   -57,   -57,   -57,   -57,   -57,
       0,   395,   396,   397,   398,   399,     0,     0,   -53,   -62,
     -62,   -62,   -62,   -62,   -53,     0,     0,     0,     0,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,     0,     0,
     -57,   -66,   -66,   -66,   -66,   -66,   -57,   -62,   -62,   -62,
     -62,   -62,     0,     0,     0,   -62,     0,     0,     0,     0,
     -62,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,   -66,     0,     0,
       0,     0,   -66,   -67,   -67,   -67,   -67,   -67,     0,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,   -69,     0,     0,
       0,     0,   -69,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,   -67,
       0,     0,     0,     0,   -67,   -66,   -66,   -66,   -66,   -66,
       0,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,   -69,
     -69,   -69,   -69,   -69,   -62,     0,     0,   -58,   -58,   -58,
     -58,   -58,     0,   -66,   -66,   -66,   -66,   -66,     0,     0,
     -66,   -59,   -59,   -59,   -59,   -59,   -66,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,   -58,   -58,   -58,   -58,   -58,
     -69,     0,   -58,   -60,   -60,   -60,   -60,   -60,   -58,   -59,
     -59,   -59,   -59,   -59,     0,     0,   -59,   -61,   -61,   -61,
     -61,   -61,   -59,     0,     0,   -74,   -74,   -74,   -74,   -74,
       0,   -60,   -60,   -60,   -60,   -60,     0,     0,   -60,   -67,
     -67,   -67,   -67,   -67,   -60,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,   -74,   -74,   -74,   -74,   -74,   -61,     0,
       0,   -74,     0,     0,     0,     0,   -74,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -67,   -72,   -72,   -72,   -72,   -72,
     -67,     0,     0,     0,     0,     0,     0,     0,     0,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,   -72,     0,     0,     0,     0,   -72,   -71,   -71,   -71,
     -71,   -71,     0,     0,     0,   -71,     0,     0,     0,     0,
     -71,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,   -70,     0,     0,
       0,     0,   -70,   -75,   -75,   -75,   -75,   -75,     0,     0,
       0,   -75,     0,     0,     0,     0,   -75,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
       0,     0,   -74,   -63,   -63,   -63,   -63,   -63,   -74,     0,
     -63,   -64,   -64,   -64,   -64,   -64,   -63,     0,   -64,   -65,
     -65,   -65,   -65,   -65,   -64,     0,     0,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,   -72,   -72,   -72,   -72,   -72,
     -65,     0,   -72,   -71,   -71,   -71,   -71,   -71,   -72,     0,
     -71,   -70,   -70,   -70,   -70,   -70,   -71,     0,     0,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -70,   -75,   -75,   -75,
     -75,   -75,   -70,     0,   -75,   182,   183,   184,     0,   185,
     -75,     0,     0,     0,    24,   186,   187,   188,   189,   190,
     191,   192,     0,   193,   182,   183,   184,     0,   185,     0,
       0,     0,     0,    24,   186,   187,   188,   189,   190,   191,
     192,     0,   193,     0,   194,   536,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   182,   183,   184,     0,
     185,     0,     0,   194,   573,    24,   186,   187,   188,   189,
     190,   191,   192,     0,   193,   182,   183,   184,     0,   185,
       0,     0,     0,     0,    24,   186,   187,   188,   189,   190,
     191,   192,     0,   193,     0,   194,   580,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   182,   183,   184,
       0,   185,     0,     0,   194,   591,    24,   186,   187,   188,
     189,   190,   191,   192,     0,   193,   182,   183,   184,     0,
     185,     0,     0,     0,     0,    24,   186,   187,   188,   189,
     190,   191,   192,     0,   193,     0,   194,   628,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   182,   183,
     184,     0,   185,     0,     0,   194,   664,    24,   186,   187,
     188,   189,   190,   191,   192,     0,   193,   182,   183,   184,
       0,   185,     0,     0,     0,     0,    24,   186,   187,   188,
     189,   190,   191,   192,     0,   193,     0,   194,   693,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
     183,   184,     0,   185,     0,     0,   194,   826,    24,   186,
     187,   188,   189,   190,   191,   192,     0,   193,   182,   183,
     184,     0,   185,     0,     0,     0,     0,    24,   186,   187,
     188,   189,   190,   191,   192,     0,   193,     0,   194,   839,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     182,   183,   184,     0,   185,     0,     0,   194,   849,    24,
     186,   187,   188,   189,   190,   191,   192,     0,   193,   213,
     214,   215,     0,   216,     0,     0,     0,     0,    24,   217,
     218,   219,   220,   221,   222,   223,     0,   224,     0,   194,
     896,   244,   245,   246,     0,   247,     0,     0,     0,     0,
      24,   248,   249,   250,   251,   252,   253,   254,   225,   255,
     271,   272,   273,     0,   274,     0,     0,     0,     0,    24,
     275,   276,   277,   278,   279,   280,   281,     0,   282,     0,
     256,     0,    20,    21,    22,     0,    23,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,   283,
      32,   296,   297,   298,     0,   299,     0,     0,     0,     0,
      24,    25,    26,    27,   300,   301,   302,   303,     0,   304,
       0,    37,     0,   231,   232,   233,     0,   234,     0,     0,
       0,     0,    24,   326,   327,   328,   235,   236,   237,   238,
     305,   239,   344,   345,   346,     0,   347,     0,     0,     0,
       0,    24,   348,   349,   350,   351,   352,   353,   354,     0,
     355,     0,   240,     0,   538,   539,   540,     0,   541,     0,
       0,     0,     0,    24,   186,   187,   188,   542,   543,   544,
     545,   356,   546,   593,   594,   595,     0,   596,     0,     0,
       0,     0,    24,   248,   249,   250,   597,   598,   599,   600,
       0,   601,     0,   547,     0,   630,   631,   632,     0,   633,
       0,     0,     0,     0,    24,   275,   276,   277,   634,   635,
     636,   637,   602,   638,   695,   696,   697,     0,   698,     0,
       0,     0,     0,    24,   348,   349,   350,   699,   700,   701,
     702,     0,   703,     0,   639,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,     0,     0,     0,   -40,   -45,   -45,
     -45,   -45,   -45,   704,     0,     0,     0,     0,     0,     0,
     -45,     0,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,     0,     0,   -42,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,     0,     0,     0,   -43,
       0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
       0,     0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,   -73,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,     0,   -44,     0,
       0,   -73,   -73,   -73,   -73,   -73,     0,   506,   -73,     0,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,   -46,   -62,   -62,   -62,   -62,   -62,
       0,     0,     0,     0,     0,     0,     0,   517,     0,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,
       0,     0,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -62,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,   -66,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,     0,   -69,     0,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -66,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,     0,     0,   -69,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,   -67,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,   -74,     0,     0,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -39,   -39,   -39,   -39,
     -39,   -74,   -74,   -74,   -74,   -74,     0,     0,   -74,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -45,   -45,   -45,   -45,   -45,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -42,   -42,   -42,   -42,   -42,     0,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -43,   -43,
     -43,   -43,   -43,     0,     0,     0,   -73,   -73,   -73,   -73,
     -73,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -72,
     -72,   -72,   -72,   -72,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -72,   -43,   -43,   -73,   -73,   -73,   -73,   -73,     0,
     811,   -73,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -72,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   -71,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
     -70,     0,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,   -44,   -44,   -44,   -44,   -44,   -70,   -70,   -70,   -70,
     -70,     0,     0,   -70,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,   -75,     0,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -46,   -46,   -46,
     -46,   -46,   -75,   -75,   -75,   -75,   -75,     0,     0,   -75,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -58,   -58,   -58,   -58,   -58,   -66,   -66,
     -66,   -66,   -66,     0,     0,   -66,   -69,   -69,   -69,   -69,
     -69,     0,     0,   -69,   -59,   -59,   -59,   -59,   -59,     0,
       0,   -58,   -58,   -58,   -58,   -58,     0,     0,   -58,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -59,   -59,   -59,   -59,   -59,     0,     0,   -59,
     -67,   -67,   -67,   -67,   -67,     0,     0,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -60,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,   -74,   -74,   -74,   -74,   -74,   -67,   -67,
     -67,   -67,   -67,     0,     0,   -67,   -63,   -63,   -63,   -63,
     -63,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -74,   -74,   -74,   -74,   -74,     0,     0,   -74,   -65,
     -65,   -65,   -65,   -65,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,   -64,   -64,   -64,   -64,   -64,     0,     0,   -64,
     -72,   -72,   -72,   -72,   -72,     0,     0,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -72,   -72,
     -72,   -72,   -72,     0,     0,   -72,   -75,   -75,   -75,   -75,
     -75,     0,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,   -70,   -70,   -70,   -70,   -70,     0,     0,   -70,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,     0,
       0,   -75,   -39,   -39,   -39,   -39,   -39,     0,     0,     0,
       0,     0,     0,     0,   -39,     0,   -41,   -41,   -41,   -41,
     -41,   -39,     0,     0,     0,     0,     0,     0,   -41,     0,
     -39,   -39,   -39,   -39,   -39,   -41,   -39,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -41,   -41,   -41,   -41,   -41,   -40,
     -41,   -45,   -45,   -45,   -45,   -45,   -40,     0,     0,     0,
       0,     0,     0,   -45,     0,   -40,   -40,   -40,   -40,   -40,
     -45,   -40,   -42,   -42,   -42,   -42,   -42,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -42,   -45,   -43,   -43,   -43,   -43,
     -43,   -42,     0,     0,     0,     0,     0,     0,   -43,     0,
     -42,   -42,   -42,   -42,   -42,   -43,   -42,   -73,   -73,   -73,
     -73,   -73,     0,     0,   -43,   -43,   -43,   -43,   -43,   -73,
     -43,   -44,   -44,   -44,   -44,   -44,   -73,     0,   -39,   -39,
     -39,   -39,   -39,   -44,     0,   -73,   -73,   -73,   -73,   -73,
     -44,   430,   -46,   -46,   -46,   -46,   -46,   -39,     0,   -44,
     -44,   -44,   -44,   -44,   -46,   -44,   -39,   -39,   -39,   -39,
     -39,   -46,   -39,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -40,   -40,   -40,
     -40,   -40,   -41,     0,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -40,   -41,   -42,   -42,
     -42,   -42,   -42,   -45,     0,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -45,   -45,   -45,   -45,   -45,   -42,   -45,   -43,
     -43,   -43,   -43,   -43,     0,     0,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -73,   -73,   -73,   -73,   -73,   -43,     0,
     -44,   -44,   -44,   -44,   -44,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -73,   -43,   -46,   -46,   -46,   -46,   -46,   -44,
       0,   -73,   -73,   -73,   -73,   -73,     0,   766,   -44,   -44,
     -44,   -44,   -44,   -46,   -44,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -69,   -46,   -67,
     -67,   -67,   -67,   -67,   -69,     0,     0,     0,     0,     0,
       0,   -67,     0,   -69,   -69,   -69,   -69,   -69,   -67,     0,
     -74,   -74,   -74,   -74,   -74,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -74,     0,   -72,   -72,   -72,   -72,   -72,   -74,
       0,     0,     0,     0,     0,     0,   -72,     0,   -74,   -74,
     -74,   -74,   -74,   -72,     0,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -71,     0,   -70,
     -70,   -70,   -70,   -70,   -71,     0,   -66,   -66,   -66,   -66,
     -66,   -70,     0,   -71,   -71,   -71,   -71,   -71,   -70,     0,
     -75,   -75,   -75,   -75,   -75,   -66,     0,   -70,   -70,   -70,
     -70,   -70,   -75,     0,   -66,   -66,   -66,   -66,   -66,   -75,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,     0,   -58,   -58,   -58,   -58,   -58,   -69,
     -59,   -59,   -59,   -59,   -59,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -58,   -60,   -60,   -60,   -60,   -60,   -59,
       0,     0,   -58,   -58,   -58,   -58,   -58,     0,   -59,   -59,
     -59,   -59,   -59,   -60,   -61,   -61,   -61,   -61,   -61,     0,
       0,     0,   -60,   -60,   -60,   -60,   -60,     0,   -67,   -67,
     -67,   -67,   -67,   -61,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -67,   -63,   -63,
     -63,   -63,   -63,   -74,     0,     0,   -67,   -67,   -67,   -67,
     -67,     0,   -74,   -74,   -74,   -74,   -74,   -63,   -64,   -64,
     -64,   -64,   -64,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,     0,   -65,   -65,   -65,   -65,   -65,   -64,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -65,   -71,   -71,   -71,   -71,   -71,   -72,     0,     0,
     -65,   -65,   -65,   -65,   -65,     0,   -72,   -72,   -72,   -72,
     -72,   -71,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,     0,   -75,   -75,   -75,   -75,
     -75,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75
};

static const yytype_int16 yycheck[] =
{
       7,     0,     0,    43,     6,   177,   389,     6,     6,     0,
      40,     0,     0,    23,    40,     6,     8,     9,    10,   295,
     295,     8,     9,    10,    42,     8,     9,    10,   411,    19,
      27,    44,     0,    23,    42,   418,    49,     0,    64,    28,
      27,     0,     8,     9,    10,    19,    43,   430,     0,   325,
     325,    43,    49,     0,    44,    19,    43,    46,    47,    48,
      28,    44,    49,     0,    62,    28,    49,    27,   451,    28,
      72,    62,    42,    72,    72,   101,    28,    43,    46,    47,
      48,    28,    42,    46,    47,    48,     0,    46,    47,    48,
     473,    28,    42,    27,    46,    47,    48,    27,    27,    46,
      47,    48,     0,    19,   111,    27,    19,     0,    42,    46,
      47,    48,    42,    42,    28,    42,     8,     9,    10,    19,
       8,     9,    10,   506,     8,     9,    10,    42,    44,    19,
      28,    44,    46,    47,    48,    28,    37,   144,   136,    19,
     147,   313,    19,    27,    44,   136,    23,    42,    46,    47,
      48,    42,    44,    46,    47,    48,    44,    49,    19,    43,
     332,    49,   169,    43,    42,    49,    37,    44,    39,    49,
      29,    72,    73,    74,    21,    19,     3,     4,     5,    23,
       7,    82,    83,    44,    43,    12,    13,    14,    15,    16,
      17,    18,    19,    94,    21,   367,    23,    24,    25,    26,
      44,    28,    29,    74,    31,    27,    19,     8,     9,    10,
      23,     8,     9,    10,    43,    42,    27,    44,    45,    46,
      47,    48,    27,     3,     4,     5,    19,     7,   258,    43,
      27,    44,    12,    13,    14,    15,    16,    17,    18,    19,
     111,    21,    43,    27,   145,   146,    43,   148,    28,   150,
     257,    44,    49,    43,     8,     9,    10,    43,    42,     8,
       9,    10,    42,    49,    42,    43,    46,    47,    48,    27,
       3,     4,     5,   144,     7,    19,   147,    27,    27,    12,
      13,    14,    15,    16,    17,    18,    19,    27,    21,    42,
      44,    19,    42,   194,    43,    49,    43,   295,   169,    43,
      49,     8,     9,    10,   295,    49,     8,     9,    10,    42,
      27,    44,    43,    19,    43,    43,     8,     9,    10,    11,
      12,    49,    43,   194,   225,    42,    42,   325,    20,    19,
       8,     9,    10,    44,   325,    27,    43,    43,    49,   240,
     380,    43,    49,    49,    36,    37,    38,    39,    40,    23,
      42,    43,    27,    43,   225,   256,    43,    49,   741,    49,
       8,     9,    10,    11,    12,    43,    27,    42,    42,   240,
      44,    49,    20,    29,    19,    49,    43,    23,    23,    27,
      43,    42,   283,   766,    27,   256,    49,    43,    36,    37,
      38,    39,    40,   294,    42,    43,    42,   780,    44,    44,
      43,    49,    43,    49,   305,    23,    49,     3,     4,     5,
      42,     7,   283,     8,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    42,    21,    44,    23,   811,    25,
      26,    49,    27,    29,   305,    31,   476,    27,    27,    43,
       8,     9,    10,    11,    12,    49,    42,   318,    44,    45,
      29,   491,    20,    43,    43,   356,     8,     9,    10,    49,
      49,     8,     9,    10,    43,    42,   337,    27,    36,    37,
      38,    39,    40,    19,    42,   477,    44,    23,   477,   477,
     520,    49,    19,    43,    42,   356,    29,    27,   389,    49,
     492,    43,    23,   492,   492,    19,    43,    49,    44,   400,
      43,   372,    49,    43,     8,     9,    10,    11,    12,    49,
     411,    42,    29,    44,    29,    27,    20,   418,    49,   521,
      42,    43,   521,   521,    43,    27,    43,    49,    43,   430,
      49,    43,    36,    37,    38,    39,    40,    49,    42,    43,
     441,    43,     3,     4,     5,    49,     7,    49,    42,    43,
     451,    12,    13,    14,    15,    16,    17,    18,    19,    29,
      21,   462,    23,    24,    25,    26,    42,    28,    29,    42,
      31,    19,   473,    43,    27,    29,   477,   478,   479,    42,
      28,    42,    42,    44,    45,    46,    47,    48,    23,    43,
      43,   492,   493,   494,    27,    43,    49,    29,    46,    47,
      48,    29,    27,    29,    19,   506,    43,    42,   479,    44,
      27,    43,    49,    28,    49,    43,   517,    43,    43,    42,
     521,   522,   523,   494,    49,     3,     4,     5,    43,     7,
      29,    46,    47,    48,    12,    13,    14,    15,    16,    17,
      18,    19,    42,    21,    43,    23,   547,    25,    26,    29,
      42,    29,   523,    31,    42,     3,     4,     5,    42,     7,
     667,    42,    43,    43,    42,    28,    44,    45,    16,    17,
      18,    19,   679,    21,    29,    27,   547,     8,     9,    10,
      11,    12,   854,    46,    47,    48,    19,    43,    43,    20,
      29,    43,    42,    49,    42,    28,    27,    49,     8,     9,
      10,   602,   874,    28,    43,    36,    37,    38,    39,    40,
      43,    42,    43,    46,    47,    48,   723,    27,    49,    42,
      43,    46,    47,    48,    43,    29,    29,    42,    43,    19,
      49,   602,     3,     4,     5,    29,     7,    29,   639,    43,
      43,    12,    13,    14,    15,    16,    17,    18,    19,    43,
      21,    43,    23,    24,    25,    26,    29,    28,    29,    43,
      31,    42,    43,     8,     9,    10,    11,    12,   639,    19,
      43,    42,    42,    44,    45,    46,    47,    48,    42,   786,
      43,    42,   789,     8,     9,    10,    49,   794,    42,    43,
     797,    36,    37,    38,    39,    40,   667,    42,    42,    44,
      44,    43,    27,   704,    49,    49,   813,    49,   679,   816,
      42,    43,    42,    42,    44,    43,     3,     4,     5,    49,
       7,    49,    42,    43,    42,    12,    13,    14,    15,    16,
      17,    18,    19,   704,    21,    42,    23,    24,    25,    26,
     741,    28,    29,    23,    31,    43,    42,    43,     8,     9,
      10,    49,   723,    49,    27,    42,    42,    44,    45,    46,
      47,    48,     3,     4,     5,   766,     7,    27,    42,    21,
      42,    12,    13,    14,    15,    16,    17,    18,    19,   780,
      21,    42,    23,    42,    25,    26,   787,   788,    29,   790,
      31,   931,    42,    43,   795,   796,    43,   798,    42,    49,
      44,    42,    49,    44,    45,    49,    43,   947,    42,    19,
     811,    42,    49,   814,   815,   786,   817,    42,   789,    44,
     927,   928,   929,   794,    49,    42,   797,    42,    42,    43,
     932,   938,   939,   932,   932,    49,   943,   944,   945,    44,
      19,    42,   813,    42,    49,   816,   948,   954,   955,   948,
     948,     8,     9,    10,    11,    12,   963,   964,   965,   966,
     967,    43,    42,    20,    44,   972,    42,    49,    44,    49,
      27,    42,    43,    49,    42,    42,    42,   984,    49,    36,
      37,    38,    39,    40,    44,    42,    43,    42,   859,    49,
     997,    43,    49,  1000,    43,  1002,  1003,    49,    43,  1006,
      49,  1008,  1009,    43,    49,    43,    43,    42,   879,    49,
       8,     9,    10,    11,    12,    42,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,    42,    19,    43,    27,
      44,   932,   933,   934,    49,    49,  1043,  1044,    36,    37,
      38,    39,    40,    43,    42,    43,    43,   948,   949,   950,
      43,    49,    49,    43,    43,    43,   927,   928,   929,    49,
      49,    49,    43,   934,    43,    43,    43,   938,   939,    43,
      49,    49,   943,   944,   945,    49,    43,    43,    43,   950,
      43,    42,    49,   954,   955,    42,    49,     8,     9,    10,
      11,    12,   963,   964,   965,   966,   967,   998,   999,    20,
    1001,   972,    43,  1004,  1005,    43,  1007,    44,    49,    42,
      42,    49,    49,   984,    43,    36,    37,    38,    39,    40,
      49,    42,    42,    44,    43,    42,   997,    43,    49,  1000,
      49,  1002,  1003,    49,    43,  1006,    43,  1008,  1009,    43,
      49,    43,    49,    43,    43,    49,    37,    49,    43,    49,
      49,    21,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,
    1031,  1032,    43,    43,    55,    43,    42,    42,    49,    49,
      42,    49,  1043,  1044,    65,    66,    67,    68,    69,    70,
      43,    72,    73,    74,    43,    43,    49,    27,    21,    21,
      49,    49,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     3,     4,     5,    44,     7,    21,    21,
      27,    49,    12,    13,    14,    15,    16,    17,    18,    19,
      43,    21,    43,    23,    43,    25,    26,    43,    49,    29,
      49,    31,    43,    49,     0,    21,    44,    43,    49,    43,
       6,    49,    42,    27,    44,    45,    44,   138,   139,   140,
      43,    49,    27,    44,   145,   146,    44,   148,    49,   150,
      43,    49,    43,     3,     4,     5,    44,     7,    19,    43,
      42,    49,    12,    13,    14,    15,    16,    17,    18,    19,
      27,    21,    44,    23,    24,    25,    26,    49,    28,    29,
      42,    31,     8,     9,    10,    11,    12,     8,     9,    10,
      11,    12,    42,   194,    44,    45,    46,    47,    48,    20,
      44,    27,   203,    44,    44,    49,    27,    42,    49,    49,
      36,    37,    38,    39,    40,    36,    37,    38,    39,    40,
      44,    42,    43,    27,   225,    49,    27,   228,    49,    44,
      43,     3,     4,     5,    49,     7,    43,    43,    27,   240,
      12,    13,    14,    15,    16,    17,    18,    19,    43,    21,
      43,    23,    24,    25,    26,   256,    28,    29,    44,    31,
      44,    44,    43,    49,    44,    49,    49,   268,    43,    49,
      42,    27,    44,    45,    46,    47,    48,    27,    27,    43,
      43,    43,   283,    42,    42,     3,     4,     5,    42,     7,
     291,    19,    27,   294,    12,    13,    14,    15,    16,    17,
      18,    19,    27,    21,   305,     3,     4,     5,   309,     7,
      27,    27,    27,    27,    12,    13,    14,    15,    16,    17,
      18,    19,    27,    21,    42,    23,    24,    25,    26,   330,
      28,    29,    43,    31,    43,    43,    42,     8,     9,    10,
      11,    12,    42,    42,    42,    19,    44,    45,    46,    47,
      48,    43,    43,    43,    27,   356,    27,    27,    27,    27,
      27,    43,    27,   364,    27,    36,    37,    38,    39,    40,
      27,    42,    43,    27,    27,    19,    27,    43,    49,    43,
     381,   382,   383,   384,   385,   386,    21,    43,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
      43,    42,   403,   404,   405,   406,   407,   408,    42,    42,
     411,    43,   413,   414,   415,    43,    43,   418,   419,   420,
     421,   422,   423,   424,    43,    27,    27,    27,    27,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,    27,   443,   444,   445,   446,   447,   448,    43,    43,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,    43,    43,    21,    21,    21,   468,   469,   470,
      43,    43,   473,    43,    43,    43,   477,   478,   479,    43,
      43,    43,    43,    43,    43,   486,   487,   488,    -1,    43,
      43,   492,   493,   494,    43,    43,    43,   498,   499,   500,
     501,   502,   503,    43,    43,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,    43,    43,    43,
     521,   522,   523,    43,    43,    43,    42,     3,     4,     5,
      42,     7,    42,    27,    43,    43,    12,    13,    14,    15,
      16,    17,    18,    19,    43,    21,   547,    23,    24,    25,
      26,   552,    28,    29,    43,    31,    43,    43,    43,    42,
      42,    42,    27,    43,    43,    43,    42,    27,    44,    45,
      46,    47,    48,    43,     3,     4,     5,    43,     7,    43,
      43,    43,    43,    12,    13,    14,    15,    16,    17,    18,
      19,    43,    21,    43,    23,    24,    25,    26,    43,    28,
      29,   602,    31,    43,    43,    27,   607,     3,     4,     5,
      27,     7,    43,    42,    27,    44,    45,    46,    47,    48,
      16,    17,    18,    19,    43,    21,    27,    43,    43,    43,
      -1,    43,    43,    43,    43,    43,    43,    43,   639,    43,
       3,     4,     5,   644,     7,    -1,    42,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    -1,    28,    29,    -1,    31,    37,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,
      -1,    44,    45,    46,    47,    48,    16,    17,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,
      68,    69,    70,   704,    72,    73,    74,    -1,   709,    -1,
      -1,    -1,    42,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,   729,   730,
     731,    -1,    -1,    -1,    -1,   736,   737,   738,    -1,    -1,
     741,    -1,   743,   744,   745,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   754,   755,   756,    -1,    -1,    -1,    -1,
     761,   762,   763,    -1,    -1,   766,    -1,   768,   769,   770,
     138,   139,   140,    -1,   775,   776,   777,   145,   146,   780,
     148,    -1,   150,    -1,    -1,    -1,   787,   788,    -1,   790,
     791,   792,   793,    -1,   795,   796,    -1,   798,   799,   800,
     801,    -1,    -1,    -1,    -1,   806,   807,   808,    -1,    -1,
     811,    -1,    -1,   814,   815,    -1,   817,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,   203,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    29,    -1,    31,   225,    -1,    -1,
     228,    -1,    -1,    -1,     3,     4,     5,    42,     7,    44,
      45,    -1,   240,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,   256,    28,
      29,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     268,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   291,    -1,    -1,   294,    -1,    -1,    -1,
      -1,   932,   933,   934,    -1,    -1,    -1,   305,    -1,    -1,
      -1,   309,     8,     9,    10,    11,    12,   948,   949,   950,
      -1,     3,     4,     5,    20,     7,    -1,    -1,    -1,    -1,
      -1,    27,   330,    -1,    16,    17,    18,    19,    -1,    21,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,   356,    -1,
      42,    -1,    -1,    -1,    -1,    -1,   364,   998,   999,    -1,
    1001,    -1,    -1,  1004,  1005,    -1,  1007,    -1,    -1,    -1,
      -1,    -1,    -1,   381,   382,   383,   384,   385,   386,    -1,
      -1,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,    -1,    -1,   403,   404,   405,   406,   407,
     408,    -1,    -1,   411,    -1,   413,   414,   415,    -1,    -1,
     418,   419,   420,   421,   422,   423,   424,    -1,    -1,    -1,
      -1,    -1,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,    -1,   443,   444,   445,   446,   447,
     448,    -1,    -1,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,    -1,    -1,    -1,    -1,    -1,
     468,   469,   470,    -1,    -1,   473,    -1,    -1,    -1,   477,
     478,   479,    -1,    -1,    -1,    -1,    -1,    -1,   486,   487,
     488,    -1,    -1,    -1,   492,   493,   494,    -1,    -1,    -1,
     498,   499,   500,   501,   502,   503,    -1,    -1,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
      -1,    -1,    -1,   521,   522,   523,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,   547,
      23,    24,    25,    26,   552,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    25,
      26,    -1,    28,    29,   602,    31,    -1,    -1,    -1,   607,
       3,     4,     5,    -1,     7,    -1,    42,    -1,    44,    45,
      46,    47,    48,    16,    17,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   639,    -1,     3,     4,     5,   644,     7,    -1,    42,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    25,    26,    -1,    28,    29,
      -1,    31,    37,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    42,    -1,    44,    45,    46,    47,    48,    16,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,   704,    72,    73,    74,
      -1,   709,    -1,    -1,    -1,    42,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    -1,
      -1,   729,   730,   731,    -1,    -1,    -1,    -1,   736,   737,
     738,    -1,    -1,   741,    -1,   743,   744,   745,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   754,   755,   756,    -1,
      -1,    -1,    -1,   761,   762,   763,    -1,    -1,   766,    -1,
     768,   769,   770,   138,   139,   140,    -1,   775,   776,   777,
     145,   146,   780,   148,    -1,   150,    -1,    -1,    -1,   787,
     788,    -1,   790,   791,   792,   793,    -1,   795,   796,    -1,
     798,   799,   800,   801,    -1,    -1,    -1,    -1,   806,   807,
     808,    -1,    -1,   811,    -1,    -1,   814,   815,    -1,   817,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,   203,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,    31,
     225,    -1,    -1,   228,    -1,    -1,    -1,     3,     4,     5,
      42,     7,    44,    45,    -1,   240,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    25,
      26,   256,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,   294,
      -1,    -1,    -1,    -1,   932,   933,   934,    -1,    -1,    -1,
     305,    -1,    -1,    -1,   309,     8,     9,    10,    11,    12,
     948,   949,   950,    -1,     3,     4,     5,    20,     7,    -1,
      -1,    -1,    -1,    -1,    27,   330,    -1,    16,    17,    18,
      19,    -1,    21,    36,    37,    38,    39,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,   356,    -1,    42,    -1,    -1,    -1,    -1,    -1,   364,
     998,   999,    -1,  1001,    -1,    -1,  1004,  1005,    -1,  1007,
      -1,    -1,    -1,    -1,    -1,    -1,   381,   382,   383,   384,
     385,   386,    -1,    -1,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,    -1,    -1,   403,   404,
     405,   406,   407,   408,    -1,    -1,   411,    -1,   413,   414,
     415,    -1,    -1,   418,   419,   420,   421,   422,   423,   424,
      -1,    -1,    -1,    -1,    -1,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,    -1,   443,   444,
     445,   446,   447,   448,    -1,    -1,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,    -1,    -1,
      -1,    -1,    -1,   468,   469,   470,    -1,    -1,   473,    -1,
      -1,    -1,   477,   478,   479,    -1,    -1,    -1,    -1,    -1,
      -1,   486,   487,   488,    -1,    -1,    -1,   492,   493,   494,
      -1,    -1,    -1,   498,   499,   500,   501,   502,   503,    -1,
      -1,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,    -1,    -1,    -1,   521,   522,   523,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,   547,    23,    24,    25,    26,   552,    28,    29,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    -1,    28,    29,   602,    31,    -1,
      -1,    -1,   607,     3,     4,     5,    -1,     7,    -1,    42,
      -1,    44,    45,    46,    47,    48,    16,    17,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   639,    -1,     3,     4,     5,   644,
       7,    -1,    42,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    24,    25,    26,
      -1,    28,    29,    -1,    31,    37,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    42,    -1,    44,    45,    46,
      47,    48,    16,    17,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    69,    70,   704,
      72,    73,    74,    -1,   709,    -1,    -1,    -1,    42,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,   729,   730,   731,    -1,    -1,    -1,
      -1,   736,   737,   738,    -1,    -1,   741,    -1,   743,   744,
     745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   754,
     755,   756,    -1,    -1,    -1,    -1,   761,   762,   763,    -1,
      -1,   766,    -1,   768,   769,   770,   138,   139,   140,    -1,
     775,   776,   777,   145,   146,   780,   148,    -1,   150,    -1,
      -1,    -1,   787,   788,    -1,   790,   791,   792,   793,    -1,
     795,   796,    -1,   798,   799,   800,   801,    -1,    -1,    -1,
      -1,   806,   807,   808,    -1,    -1,   811,    -1,    -1,   814,
     815,    -1,   817,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,   203,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      29,    -1,    31,   225,    -1,    -1,   228,    -1,    -1,    -1,
       3,     4,     5,    42,     7,    44,    45,    -1,   240,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,   256,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,
      -1,    -1,   294,    -1,    -1,    -1,    -1,   932,   933,   934,
      -1,    -1,    -1,   305,    -1,    -1,    -1,   309,     3,     4,
       5,    -1,     7,   948,   949,   950,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,   330,     8,
       9,    10,    11,    12,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    -1,    42,    27,    44,
      16,    17,    18,    19,   356,    21,    -1,    36,    37,    38,
      39,    40,   364,   998,   999,    -1,  1001,    -1,    -1,  1004,
    1005,    -1,  1007,    -1,    -1,    -1,    42,    -1,    -1,   381,
     382,   383,   384,   385,   386,    -1,    -1,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,    -1,
      -1,   403,   404,   405,   406,   407,   408,    -1,    -1,   411,
      -1,   413,   414,   415,    -1,    -1,   418,   419,   420,   421,
     422,   423,   424,    -1,    -1,    -1,    -1,    -1,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
      -1,   443,   444,   445,   446,   447,   448,    -1,    -1,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,    -1,    -1,    -1,    -1,    -1,   468,   469,   470,    -1,
      -1,   473,    -1,    -1,    -1,   477,   478,   479,    -1,    -1,
      -1,    -1,    -1,    -1,   486,   487,   488,    -1,    -1,    -1,
     492,   493,   494,    -1,    -1,    -1,   498,   499,   500,   501,
     502,   503,    -1,    -1,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,    -1,    -1,    -1,   521,
     522,   523,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,   547,    23,    24,    25,    26,
     552,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,
      47,    48,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    25,    26,    -1,    28,    -1,
     602,    31,    -1,    -1,    -1,   607,     3,     4,     5,    -1,
       7,    -1,    42,    -1,    44,    45,    46,    47,    48,    16,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   639,    -1,     3,
       4,     5,   644,     7,    -1,    42,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    37,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    42,    -1,
      44,    45,    46,    47,    48,    16,    17,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,
      -1,    -1,   704,    72,    73,    74,    -1,   709,    -1,    -1,
      -1,    42,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    -1,   729,   730,   731,
      -1,    -1,    -1,    -1,   736,   737,   738,    -1,    -1,   741,
      -1,   743,   744,   745,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   754,   755,   756,    -1,    -1,    -1,    -1,   761,
     762,   763,    -1,    -1,   766,    -1,   768,   769,   770,   138,
     139,   140,    -1,   775,   776,   777,   145,   146,   780,   148,
      -1,   150,    -1,    -1,    -1,   787,   788,    -1,   790,   791,
     792,   793,    -1,   795,   796,    -1,   798,   799,   800,   801,
      -1,    -1,    -1,    -1,   806,   807,   808,    -1,    -1,   811,
      -1,    -1,   814,   815,    -1,   817,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,   194,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   225,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,     3,     4,
       5,   240,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,   256,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    42,     7,    44,
      45,    46,    47,    48,   283,    -1,    -1,    16,    17,    18,
      19,    -1,    21,    -1,    -1,   294,    -1,    -1,    -1,    -1,
     932,   933,   934,    -1,    -1,    -1,   305,    -1,    -1,    -1,
       3,     4,     5,    42,     7,    -1,   948,   949,   950,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   998,   999,    -1,  1001,
      -1,    -1,  1004,  1005,    -1,  1007,    -1,    -1,    -1,    -1,
      -1,    -1,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,    -1,    -1,   403,   404,   405,    -1,    -1,    -1,
      -1,    -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,
     419,   420,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,    -1,   443,   444,   445,    -1,    -1,    -1,
      -1,    -1,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,   477,   478,
     479,    -1,    -1,    -1,    -1,    -1,    -1,   486,   487,   488,
      -1,    -1,    -1,   492,   493,   494,    -1,    -1,    -1,   498,
     499,   500,    -1,    -1,    37,    -1,    -1,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,    -1,
      -1,    -1,   521,   522,   523,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    -1,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,
      -1,    -1,    -1,   602,    -1,   138,   139,   140,    42,    -1,
      44,    45,   145,   146,    -1,   148,    -1,   150,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
     639,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,   194,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,   225,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,   704,    -1,   240,    -1,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,   256,    -1,     3,     4,     5,    -1,     7,
     729,   730,   731,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,   741,    21,   743,   744,   745,    -1,    -1,    -1,
     283,    -1,    -1,    -1,    -1,   754,   755,   756,    -1,    -1,
      -1,   294,    -1,    -1,    42,    -1,    44,   766,    -1,   768,
     769,   770,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   780,    -1,    -1,    -1,    -1,    -1,    -1,   787,   788,
      -1,   790,   791,   792,   793,    -1,   795,   796,    -1,   798,
     799,   800,   801,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    -1,   811,    -1,    -1,   814,   815,    20,   817,    -1,
      -1,    -1,    -1,   356,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,    -1,    -1,
     403,   404,   405,    -1,    -1,    -1,    -1,    -1,   411,    -1,
      -1,    -1,    -1,    -1,    -1,   418,   419,   420,   421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,    -1,
     443,   444,   445,    -1,    -1,    -1,    -1,    -1,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
      -1,    -1,    -1,   932,   933,   934,    -1,    -1,    -1,    -1,
     473,    -1,    -1,    -1,   477,   478,   479,    -1,    -1,   948,
     949,   950,    -1,   486,   487,   488,    -1,    -1,    -1,   492,
     493,   494,    -1,    -1,    -1,   498,   499,   500,    -1,    -1,
      -1,    -1,    -1,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,    -1,    -1,    -1,   521,   522,
     523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   998,
     999,    -1,  1001,    -1,    -1,  1004,  1005,    -1,  1007,     3,
       4,     5,    -1,     7,   547,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,   602,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,   639,    44,    45,    46,
      47,    48,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    25,    26,    37,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    42,    -1,    44,    45,    46,    47,    48,    20,
      -1,    -1,    -1,    -1,    -1,    65,    66,    67,    -1,    -1,
      -1,   704,    72,    73,    74,    36,    37,    38,    39,    40,
      -1,    42,    43,    83,    -1,    -1,    -1,    87,    88,    -1,
      90,    -1,    92,    -1,    -1,    -1,   729,   730,   731,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,   741,    -1,
     743,   744,   745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   754,   755,   756,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    -1,   766,    43,   768,   769,   770,   138,   139,
     140,    -1,    -1,    -1,    -1,   145,   146,   780,   148,    -1,
     150,    -1,    -1,    -1,   787,   788,    -1,   790,   791,   792,
     793,    -1,   795,   796,    -1,   798,   799,   800,   801,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   811,    -1,
      -1,   814,   815,    -1,   817,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,   194,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,     3,     4,     5,
     240,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,   256,    23,    24,    25,
      26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    48,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   932,
     933,   934,    -1,    -1,    -1,   305,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,   948,   949,   950,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    48,    -1,   356,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   998,   999,    -1,  1001,    -1,
      -1,  1004,  1005,    -1,  1007,    -1,    -1,    -1,    -1,    -1,
      -1,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,    -1,    -1,   403,   404,   405,    -1,    -1,    -1,    -1,
      -1,   411,    -1,    -1,    -1,    -1,    -1,    -1,   418,   419,
     420,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,    -1,   443,   444,   445,    -1,    -1,    -1,    -1,
      -1,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   473,    -1,    -1,    -1,   477,   478,   479,
      -1,    -1,    -1,    -1,    -1,    -1,   486,   487,   488,    -1,
      -1,    -1,   492,   493,   494,    -1,    -1,    -1,   498,   499,
     500,    -1,    -1,    37,    -1,    -1,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,    -1,    -1,
      -1,   521,   522,   523,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,    83,
      -1,    -1,     3,     4,     5,    89,     7,    91,    -1,    93,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,   602,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,    -1,   148,    -1,   150,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,   639,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
     194,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,   225,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,   704,    -1,   240,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,   256,    -1,     3,     4,     5,    -1,     7,   729,
     730,   731,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,   741,    21,   743,   744,   745,    -1,    -1,    -1,   283,
      -1,    -1,    -1,    -1,   754,   755,   756,    -1,    -1,    -1,
     294,    -1,    -1,    42,    -1,    44,   766,    -1,   768,   769,
     770,   305,    -1,    -1,    -1,     8,     9,    10,    11,    12,
     780,    -1,    -1,    -1,    -1,    -1,    -1,   787,   788,    -1,
     790,   791,   792,   793,    27,   795,   796,    -1,   798,   799,
     800,   801,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,   811,    -1,    -1,   814,   815,    49,   817,    -1,    -1,
      -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    26,   389,   390,   391,   392,    31,
      -1,   395,    -1,   397,    -1,   399,   400,    -1,    -1,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,   411,    -1,    -1,
      -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   430,   431,   432,   433,
      -1,    -1,   436,    -1,   438,    -1,   440,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,   452,   453,
     454,    -1,    -1,   457,    -1,   459,    -1,   461,   462,    -1,
      -1,    -1,   932,   933,   934,    -1,    -1,    -1,    -1,   473,
      -1,    -1,    -1,   477,   478,   479,    -1,    -1,   948,   949,
     950,    -1,     3,     4,     5,    -1,     7,    -1,   492,   493,
     494,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,   506,   507,   508,   509,    -1,    -1,   512,    -1,
     514,    -1,   516,   517,    -1,    -1,    -1,   521,   522,   523,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,   998,   999,
      -1,  1001,    -1,    -1,  1004,  1005,    -1,  1007,     3,     4,
       5,    -1,     7,   547,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,   602,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    37,    21,    -1,    23,    24,    25,    26,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,   639,    44,    45,    46,    47,
      48,     3,     4,     5,    -1,     7,    -1,    72,    73,    74,
      12,    13,    14,    15,    16,    17,    18,    19,    83,    21,
      -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      42,    -1,    44,    45,    46,    47,    48,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
     704,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
     145,   146,    -1,   148,    -1,   150,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,   741,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,   766,    -1,    -1,    -1,    -1,    -1,    42,   194,
      44,    45,    46,    47,    48,    -1,   780,    -1,    -1,    -1,
      -1,    -1,    -1,   787,   788,    -1,   790,    -1,    -1,    -1,
      -1,   795,   796,    -1,   798,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,    -1,   811,    -1,    -1,
     814,   815,    -1,   817,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,   256,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    23,    24,    25,    26,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   283,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    48,   294,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
     305,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   932,   933,
     934,   356,    36,    37,    38,    39,    40,    -1,     3,     4,
       5,    -1,     7,    -1,   948,   949,   950,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    -1,     8,
       9,    10,    11,    12,   389,   390,   391,   392,    -1,    -1,
     395,    20,   397,    -1,   399,   400,    -1,    42,    27,    44,
      -1,    -1,    -1,    -1,    -1,    -1,   411,    36,    37,    38,
      39,    40,    -1,   418,   998,   999,    -1,  1001,    -1,    -1,
    1004,  1005,    -1,  1007,    -1,   430,   431,   432,   433,    -1,
      -1,   436,    -1,   438,    -1,   440,   441,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   451,   452,   453,   454,
      -1,    -1,   457,    -1,   459,    -1,   461,   462,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   473,    -1,
      -1,    -1,   477,   478,   479,    -1,    -1,    -1,    37,    -1,
      -1,     3,     4,     5,    -1,     7,    -1,   492,   493,   494,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,   506,   507,   508,   509,    -1,    -1,   512,    -1,   514,
      -1,   516,   517,    72,    73,    74,   521,   522,   523,    -1,
      42,    43,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,   547,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,    -1,   148,
      -1,   150,    -1,    -1,    -1,    -1,    -1,   602,   144,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,   165,
     166,   167,   168,   169,    -1,    -1,    -1,    -1,    27,   175,
      -1,    -1,    -1,    -1,   639,   194,    -1,    36,    37,    38,
      39,    40,    -1,    42,    43,    -1,    -1,     3,     4,     5,
      49,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,   225,    23,    24,    25,
      26,    -1,    28,    -1,   111,    31,    -1,    -1,    -1,    -1,
      -1,   240,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,   256,    -1,   704,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,     3,
       4,     5,   169,     7,    -1,   294,   741,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,   305,    21,    -1,    23,
      24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,   766,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      44,    45,    46,    47,    48,   780,    -1,    -1,    -1,    -1,
      -1,    -1,   787,   788,    -1,   790,    -1,    -1,    -1,    -1,
     795,   796,    -1,   798,    -1,    -1,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   811,    -1,    -1,   814,
     815,    -1,   817,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
     389,   390,   391,   392,    -1,     8,     9,    10,    11,    12,
      -1,   400,    36,    37,    38,    39,    40,    20,    42,    -1,
      44,    -1,   411,    -1,    -1,    49,    -1,    -1,    -1,   418,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,   430,   431,   432,   433,    -1,     8,     9,    10,    11,
      12,    -1,   441,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,   451,   452,   453,   454,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   462,    36,    37,    38,    39,    40,    -1,
      42,    -1,    44,    -1,   473,    -1,    -1,    49,   477,   478,
     479,    -1,    -1,    -1,    -1,    -1,    -1,   932,   933,   934,
      -1,    -1,    -1,   492,   493,   494,    -1,   111,    -1,    -1,
      -1,    -1,    -1,   948,   949,   950,    -1,   506,   507,   508,
     509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,   521,   522,   523,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,   147,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,   111,   547,    20,
      -1,    -1,    -1,   998,   999,   169,  1001,    -1,    -1,  1004,
    1005,    -1,  1007,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    49,    -1,
     144,    -1,    -1,   147,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,   602,    21,   169,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,
      47,    48,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
     639,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      -1,   667,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,   679,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,   704,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,
      47,    48,     8,     9,    10,    11,    12,   723,    -1,    -1,
      -1,    -1,   741,    -1,    20,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,   766,    44,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   780,   144,    -1,    -1,   147,    -1,    -1,   787,   788,
     667,   790,    -1,    -1,    -1,    -1,   795,   796,    -1,   798,
     786,    -1,   679,   789,    -1,    -1,    -1,   169,   794,    -1,
      -1,   797,   811,    -1,    -1,   814,   815,    -1,   817,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,   813,    -1,    -1,
     816,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,   723,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,   786,
      -1,    -1,   789,    -1,    -1,    -1,    -1,   794,    -1,    42,
     797,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   932,   933,   934,   813,    -1,    -1,   816,
      -1,   927,   928,   929,    -1,    -1,    -1,    -1,    -1,   948,
     949,   950,   938,   939,    -1,    -1,    -1,   943,   944,   945,
       8,     9,    10,    11,    12,    -1,    -1,    -1,   954,   955,
      -1,    -1,    20,    -1,    -1,    -1,    -1,   963,   964,   965,
     966,   967,    -1,    -1,    -1,    -1,   972,    -1,    36,    37,
      38,    39,    40,    -1,    42,    -1,    44,    -1,   984,   998,
     999,    49,  1001,    -1,    -1,  1004,  1005,    -1,  1007,    -1,
      -1,   997,    -1,    -1,  1000,    -1,  1002,  1003,    -1,    -1,
    1006,    -1,  1008,  1009,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,    -1,    -1,    -1,
     927,   928,   929,   667,    -1,    -1,    -1,  1043,  1044,    -1,
      -1,   938,   939,    -1,    -1,   679,   943,   944,   945,    -1,
       8,     9,    10,    11,    12,    -1,    -1,   954,   955,    -1,
      -1,    -1,    20,    -1,    -1,    -1,   963,   964,   965,   966,
     967,    -1,    -1,    -1,    -1,   972,    -1,    -1,    36,    37,
      38,    39,    40,   667,    42,    -1,    44,   984,    -1,   723,
      -1,    49,    -1,    -1,    -1,   679,    -1,    -1,    -1,    -1,
     997,    -1,    -1,  1000,    -1,  1002,  1003,    -1,    -1,  1006,
      -1,  1008,  1009,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,    -1,    -1,    -1,   723,
       8,     9,    10,    11,    12,    -1,  1043,  1044,    -1,    -1,
      -1,    -1,   786,    -1,    -1,   789,    -1,    -1,    -1,    27,
     794,    -1,    -1,   797,    -1,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    42,    43,     3,     4,     5,   813,
       7,    49,   816,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    24,    25,    26,
      -1,    28,   786,    -1,    31,   789,    -1,    -1,    -1,    -1,
     794,    -1,    -1,   797,    -1,    42,    -1,    44,    45,    46,
      47,    48,    -1,    -1,     3,     4,     5,    -1,     7,   813,
      -1,    -1,   816,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,   667,    -1,    -1,    -1,    -1,
      27,    -1,    -1,   927,   928,   929,    -1,   679,    -1,    36,
      37,    38,    39,    40,   938,   939,    43,    -1,    -1,   943,
     944,   945,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     954,   955,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   963,
     964,   965,   966,   967,    -1,    -1,    -1,    -1,   972,    -1,
      -1,   723,    -1,   927,   928,   929,    -1,    -1,    -1,    -1,
     984,    -1,    -1,    -1,   938,   939,    -1,    -1,    -1,   943,
     944,   945,    -1,   997,    -1,    -1,  1000,    -1,  1002,  1003,
     954,   955,  1006,    -1,  1008,  1009,    -1,    -1,    -1,   963,
     964,   965,   966,   967,    -1,    -1,    -1,    -1,   972,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,    -1,
     984,    -1,    -1,    -1,   786,    -1,    -1,   789,    -1,  1043,
    1044,    -1,   794,   997,    -1,   797,  1000,    -1,  1002,  1003,
      -1,    -1,  1006,    -1,  1008,  1009,    -1,    -1,    -1,    -1,
      -1,   813,    -1,    -1,   816,    -1,    -1,    -1,    -1,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,  1043,
    1044,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    46,    47,    48,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    46,    47,    48,    -1,   927,   928,   929,     8,     9,
      10,    11,    12,    -1,    -1,    -1,   938,   939,    -1,    -1,
      20,   943,   944,   945,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,   954,   955,    -1,    -1,    36,    37,    38,    39,
      40,   963,   964,   965,   966,   967,    -1,    -1,    -1,    -1,
     972,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,   984,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,   997,    25,    26,  1000,    -1,
    1002,  1003,    31,    -1,  1006,    -1,  1008,  1009,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,
      -1,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,  1043,  1044,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    44,    45,    46,    47,    48,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    45,    46,    47,    48,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    42,
      -1,    44,    45,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      29,    -1,    31,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    42,    -1,    44,    45,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    42,    -1,    44,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    42,    -1,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    42,
      -1,    44,    45,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      29,    -1,    31,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    42,    -1,    44,    45,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    42,    -1,    44,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    42,    -1,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    42,
      -1,    44,    45,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    42,    -1,    44,    45,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    42,    -1,    44,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    42,    -1,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    42,
      -1,    44,    45,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    42,    -1,    44,    45,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    42,    -1,    44,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    42,    -1,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    42,
      -1,    44,    45,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    42,    -1,    44,    45,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    42,    -1,    44,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    42,    -1,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    42,
      -1,    44,    45,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    42,    -1,    44,    45,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    42,    -1,    44,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    42,    -1,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    42,
      -1,    44,    45,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    42,    -1,    44,    45,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    42,    -1,    44,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    42,    -1,    44,    45,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    42,    -1,    44,    45,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    42,
      -1,    44,    45,    20,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    -1,    42,    -1,    44,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    27,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,    12,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    27,    -1,    43,     8,     9,    10,
      11,    12,    49,    36,    37,    38,    39,    40,    -1,    20,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,    36,
      37,    38,    39,    40,    -1,    42,    43,     8,     9,    10,
      11,    12,    49,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,     8,     9,    10,    11,    12,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      27,    -1,    43,     8,     9,    10,    11,    12,    49,    36,
      37,    38,    39,    40,    -1,    42,    43,     8,     9,    10,
      11,    12,    49,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    36,    37,    38,    39,    40,    27,    20,    43,     8,
       9,    10,    11,    12,    27,    36,    37,    38,    39,    40,
      -1,    42,    43,    36,    37,    38,    39,    40,    49,    -1,
      43,     8,     9,    10,    11,    12,    49,    36,    37,    38,
      39,    40,    -1,    20,    43,     8,     9,    10,    11,    12,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    27,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,    12,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    27,    -1,    43,     8,     9,    10,
      11,    12,    49,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    36,    37,    38,    39,    40,
      27,    20,    -1,    44,    -1,    -1,    -1,    -1,    49,    36,
      37,    38,    39,    40,    -1,    42,    43,    36,    37,    38,
      39,    40,    49,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    49,    36,    37,    38,
      39,    40,    -1,    20,    43,     8,     9,    10,    11,    12,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    27,    -1,    43,     8,     9,    10,
      11,    12,    49,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    36,    37,    38,    39,    40,
      27,    42,    -1,    44,    -1,    -1,    -1,    -1,    49,    36,
      37,    38,    39,    40,    -1,    -1,    43,    36,    37,    38,
      39,    40,    49,    42,    -1,    44,    -1,    -1,    -1,    -1,
      49,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,    -1,    44,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    42,
      -1,    44,    -1,    -1,    -1,    -1,    49,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    49,    36,
      37,    38,    39,    40,    -1,    42,    -1,    44,    -1,    -1,
      -1,    -1,    49,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    12,    49,    36,    37,    38,    39,    40,
      -1,    -1,    43,     8,     9,    10,    11,    12,    49,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    36,    37,    38,
      39,    40,    -1,    42,    43,     8,     9,    10,    11,    12,
      49,    36,    37,    38,    39,    40,    -1,    42,    43,    36,
      37,    38,    39,    40,    49,    42,    43,     8,     9,    10,
      11,    12,    49,    36,    37,    38,    39,    40,    -1,    42,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,    36,
      37,    38,    39,    40,    -1,    42,    43,    36,    37,    38,
      39,    40,    49,    42,    43,     8,     9,    10,    11,    12,
      49,    -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    36,    37,    38,    39,    40,    -1,    -1,
      43,    36,    37,    38,    39,    40,    49,    -1,    43,     8,
       9,    10,    11,    12,    49,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    36,    37,    38,
      39,    40,    -1,    -1,    43,    36,    37,    38,    39,    40,
      49,    -1,    43,     8,     9,    10,    11,    12,    49,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    36,    37,    38,    39,    40,    -1,    -1,    43,    36,
      37,    38,    39,    40,    49,    -1,    43,     8,     9,    10,
      11,    12,    49,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    43,    36,    37,    38,    39,    40,    49,    42,
      -1,    44,    -1,    -1,    -1,    -1,    49,    36,    37,    38,
      39,    40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,
      49,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    43,     8,     9,    10,
      11,    12,    49,    36,    37,    38,    39,    40,    -1,    20,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    43,     8,     9,    10,    11,    12,    49,    36,
      37,    38,    39,    40,    -1,    -1,    43,     8,     9,    10,
      11,    12,    49,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    36,    37,    38,    39,    40,    27,    42,    43,    -1,
      -1,    -1,    -1,    -1,    49,    36,    37,    38,    39,    40,
      -1,    -1,    43,    36,    37,    38,    39,    40,    49,    42,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    36,
      37,    38,    39,    40,    -1,    -1,    43,    36,    37,    38,
      39,    40,    49,    -1,    43,     8,     9,    10,    11,    12,
      49,    -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    36,    37,    38,    39,    40,    -1,    -1,
      43,    36,    37,    38,    39,    40,    49,    -1,    43,     8,
       9,    10,    11,    12,    49,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    36,    37,    38,
      39,    40,    -1,    -1,    43,    36,    37,    38,    39,    40,
      49,    -1,    43,     8,     9,    10,    11,    12,    49,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,     8,     9,    10,    11,    12,
      27,    36,    37,    38,    39,    40,    -1,    -1,    43,    36,
      37,    38,    39,    40,    49,    -1,    43,     8,     9,    10,
      11,    12,    49,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,     8,
       9,    10,    11,    12,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,     8,     9,    10,    11,    12,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,     8,     9,    10,    11,    12,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,     8,     9,    10,    11,    12,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,     8,     9,    10,    11,    12,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    12,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    49,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,     8,     9,    10,    11,    12,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,     8,     9,    10,    11,    12,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    49,     8,     9,    10,    11,    12,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    12,    49,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    49,    36,    37,    38,
      39,    40,    -1,    -1,    43,    36,    37,    38,    39,    40,
      49,    -1,    43,     8,     9,    10,    11,    12,    49,    36,
      37,    38,    39,    40,    -1,    -1,    43,     8,     9,    10,
      11,    12,    49,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    12,    49,    36,    37,    38,    39,    40,
      -1,    -1,    43,    36,    37,    38,    39,    40,    49,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    36,    37,    38,
      39,    40,    -1,    -1,    43,     8,     9,    10,    11,    12,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,     8,     9,    10,
      11,    12,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    -1,    43,    36,    37,    38,    39,    40,    49,    -1,
      43,    36,    37,    38,    39,    40,    49,    -1,    43,     8,
       9,    10,    11,    12,    49,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    43,    36,    37,    38,    39,    40,
      49,    -1,    43,    36,    37,    38,    39,    40,    49,    -1,
      43,     8,     9,    10,    11,    12,    49,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    43,    36,    37,    38,
      39,    40,    49,    -1,    43,     3,     4,     5,    -1,     7,
      49,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    42,    43,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    42,    43,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    42,    43,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,    -1,    -1,    42,    43,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    42,    43,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    -1,    42,
      43,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    42,    21,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      42,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    42,
      21,     3,     4,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      -1,    42,    -1,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      42,    21,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    -1,    42,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    42,    21,     3,     4,     5,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    -1,    42,    -1,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    42,    21,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    -1,    42,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,     8,     9,
      10,    11,    12,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,    43,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    -1,    43,     8,     9,    10,    11,
      12,    36,    37,    38,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    12,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      42,    43,     8,     9,    10,    11,    12,    36,    37,    38,
      39,    40,    -1,    42,    43,    36,    37,    38,    39,    40,
      -1,    42,    43,     8,     9,    10,    11,    12,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,    43,     8,     9,
      10,    11,    12,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    36,    37,    38,    39,    40,    -1,    42,    43,     8,
       9,    10,    11,    12,    -1,    -1,    36,    37,    38,    39,
      40,    20,    42,    43,    36,    37,    38,    39,    40,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    43,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,     8,     9,    10,    11,    12,    36,    37,    38,    39,
      40,    -1,    -1,    43,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,    43,     8,     9,    10,
      11,    12,    36,    37,    38,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    43,     8,     9,    10,    11,    12,    36,    37,
      38,    39,    40,    -1,    -1,    43,    36,    37,    38,    39,
      40,    -1,    -1,    43,     8,     9,    10,    11,    12,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    12,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    36,    37,    38,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    43,    36,    37,    38,    39,    40,
      -1,    -1,    43,     8,     9,    10,    11,    12,    36,    37,
      38,    39,    40,    -1,    -1,    43,     8,     9,    10,    11,
      12,    -1,    -1,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    43,     8,
       9,    10,    11,    12,    36,    37,    38,    39,    40,    -1,
      -1,    43,    36,    37,    38,    39,    40,    -1,    -1,    43,
       8,     9,    10,    11,    12,    -1,    -1,    36,    37,    38,
      39,    40,    -1,    -1,    43,     8,     9,    10,    11,    12,
      -1,    -1,    -1,     8,     9,    10,    11,    12,    36,    37,
      38,    39,    40,    -1,    -1,    43,     8,     9,    10,    11,
      12,    -1,    -1,    36,    37,    38,    39,    40,    -1,    -1,
      43,    36,    37,    38,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    -1,
      -1,    43,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,     8,     9,    10,    11,
      12,    27,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      36,    37,    38,    39,    40,    27,    42,     8,     9,    10,
      11,    12,    -1,    -1,    36,    37,    38,    39,    40,    20,
      42,     8,     9,    10,    11,    12,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    36,    37,    38,    39,    40,
      27,    42,     8,     9,    10,    11,    12,    -1,    -1,    36,
      37,    38,    39,    40,    20,    42,     8,     9,    10,    11,
      12,    27,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      36,    37,    38,    39,    40,    27,    42,     8,     9,    10,
      11,    12,    -1,    -1,    36,    37,    38,    39,    40,    20,
      42,     8,     9,    10,    11,    12,    27,    -1,     8,     9,
      10,    11,    12,    20,    -1,    36,    37,    38,    39,    40,
      27,    42,     8,     9,    10,    11,    12,    27,    -1,    36,
      37,    38,    39,    40,    20,    42,    36,    37,    38,    39,
      40,    27,    42,     8,     9,    10,    11,    12,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    42,     8,     9,    10,
      11,    12,    27,    -1,     8,     9,    10,    11,    12,    -1,
      -1,    36,    37,    38,    39,    40,    27,    42,     8,     9,
      10,    11,    12,    27,    -1,    36,    37,    38,    39,    40,
      -1,    42,    36,    37,    38,    39,    40,    27,    42,     8,
       9,    10,    11,    12,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    42,     8,     9,    10,    11,    12,    27,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    36,    37,    38,
      39,    40,    27,    42,     8,     9,    10,    11,    12,    27,
      -1,    36,    37,    38,    39,    40,    -1,    42,    36,    37,
      38,    39,    40,    27,    42,     8,     9,    10,    11,    12,
      -1,    -1,    36,    37,    38,    39,    40,    20,    42,     8,
       9,    10,    11,    12,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    36,    37,    38,    39,    40,    27,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    36,    37,    38,
      39,    40,    20,    -1,     8,     9,    10,    11,    12,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    36,    37,
      38,    39,    40,    27,    -1,     8,     9,    10,    11,    12,
      -1,    -1,    36,    37,    38,    39,    40,    20,    -1,     8,
       9,    10,    11,    12,    27,    -1,     8,     9,    10,    11,
      12,    20,    -1,    36,    37,    38,    39,    40,    27,    -1,
       8,     9,    10,    11,    12,    27,    -1,    36,    37,    38,
      39,    40,    20,    -1,    36,    37,    38,    39,    40,    27,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,     8,     9,    10,    11,    12,    27,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    27,     8,     9,    10,    11,    12,    27,
      -1,    -1,    36,    37,    38,    39,    40,    -1,    36,    37,
      38,    39,    40,    27,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    -1,     8,     9,
      10,    11,    12,    27,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    27,     8,     9,
      10,    11,    12,    27,    -1,    -1,    36,    37,    38,    39,
      40,    -1,    36,    37,    38,    39,    40,    27,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    -1,     8,     9,    10,    11,    12,    27,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    27,     8,     9,    10,    11,    12,    27,    -1,    -1,
      36,    37,    38,    39,    40,    -1,    36,    37,    38,    39,
      40,    27,     8,     9,    10,    11,    12,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    -1,     8,     9,    10,    11,
      12,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    46,    47,    48,    52,    53,    55,    58,    59,
      60,    62,     0,    60,    23,    82,    19,    44,    57,    61,
       3,     4,     5,     7,    12,    13,    14,    15,    16,    17,
      18,    19,    21,    24,    25,    26,    31,    42,    44,    45,
      58,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    80,    81,
      82,    83,    42,    44,    49,    42,    42,    42,    42,    42,
      42,    19,    42,    42,    42,    65,    44,    65,    57,    24,
      63,    44,    49,    42,     8,     9,    10,    11,    12,    36,
      37,    38,    39,    40,    20,    77,    19,    43,    54,    55,
      56,    58,    57,    74,    75,    74,    74,    77,    77,    77,
      21,    60,    70,    70,    65,    70,    43,    44,    70,    43,
      70,    79,    71,    71,    71,    74,    74,    72,    74,    72,
      74,    72,    70,    43,    49,    43,    49,    57,    27,    27,
      27,    43,    43,    43,    67,    27,    27,    43,    27,    43,
      49,    19,    55,    74,    74,    74,    67,    70,    70,    67,
      70,    70,    43,    43,    43,    43,    43,    43,    29,    43,
      67,    67,    67,    67,    67,    29,    67,    23,    28,    46,
      47,    48,     3,     4,     5,     7,    13,    14,    15,    16,
      17,    18,    19,    21,    42,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    19,    44,    61,    28,
      46,    47,    48,     3,     4,     5,     7,    13,    14,    15,
      16,    17,    18,    19,    21,    42,    68,    69,    76,    77,
      78,     3,     4,     5,     7,    16,    17,    18,    19,    21,
      42,    68,    69,    78,     3,     4,     5,     7,    13,    14,
      15,    16,    17,    18,    19,    21,    42,    55,    58,    59,
      62,    68,    69,    71,    72,    73,    74,    75,    76,    77,
      78,     3,     4,     5,     7,    13,    14,    15,    16,    17,
      18,    19,    21,    42,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    49,    42,     3,     4,     5,     7,
      16,    17,    18,    19,    21,    42,    68,    69,    75,    76,
      77,    78,    19,    23,    25,    26,    31,    44,    45,    65,
      66,    80,    81,    82,    83,    42,    13,    14,    15,    75,
      76,    77,    23,    25,    26,    31,    44,    45,    65,    66,
      80,    81,    82,    83,     3,     4,     5,     7,    13,    14,
      15,    16,    17,    18,    19,    21,    42,    68,    69,    71,
      72,    73,    74,    75,    76,    77,    78,    23,    25,    26,
      31,    44,    45,    65,    66,    80,    81,    82,    83,    24,
      64,    42,    42,    42,    42,    42,    42,    19,    65,    42,
       8,     9,    10,    11,    12,    36,    37,    38,    39,    40,
      20,    77,    44,    42,    42,    42,    42,    42,    42,    19,
      65,    42,    77,    42,    42,    42,    19,    65,    42,    42,
      42,    42,    42,    42,    42,    19,    65,    82,    44,    61,
      42,     8,     9,    10,    11,    12,    36,    37,    38,    39,
      40,    20,    77,    42,    42,    42,    42,    42,    42,    19,
      65,    42,     8,     9,    10,    11,    12,    36,    37,    38,
      39,    40,    20,    77,    70,    43,    54,    56,    42,    42,
      42,    19,    65,    42,    77,    24,    64,    42,    42,    42,
      44,    65,    44,    43,    54,    56,    42,    42,    42,    77,
      24,    64,    42,    42,    42,    44,    65,    44,    42,    42,
      42,    42,    42,    42,    19,    65,    42,     8,     9,    10,
      11,    12,    36,    37,    38,    39,    40,    20,    77,    24,
      64,    42,    42,    42,    44,    65,    44,    24,    74,    74,
      74,    77,    77,    77,    21,    43,    43,    79,     3,     4,
       5,     7,    16,    17,    18,    19,    21,    42,    68,    69,
      71,    75,    76,    77,    78,    71,    71,    74,    74,    72,
      74,    72,    74,    72,    70,    74,    74,    74,    77,    77,
      77,    21,    43,    43,    79,    77,    77,    77,    21,    43,
      43,    79,    74,    74,    74,    77,    77,    77,    21,    43,
      44,    43,    79,     3,     4,     5,     7,    16,    17,    18,
      19,    21,    42,    68,    69,    71,    75,    76,    77,    78,
      71,    71,    74,    74,    72,    74,    72,    74,    72,    70,
      74,    74,    74,    77,    77,    77,    21,    43,    43,    79,
       3,     4,     5,     7,    16,    17,    18,    19,    21,    42,
      68,    69,    71,    75,    76,    77,    78,    71,    71,    74,
      74,    72,    74,    72,    74,    72,    70,    43,    43,    77,
      77,    77,    21,    43,    43,    79,    24,    60,    70,    70,
      65,    70,    44,    43,    43,    74,    74,    74,    24,    60,
      70,    70,    65,    70,    44,    74,    74,    74,    77,    77,
      77,    21,    43,    43,    79,     3,     4,     5,     7,    16,
      17,    18,    19,    21,    42,    68,    69,    71,    75,    76,
      77,    78,    71,    71,    74,    74,    72,    74,    72,    74,
      72,    70,    24,    60,    70,    70,    65,    70,    44,    27,
      27,    27,    43,    43,    43,    43,    42,    42,    42,    19,
      65,    42,    77,    27,    27,    27,    43,    43,    43,    43,
      43,    43,    43,    43,    27,    27,    27,    43,    43,    43,
      43,    42,    42,    42,    19,    65,    42,    77,    27,    27,
      27,    43,    43,    43,    43,    42,    42,    42,    19,    65,
      42,    77,    43,    43,    43,    43,    67,    27,    27,    43,
      27,    27,    27,    27,    67,    27,    27,    43,    27,    27,
      27,    27,    43,    43,    43,    43,    42,    42,    42,    19,
      65,    42,    77,    67,    27,    27,    43,    27,    74,    74,
      74,    77,    77,    77,    21,    43,    43,    79,    74,    74,
      74,    74,    74,    74,    77,    77,    77,    21,    43,    43,
      79,    74,    74,    74,    77,    77,    77,    21,    43,    43,
      79,    67,    70,    70,    23,    25,    26,    31,    44,    45,
      65,    66,    67,    80,    81,    82,    83,    70,    74,    74,
      74,    67,    70,    70,    23,    25,    26,    31,    44,    45,
      65,    66,    67,    80,    81,    82,    83,    70,    74,    74,
      74,    77,    77,    77,    21,    43,    43,    79,    67,    70,
      70,    67,    70,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      24,    64,    42,    42,    42,    44,    65,    44,    29,    43,
      43,    43,    43,    43,    43,    43,    24,    64,    42,    42,
      42,    44,    65,    44,    29,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    29,    43,    67,    67,
      67,    24,    60,    70,    70,    65,    70,    44,    67,    67,
      67,    67,    67,    24,    60,    70,    70,    65,    70,    44,
      67,    67,    67,    67,    67,    67,    67,    67,    27,    27,
      43,    27,    29,    67,    27,    27,    43,    27,    29,    29,
      67,    70,    70,    67,    70,    67,    67,    70,    70,    67,
      70,    67,    67,    43,    43,    43,    29,    43,    43,    43,
      43,    29,    43,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    29,    29,    67,    67
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
      73,    73,    74,    74,    74,    74,    75,    75,    76,    77,
      77,    77,    77,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    81,    81,    81,    82,    82,    83,    83
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
       3,     3,     1,     6,     6,     6,     1,     2,     1,     1,
       4,     4,     4,     1,     3,     4,     1,     3,     7,     5,
       9,     7,     7,     7,     7,     2,     3,     2,     3
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
#line 68 "parser/clang.y"
                        {
                            liberar_ast((yyvsp[0].no));
                        }
#line 4484 "clang.tab.c"
    break;

  case 3: /* declaracoes: declaracao  */
#line 74 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_declaracoes(NULL, 0, (yyvsp[0].no));
                        }
#line 4492 "clang.tab.c"
    break;

  case 4: /* declaracoes: declaracoes declaracao  */
#line 78 "parser/clang.y"
                        {
                            NoAST_Declaracoes *novo_no = (NoAST_Declaracoes*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_declaracoes((yyvsp[-1].no), novo_no->declaracoes_no, (yyvsp[0].no));
                        }
#line 4501 "clang.tab.c"
    break;

  case 7: /* declaracao_parametro: def_declaracao_tipo def_declaracao  */
#line 89 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->funcao.tipo_dado = (yyvsp[-1].tipo_dado);
                            (yyval.simbolo) = (yyvsp[0].simbolo);    
                        }
#line 4510 "clang.tab.c"
    break;

  case 8: /* declaracao_parametro: def_declaracao_tipo  */
#line 93 "parser/clang.y"
                                                                      { declare = 1; (yyval.simbolo) = NULL; }
#line 4516 "clang.tab.c"
    break;

  case 9: /* lista_tipo_parametro: declaracao_parametro  */
#line 97 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros(NULL, 0, (yyvsp[0].simbolo));
                        }
#line 4524 "clang.tab.c"
    break;

  case 10: /* lista_tipo_parametro: lista_tipo_parametro VIRGULA declaracao_parametro  */
#line 101 "parser/clang.y"
                        {
                            NoAST_Parametros *novo_no = (NoAST_Parametros*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros((yyvsp[-2].no), novo_no->parametros_no, (yyvsp[0].simbolo));
                        }
#line 4533 "clang.tab.c"
    break;

  case 11: /* def_declaracao: TOKEN_ID  */
#line 108 "parser/clang.y"
                        {
                            (yyvsp[0].simbolo)->tag = CONSTANTE;
                            (yyval.simbolo) = (yyvsp[0].simbolo); 
                        }
#line 4542 "clang.tab.c"
    break;

  case 12: /* def_declaracao: def_declaracao PARENTESE_E PARENTESE_D  */
#line 113 "parser/clang.y"
                        {
                            (yyvsp[-2].simbolo)->funcao.parametros_no = 0;
                            (yyvsp[-2].simbolo)->funcao.parametros = NULL;
                            (yyval.simbolo) = (yyvsp[-2].simbolo);
                        }
#line 4552 "clang.tab.c"
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
#line 4564 "clang.tab.c"
    break;

  case 15: /* def_declaracao_tipo: TIPO_INT  */
#line 129 "parser/clang.y"
                                                { (yyval.tipo_dado) = TIPO_INTEIRO;}
#line 4570 "clang.tab.c"
    break;

  case 16: /* def_declaracao_tipo: TIPO_FLOAT  */
#line 130 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_PONTO_FLUTUANTE;}
#line 4576 "clang.tab.c"
    break;

  case 17: /* def_declaracao_tipo: TIPO_ELEM  */
#line 131 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_INDEFINIDO; }
#line 4582 "clang.tab.c"
    break;

  case 18: /* def_declaracao_tipo: TIPO_SET  */
#line 132 "parser/clang.y"
                                                                { (yyval.tipo_dado) = TIPO_CONJUNTO; }
#line 4588 "clang.tab.c"
    break;

  case 19: /* declaracao_func: declaracao_parametro expressao_composta  */
#line 137 "parser/clang.y"
                        {
                            (yyvsp[-1].simbolo)->tag = FUNCAO;
                            (yyval.no) = novo_no_ast_declaracao_funcao((yyvsp[-1].simbolo)->funcao.tipo_dado, (yyvsp[-1].simbolo), (yyvsp[0].no));
                        }
#line 4597 "clang.tab.c"
    break;

  case 20: /* declaracao: declaracao_func  */
#line 145 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4606 "clang.tab.c"
    break;

  case 21: /* declaracao: declaracao_var  */
#line 150 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[0].no);
                            imprimir_no((yyval.no), 1);
                        }
#line 4615 "clang.tab.c"
    break;

  case 22: /* lista_inicializar_atrib: def_declaracao  */
#line 157 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4623 "clang.tab.c"
    break;

  case 23: /* lista_inicializar_atrib: lista_inicializar_atrib VIRGULA def_declaracao  */
#line 161 "parser/clang.y"
                        {
                            add_lista((yyvsp[0].simbolo));
                        }
#line 4631 "clang.tab.c"
    break;

  case 24: /* declaracao_var: def_declaracao_tipo PONTO_E_VIRGULA  */
#line 166 "parser/clang.y"
                                                                      { (yyval.no) = NULL; }
#line 4637 "clang.tab.c"
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
#line 4657 "clang.tab.c"
    break;

  case 26: /* item_bloco: declaracao_var  */
#line 185 "parser/clang.y"
                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4663 "clang.tab.c"
    break;

  case 27: /* item_bloco: tipos_expressao  */
#line 186 "parser/clang.y"
                                                                  { (yyval.no) = (yyvsp[0].no); }
#line 4669 "clang.tab.c"
    break;

  case 28: /* lista_itens_bloco: item_bloco  */
#line 190 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_expressao_composta(NULL, 0, (yyvsp[0].no));
                        }
#line 4677 "clang.tab.c"
    break;

  case 29: /* lista_itens_bloco: lista_itens_bloco item_bloco  */
#line 194 "parser/clang.y"
                        {
                            NoAST_Expressao_Composta *novo_no = (NoAST_Expressao_Composta*) (yyvsp[-1].no);
                            (yyval.no) = novo_no_ast_expressao_composta((yyvsp[-1].no), novo_no->itens_bloco_no, (yyvsp[0].no));
                        }
#line 4686 "clang.tab.c"
    break;

  case 30: /* expressao: expressao_atribuicao  */
#line 200 "parser/clang.y"
                                                               { (yyval.no) = (yyvsp[0].no); }
#line 4692 "clang.tab.c"
    break;

  case 31: /* expressao: expressao VIRGULA expressao_atribuicao  */
#line 201 "parser/clang.y"
                                                                                         { (yyval.no) = (yyvsp[0].no); }
#line 4698 "clang.tab.c"
    break;

  case 32: /* expressao_declaracao: PONTO_E_VIRGULA  */
#line 204 "parser/clang.y"
                                          { (yyval.no) = NULL; }
#line 4704 "clang.tab.c"
    break;

  case 33: /* expressao_declaracao: expressao PONTO_E_VIRGULA  */
#line 205 "parser/clang.y"
                                                                            { (yyval.no) = (yyvsp[-1].no); }
#line 4710 "clang.tab.c"
    break;

  case 34: /* tipos_expressao: expressao_declaracao  */
#line 208 "parser/clang.y"
                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4716 "clang.tab.c"
    break;

  case 35: /* tipos_expressao: expressao_decisao  */
#line 209 "parser/clang.y"
                                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4722 "clang.tab.c"
    break;

  case 36: /* tipos_expressao: expressao_composta  */
#line 210 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4728 "clang.tab.c"
    break;

  case 37: /* tipos_expressao: expressao_return  */
#line 211 "parser/clang.y"
                                                                   { (yyval.no) = (yyvsp[0].no); }
#line 4734 "clang.tab.c"
    break;

  case 38: /* tipos_expressao: expressao_iteracao  */
#line 212 "parser/clang.y"
                                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4740 "clang.tab.c"
    break;

  case 39: /* valores: TOKEN_INTEIRO  */
#line 215 "parser/clang.y"
                                                                { (yyval.no) = novo_no_ast_constante(TIPO_INTEIRO, (yyvsp[0].valor)); }
#line 4746 "clang.tab.c"
    break;

  case 40: /* valores: TOKEN_PONTO_FLUTUANTE  */
#line 216 "parser/clang.y"
                                                                        { (yyval.no) = novo_no_ast_constante(TIPO_PONTO_FLUTUANTE, (yyvsp[0].valor)); }
#line 4752 "clang.tab.c"
    break;

  case 41: /* valores: TOKEN_EMPTY  */
#line 217 "parser/clang.y"
                                                { (yyval.no) = novo_no_ast_constante(TIPO_CONJUNTO, (yyvsp[0].valor)); }
#line 4758 "clang.tab.c"
    break;

  case 42: /* expressao_principal: TOKEN_ID  */
#line 221 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_referencia((yyvsp[0].simbolo));
                        }
#line 4766 "clang.tab.c"
    break;

  case 43: /* expressao_principal: valores  */
#line 225 "parser/clang.y"
                        {
                            (yyval.no) = (yyvsp[0].no); 
                        }
#line 4774 "clang.tab.c"
    break;

  case 44: /* expressao_principal: ASPAS_SIMPLES TOKEN_ID ASPAS_SIMPLES  */
#line 229 "parser/clang.y"
                        { (yyval.no) = NULL; }
#line 4780 "clang.tab.c"
    break;

  case 45: /* expressao_principal: TOKEN_CADEIA  */
#line 231 "parser/clang.y"
                        { (yyval.no) = novo_no_ast_constante(TIPO_CADEIA, (yyvsp[0].valor)); }
#line 4786 "clang.tab.c"
    break;

  case 46: /* expressao_principal: PARENTESE_E expressao PARENTESE_D  */
#line 232 "parser/clang.y"
                                                                                    { (yyval.no) = (yyvsp[-1].no); }
#line 4792 "clang.tab.c"
    break;

  case 47: /* expressao_atribuicao: expressao_relacional  */
#line 236 "parser/clang.y"
                                               { (yyval.no) = (yyvsp[0].no); }
#line 4798 "clang.tab.c"
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
#line 4826 "clang.tab.c"
    break;

  case 49: /* expressao_relacional: expressao_logica  */
#line 263 "parser/clang.y"
                                           { (yyval.no) = (yyvsp[0].no); }
#line 4832 "clang.tab.c"
    break;

  case 50: /* expressao_relacional: expressao_logica OP_MENOR_QUE expressao_relacional  */
#line 265 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4840 "clang.tab.c"
    break;

  case 51: /* expressao_relacional: expressao_logica OP_MAIOR_QUE expressao_relacional  */
#line 269 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4848 "clang.tab.c"
    break;

  case 52: /* expressao_relacional: expressao_logica OP_IGUALDADE expressao_relacional  */
#line 273 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_relacional((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4856 "clang.tab.c"
    break;

  case 53: /* expressao_logica: expressao_aritmetica  */
#line 279 "parser/clang.y"
                                                       { (yyval.no) = (yyvsp[0].no); }
#line 4862 "clang.tab.c"
    break;

  case 57: /* expressao_aritmetica: expressao_conjunto  */
#line 285 "parser/clang.y"
                                             { (yyval.no) = (yyvsp[0].no); }
#line 4868 "clang.tab.c"
    break;

  case 58: /* expressao_aritmetica: expressao_aritmetica OP_SOMA expressao_conjunto  */
#line 287 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4876 "clang.tab.c"
    break;

  case 59: /* expressao_aritmetica: expressao_aritmetica OP_SUBTRACAO expressao_conjunto  */
#line 291 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_aritmetica((yyvsp[-1].valor).intval, (yyvsp[-2].no), (yyvsp[0].no));
                        }
#line 4884 "clang.tab.c"
    break;

  case 62: /* expressao_conjunto: expressao_operacao  */
#line 298 "parser/clang.y"
                                                     { (yyval.no) = (yyvsp[0].no); }
#line 4890 "clang.tab.c"
    break;

  case 63: /* expressao_conjunto: CONJUNTO_ADD PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 300 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4898 "clang.tab.c"
    break;

  case 64: /* expressao_conjunto: CONJUNTO_REMOVE PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 304 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4906 "clang.tab.c"
    break;

  case 65: /* expressao_conjunto: CONJUNTO_EXISTS PARENTESE_E expressao_conjunto CONJUNTO_IN expressao_conjunto PARENTESE_D  */
#line 308 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_conjunto((yyvsp[-5].valor).intval, (yyvsp[-3].no), (yyvsp[-1].no));
                        }
#line 4914 "clang.tab.c"
    break;

  case 67: /* expressao_operacao: operadores_expressao expressao_io  */
#line 316 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_operacao((yyvsp[-1].valor).intval, (yyvsp[0].no));
                        }
#line 4922 "clang.tab.c"
    break;

  case 69: /* expressao_io: expressao_chamada  */
#line 325 "parser/clang.y"
                                                    { (yyval.no) = (yyvsp[0].no); }
#line 4928 "clang.tab.c"
    break;

  case 70: /* expressao_io: COMANDO_WRITELN PARENTESE_E expressao_io PARENTESE_D  */
#line 327 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                            // pular +1 linha
                        }
#line 4942 "clang.tab.c"
    break;

  case 71: /* expressao_io: COMANDO_WRITE PARENTESE_E expressao_io PARENTESE_D  */
#line 337 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_io((yyvsp[-1].no), (yyvsp[-3].valor).intval);
                            if(!(TIPO_CADEIA == tipo_expressao((yyvsp[-1].no))))
                            {
                                sprintf(erro, "[ERRO] A expressão não é do tipo cadeia. O erro se encontra na linha (coluna): %d (%d)\n", linha_no, coluna_no);
                                adicionar_erro(erro);
                            }
                        }
#line 4955 "clang.tab.c"
    break;

  case 72: /* expressao_io: COMANDO_READ PARENTESE_E expressao_io PARENTESE_D  */
#line 346 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 4963 "clang.tab.c"
    break;

  case 73: /* expressao_chamada: expressao_principal  */
#line 351 "parser/clang.y"
                                                      { (yyval.no) = (yyvsp[0].no); }
#line 4969 "clang.tab.c"
    break;

  case 75: /* expressao_chamada: expressao_principal PARENTESE_E expressao_lista_param PARENTESE_D  */
#line 354 "parser/clang.y"
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
#line 4997 "clang.tab.c"
    break;

  case 76: /* expressao_lista_param: expressao_atribuicao  */
#line 380 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_parametros_chamada(NULL, 0, (yyvsp[0].no));
                        }
#line 5005 "clang.tab.c"
    break;

  case 77: /* expressao_lista_param: expressao_lista_param VIRGULA expressao_atribuicao  */
#line 384 "parser/clang.y"
                        {
                            NoAST_Parametros_Chamada *novo_no = (NoAST_Parametros_Chamada*) (yyvsp[-2].no);
                            (yyval.no) = novo_no_ast_parametros_chamada((yyvsp[-2].no),  novo_no->parametros_no, (yyvsp[0].no));
                        }
#line 5014 "clang.tab.c"
    break;

  case 78: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 391 "parser/clang.y"
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
#line 5042 "clang.tab.c"
    break;

  case 79: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao PARENTESE_D tipos_expressao  */
#line 415 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_if((yyvsp[-2].no), (yyvsp[0].no), NULL, 0, NULL);
                        }
#line 5050 "clang.tab.c"
    break;

  case 80: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao COMANDO_ELSE tipos_expressao  */
#line 419 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5058 "clang.tab.c"
    break;

  case 81: /* expressao_decisao: COMANDO_IF PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 423 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5066 "clang.tab.c"
    break;

  case 82: /* expressao_iteracao: COMANDO_FOR PARENTESE_E declaracao tipos_expressao tipos_expressao PARENTESE_D tipos_expressao  */
#line 429 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5074 "clang.tab.c"
    break;

  case 83: /* expressao_iteracao: COMANDO_FOR PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 433 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5082 "clang.tab.c"
    break;

  case 84: /* expressao_iteracao: COMANDO_FORALL PARENTESE_E expressao_atribuicao CONJUNTO_IN expressao_atribuicao PARENTESE_D tipos_expressao  */
#line 437 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5090 "clang.tab.c"
    break;

  case 85: /* expressao_composta: CHAVE_E CHAVE_D  */
#line 443 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5098 "clang.tab.c"
    break;

  case 86: /* expressao_composta: CHAVE_E lista_itens_bloco CHAVE_D  */
#line 447 "parser/clang.y"
                        { 
                            (yyval.no) = (yyvsp[-1].no); 
                        }
#line 5106 "clang.tab.c"
    break;

  case 87: /* expressao_return: RETURN PONTO_E_VIRGULA  */
#line 453 "parser/clang.y"
                        {
                            (yyval.no) = NULL;
                        }
#line 5114 "clang.tab.c"
    break;

  case 88: /* expressao_return: RETURN expressao PONTO_E_VIRGULA  */
#line 457 "parser/clang.y"
                        {
                            (yyval.no) = novo_no_ast_retorno((yyvsp[-1].no));
                        }
#line 5122 "clang.tab.c"
    break;


#line 5126 "clang.tab.c"

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

#line 462 "parser/clang.y"


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
