// stack9b.h: A Stack template

template<class T>
class Stack {
public:
    Stack(int);
    void push(T);
    T pop();
    T top() const;
    int size() const;
    ~Stack();

private:
    T *data;
    int length;
    int ptr;
};

template<class T>
Stack<T>::Stack(int stk_size) {
    data = new T[length = stk_size];
    ptr = 0;
};

template<class T>
void Stack<T>::push(T x) {
    if (ptr < length)
        data[ptr++] = x;
    else
        throw "overflow";
}

template<class T>
T Stack<T>::pop() {
    if (ptr > 0)
        return data[--ptr];
    else
        throw "underflow";
}

template<class T>
T Stack<T>::top() const {
    if (ptr > 0)
        return data[ptr-1];
    else
        throw "underflow";
}

template<class T>
int Stack<T>::size() const {
    return ptr;
}

template<class T>
Stack<T>::~Stack() {
    delete [] data;
}

