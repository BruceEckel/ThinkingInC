/* strings.c: Illustrates C strings */
#include <stdio.h>
#include <string.h>

int main() {
    char last[] = {'f','r','o','s','t','\0'};
    char first[] = "robert";
    printf("last == %s\n", last);
    printf("first == %s\n", first);
    printf("last has %d chars\n", strlen(last));
    printf("first has %d chars\n", strlen(first));
    return 0;
}

