/* indirect.c: Illustrate indirection */
#include <stdio.h>

int main() {
    int  i = 7;
    int* ip = &i; 

    printf("Address %p contains %d\n",ip, *ip);
    *ip = 8;
    printf("Now address %p contains %d\n",ip, *ip);
    return 0;
}
