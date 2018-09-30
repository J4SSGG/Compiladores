%x quote comment
%{

// Tokens provided by Bison (which is the Sintactic analyser)
#include "../Sintactic/Parser.h"
extern void yyerror(char * s);
// LexicalAnalyser functions
void yyAddText();
char * yystring;

/*int yycol;
void ToLowerCase(char * word);
void ToUpperCase(char * word);
char * FileOut(char * FileInput);*/

%}
%option yylineno
ALL		.*
ESP		[ \t\r]+
NWL		[\n]+
IDF		[a-zA-Z][_0-9a-zA-Z]*
INT		[0-9]+
HEX		("0x"|"0X")[0-9a-fA-F]+
DBL		[0-9]+"."[0-9]*
EXP		(e|E)("+"|"-")?
BOOL	true|false
COMM	"//".*
%%
{NWL}						;
void						return VIP_void;
int							return VIP_int;
double						return VIP_double;
bool						return VIP_bool;
string						return VIP_string;
class						return VIP_class;
interface					return VIP_interface;
null						return VIP_null;
this						return VIP_this;
extends						return VIP_extends;
implements					return VIP_implements;
for							return VIP_for;
while						return VIP_while;
if							return VIP_if;
else						return VIP_else;
return						return VIP_return;
break						return VIP_break;
New							return VIP_New;
NewArray					return VIP_NewArray;
Print						return VIP_Print;
ReadInteger					return VIP_ReadInteger;
ReadLine					return VIP_ReadLine;
Malloc						return VIP_Malloc;
{BOOL}						return BOOL;
{IDF}						return IDENTIFIER;
{ESP}						;
{INT}						return NUM_int;
{HEX}						return NUM_hex;
{DBL}|{DBL}{EXP}{INT}		return NUM_double;
"/*"						BEGIN(comment);
<comment>"*/"				BEGIN(INITIAL);
<comment>([^*]|\n)+|.		yyAddText();
<comment><<EOF>>			{BEGIN(INITIAL); yyerror("Comment unclosed");}
{COMM}						;			
"+"							return OPT_plus;
"-"							return OPT_minus;
"*"							return OPT_times;
"/"							return OPT_divide;
"%"							return OPT_mod;
"<"							return OPT_lower;
"<="						return OPT_lower_equal;
">"							return OPT_greater;
">="						return OPT_greater_equal;
"="							return OPT_assign;
"=="						return OPT_equal;
"!="						return OPT_not_equal;
"&&"						return OPT_and;
"||"						return OPT_or;
"!"							return OPT_not;
";"							return OPT_semicolon;
"."							return OPT_dot;
","							return OPT_coma;
"["							return OPT_left_bracket;
"]"							return OPT_right_bracket;
"{"							return OPT_left_brace;
"}"							return OPT_right_brace;
"("							return OPT_left_parentheses;
")"							return OPT_right_parentheses;
"[]"						return OPT_brackets;
"()"						return OPT_parentheses;
"{}"						return OPT_braces;
\".*\"						return STRING;
.							;
%%

int yywrap(void)
{
	return 1;
}

void yyAddText(){
	char * newString = malloc(strlen(yytext));
	strcpy(newString, yytext);
	yystring = newString;
}