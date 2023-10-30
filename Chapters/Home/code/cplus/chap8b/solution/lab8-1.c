// lab8-1.c:   Inspect the bytes of an object
#include <stdio.h>

void inspect(const void* ptr, size_t nbytes) {
    const unsigned char* p = (const unsigned char*) ptr;
    unsigned int i;

    for (i = 0; i < nbytes; ++i)
        printf("byte %2d:    %02X\n", i, p[i]);
}

int main() {
    char c = 'a';
    short i = 100;
    long n = 100000L;
    double pi = 3.141529;
    char s[] = "hello";

    inspect(&c, sizeof c);
    putchar('\n');
    inspect(&i, sizeof i);
    putchar('\n');
    inspect(&n, sizeof n);
    putchar('\n');
    inspect(&pi, sizeof pi);
    putchar('\n');
    inspect(s, sizeof s);
    putchar('\n');
    return 0;
}

