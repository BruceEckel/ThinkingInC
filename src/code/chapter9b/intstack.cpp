#include "intstack.h"

StackOfInt::StackOfInt(int stk_size) {
    data = new int[length = stk_size];
    ptr = 0;
};

void StackOfInt::push(int x) {
    if (ptr < length)
        data[ptr++] = x;
    else
        throw "overflow";
}

int StackOfInt::pop() {
    if (ptr > 0)
        return data[--ptr];
    else
        throw "underflow";
}

int StackOfInt::top() const {
    if (ptr > 0)
        return data[ptr-1];
    else
        throw "underflow";
}

int StackOfInt::size() const {
    return ptr;
}

StackOfInt::~StackOfInt() {
    delete [] data;
}


