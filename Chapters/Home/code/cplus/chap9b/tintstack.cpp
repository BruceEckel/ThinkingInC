// tintstack.cpp: Tests StackOfInt
#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    StackOfInt stk(N);
    
    for (int i = 0; i < N; ++i)
        stk.push(i);
    while (stk.size() > 0)
        cout << stk.pop() << ' ';
    cout << endl;
}
        
