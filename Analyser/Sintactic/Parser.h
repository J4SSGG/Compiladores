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
    vip_const = 283,
    identifier = 284,
    num_int = 285,
    num_hex = 286,
    num_double = 287,
    val_string = 288,
    val_bool = 289,
    opt_plus = 290,
    opt_minus = 291,
    opt_times = 292,
    opt_divide = 293,
    opt_mod = 294,
    opt_lower = 295,
    opt_lower_equal = 296,
    opt_greater = 297,
    opt_greater_equal = 298,
    opt_assign = 299,
    opt_equal = 300,
    opt_not_equal = 301,
    opt_and = 302,
    opt_or = 303,
    opt_not = 304,
    opt_semicolon = 305,
    opt_dot = 306,
    opt_coma = 307,
    opt_left_bracket = 308,
    opt_right_bracket = 309,
    opt_left_brace = 310,
    opt_right_brace = 311,
    opt_left_parentheses = 312,
    opt_right_parentheses = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "Analyser/Sintactic/BisonDefinitions.y" /* yacc.c:1909  */

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
