/* lab5.c */
#include <stdio.h>
#include <string.h>

#define MAXEMPS 10

struct Employee {
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

int main() {
    struct Employee emps[10];
    int n, i;
    
    for (n = 0; n < MAXEMPS; ++n) {
        printf("Enter last: "); fflush(stdout);
        gets(emps[n].last);
        if (strlen(emps[n].last) == 0)
            break;
        printf("Enter first: "); fflush(stdout);
        gets(emps[n].first);
        printf("Enter title: "); fflush(stdout);
        gets(emps[n].title);
        printf("Enter salary: "); fflush(stdout);
        scanf("%d", &emps[n].salary);
        getchar();  /* eat newline */
    }
    
    for (i = 0; i < n; ++i)
        printf("{%s,%s,%s,%d}\n",
               emps[i].last,
               emps[i].first,
               emps[i].title,
               emps[i].salary);
    return 0;
}
