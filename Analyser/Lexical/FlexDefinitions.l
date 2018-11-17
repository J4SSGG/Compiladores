%x quote comment
%{

// Tokens provided by Bison (which is the Sintactic analyser)
#include "../Sintactic/Parser.h"
extern void yyerror(char * s);
extern int yycolumnlineno;
extern char * newString(char * S);
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
IDF		[a-zA-Z][0-9a-zA-Z]*
INT		[0-9]+
HEX		("0x"|"0X")[0-9a-fA-F]+
DBL		[0-9]+"."[0-9]*
EXP		(e|E)("+"|"-")?
BOOL	true|false
COMM	"//".*
%%
{NWL}						{ yycolumnlineno = 0; }
void						{ yycolumnlineno+= strlen(yytext); return vip_void; }
int							{ yycolumnlineno+= strlen(yytext); return vip_int; }
double						{ yycolumnlineno+= strlen(yytext); return vip_double; }
bool						{ yycolumnlineno+= strlen(yytext); return vip_bool; }
string						{ yycolumnlineno+= strlen(yytext); return vip_string; }
class						{ yycolumnlineno+= strlen(yytext); return vip_class; }
interface					{ yycolumnlineno+= strlen(yytext); return vip_interface; }
null						{ yycolumnlineno+= strlen(yytext); return vip_null; }
this						{ yycolumnlineno+= strlen(yytext); return vip_this; }
extends						{ yycolumnlineno+= strlen(yytext); return vip_extends; }
implements					{ yycolumnlineno+= strlen(yytext); return vip_implements; }
for							{ yycolumnlineno+= strlen(yytext); return vip_for; }
while						{ yycolumnlineno+= strlen(yytext); return vip_while; }
if							{ yycolumnlineno+= strlen(yytext); return vip_if; }
else						{ yycolumnlineno+= strlen(yytext); return vip_else; }
return						{ yycolumnlineno+= strlen(yytext); return vip_return; }
break						{ yycolumnlineno+= strlen(yytext); return vip_break; }
New							{ yycolumnlineno+= strlen(yytext); return vip_New; }
NewArray					{ yycolumnlineno+= strlen(yytext); return vip_NewArray; }
Print						{ yycolumnlineno+= strlen(yytext); return vip_Print; }
ReadInteger					{ yycolumnlineno+= strlen(yytext); return vip_ReadInteger; }
ReadLine					{ yycolumnlineno+= strlen(yytext); return vip_ReadLine; }
Malloc						{ yycolumnlineno+= strlen(yytext); return vip_Malloc; }
GetByte						{ yycolumnlineno+= strlen(yytext); return vip_GetByte; }
SetByte						{ yycolumnlineno+= strlen(yytext); return vip_SetByte; }
const						{ yycolumnlineno+= strlen(yytext); return vip_const; }
{BOOL}						{ yycolumnlineno+= strlen(yytext); return val_bool; }
{IDF}						{ yycolumnlineno+= strlen(yytext); yylval.stringVal = newString(yytext); return identifier; }
{ESP}						{ yycolumnlineno+= strlen(yytext); }
{INT}						{ yycolumnlineno+= strlen(yytext); return num_int; }
{HEX}						{ yycolumnlineno+= strlen(yytext); return num_hex; }
{DBL}|{DBL}{EXP}{INT}		{ yycolumnlineno+= strlen(yytext); return num_double; }
"/*"						BEGIN(comment);
<comment>"*/"				BEGIN(INITIAL);
<comment>([^*]|\n)+|.		{ yycolumnlineno+= strlen(yytext); yyAddText(); }
<comment><<EOF>>			{BEGIN(INITIAL); yyerror("Comment unclosed");}
{COMM}						{ yycolumnlineno+= strlen(yytext); }			
"+"							{ yycolumnlineno+= strlen(yytext); return opt_plus; }
"-"							{ yycolumnlineno+= strlen(yytext); return opt_minus; }
"*"							{ yycolumnlineno+= strlen(yytext); return opt_times; }
"/"							{ yycolumnlineno+= strlen(yytext); return opt_divide; }
"%"							{ yycolumnlineno+= strlen(yytext); return opt_mod; }
"<"							{ yycolumnlineno+= strlen(yytext); return opt_lower; }
"<="						{ yycolumnlineno+= strlen(yytext); return opt_lower_equal; }
">"							{ yycolumnlineno+= strlen(yytext); return opt_greater; }
">="						{ yycolumnlineno+= strlen(yytext); return opt_greater_equal; }
"="							{ yycolumnlineno+= strlen(yytext); return opt_assign; }
"=="						{ yycolumnlineno+= strlen(yytext); return opt_equal; }
"!="						{ yycolumnlineno+= strlen(yytext); return opt_not_equal; }
"&&"						{ yycolumnlineno+= strlen(yytext); return opt_and; }
"||"						{ yycolumnlineno+= strlen(yytext); return opt_or; }
"!"							{ yycolumnlineno+= strlen(yytext); return opt_not; }
";"							{ yycolumnlineno+= strlen(yytext); return opt_semicolon; }
"."							{ yycolumnlineno+= strlen(yytext); return opt_dot; }
","							{ yycolumnlineno+= strlen(yytext); return opt_coma; }
"["							{ yycolumnlineno+= strlen(yytext); return opt_left_bracket; }
"]"							{ yycolumnlineno+= strlen(yytext); return opt_right_bracket; }
"{"							{ yycolumnlineno+= strlen(yytext); return opt_left_brace; }
"}"							{ yycolumnlineno+= strlen(yytext); return opt_right_brace; }
"("							{ yycolumnlineno+= strlen(yytext); return opt_left_parentheses; }
")"							{ yycolumnlineno+= strlen(yytext); return opt_right_parentheses; }
\".*\"						{ yycolumnlineno+= strlen(yytext); return val_string; }
.							{ yycolumnlineno+= strlen(yytext); return -1;}
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