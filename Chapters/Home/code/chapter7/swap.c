/* swap.c */
#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int i = 1, j = 2;
    swap(&i, &j);
    printf("i == %d, j == %d\n", i, j);
    return 0;
}

