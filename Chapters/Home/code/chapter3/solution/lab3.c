/* lab3.c */
#include <stdio.h>

int main() {
    int osum = 0;
    int esum = 0;
    int n;
    
    scanf("%d", &n);
    if (n % 2 == 0)
        esum += n;
    else
        osum += n;
    
    scanf("%d", &n);
    if (n % 2 == 0)
        esum += n;
    else
        osum += n;
    
    scanf("%d", &n);
    if (n % 2 == 0)
        esum += n;
    else
        osum += n;

    printf("Sum of evens: %d\n", esum);
    printf("Sum of odds: %d\n", osum);
    return 0;
}

