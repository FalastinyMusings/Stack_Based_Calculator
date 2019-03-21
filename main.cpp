#include <iostream>
#include "MathStack.h"
#include "IntStack.h"
using namespace std;

int main()
{
	// Constants for stack sizes
	const int STACK_SIZE = 5;
	const int ADD_SIZE = 4;
	const int MULT_SIZE = 6;

	// Create three stacks
	MathStack stack(STACK_SIZE);
	MathStack addAllStack(ADD_SIZE);
	MathStack multAllStack(MULT_SIZE);

	// Variable to catch values as they are
	// popped from the stack
	int catchVar;

	// Test Add()
	cout << "Pushing 3\n";
	stack.push(3);
	cout << "Pushing 6\n";
	stack.push(6);
	stack.add();
	cout << "The sum is ";
	stack.pop(catchVar);
	cout << catchVar << endl << endl;

	// Test Mult()
	cout << "Pushing 3\n";
	stack.push(3);
	cout << "Pushing 6\n";
	stack.push(6);
	stack.mult();
	cout << "The product is ";
	stack.pop(catchVar);
	cout << catchVar << endl << endl;

	// Test Div()
	cout << "Pushing 3\n";
	stack.push(3);
	cout << "Pushing 6\n";
	stack.push(6);
	stack.div();
	cout << "The quotient is ";
	stack.pop(catchVar);
	cout << catchVar << endl << endl;

	// Test Sub()
	cout << "Pushing 7\n";
	stack.push(7);
	cout << "Pushing 10\n";
	stack.push(10);
	stack.sub();
	cout << "The difference is ";
	stack.pop(catchVar);
	cout << catchVar << endl << endl;

	// Test AddAll()
	cout << "Pushing 2\n";
	addAllStack.push(2);
	cout << "Pushing 3\n";
	addAllStack.push(3);
	cout << "Pushing 5\n";
	addAllStack.push(5);
	cout << "Pushing 10\n";
	addAllStack.push(10);
	addAllStack.addAll();
	cout << "The sum of all values in the stack is ";
	addAllStack.pop(catchVar);
	cout << catchVar << endl << endl;

	// Test MultAll()
	cout << "Pushing 1\n";
	multAllStack.push(1);
	cout << "Pushing 2\n";
	multAllStack.push(2);
	cout << "Pushing 3\n";
	multAllStack.push(3);
	cout << "Pushing 4\n";
	multAllStack.push(4);
	cout << "Pushing 5\n";
	multAllStack.push(5);
	cout << "Pushing 6\n";
	multAllStack.push(6);
	multAllStack.multAll();
	cout << "The product of all values in the stack is ";
	multAllStack.pop(catchVar);
	cout << catchVar << endl << endl;

	return 0;
}