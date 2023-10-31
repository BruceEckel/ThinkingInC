/* lab2.c */
#include <stdio.h>

int main() {
    float x;
    int n;
    
    printf("Enter a real number: ");
    fflush(stdout);
    scanf("%f", &x);
    n = (int)(x + 0.5);
    printf("%f rounded == %d\n", x, n);
    return 0;
}

