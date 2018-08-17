#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "miniCS.h"


int start(int ac, char * av) {
	// Checks if file is given...
	
	if (ac == 1)
	{
		// Creates file object...
		FILE *fr;
		if (!(fr = fopen(av, "r"))) // Checks if file exits and is readable...
		{
			perror("Error al abrir archivo: ");
			return -1;
		}
		// Set the file reference to flex.
		yyset_in(fr); 
	}else{
		printf("INVALID PATH %s", av);
		return -1;
	}

	// Some control variables..
	int yycol = 1;
	int value = yylex(); // value (or token if applicable) returned by flex
	int token = 0; // input-lines counter
	int hasError = 0; // errors in file?
	// Write cs tokens file ...

	char * newName = malloc(strlen(av)+1);
	strcpy(newName, av);
	newName[strlen(av)-2] = 'o';
	newName[strlen(av)-1] = 'u';
	newName[strlen(av)] = 't';
	FILE * fw;
	if (!(fw = fopen(newName, "wb")))
	{
		printf("No se pudo crear o abrir el archivo: %s", newName);
		return -1;
	}
	
	// This loop iterates over every line read from the file, pass the line content to flex, and catch the outputs.
	while (value) {
		token++;
		switch (value){
			case IGNORE:
				yycol += strlen(yytext);
				break;
			case NEW_LINE:
				yycol = 1;
				break;
			case RESERVED:
				//ToLowerCase(yytext);
				printf("Line %d - Column %d	>>	  Reserved :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case COMMIT:
				printf("Line %d - Column %d	>>	  Commit :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case IDENTIFIER:
				//ToUpperCase(yytext);
				printf("Line %d - Column %d	>>	  Identifier :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case OPERATOR:
				printf("Line %d - Column %d	>>	  Operator :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case INTEGER:
				//ToLowerCase(yytext);
				printf("Line %d - Column %d	>>	  Integer :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case DOUBLE:
				//ToLowerCase(yytext);
				printf("Line %d - Column %d	>>	  Double :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case HEXADECIMAL:
				//ToLowerCase(yytext);
				printf("Line %d - Column %d	>>	  Hexadecimal :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case BOOL:
				printf("Line %d - Column %d	>>	  Boolean :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case TEXT:
				printf("Line %d - Column %d	>>	  Text :		%s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				fprintf(fw, "%s\n", yytext);
				break;
			case ERROR:
				printf("Error in line %d - Column %d	 ->  %s\n", yylineno, yycol, yytext);
				yycol += strlen(yytext);
				hasError = 1;
				fprintf(fw, "Error >>> %s\n", yytext);
				break;
		}
		
		value = yylex();
	}
	
	//Close file
	fclose(fw);

	// File had errors?
	if (hasError == 1){
		printf ("El archivo %s contiene errores.\n", av);
		return -1;
	}	
	return 1;
}
/*
void ToLowerCase(char * word){
	for (;*word;++word) *word = tolower(*word);
}

void ToUpperCase(char * word){
	for (;*word;++word) *word = toupper(*word);
}
*/