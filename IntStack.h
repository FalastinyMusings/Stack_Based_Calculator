#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack {
protected:
    int *stackArray;
    int stackSize;
    int top;

public:
    explicit IntStack(int);
    ~IntStack();
    void push(int);
    void pop(int &);
    bool isFull();
    bool isEmpty();
};

IntStack::IntStack(int size) {
    stackArray = new int[size];
    stackSize = size;
    top = -1;
}

IntStack::~IntStack() {
    delete[] stackArray;
}

void IntStack::pop(int &num) {
    if (isEmpty()) {
        std::cout << "The stack is empty.\n";
    } else {
        num = stackArray[top];
        top--;
    }
}

void IntStack::push(int num) {
    top++;
    stackArray[top] = num;
}

bool IntStack::isFull() {
    bool stat;
    if (top >= stackSize)
        return true;
    else
        return false;
}

bool IntStack::isEmpty() {

    if (top != -1)
        return false;
    else
        return true;
}

//Ignore this line
#endif