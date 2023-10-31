/* employ2.c */
#include "employ2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee* createEmployee(char* last, char* first, char* title, int salary) {
    struct Employee* p = malloc(sizeof(struct Employee));
    if (p != NULL) {
        strcpy(p->last, last);
        strcpy(p->first, first);
        strcpy(p->title, title);
        p->salary = salary;
    }
    return p;
}

char* getLast(struct Employee* p) {
    return p ? p->last : "";
}

char* getFirst(struct Employee* p) {
    return p ? p->first : "";
}

char* getTitle(struct Employee* p) {
    return p ? p->title : "";
}

int getSalary(struct Employee* p) {
    return p ? p->salary : 0;
}

void setLast(struct Employee* p, char* last) {
    if (p != NULL)
        strcpy(p->last, last);
}

void setFirst(struct Employee* p, char* first) {
    if (p != NULL)
        strcpy(p->first, first);
}

void setTitle(struct Employee* p, char* title) {
    if (p != NULL)
        strcpy(p->title, title);
}

void setSalary(struct Employee* p, int salary) {
    if (p != NULL)
        p->salary = salary;
}

void printEmployee(struct Employee* p) {
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
