#ifndef MATHSTACK_H
#define MATHSTACK_H

#include "IntStack.h"

class MathStack : public IntStack {
public:
    explicit MathStack(int s) : IntStack(s) {}
    void add();
    void sub();
    void mult();
    void div();
    void addAll();
    void multAll();
};

void MathStack::addAll() {
    int num = 0, sum = 0;

    while (!isEmpty()) {
        pop(num);
        sum += num;
    }
    push(sum);
}

void MathStack::multAll() {
    int num = 0, prod = 1;

    while (!isEmpty()) {
        pop(num);
        prod *= num;
    }
    push(prod);
}

void MathStack::add() {
    int num = 0, sum = 0;
    pop(sum);
    pop(num);
    sum += num;
    push(sum);
}

void MathStack::sub() {
    int num = 0, diff = 0;
    pop(diff);
    pop(num);
    diff -= num;
    push(diff);
}

void MathStack::mult() {
    int num = 0, prod = 0;
    pop(prod);
    pop(num);
    prod *= num;
    push(prod);

}

void MathStack::div() {
    int num = 0, quot = 0;
    pop(quot);
    pop(num);
    quot = quot / num;
    push(quot);
}

#endif