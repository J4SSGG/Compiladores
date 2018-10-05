/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:339  */

// Required to some functions
#include <stdio.h>

// Things Bison need to know of Flex...
extern int yylex();
extern FILE * yyin;
extern int yylineno;
extern int yydebug;

// Syntactic analyser functions
int ParseExpression();
int ParseFile(char * path);
void yyerror(char * s);


#line 83 "Analyser/Sintactic/Parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "Parser.h".  */
#ifndef YY_YY_ANALYSER_SINTACTIC_PARSER_H_INCLUDED
# define YY_YY_ANALYSER_SINTACTIC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    vip_void = 258,
    vip_int = 259,
    vip_double = 260,
    vip_bool = 261,
    vip_string = 262,
    vip_class = 263,
    vip_interface = 264,
    vip_null = 265,
    vip_this = 266,
    vip_extends = 267,
    vip_implements = 268,
    vip_for = 269,
    vip_while = 270,
    vip_if = 271,
    vip_else = 272,
    vip_return = 273,
    vip_break = 274,
    vip_New = 275,
    vip_NewArray = 276,
    vip_Print = 277,
    vip_ReadInteger = 278,
    vip_ReadLine = 279,
    vip_Malloc = 280,
    vip_GetByte = 281,
    vip_SetByte = 282,
    identifier = 283,
    num_int = 284,
    num_hex = 285,
    num_double = 286,
    val_string = 287,
    val_bool = 288,
    opt_plus = 289,
    opt_minus = 290,
    opt_times = 291,
    opt_divide = 292,
    opt_mod = 293,
    opt_lower = 294,
    opt_lower_equal = 295,
    opt_greater = 296,
    opt_greater_equal = 297,
    opt_assign = 298,
    opt_equal = 299,
    opt_not_equal = 300,
    opt_and = 301,
    opt_or = 302,
    opt_not = 303,
    opt_semicolon = 304,
    opt_dot = 305,
    opt_coma = 306,
    opt_left_bracket = 307,
    opt_right_bracket = 308,
    opt_left_brace = 309,
    opt_right_brace = 310,
    opt_left_parentheses = 311,
    opt_right_parentheses = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 18 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:355  */

  int intVal;
  double doubleVal;
  char * stringVal;
  char charVal;

