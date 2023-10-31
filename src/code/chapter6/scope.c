/* scope.c */
#include <stdio.h>

int i = 3;     /* A "global" variable */

main() {
    int j;
    printf("%d\n",i);
    for (j = 0; j < i; ++j) {
        int i = 99;
        printf("%d\n",i);
        {
            int i = j;
            printf("%d\n",i);
        }
    }
}
