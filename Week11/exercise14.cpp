/*Implement and test a stack class using an array of type int whose size is a compile-time constant. 
The class shall provide the following function:
A function to push a data element to a stack.
A function to get number of the data elements stored in a stack.
A function to pop an element from a stack.
A function to check if a stack is full or not.
A function to check if a stack is empty or not
A function to clear a stack*/

#include<iostream>
#include<cassert>

using namespace std;

// Define a class named Stack
class Stack
{
  static constexpr int SIZE{3};  // Define a constant for the size of the stack
  int data[SIZE];  // Array to store the stack elements
  int top{-1};  // Variable to keep track of the top of the stack

public:
  // Function to push a value onto the stack
  bool push(int value)
  {
    bool status = false;

    // Check if the stack is not full
    if(!isFull())
    {
        // Increment the top and add the value to the stack
        data[++top] = value;
        status = true;
    }

    return status;
  }  

  // Function to get the number of elements in the stack
  int getNumber()
  {
    return top + 1;
  }

  // Function to pop a value from the stack
  bool pop(int &value)
  {
    bool status(false);

    // Check if the stack is not empty
    if(!isEmpty())
    {
        // Retrieve the value from the top of the stack and decrement the top
        value = data[top--];
        status = true;
    }

    return status;
  }

  // Function to check if the stack is full
  bool isFull()
  {
    return top == (SIZE - 1);
  }

  // Function to check if the stack is empty
  bool isEmpty()
  {
    return top == -1;
  }

  // Function to clear the stack
  void clearStack()
  {
    top = -1;
  }

};

int main()
{
    // Create an instance of the Stack class
    Stack a;

    // Test case 1: Push, pop, and getNumber operations
    assert(a.push(10));
    assert(a.getNumber() == 1);
    int value{0};
    assert(a.pop(value));
    assert(value == 10);
    assert(a.getNumber() == 0);
    
    // Test case 2: Push three values, pop all, and check the number of elements
    assert(a.push(10));
    assert(a.push(20));
    assert(a.push(30));
    assert(a.getNumber() == 3);

    assert(a.pop(value));
    assert(a.pop(value));
    assert(a.pop(value));
    assert(a.getNumber() == 0);
    assert(value == 10);

    // Test case 3: Push two values, clear the stack, and check the number of elements
    assert(a.push(10));
    assert(a.push(20));
    a.clearStack();
    assert(a.getNumber() == 0);

    return 0;
}