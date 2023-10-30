/* bitwise.c: Illustrates bitwise ops */
#include <stdio.h>

int main() {
    unsigned int n = 0x00a4; /* 000... 10100100 */
    int m = 0x00b7;          /* 000... 10110111 */
    
    printf("~n == %08x\n", ~n);
    printf("~m == %08x\n", ~m);
    printf("(~n) >> 4 == %08x\n", (~n) >> 4);
    printf("(~m) >> 4 == %08x\n", (~m) >> 4);
    return 0;
}

