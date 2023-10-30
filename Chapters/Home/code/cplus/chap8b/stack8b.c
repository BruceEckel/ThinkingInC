/* stack8b.c: implementation */
#include "stack8b.h"
#include <stdlib.h>

struct Stack {
    int *data;
    int size;
    int ptr;
    int error;
};

Stack* stk_create(int stk_size) {
    Stack* stkp = malloc(sizeof(Stack));
    stkp->size = stk_size;
    stkp->data = malloc(stkp->size*sizeof(int));
    stkp->ptr = stkp->error = 0;
    return stkp;
};

void stk_push(Stack* stkp, int x) {
    if (stkp->ptr < stkp->size) {
        stkp->data[stkp->ptr++] = x;
        stkp->error = 0;
    }
    else
        stkp->error = 1;
}

int stk_pop(Stack* stkp) {
    if (stkp->ptr > 0) {
        int x = stkp->data[--stkp->ptr];
        stkp->error = 0;
        return x;
    } else {
        stkp->error = 1;
        return STK_ERROR;
    }
}

int stk_top(Stack* stkp) {
    if (stkp->ptr > 0) {
        stkp->error = 0;
        return stkp->data[stkp->ptr-1];
    } else {
        stkp->error = 1;
        return STK_ERROR;
    }
}

int stk_size(Stack* stkp) {
    return stkp->ptr;
}

int stk_error(Stack* stkp) {
    return stkp->error;
}

void stk_destroy(Stack* stkp) {
    free(stkp->data);
    free(stkp);
}
