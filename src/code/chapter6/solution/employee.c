/* employee.c */
#include "employee.h"
#include <stdio.h>
#include <string.h>

#define MAXEMPS 5

struct Employee {
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

static struct Employee emps[MAXEMPS];
static int nemps = 0;

int addEmployee(void) {
    if (nemps == MAXEMPS)
        return -1;
        
    printf("Enter last: "); fflush(stdout);
    gets(emps[nemps].last);
    if (strlen(emps[nemps].last) == 0)
        return -1;
    printf("Enter first: "); fflush(stdout);
    gets(emps[nemps].first);
    printf("Enter title: "); fflush(stdout);
    gets(emps[nemps].title);
    printf("Enter salary: "); fflush(stdout);
    scanf("%d", &emps[nemps].salary);
    getchar();  /* eat newline */
    
    return nemps++;
}

int printEmployee(int i) {
    if (i < 0 || i >= nemps)
        return -1;
    printf("{%s,%s,%s,%d}",
           emps[i].last,
           emps[i].first,
           emps[i].title,
           emps[i].salary);
    return i;
}

int numEmployees(void) {
    return nemps;
}
        
        

