/* reverse2.c: Prints lines in reverse 
 *             order from input
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWIDTH 81
#define MAXLINES 100

int main() {
    char* lines[MAXLINES];
    char line[MAXWIDTH];
    int i, n;
    
    for (n = 0; n < MAXLINES && gets(line) != NULL; ++n) {
        if ((lines[n] = malloc(strlen(line)+1)) == NULL)
            exit(1);
        strcpy(lines[n], line);
    }
    
    for (i = 0; i < n; ++i) {
        puts(lines[n-i-1]);
        free(lines[n-i-1]);
    }
    return 0;
}

