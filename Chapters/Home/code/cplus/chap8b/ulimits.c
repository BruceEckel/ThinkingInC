/* ulimits.c: Illustrates unsigned limits */
#include <stdio.h>
#include <limits.h>

int main() {
    printf("char: [0, %u]\n", UCHAR_MAX);
    printf("short: [0, %u]\n", USHRT_MAX);
    printf("int: [0, %u]\n", UINT_MAX);
    printf("long: [0, %lu]\n", ULONG_MAX);
    return 0;
}

