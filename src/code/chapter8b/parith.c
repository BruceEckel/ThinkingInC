/* parith.c: Illustrates pointer arithmetic */
#include <stdio.h>
#include <stddef.h>     // for ptrdiff_t

int main() {
    float a[] = {1.0, 2.0, 3.0}, *p = &a[0];
    ptrdiff_t diff;

    printf("sizeof(float) == %u\n",sizeof(float));
    printf("p == %p, *p == %f\n", p, *p);
    p += 2;
    printf("p == %p, *p == %f\n", p, *p);
    
    diff = p - a;     // a == &a[0]
    printf("diff == %ld\n", diff);
    diff = (char*)p - (char*)a;
    printf("diff == %ld\n", diff);
    return 0;
}
