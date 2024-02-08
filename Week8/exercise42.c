/**
 * @file exercise42.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*Implement a multiple instance stack using an array whose length is specified when an instance is created.

The stack shall be tested using assertions and provide the following functions:

A function to create an instance. Length of the array is a parameter of this function.
A function to push a data element of type uint8_t to a stack.
A function to get number of the data elements stored in a stack.
A function to pop an element from a stack.
A function to get length of a stack.
A function to clear a stack
A function to destroy a stack*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

// Stack structure
struct Stack {
    uint8_t* array;
    int top;
    int length;
};

// Function to create an instance of the stack
struct Stack createStack(int length) {
    struct Stack stack;
    stack.array = (uint8_t*)malloc(length * sizeof(uint8_t));
    assert(stack.array != NULL);
    stack.top = -1;
    stack.length = length;
    return stack;
}

// Function to push a data element to the stack
void push(struct Stack* stack, uint8_t data) {
    assert(stack->top < stack->length - 1); // Check for stack overflow
    stack->array[++stack->top] = data;
}

// Function to get the number of data elements stored in the stack
int getSize(const struct Stack* stack) {
    return stack->top + 1;
}

// Function to pop an element from the stack
uint8_t pop(struct Stack* stack) {
    assert(stack->top >= 0); // Check for stack underflow
    return stack->array[stack->top--];
}

// Function to get the length of the stack
int getLength(const struct Stack* stack) {
    return stack->length;
}

// Function to clear the stack
void clearStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to destroy the stack and free memory
void destroyStack(struct Stack* stack) {
    free(stack->array);
    stack->array = NULL;
    stack->top = -1;
    stack->length = 0;
}

int main() {
    // Test the stack module
    struct Stack myStack = createStack(5);

    // Push values
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Stack size: %d\n", getSize(&myStack));

    // Pop and print the elements
    while (getSize(&myStack) > 0) {
        printf("Popped: %d\n", pop(&myStack));
    }

    printf("Stack length: %d\n", getLength(&myStack));

    // Clear the stack
    clearStack(&myStack);
    printf("Cleared stack. New size: %d\n", getSize(&myStack));

    // Destroy the stack
    destroyStack(&myStack);

    return 0;
}