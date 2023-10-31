/* employ2.h */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef struct Employee Employee;

Employee* createEmployee(char*, char*, char*, int);
char* getLast(Employee*);
char* getFirst(Employee*);
char* getTitle(Employee*);
int getSalary(Employee*);
void setLast(Employee*, char*);
void setFirst(Employee*, char*);
void setTitle(Employee*, char*);
void setSalary(Employee*, int);
void printEmployee(Employee*);

#endif

