/* limits.c: Illustrates integral limits */
#include <stdio.h>
#include <limits.h>

int main() {
    printf("char: [%d, %d]\n", CHAR_MIN, CHAR_MAX);
    printf("short: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
    printf("int: [%d, %d]\n", INT_MIN,  INT_MAX);
    printf("long: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    return 0;
}

