/* fptr.c */
#include <stdio.h>

int main() {
    int i = 1;
    int (*fp)(const char*, ...) = printf;
    fp("i == %d\n", i);     /* or (*fp)(" i == ...); */
    return 0;
}

