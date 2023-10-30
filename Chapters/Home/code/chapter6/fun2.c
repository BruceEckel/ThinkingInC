/* fun2.c: Shows return with void */
/* Also illustrates an array parameter */
#include <stdio.h>

void print_ints(int nums[], int n) {
    int i;
    if (n <= 0)
        return;
    for (i = 0; i < n; ++i) {
        if (i > 0)
            putchar(',');
        printf("%d", nums[i]);
    }
}

int main() {
    int a[] = {9,0,2,1,0};
    print_ints(a, 5);
    return 0;
}

