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

// Syntactic analyser functions
int ParseExpression();
int ParseFile(char * path);
void yyerror(char * s);


#line 82 "Analyser/Sintactic/Parser.c" /* yacc.c:339  */

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
# define YYDEBUG 0
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
    vip_intConstant = 283,
    vip_doubleConstant = 284,
    vip_boolConstant = 285,
    vip_stringConstant = 286,
    identifier = 287,
    num_int = 288,
    num_hex = 289,
    num_double = 290,
    val_string = 291,
    val_bool = 292,
    opt_plus = 293,
    opt_minus = 294,
    opt_times = 295,
    opt_divide = 296,
    opt_mod = 297,
    opt_lower = 298,
    opt_lower_equal = 299,
    opt_greater = 300,
    opt_greater_equal = 301,
    opt_assign = 302,
    opt_equal = 303,
    opt_not_equal = 304,
    opt_and = 305,
    opt_or = 306,
    opt_not = 307,
    opt_semicolon = 308,
    opt_dot = 309,
    opt_coma = 310,
    opt_left_bracket = 311,
    opt_right_bracket = 312,
    opt_left_brace = 313,
    opt_right_brace = 314,
    opt_left_parentheses = 315,
    opt_right_parentheses = 316,
    opt_brackets = 317,
    opt_parentheses = 318,
    opt_braces = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:355  */

  int intVal;
  double doubleVal;
  char * stringVal;
  char charVal;

#line 194 "Analyser/Sintactic/Parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALYSER_SINTACTIC_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "Analyser/Sintactic/Parser.c" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   486

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    91,    93,    94,    95,    96,    98,    99,
     100,   101,   102,   103,   104,   105,   107,   108,   110,   111,
     113,   115,   116,   117,   118,   120,   121,   123,   125,   126,
     127,   128,   130,   132,   133,   135,   136,   138,   139,   140,
     141,   142,   143,   144,   145,   147,   148,   149,   151,   153,
     155,   157,   159,   161,   162,   163,   165,   166,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   195,   196,   197,   199,   200,   201,
     203,   204,   206,   207,   209,   210,   211,   212,   213
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
  "vip_Malloc", "vip_GetByte", "vip_SetByte", "vip_intConstant",
  "vip_doubleConstant", "vip_boolConstant", "vip_stringConstant",
  "identifier", "num_int", "num_hex", "num_double", "val_string",
  "val_bool", "opt_plus", "opt_minus", "opt_times", "opt_divide",
  "opt_mod", "opt_lower", "opt_lower_equal", "opt_greater",
  "opt_greater_equal", "opt_assign", "opt_equal", "opt_not_equal",
  "opt_and", "opt_or", "opt_not", "opt_semicolon", "opt_dot", "opt_coma",
  "opt_left_bracket", "opt_right_bracket", "opt_left_brace",
  "opt_right_brace", "opt_left_parentheses", "opt_right_parentheses",
  "opt_brackets", "opt_parentheses", "opt_braces", "$accept", "PROGRAM",
  "DECL", "VAR_DECL", "VARIABLE", "TYPE", "FUNCTION_DECL", "FORMALS",
  "CLASS_DECL", "EXTENDS", "IMPLEMENTS", "FIELD", "INTERFACE_DECL",
  "PROTOTYPE", "STMT_BLOCK", "VARS", "STMTS", "STATEMENT", "IF_STMT",
  "ELSE_STMT", "WHILE_STMT", "FOR_STMT", "RETURN_STMT", "BREAK_STMT",
  "PRINT_STMT", "EXPR", "EXPRPLUS", "EXPRESSION", "VALUE", "CALL",
  "LIB_CALL", "ACTUAL", "CONST", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))

