/* employ2.h */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

struct Employee {
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

struct Employee* createEmployee(char*, char*, char*, int);
char* getLast(struct Employee*);
char* getFirst(struct Employee*);
char* getTitle(struct Employee*);
int getSalary(struct Employee*);
void setLast(struct Employee*, char*);
void setFirst(struct Employee*, char*);
void setTitle(struct Employee*, char*);
void setSalary(struct Employee*, int);
void printEmployee(struct Employee*);

#endif