#line 188 "Analyser/Sintactic/Parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALYSER_SINTACTIC_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "Analyser/Sintactic/Parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    87,    91,    92,    93,    94,    98,   102,
     106,   107,   110,   111,   112,   113,   114,   118,   119,   123,
     124,   128,   132,   133,   137,   138,   142,   143,   147,   148,
     152,   156,   157,   161,   165,   166,   170,   171,   175,   176,
     177,   178,   179,   180,   181,   182,   186,   187,   192,   196,
     200,   204,   208,   212,   213,   217,   218,   222,   223,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   237,   238,
     239,   240,   241,   245,   246,   247,   248,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   263,   264,   265,   269,
     270,   271,   275,   276,   280,   281,   285,   286,   287,   288,
     289,   290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "vip_void", "vip_int", "vip_double",
  "vip_bool", "vip_string", "vip_class", "vip_interface", "vip_null",
  "vip_this", "vip_extends", "vip_implements", "vip_for", "vip_while",
  "vip_if", "vip_else", "vip_return", "vip_break", "vip_New",
  "vip_NewArray", "vip_Print", "vip_ReadInteger", "vip_ReadLine",
  "vip_Malloc", "vip_GetByte", "vip_SetByte", "identifier", "num_int",
  "num_hex", "num_double", "val_string", "val_bool", "opt_plus",
  "opt_minus", "opt_times", "opt_divide", "opt_mod", "opt_lower",
  "opt_lower_equal", "opt_greater", "opt_greater_equal", "opt_assign",
  "opt_equal", "opt_not_equal", "opt_and", "opt_or", "opt_not",
  "opt_semicolon", "opt_dot", "opt_coma", "opt_left_bracket",
  "opt_right_bracket", "opt_left_brace", "opt_right_brace",
  "opt_left_parentheses", "opt_right_parentheses", "$accept", "PROGRAM",
  "DECL", "VAR_DECL", "VARIABLE", "VARIABLE_PLUS", "TYPE", "FUNCTION_DECL",
  "FORMALS", "CLASS_DECL", "EXTENDS", "IMPLEMENTS", "IDENTIFIER_PLUS",
  "FIELD", "INTERFACE_DECL", "PROTOTYPE", "STMT_BLOCK", "VARS", "STMTS",
  "STATEMENT", "IF_STMT", "WHILE_STMT", "FOR_STMT", "RETURN_STMT",
  "BREAK_STMT", "PRINT_STMT", "EXPRESSION_Q", "EXPRESSION_PLUS",
  "EXPRESSION", "RRR", "SSS", "PPP", "TTT", "VALUE", "CALL", "LIB_CALL",
  "ACTUAL", "CONST", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -175

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-175)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     208,     2,  -175,  -175,  -175,  -175,    17,    28,    25,   208,
    -175,    11,   -21,  -175,  -175,  -175,     9,    62,    37,  -175,
    -175,  -175,    41,    50,   111,    80,    99,   173,   111,  -175,
      71,  -175,   -18,    56,  -175,    95,    95,   113,   -17,    87,
      92,   111,  -175,    98,   106,  -175,   112,   118,   125,  -175,
      98,  -175,   111,  -175,    95,   186,   111,   111,  -175,   111,
      57,  -175,  -175,  -175,   128,   110,   127,  -175,  -175,  -175,
     131,   141,   145,   175,   153,   165,   166,   184,   185,   187,
     188,   189,  -175,  -175,  -175,  -175,  -175,   175,   175,  -175,
     154,    57,  -175,  -175,  -175,  -175,  -175,  -175,   193,    -2,
      54,   -15,   182,  -175,   203,  -175,  -175,  -175,   199,   200,
     175,   175,   175,   201,  -175,   219,   175,   175,   179,   194,
     175,   175,    -2,   182,   182,  -175,  -175,  -175,   198,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,  -175,  -175,   204,   -34,   -24,  -175,
     195,   177,   197,   180,  -175,  -175,   -11,  -175,   202,   205,
     206,   207,   209,    74,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   182,   182,  -175,  -175,  -175,    54,   175,   140,
     140,  -175,   111,   211,   175,  -175,  -175,   175,   175,   175,
     175,  -175,    96,  -175,   238,   -35,  -175,  -175,    -3,   183,
     210,   212,   175,   140,  -175,  -175,   175,  -175,  -175,   213,
    -175,    52,   140,  -175,  -175
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    12,    13,    14,    15,     0,     0,     0,     2,
       4,     0,     0,     5,     6,     7,     0,    23,     0,     1,
       3,     8,     9,     0,    20,     0,    25,     0,    20,    16,
      11,    19,     0,     0,    22,     0,     0,     0,     0,     0,
       0,     0,     9,     0,    27,    24,     0,     0,     0,    30,
       0,    10,    35,    18,     0,     0,    20,    20,    17,    35,
      37,    26,    28,    29,     0,     0,     0,    34,   101,    77,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,    86,    96,    97,    98,   100,    99,     0,     0,    45,
       0,    37,    39,    40,    41,    43,    42,    44,     0,    53,
      58,    67,    72,    76,    80,    79,    78,    21,     0,     0,
      54,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,    95,     0,    70,    71,    33,    36,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    31,     0,     0,     0,    50,
       0,     0,     0,    56,    83,    84,     0,    94,     0,     0,
       0,    87,     0,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    68,    69,    73,    74,    75,    57,     0,    54,
      54,    81,     0,     0,     0,    85,    89,     0,     0,    95,
      95,    88,     0,    48,    46,     0,    52,    55,     0,     0,
       0,     0,    54,    54,    82,    92,     0,    90,    91,     0,
      47,     0,    54,    93,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,   247,  -175,    55,   -20,   216,     0,   217,   -13,  -175,
    -175,  -175,   -12,  -175,  -175,  -175,    16,   214,   167,  -174,
    -175,  -175,  -175,  -175,  -175,  -175,   -70,  -115,   -59,   121,
       3,   -75,    97,  -175,  -175,  -175,  -106,  -175
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    31,    32,    13,    33,    14,
      26,    36,    45,    64,    15,    39,    89,    60,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   157,   122,   100,
     101,   102,   103,   104,   105,   162,   158,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,    99,   152,   113,    30,   193,   194,    22,    30,    12,
      42,    48,   123,   124,    99,    40,   128,    23,   129,   138,
     139,    30,   204,   179,    46,    19,   128,    38,   129,   210,
      16,    23,    99,   180,    23,    23,    30,    30,   214,   128,
     146,   129,    61,    65,    66,    17,   185,   128,   128,   129,
     129,    99,   147,   148,   205,    12,    18,   151,   153,    53,
      21,   156,   153,   172,   173,    24,    58,    68,    69,   197,
     163,    70,    71,    72,    25,    73,    74,    75,    76,    77,
      78,    79,    80,   200,   201,    81,    82,    83,    84,    85,
      86,    27,    87,   130,   131,   132,   133,    28,   134,   135,
     136,   137,   128,    29,   129,    88,   -54,    59,    34,   213,
      62,    52,    35,    43,    59,     2,     3,     4,     5,   192,
      99,    99,    41,    44,   128,   153,   129,   191,   198,   199,
     153,   153,   209,   164,   165,   166,   167,   168,   169,   170,
     171,    47,    49,    99,    99,   202,   128,   211,   129,    50,
      68,    69,    52,    99,    70,    71,    72,    54,    73,    74,
      75,    76,    77,    78,    79,    80,    55,   108,    81,    82,
      83,    84,    85,    86,    56,    87,    37,     2,     3,     4,
       5,    57,   195,   107,   109,    68,    69,   110,    88,     1,
       2,     3,     4,     5,    52,    75,    76,   111,    78,    79,
      80,   112,   114,    81,    82,    83,    84,    85,    86,   125,
      87,     1,     2,     3,     4,     5,     6,     7,   140,   141,
     142,   115,   116,    88,   159,   160,   161,   128,   182,   129,
     128,   184,   129,   128,   206,   129,   154,   174,   175,   176,
     117,   118,   127,   119,   120,   121,   143,   150,   144,   145,
     149,   155,   181,   178,   183,   203,    20,    51,   126,   186,
     196,   187,   188,   189,   177,   190,     0,   207,     0,   208,
     212,     0,    63,    67
};

