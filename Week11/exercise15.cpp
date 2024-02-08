/*Implement and test an uncopyable and uassignable singleton stack class using an array of type int whose size is a compile-time constant.
The singleton class shall provide the following function:
A function to push a data element to the stack.
A function to get number of the data elements stored in the stack.
A function to pop an element from the stack.
A function to clear the stack*/

#include<iostream>
#include<cassert>


// Define a class named Stack
class Stack
{
  static constexpr int SIZE{3};  // Define a constant for the size of the stack
  int data[SIZE];  // Array to store the stack elements
  int top{-1};  // Variable to keep track of the top of the stack

Stack() = default;

public:
  
  Stack(const Stack &) = delete;
  Stack operator=(const Stack &) = delete;

static Stack *handle()
{
  static Stack stack;
  return &stack;
}

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
    int value;

    Stack *a{a->handle()}; 
    assert(a->push(10));  
    assert(a->push(20));  
    assert(a->push(30));  
    assert(a->isFull());
    
    assert(a->getNumber() == 3);
    assert(a->pop(value));
    assert(value == 30);

    a->clearStack();
    assert(a->getNumber() == 0);
    assert(a->isEmpty());

    assert(!a->pop(value));
    assert(a->push(10));
    
    Stack *b{b->handle()}; 
    assert(b->getNumber() == 1);

    return 0;
}