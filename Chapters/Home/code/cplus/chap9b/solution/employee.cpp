// employee.cpp
#include "employee.h"
#include <iostream>
#include <string.h>

Employee::Employee(const char* lst, const char* frst, const char* ttle, int slry) {
    strcpy(last, lst);
    strcpy(first, frst);
    strcpy(title, ttle);
    salary = slry;
}

const char* Employee::getLast() const {
    return last;
}

const char* Employee::getFirst() const {
    return first;
}

const char* Employee::getTitle() const {
    return title;
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setLast(const char* lst) {
    strcpy(last, lst);
}

void Employee::setFirst(const char* frst) {
    strcpy(first, frst);
}

void Employee::setTitle(const char* ttle) {
    strcpy(title, ttle);
}

void Employee::setSalary(int slry) {
    salary = slry;
}

void Employee::print() const {
    std::cout << '{' << last << ',' << first
              << ',' << title << ',' << salary
              << '}';
}
