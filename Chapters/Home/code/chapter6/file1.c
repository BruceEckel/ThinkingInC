/* file1.c */

int i = 10;         /* global */
static int j = 20;  /* private */

int get_j(void) {
    return j;
}

