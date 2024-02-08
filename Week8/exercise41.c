/**
 * @file exercise41.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*Implement a single instance queue module using a linked list to store data of type int.
The module shall be tested using assertions and provide the following functions.
A function to enqueue a value in the queue
A function to dequeue a value from the queue
A function to get number of the data elements stored in the queue
A function to delete all the data elements stored in the queue*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
    int size;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode != NULL) {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

// Function to create an empty queue
struct Queue createQueue() {
    struct Queue queue;
    queue.front = queue.rear = NULL;
    queue.size = 0;
    return queue;
}

// Function to enqueue a value in the queue
void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = createNode(data);
    assert(newNode != NULL);

    if (queue->rear == NULL) {
        // If the queue is empty
        queue->front = queue->rear = newNode;
    } else {
        // Otherwise, add the new node at the end
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    queue->size++;
}

// Function to dequeue a value from the queue
int dequeue(struct Queue* queue) {
    assert(queue->front != NULL); // Ensure the queue is not empty

    int data = queue->front->data;
    struct Node* temp = queue->front;

    // Move front to the next node
    queue->front = queue->front->next;

    // If the queue becomes empty, update rear as well
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    queue->size--;

    return data;
}

// Function to get the number of data elements stored in the queue
int getSize(const struct Queue* queue) {
    return queue->size;
}

// Function to delete all the data elements stored in the queue
void clearQueue(struct Queue* queue) {
    while (queue->front != NULL) {
        struct Node* temp = queue->front;
        queue->front = queue->front->next;
        free(temp);
    }

    queue->rear = NULL;
    queue->size = 0;
}

// Function to print the elements of the queue
void printQueue(const struct Queue* queue) {
    const struct Node* current = queue->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Test the queue module
    struct Queue myQueue = createQueue();

    // Enqueue values
    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);

    printf("Queue elements: ");
    printQueue(&myQueue);

    // Dequeue and print the size
    int dequeuedValue = dequeue(&myQueue);
    printf("Dequeued value: %d\n", dequeuedValue);
    printf("Queue size: %d\n", getSize(&myQueue));

    // Clear the queue and print the size
    clearQueue(&myQueue);
    printf("Cleared queue. New size: %d\n", getSize(&myQueue));

    return 0;
}