#define YYTABLE_NINF -56

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     158,   -45,  -169,  -169,     4,     8,  -169,  -169,  -169,    32,
     158,  -169,    -5,   -25,  -169,  -169,  -169,    69,    51,    11,
    -169,  -169,  -169,    10,  -169,    16,   -16,    17,    45,    85,
     169,    69,    69,  -169,    24,    51,    67,    42,    70,   -13,
      48,    47,  -169,    69,  -169,  -169,    55,   177,    56,    59,
    -169,    24,    69,    65,    85,  -169,  -169,    52,    69,    69,
    -169,  -169,  -169,  -169,    60,    61,    62,   168,    71,    66,
      68,    73,    64,    74,    78,  -169,  -169,  -169,  -169,    82,
     168,   168,   168,  -169,    72,    65,  -169,  -169,  -169,  -169,
    -169,  -169,    76,   335,    83,  -169,  -169,  -169,  -169,    90,
      91,   168,   168,   168,   105,  -169,   127,   168,   168,  -169,
    -169,   168,   168,   430,   430,   191,  -169,  -169,  -169,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   -18,   168,   168,   168,   107,   112,   115,   215,
     239,  -169,   108,   354,   114,   373,   263,  -169,   123,  -169,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   126,   142,   143,   144,  -169,   130,   430,
     169,   169,   168,   125,   125,  -169,    69,   155,   168,  -169,
    -169,   168,   168,   168,   168,  -169,  -169,  -169,   392,  -169,
     193,   -39,  -169,  -169,   287,   411,   150,   151,   168,   125,
    -169,  -169,  -169,   168,  -169,  -169,   154,   193,   311,   125,
    -169,  -169,  -169
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    10,    11,     0,     0,    14,    13,    12,     0,
       3,     4,     0,     0,     5,     6,     7,     0,    22,     0,
       1,     2,     8,     9,    15,    18,     0,     0,     0,    24,
       0,     0,     0,     9,     0,    22,     0,     0,     0,     0,
       0,     0,    19,    34,    17,    21,     0,     0,     0,     0,
      27,     0,    34,    36,    24,    25,    26,     0,     0,     0,
      16,    33,    98,    61,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,    94,    95,    96,    97,    84,
       0,     0,     0,    44,     0,    36,    38,    39,    40,    42,
      41,    43,     0,    54,    60,    62,    59,    23,    20,     0,
       0,    55,     0,     0,     0,    51,     0,     0,     0,    81,
      82,     0,    93,    69,    78,     0,    32,    35,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    55,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    57,     0,    92,     0,    63,
      64,    65,    67,    66,    68,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,    85,     0,    53,     0,    58,
      29,    28,     0,    55,    55,    79,     0,     0,     0,    83,
      87,     0,     0,    93,    93,    86,    31,    30,     0,    48,
      47,     0,    52,    56,     0,     0,     0,     0,    55,    55,
      45,    80,    90,     0,    88,    89,     0,    47,     0,    55,
      46,    91,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,   206,  -169,   -23,   -14,     0,   170,    33,  -169,   183,
     165,  -169,  -169,  -145,   -30,   171,   136,  -168,  -169,    15,
    -169,  -169,  -169,  -169,  -169,   -66,  -106,   -69,  -169,  -169,
    -169,  -156,  -169
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    26,    14,    27,    15,    29,
      37,    57,    16,    40,    83,    53,    84,    85,    86,   200,
      87,    88,    89,    90,    91,    92,   147,    93,    94,    95,
     166,   148,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,   104,   144,    25,    44,   189,   190,    23,   163,   164,
      13,   113,   114,   115,   165,    17,    33,    25,    25,    49,
      52,    60,   201,    24,    55,   186,   187,   196,   197,    52,
      39,   207,    20,   139,   140,   138,    18,    24,   143,   145,
      19,   212,   146,   145,    25,    25,    24,    13,    22,    24,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    28,    41,    42,   169,   167,   168,    30,
      31,    32,   193,     2,     3,    62,    63,    35,    34,    64,
      65,    66,    43,    67,    68,    69,    70,    71,    72,    73,
      74,    99,   100,    75,    76,    77,    78,    79,    36,    46,
      47,     6,    48,   188,    80,     7,     8,    50,    51,   145,
      54,    98,   194,   195,   145,   145,    58,    81,   -55,    59,
     101,   102,   103,    43,   105,    82,   106,   109,   107,   118,
     135,   116,   206,   108,   208,    62,    63,   110,   111,    64,
      65,    66,   112,    67,    68,    69,    70,    71,    72,    73,
      74,   136,   137,    75,    76,    77,    78,    79,   141,   142,
     170,     1,     2,     3,    80,   171,     4,     5,   172,   175,
      39,    39,    38,     2,     3,   177,   191,    81,    62,    63,
       1,     2,     3,    43,   180,    82,   181,   185,    69,    70,
       6,    72,    73,    74,     7,     8,    75,    76,    77,    78,
      79,     6,   182,   183,   184,     7,     8,    80,   192,     6,
     199,   204,   205,     7,     8,   209,    21,    56,    45,    97,
      81,   117,   210,    61,     0,     0,     0,     0,    82,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
     129,   130,   131,     0,     0,   132,     0,   134,     0,     0,
       0,     0,   149,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,   129,   130,   131,     0,     0,   132,
       0,   134,     0,     0,     0,     0,   173,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,   128,   129,   130,
     131,     0,     0,   132,     0,   134,     0,     0,     0,     0,
     174,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,   129,   130,   131,     0,     0,   132,     0,   134,
       0,     0,     0,     0,   179,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,   128,   129,   130,   131,     0,
       0,   132,     0,   134,     0,     0,     0,     0,   202,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
     129,   130,   131,     0,     0,   132,     0,   134,     0,     0,
       0,     0,   211,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,   128,   129,   130,   131,     0,     0,   132,
     133,   134,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,   128,   129,   130,   131,     0,     0,   132,   176,
     134,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,   128,   129,   130,   131,     0,     0,   132,   178,   134,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
     128,   129,   130,   131,     0,   198,   132,     0,   134,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   128,
     129,   130,   131,     0,     0,   132,   203,   134,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,   128,   129,
     130,   131,     0,     0,   132,     0,   134
};

