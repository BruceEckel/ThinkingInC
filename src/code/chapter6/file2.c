/* file2.c */
#include <stdio.h>

int main() {
    extern int i;
    /* extern optional for funtions: */
    int get_j(void);
    
    
    printf("i == %d\n", ++i);
    printf("j == %d\n", get_j());
    return 0;
}

