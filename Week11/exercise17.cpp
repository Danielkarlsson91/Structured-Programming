/*Implement and test a stack class using a linked list to store and restore data of type int.
Test the class using assertions and ensure that all the allocated memory blocks are released.
The class shall provide the following function:
A function to push a data element to a stack.
A function to get number of the data elements stored in a stack.
A function to pop an element from a stack.
A function to clear a stack
Overload the insertion operator to print a stack to the terminal*/

#include<cassert>
#include<iostream>
#include "stack.h"

using namespace std;

int main()
{
    int value;
    Stack stack;  // Creating an instance of the Stack class

    // Testing the initial state of the stack
    assert(0 == stack.available());

    // Testing push operation and checking the number of elements
    assert(stack.push(10));
    assert(1 == stack.available());

    // Testing push operation again and checking the number of elements
    assert(stack.push(20));
    assert(2 == stack.available());
    
    // Testing pop operation, checking the popped value and the number of elements
    assert(stack.pop(value));
    assert(value == 20);
    assert(1 == stack.available());

    // Testing pop operation again, checking the popped value and the number of elements
    assert(stack.pop(value));
    assert(value == 10);
    assert(0 == stack.available());

    // Testing push operation after pop, checking the number of elements
    assert(stack.push(30));
    assert(1 == stack.available());

    // Testing clear operation and checking that the stack is empty
    stack.clear();
    assert(0 == stack.available());

    // Testing pop operation on an empty stack and ensuring it returns false
    assert(!stack.pop(value));

    cout << "All tests passed!" << endl;

    // Additional test: Testing push operation after clear and checking the number of elements
    assert(stack.push(30));
    assert(1 == stack.available());

    return 0;
}