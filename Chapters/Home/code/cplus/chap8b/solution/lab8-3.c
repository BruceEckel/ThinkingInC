// lab8-3.c: Illustrates ptr to a 4-d array
#include <stdio.h>

int main() {
    int a[][2][3][4] = {
                        {
                         {
                          {0,1,2,3},{4,5,6,7},{8,9,0,1}
                         },
                         {
                          {2,3,4,5},{6,7,8,9},{0,1,2,3}
                         }
                        },
                        {
                         {
                          {4,5,6,7},{8,9,0,1},{2,3,4,5}
                         },
                         {
                          {6,7,8,9},{0,1,2,3},{4,5,6,7}
                         }
                        }
                       };
    int (*p)[2][3][4] = a;
    size_t ngroups = sizeof a / sizeof a[0];
    size_t ntables = sizeof a[0] / sizeof a[0][0];
    size_t nrows   = sizeof a[0][0] / sizeof a[0][0][0];
    size_t ncols   = sizeof a[0][0][0] / sizeof a[0][0][0][0];
    int i;

    printf("sizeof(*p) == %u\n", sizeof *p);
    for (i = 0; i < ngroups; ++i) {
        int j;
        for (j = 0; j < ntables; ++j) {
            int k;
            for (k = 0; k < nrows; ++k) {
                int n;
                for (n = 0; n < ncols; ++n)
                    printf("%d ", p[i][j][k][n]);
                putchar('\n');
            }
            putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}
