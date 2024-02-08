/**
 * @file exercise12.cpp
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-11
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*Make a multiple instance stack using a fixed size array of type int.
The stack shall be tested using assertion and provide the following functions:
A function to create a stack.
A function to push a data element a stack.
A function to get number of the data elements stored in a stack.
A function to pop an element from a stack.
A function to clear a stack
A function to destroy a stack*/

#include "stack.h"
#include <cassert>
#include <iostream>

void test_stack_push(stack::stack_t *stck)
{
    stack::clear(stck);

    assert(stack::push(stck, 10));
    assert(1 == stack::available(stck));

    assert(stack::push(stck, 20));
    assert(2 == stack::available(stck));
}

void test_stack_pop(stack::stack_t *stck)
{
    stack::clear(stck);

    assert(stack::push(stck, 10));
    assert(1 == stack::available(stck));

    assert(stack::push(stck, 20));
    assert(2 == stack::available(stck));

    int value;

    assert(stack::pop(stck, value));
    assert(1 == stack::available(stck));
    assert(20 == value);

    assert(stack::pop(stck, value));
    assert(0 == stack::available(stck));
    assert(10 == value);
}

void test_stack_clear(stack::stack_t *stck)
{
    stack::clear(stck);

    assert(stack::push(stck, 10));
    assert(1 == stack::available(stck));

    assert(stack::push(stck, 20));
    assert(2 == stack::available(stck));

    stack::clear(stck);

    int value;
    assert(!stack::pop(stck, value));
    assert(0 == stack::available(stck));
}

int main(void)
{
    stack::stack_t *stck = stack::create();
    assert(stck != nullptr);

    test_stack_push(stck);
    std::cout << "Testing push... Passed!" << std::endl;

    test_stack_pop(stck);
    std::cout << "Testing pop... Passed!" << std::endl;

    test_stack_clear(stck);
    std::cout << "Testing clear... Passed!" << std::endl;

    std::cout << "-------------------------" << std::endl;
    std::cout << "All tests passed!" << std::endl;

    stack::destroy(stck);
    assert(stck == nullptr);

    return 0;
}