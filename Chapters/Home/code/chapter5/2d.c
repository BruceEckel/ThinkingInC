/* 2d.c: Illustrates a 2-dim array */
#include <stdio.h>

int main() {
    int a[][2] = {{1,2}, {3,4}, {5,6}};
    int i, j;
    
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 2; ++j)
            printf("%d ", a[i][j]);
        putchar('\n');
    }
    return 0;
}