static const yytype_int16 yycheck[] =
{
       0,    60,   117,    73,    24,   179,   180,    28,    28,     9,
      28,    28,    87,    88,    73,    28,    50,    52,    52,    34,
      35,    41,    57,    57,    36,     0,    50,    27,    52,   203,
      28,    52,    91,    57,    52,    52,    56,    57,   212,    50,
     110,    52,    54,    56,    57,    28,    57,    50,    50,    52,
      52,   110,   111,   112,    57,    55,    28,   116,   117,    43,
      49,   120,   121,   138,   139,    56,    50,    10,    11,   184,
     129,    14,    15,    16,    12,    18,    19,    20,    21,    22,
      23,    24,    25,   189,   190,    28,    29,    30,    31,    32,
      33,    54,    35,    39,    40,    41,    42,    56,    44,    45,
      46,    47,    50,    53,    52,    48,    49,    52,    28,    57,
      55,    54,    13,    57,    59,     4,     5,     6,     7,   178,
     179,   180,    51,    28,    50,   184,    52,    53,   187,   188,
     189,   190,   202,   130,   131,   132,   133,   134,   135,   136,
     137,    28,    55,   202,   203,    49,    50,   206,    52,    57,
      10,    11,    54,   212,    14,    15,    16,    51,    18,    19,
      20,    21,    22,    23,    24,    25,    54,    57,    28,    29,
      30,    31,    32,    33,    56,    35,     3,     4,     5,     6,
       7,    56,   182,    55,    57,    10,    11,    56,    48,     3,
       4,     5,     6,     7,    54,    20,    21,    56,    23,    24,
      25,    56,    49,    28,    29,    30,    31,    32,    33,    55,
      35,     3,     4,     5,     6,     7,     8,     9,    36,    37,
      38,    56,    56,    48,    26,    27,    28,    50,    51,    52,
      50,    51,    52,    50,    51,    52,    57,   140,   141,   142,
      56,    56,    49,    56,    56,    56,    43,    28,    49,    49,
      49,    57,    57,    49,    57,    17,     9,    41,    91,    57,
      49,    56,    56,    56,   143,    56,    -1,    57,    -1,    57,
      57,    -1,    55,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    59,    60,
      61,    62,    64,    65,    67,    72,    28,    28,    28,     0,
      59,    49,    28,    52,    56,    12,    68,    54,    56,    53,
      62,    63,    64,    66,    28,    13,    69,     3,    64,    73,
      66,    51,    28,    57,    28,    70,    70,    28,    28,    55,
      57,    63,    54,    74,    51,    54,    56,    56,    74,    61,
      75,    70,    61,    65,    71,    66,    66,    75,    10,    11,
      14,    15,    16,    18,    19,    20,    21,    22,    23,    24,
      25,    28,    29,    30,    31,    32,    33,    35,    48,    74,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    86,
      87,    88,    89,    90,    91,    92,    95,    55,    57,    57,
      56,    56,    56,    84,    49,    56,    56,    56,    56,    56,
      56,    56,    86,    89,    89,    55,    76,    49,    50,    52,
      39,    40,    41,    42,    44,    45,    46,    47,    34,    35,
      36,    37,    38,    43,    49,    49,    84,    86,    86,    49,
      28,    86,    85,    86,    57,    57,    86,    85,    94,    26,
      27,    28,    93,    86,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    90,    90,    90,    87,    49,    57,
      57,    57,    51,    57,    51,    57,    57,    56,    56,    56,
      56,    53,    86,    77,    77,    64,    49,    85,    86,    86,
      94,    94,    49,    17,    57,    57,    51,    57,    57,    84,
      77,    86,    57,    57,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    60,    60,    61,    62,
      63,    63,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    68,    68,    69,    69,    70,    70,    71,    71,
      72,    73,    73,    74,    75,    75,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    80,
      81,    82,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    91,    92,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    95,
      95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     3,     6,     6,     1,
       0,     8,     2,     0,     2,     0,     3,     1,     1,     1,
       5,     6,     6,     4,     2,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     5,     9,
       3,     2,     5,     1,     0,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       2,     2,     1,     3,     3,     3,     1,     1,     1,     1,
       1,     4,     6,     3,     3,     4,     1,     3,     4,     4,
       6,     6,     4,     6,     1,     0,     1,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 86 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1452 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 87 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1458 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1464 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 92 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1470 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 93 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1476 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 94 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1482 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 98 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1488 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 102 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1494 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 106 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1500 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 107 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1506 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 110 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1512 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 111 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1518 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 112 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1524 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 113 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1530 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 114 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1536 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 118 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1542 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 119 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1548 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1554 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 124 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1560 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 128 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1566 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1572 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 133 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1578 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 137 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1584 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 142 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1590 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 143 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1596 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 147 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1602 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 148 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1608 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1614 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 156 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1620 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1626 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 161 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1632 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 165 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1638 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1644 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 170 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1650 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 171 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1656 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1662 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 176 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1668 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 177 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1674 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 178 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1680 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 179 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1686 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 180 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1692 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 181 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1698 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 182 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1704 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 186 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1710 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 187 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1716 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 192 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1722 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 196 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1728 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1734 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 204 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1740 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 208 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1746 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 212 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1752 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 213 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1758 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 217 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1764 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 218 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1770 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 222 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1776 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 223 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1782 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 226 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1788 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 227 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1794 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 228 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1800 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 229 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1806 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 230 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1812 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 231 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1818 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 232 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1824 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 233 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1830 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 234 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1836 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 237 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1842 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 238 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1848 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 239 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1854 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 240 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1860 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1866 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 245 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1872 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 246 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1878 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 247 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1884 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 248 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1890 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 252 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1896 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 253 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1902 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 254 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1908 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 255 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1914 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 256 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1920 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 257 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1926 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 258 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1932 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 259 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1938 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 260 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1944 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 263 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1950 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 264 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1956 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 265 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1962 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 269 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1968 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 270 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1974 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 271 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1980 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 275 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1986 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 276 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1992 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 280 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1998 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 281 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2004 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 285 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2010 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 286 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2016 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 287 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2022 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 288 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2028 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 289 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2034 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 290 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2040 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;


#line 2044 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 293 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1906  */


void yyerror(char * s){
      printf("%s", s);
}

int ParseFile(char * filePath){
      yydebug = 1;
      FILE * inputFile;
      if (!(inputFile = fopen(filePath, "r"))) return -1; // Could not open file
      yyin = inputFile;
      return yyparse();
}

int ParseExpression(){
      return yyparse();
}
