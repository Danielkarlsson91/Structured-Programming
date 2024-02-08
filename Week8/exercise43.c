/**
 * @file exercise43.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*Implement a single instance stack module using a linked list to store data of type int.
The module shall be tested using assertion and provide the following functions:
A function to push a data element to the stack
A function to pop a data element from the stack
A function to get number of data elements stored in the stack
A function to clear the stack*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Define the structure for each node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the stack structure
typedef struct {
    Node* top;
    int size;
} Stack;

// Function to initialize an empty stack
void initializeStack(Stack* stack) {
    stack->top = NULL;
    stack->size = 0;
}

// Function to push a data element onto the stack
void push(Stack* stack, int data) {
    // Create a new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    // Set data and next pointer
    newNode->data = data;
    newNode->next = stack->top;

    // Update top and size
    stack->top = newNode;
    stack->size++;
}

// Function to pop a data element from the stack
int pop(Stack* stack) {
    assert(stack->size > 0 && "Cannot pop from an empty stack");

    // Get the data from the top node
    int data = stack->top->data;

    // Remove the top node and update top and size
    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    stack->size--;

    return data;
}

// Function to get the number of data elements stored in the stack
int getSize(const Stack* stack) {
    return stack->size;
}

// Function to clear the stack
void clear(Stack* stack) {
    while (stack->top != NULL) {
        Node* temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
    stack->size = 0;
}

// Test the stack module using assertions
int main() {
    Stack stack;
    initializeStack(&stack);

    // Test push and getSize
    push(&stack, 10);
    push(&stack, 20);
    assert(getSize(&stack) == 2);

    // Test pop and getSize
    assert(pop(&stack) == 20);
    assert(getSize(&stack) == 1);

    // Test clear and getSize
    clear(&stack);
    assert(getSize(&stack) == 0);

    printf("All tests passed successfully!\n");

    return 0;
}