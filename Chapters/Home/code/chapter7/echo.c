/* echo.c: Echoes command-line args */
#include <stdio.h>

int main(int argc, char* argv[]) {
    int i;
    for (i = 0; i < argc; ++i)
        puts(argv[i]);
    return 0;
}

