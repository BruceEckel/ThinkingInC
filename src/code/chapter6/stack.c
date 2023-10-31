/* stack.c: implementation */
#include "stack.h"

/* Private data: */
#define MAX 10
static int error = 0;   /* error flag */
static int data[MAX];   /* the stack */
static int ptr;         /* stack pointer */

/* Function implementation */
void stk_push(int x) {
    if (ptr < MAX) {
        data[ptr++] = x;
        error = 0;
    }
    else
        error = 1;
}

int stk_pop(void) {
    if (ptr > 0) {
        int x = data[--ptr];
        error = 0;
        return x;
    } else {
        error = 1;
        return STK_ERROR;
    }
}

int stk_top(void) {
    if (ptr > 0) {
        error = 0;
        return data[ptr-1];
    } else {
        error = 1;
        return STK_ERROR;
    }
}

int stk_size(void) {
    return ptr;
}

int stk_error(void) {
    return error;
}
