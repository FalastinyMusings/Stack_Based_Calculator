#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack
{
protected:
	int *stackArray;
	int stackSize;
	int top;

public:
	IntStack(int);
	~IntStack();
	void push(int);
	void pop(int &);
	bool isFull();
	bool isEmpty();
};
	
#endif