/**
 * @file exercise40.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-08
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*Implement a multiple-instance linked list module of unique and sorted data elements of type int. The module shall be tested using assertion and support the following operations:
Creating a list
Inserting a new node in a list
Change a data element in a list
Deleting a value from a list
Searching for a value in a list
Getting data stored in the nth node of a list
Getting available number of elements stored in a list
Destroying a list
 

Sorted means that when you want to add a new data element, you should find the right position for the node in a way that the list is always sorted.*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Linked list structure
struct LinkedList {
    struct Node* head;
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

// Function to create an empty linked list
struct LinkedList createList() {
    struct LinkedList list;
    list.head = NULL;
    return list;
}

// Function to insert a new node in a sorted manner
void insertNode(struct LinkedList* list, int data) {
    struct Node* newNode = createNode(data);
    assert(newNode != NULL);

    if (list->head == NULL || data < list->head->data) {
        // Insert at the beginning
        newNode->next = list->head;
        list->head = newNode;
    } else {
        // Traverse the list to find the right position
        struct Node* current = list->head;
        while (current->next != NULL && data > current->next->data) {
            current = current->next;
        }

        // Insert after the current node
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to change a data element in a list
void changeData(struct LinkedList* list, int oldData, int newData) {
    struct Node* current = list->head;
    while (current != NULL && current->data != oldData) {
        current = current->next;
    }

    if (current != NULL) {
        current->data = newData;
    }
}

// Function to delete a value from a list
void deleteValue(struct LinkedList* list, int data) {
    struct Node* current = list->head;
    struct Node* prev = NULL;

    // Find the node with the given data
    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current != NULL) {
        // Remove the node
        if (prev == NULL) {
            // If the node to be removed is the head
            list->head = current->next;
        } else {
            prev->next = current->next;
        }

        free(current);
    }
}

// Function to search for a value in a list
int searchValue(const struct LinkedList* list, int data) {
    const struct Node* current = list->head;
    while (current != NULL) {
        if (current->data == data) {
            return 1; // Found
        }
        current = current->next;
    }
    return 0; // Not found
}

// Function to get data stored in the nth node of a list
int getDataAt(const struct LinkedList* list, int position) {
    const struct Node* current = list->head;
    int count = 0;

    while (current != NULL && count < position) {
        current = current->next;
        count++;
    }

    assert(current != NULL); // Ensure position is within the list's size
    return current->data;
}

// Function to get the available number of elements stored in a list
int getListSize(const struct LinkedList* list) {
    const struct Node* current = list->head;
    int count = 0;

    while (current != NULL) {
        current = current->next;
        count++;
    }

    return count;
}

// Function to destroy a list and free memory
void destroyList(struct LinkedList* list) {
    struct Node* current = list->head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    // Set head to NULL to indicate an empty list
    list->head = NULL;
}

// Function to print the elements of a list
void printList(const struct LinkedList* list) {
    const struct Node* current = list->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() 
{
    // Test the linked list module
    struct LinkedList myList = createList();

    insertNode(&myList, 30);
    insertNode(&myList, 10);
    insertNode(&myList, 20);
    insertNode(&myList, 40);

    printf("Original List: ");
    printList(&myList);

    // Test operations
    changeData(&myList, 20, 25);
    printf("List after changing 20 to 25: ");
    printList(&myList);

    deleteValue(&myList, 30);
    printf("List after deleting 30: ");
    printList(&myList);

    int searchResult = searchValue(&myList, 25);
    printf("Search result for 25: %s\n", searchResult ? "Found" : "Not found");

    int dataAtPosition = getDataAt(&myList, 2);
    printf("Data at position 2: %d\n", dataAtPosition);

    int listSize = getListSize(&myList);
    printf("List size: %d\n", listSize);

    // Destroy the list
    destroyList(&myList);

    return 0;
}