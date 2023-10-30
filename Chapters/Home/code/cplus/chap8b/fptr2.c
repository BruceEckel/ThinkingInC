/* fptr2.c */
#include <stdio.h>

int main() {
    typedef void (*ftype)(const char*, ...);
    int i = 1;
    ftype fp = (ftype) printf;
    fp("i == %d\n", i);     /* or (*fp)(" i == ...); */
    return 0;
}

