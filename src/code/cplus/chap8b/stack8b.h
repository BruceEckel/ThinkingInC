/* stack8b.h: Declarations for a stack of ints */

#define STK_ERROR -32767

/* Incomplete type */
typedef struct Stack Stack;

Stack* stk_create(int);
void stk_push(Stack*, int);
int  stk_pop(Stack*);
int  stk_top(Stack*);
int  stk_size(Stack*);
int  stk_error(Stack*);
void stk_destroy(Stack*);

