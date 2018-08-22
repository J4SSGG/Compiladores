%{
#include "minic.h"
%}
%option yylineno
ALL		.*
ESP		[ \t\r]+
NWL		[\n]*
VIP		void|int|double|bool|string|class|interface|null|this|extends|implements|for|while|if|else|return|break|New|NewArray
IDF		[a-zA-Z][a-zA-Z]{0,30}
INT		[0-9]+
HEX		("0x"|"0X")[0-9a-fA-F]+
DBL		[0-9]+"."[0-9]*
EXP		(e|E)("+"|"-")*[0-9]+
BOOL	true|false
COMM	("/*"([^*]|(\*+[^*/]))*\*+\/)|"//".*
OPT		"+"|"-"|"*"|"/"|"%"|"<"|"<="|">"|">"|"="|"=="|"!="|"&&"|"\|\|"|"!"|";"|"."|","|"["|"]"|"{"|"}"|"("|")"|"[]"|"()"|"{}"
%%
{NWL}						return NEW_LINE;
{VIP}						return RESERVED;
{BOOL}						return BOOL;
{IDF}						return IDENTIFIER;
{ESP}						return IGNORE;
{INT}						return INTEGER;
{HEX}						return HEXADECIMAL;
{DBL}|{DBL}{EXP}		return DOUBLE;
{COMM}						return IGNORE;
{OPT}						return OPERATOR;
\"(\\.|[^"\\])*\"			return TEXT;
\"(\\.|[^"\\])*				return ERROR; // Not valid string...
"."?{INT}*{EXP}"."?			return ERROR; // Not valid exponential...
{DBL}{EXP}"."{INT}*			return ERROR; // Exponential with decimal...
("0x"|"0X")[0-9a-zA-Z]+		return ERROR; // Not valid hexa number...
("0x"|"0X")					return ERROR; // Not valid hexa number...
"."{INT}					return ERROR; // Not valid double number...
.							return ERROR;
%%
int yywrap(void)
{
	return 1;
}