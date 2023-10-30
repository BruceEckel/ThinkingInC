/* employ2.c */
#include "employ2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

Employee* createEmployee(char* last, char* first, char* title, int salary) {
    Employee* p = malloc(sizeof(Employee));
    if (p != NULL) {
        strcpy(p->last, last);
        strcpy(p->first, first);
        strcpy(p->title, title);
        p->salary = salary;
    }
    return p;
}

char* getLast(Employee* p) {
    return p ? p->last : "";
}

char* getFirst(Employee* p) {
    return p ? p->first : "";
}

char* getTitle(Employee* p) {
    return p ? p->title : "";
}

int getSalary(Employee* p) {
    return p ? p->salary : 0;
}

void setLast(Employee* p, char* last) {
    if (p != NULL)
        strcpy(p->last, last);
}

void setFirst(Employee* p, char* first) {
    if (p != NULL)
        strcpy(p->first, first);
}

void setTitle(Employee* p, char* title) {
    if (p != NULL)
        strcpy(p->title, title);
}

void setSalary(Employee* p, int salary) {
    if (p != NULL)
        p->salary = salary;
}

void printEmployee(Employee* p) {
    putchar('{');
    if (p != NULL) {
        printf("%s,%s,%s,%d",
               p->last,
               p->first,
               p->title,
               p->salary);
    }
    putchar('}');
}
