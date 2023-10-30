// lab9.cpp
#include "employee.h"
#include <iostream>
using namespace std;

int main() {
    Employee p1("Mantle", "Mickey", "Outfielder", 58);
    Employee p2("Maris", "Roger", "Shortstop", 60);
    
    if (p2.getSalary() != 61)
        p2.setSalary(61);
    
    Employee p3("", "", "", 0);
    p3.setLast("Kaline");
    p3.setFirst("Al");
    p3.setTitle("Outfielder");
    p3.setSalary(52);

    p1.print(); cout << endl;
    p2.print(); cout << endl;
    p3.print(); cout << endl;
}
