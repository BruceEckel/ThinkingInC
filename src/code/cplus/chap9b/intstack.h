// intstack.h: A Stack class for ints

class StackOfInt {
public:
    StackOfInt(int);
    void push(int);
    int pop();
    int top() const;
    int size() const;
    ~StackOfInt();

private:
    int *data;
    int length;
    int ptr;
};

