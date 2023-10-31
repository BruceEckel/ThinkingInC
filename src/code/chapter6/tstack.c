/* tstack.c: Tests the stack of ints */
#include "stack.h"
#include <stdio.h>

int main() {
    int i;
    
    /* Populate stack */
    for (i = 0; i < 11; ++i)
        stk_push(i);
    if (stk_error())
        puts("stack error");
    printf("The last element pushed was %d\n",
           stk_top());
    
    /* Pop/print stack */
    while (stk_size() > 0)
        printf("%d ", stk_pop());
    putchar('\n');
    if (!stk_error())
        puts("no stack error");
    return 0;
}