static const yytype_int16 yycheck[] =
{
       0,    67,   108,    17,    34,   173,   174,    32,    26,    27,
      10,    80,    81,    82,    32,    60,    32,    31,    32,    32,
      43,    51,    61,    62,    47,   170,   171,   183,   184,    52,
      30,   199,     0,   102,   103,   101,    32,    62,   107,   108,
      32,   209,   111,   112,    58,    59,    62,    47,    53,    62,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    12,    31,    32,   135,   133,   134,    58,
      60,    55,   178,     4,     5,    10,    11,    32,    61,    14,
      15,    16,    58,    18,    19,    20,    21,    22,    23,    24,
      25,    58,    59,    28,    29,    30,    31,    32,    13,    32,
      58,    32,    32,   172,    39,    36,    37,    59,    61,   178,
      55,    59,   181,   182,   183,   184,    60,    52,    53,    60,
      60,    60,    60,    58,    53,    60,    60,    63,    60,    53,
      47,    59,   198,    60,   203,    10,    11,    63,    60,    14,
      15,    16,    60,    18,    19,    20,    21,    22,    23,    24,
      25,    61,    61,    28,    29,    30,    31,    32,    53,    32,
      53,     3,     4,     5,    39,    53,     8,     9,    53,    61,
     170,   171,     3,     4,     5,    61,   176,    52,    10,    11,
       3,     4,     5,    58,    61,    60,    60,    57,    20,    21,
      32,    23,    24,    25,    36,    37,    28,    29,    30,    31,
      32,    32,    60,    60,    60,    36,    37,    39,    53,    32,
      17,    61,    61,    36,    37,    61,    10,    47,    35,    54,
      52,    85,   207,    52,    -1,    -1,    -1,    -1,    60,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    -1,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    -1,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,
      61,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    61,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    -1,
      -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    -1,    -1,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    -1,    -1,    54,
      55,    56,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    -1,    -1,    54,    55,
      56,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    -1,    -1,    54,    55,    56,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      48,    49,    50,    51,    -1,    53,    54,    -1,    56,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    -1,    -1,    54,    55,    56,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    48,    49,
      50,    51,    -1,    -1,    54,    -1,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     8,     9,    32,    36,    37,    66,
      67,    68,    69,    70,    71,    73,    77,    60,    32,    32,
       0,    66,    53,    32,    62,    69,    70,    72,    12,    74,
      58,    60,    55,    32,    61,    32,    13,    75,     3,    70,
      78,    72,    72,    58,    79,    74,    32,    58,    32,    32,
      59,    61,    68,    80,    55,    68,    71,    76,    60,    60,
      79,    80,    10,    11,    14,    15,    16,    18,    19,    20,
      21,    22,    23,    24,    25,    28,    29,    30,    31,    32,
      39,    52,    60,    79,    81,    82,    83,    85,    86,    87,
      88,    89,    90,    92,    93,    94,    97,    75,    59,    72,
      72,    60,    60,    60,    90,    53,    60,    60,    60,    63,
      63,    60,    60,    92,    92,    92,    59,    81,    53,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    48,    49,
      50,    51,    54,    55,    56,    47,    61,    61,    90,    92,
      92,    53,    32,    92,    91,    92,    92,    91,    96,    61,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    26,    27,    32,    95,    90,    90,    92,
      53,    53,    53,    61,    61,    61,    55,    61,    55,    61,
      61,    60,    60,    60,    60,    57,    78,    78,    92,    82,
      82,    70,    53,    91,    92,    92,    96,    96,    53,    17,
      84,    61,    61,    55,    61,    61,    90,    82,    92,    61,
      84,    61,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    67,    67,    67,    68,    69,
      70,    70,    70,    70,    70,    70,    71,    71,    72,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    78,    78,
      78,    78,    79,    80,    80,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    84,    85,    86,
      87,    88,    89,    90,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     2,     6,     5,     1,     3,
       7,     3,     0,     4,     0,     1,     1,     5,     6,     6,
       7,     7,     4,     2,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     6,     3,     0,     5,     9,
       3,     2,     5,     3,     1,     0,     3,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     4,
       6,     2,     2,     4,     1,     3,     4,     4,     6,     6,
       4,     6,     1,     0,     1,     1,     1,     1,     1
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
#line 90 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1499 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 91 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1505 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1511 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 94 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1517 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1523 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1529 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 98 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1535 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 99 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1541 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 100 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1547 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1553 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 102 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1559 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 103 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1565 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 104 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1571 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1577 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1583 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1589 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 110 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1595 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 111 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1601 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1607 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1613 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1619 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 117 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1625 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1631 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 120 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1637 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1643 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 123 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1649 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 125 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1655 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 126 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1661 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1667 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 128 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1673 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 130 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1679 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1685 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 133 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1691 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 135 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1697 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 136 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1703 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 138 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1709 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 139 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1715 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1721 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 141 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1727 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 142 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1733 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 143 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1739 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 144 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1745 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 145 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1751 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1757 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 148 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1763 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 149 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1769 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1775 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 153 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1781 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1787 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1793 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1799 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 161 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1805 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 162 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1811 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 163 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1817 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1823 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 166 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1829 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 168 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1835 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 169 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1841 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 170 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1847 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 171 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1853 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 172 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1859 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 173 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1865 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 174 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1871 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 175 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1877 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 176 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1883 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 177 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1889 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 178 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1895 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 179 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1901 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 180 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1907 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 181 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1913 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 182 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1919 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 183 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1925 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 184 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1931 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 185 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1937 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 186 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1943 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 187 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1949 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 188 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1955 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 189 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1961 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 190 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1967 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 191 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1973 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 192 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1979 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 193 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1985 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 195 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1991 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 196 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 1997 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 197 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2003 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 199 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2009 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 200 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2015 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 201 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2021 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 203 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2027 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 204 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2033 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 206 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2039 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 207 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2045 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 209 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2051 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 210 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2057 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 211 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2063 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 212 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2069 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 213 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1646  */
    {;}
#line 2075 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
    break;


#line 2079 "Analyser/Sintactic/Parser.c" /* yacc.c:1646  */
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
#line 215 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1906  */


void yyerror(char * s){
  printf("%s", s);
}

int ParseFile(char * filePath){
  FILE * inputFile;
  if (!(inputFile = fopen(filePath, "r"))) return -1; // Could not open file
  yyin = inputFile;
  return yyparse();
}

int ParseExpression(){
  return yyparse();
}
