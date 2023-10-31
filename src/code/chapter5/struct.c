/* struct.c: Illustrates structures */
#include <stdio.h>
#include <string.h>

struct Hitter {
    char last[16];
    char first[11];
    int home_runs;
};

int main() {
    struct Hitter h1 = {"McGwire", "Mark", 70};
    struct Hitter h2;
    strcpy(h2.last, "Sosa");
    strcpy(h2.first, "Sammy");
    h2.home_runs = h1.home_runs - 4;
    printf("#1 == {%s, %s, %d}\n",
           h1.last, h1.first, h1.home_runs);
    printf("#2 == {%s, %s, %d}\n",
           h2.last, h2.first, h2.home_runs);
    return 0;
}

