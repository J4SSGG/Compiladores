struct node {
    char *      name;
    char *      value; // Valor solo para variables
    char *      type; // Metodo, funcion, clase, variable
    char *      returnType; // int, double, etc
    int         context;
    int         isConst;
    char *      params;
    struct node * next;
    struct node * last;
};


struct list {
    struct node * head;
    struct node * tail;
};


    struct list * SymbolTable;
    struct list * ContextStack;

    int InsertList(struct list * item, char * name, char * value, char * type, char * returnType, int con, int context, char * params); // change parameters...
    void PrintList(struct list * item);
    char * newString (char * name);
    struct node * SearchList(struct list * item, char * name);
    struct node * Node();
    struct list * List();
    int Equal(char * a, char *b);
    int SearchKeyInContext(struct list * item, char * key, int context);
    void RemoveFromContext(struct list * item, int context);
    struct stack * Stack();
    struct level * Level();
    int Pop();
    void Push();
    int Peek();