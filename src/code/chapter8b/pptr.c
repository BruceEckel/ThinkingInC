/* pptr.c: Illustrates pointers to pointers */
#include <stdio.h>

int main() {
    int i = 7, *ip = &i, **ipp = &ip;
    printf("Address %p contains %d\n", ip, *ip);
    printf("Address %p contains %p\n", ipp, *ipp);
    printf("**ipp == %d\n", **ipp);
    return 0;
}

