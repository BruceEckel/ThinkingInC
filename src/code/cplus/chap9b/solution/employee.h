// employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    Employee(const char*, const char*, const char*, int);
    const char* getLast() const;
    const char* getFirst() const;
    const char* getTitle() const;
    int getSalary() const;
    void setLast(const char*);
    void setFirst(const char*);
    void setTitle(const char*);
    void setSalary(int);
    void print() const;
    
private:
    char last[16];
    char first[11];
    char title[16];
    int salary;
};

#endif

