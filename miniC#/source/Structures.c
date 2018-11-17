#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Structures.h"



struct stack * Stack()
{
    struct stack * newStack =  (struct stack *) malloc (sizeof(struct stack));
    newStack->base = Level();
    newStack->top = Level();
    newStack->top->last = newStack->base;
    return newStack;
}
struct level * Level()
{
    struct level * newLevel =  (struct level *) malloc (sizeof(struct level));
    newLevel->value = -1;
    return newLevel;
}

void Push(int value){
      struct level * newLevel =  Level();
      newLevel->value = value;
      ContextStack->top->last->next = newLevel;
      newLevel->last = ContextStack->top->last;
      ContextStack->top->last = newLevel;
}


int main (int argc, char ** argv)
{
    
    SymbolTable = List();
    
    InsertList(SymbolTable, "a", 2);
    InsertList(SymbolTable, "b", 4);
    if(SearchList(SymbolTable, "b"))
    {
        printf("yes");
    }
    PrintList(SymbolTable);

    return 1;
}





