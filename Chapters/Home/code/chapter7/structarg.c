/* structarg.c: Passes a struct by address */
#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

void printDate(struct Date* p) {
    printf("%2d/%2d/%02d", p->month, p->day,
                           p->year);
}

int main() {
    struct Date d = {98, 10, 2};
    printDate(&d);
    return 0;
}

