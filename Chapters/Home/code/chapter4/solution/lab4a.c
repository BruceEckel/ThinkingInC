/* lab4a.c */
#include <stdio.h>

int main() {
    int osum = 0;
    int esum = 0;
    int n;
    
    for (;;) {   /* repeat forever */
        printf("Enter an integer (0 to quit): ");
        fflush(stdout);
        scanf("%d", &n);
        if (n == 0)
            break;
            
        switch (n % 2)
        {
        case 0:
            esum += n;
            break;
            
        case 1:
            osum += n;
            break;
        }
    }
    
    printf("Sum of evens: %d\n", esum);
    printf("Sum of odds: %d\n", osum);
    return 0;
}

