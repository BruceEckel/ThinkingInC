/* qsort.c: Illustrates qsort */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void*, const void*);

int main() {
    char* strings[] =
        {"how", "now", "brown", "cow"};
    const unsigned int nstr =
        sizeof strings / sizeof strings[0];
    unsigned int i;
    
    qsort(strings, nstr, sizeof strings[0], comp);
    for (i = 0; i < nstr; ++i)
        puts(strings[i]);
    return 0;
}

int comp(const void* p1, const void* p2) {
    char* a = *(char **) p1;
    char* b = *(char **) p2;
    return strcmp(a,b);
}

