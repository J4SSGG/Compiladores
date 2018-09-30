/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    VIP_void = 258,
    VIP_int = 259,
    VIP_double = 260,
    VIP_bool = 261,
    VIP_string = 262,
    VIP_class = 263,
    VIP_interface = 264,
    VIP_null = 265,
    VIP_this = 266,
    VIP_extends = 267,
    VIP_implements = 268,
    VIP_for = 269,
    VIP_while = 270,
    VIP_if = 271,
    VIP_else = 272,
    VIP_return = 273,
    VIP_break = 274,
    VIP_New = 275,
    VIP_NewArray = 276,
    VIP_Print = 277,
    VIP_ReadInteger = 278,
    VIP_ReadLine = 279,
    VIP_Malloc = 280,
    IDENTIFIER = 281,
    NUM_int = 282,
    NUM_hex = 283,
    NUM_double = 284,
    STRING = 285,
    BOOL = 286,
    OPT_plus = 287,
    OPT_minus = 288,
    OPT_times = 289,
    OPT_divide = 290,
    OPT_mod = 291,
    OPT_lower = 292,
    OPT_lower_equal = 293,
    OPT_greater = 294,
    OPT_greater_equal = 295,
    OPT_assign = 296,
    OPT_equal = 297,
    OPT_not_equal = 298,
    OPT_and = 299,
    OPT_or = 300,
    OPT_not = 301,
    OPT_semicolon = 302,
    OPT_dot = 303,
    OPT_coma = 304,
    OPT_left_bracket = 305,
    OPT_right_bracket = 306,
    OPT_left_brace = 307,
    OPT_right_brace = 308,
    OPT_left_parentheses = 309,
    OPT_right_parentheses = 310,
    OPT_brackets = 311,
    OPT_parentheses = 312,
    OPT_braces = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1909  */

  int intVal;
  double doubleVal;
  char * stringVal;
  char charVal;

#line 120 "Analyser/Sintactic/Parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALYSER_SINTACTIC_PARSER_H_INCLUDED  */
