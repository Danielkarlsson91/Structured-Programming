/*Make an uncopyable and unassignable template queue class using a linked list to provide the following functions:
A function to enqueue a data element to a queue.
A function to dequeue a data element from a queue.
A function to get the number of data elements stored in a queue.
A function to clear a queue.
Test the class using assertions and ensure that all the allocated memory blocks are released.*/

#include "queue.h"  // Include the header file containing the Queue class
#include <cassert>
#include <iostream>

int main()
{
    int value;
    
    // Create an instance of the Queue class with type deduced from 'value'
    Queue<decltype(value)> queue;

    // Test: Enqueue value 10 into the queue
    assert(queue.enqueue(10));
    // Test: Check if the number of elements in the queue is 1
    assert(1 == queue.available());

    // Test: Dequeue a value from the queue
    assert(queue.dequeue(value));
    // Test: Check if the number of elements in the queue is now 0
    assert(0 == queue.available());
    // Test: Check if the dequeued value is equal to 10
    assert(value == 10);

    // Test: Enqueue value 10 into the queue again
    assert(queue.enqueue(10));
    // Test: Check if the number of elements in the queue is 1
    assert(1 == queue.available());

    // Test: Enqueue value 20 into the queue
    assert(queue.enqueue(20));
    // Test: Check if the number of elements in the queue is now 2
    assert(2 == queue.available());

    // Test: Dequeue a value from the queue
    assert(queue.dequeue(value));
    // Test: Check if the number of elements in the queue is now 1
    assert(1 == queue.available());
    // Test: Check if the dequeued value is equal to 10
    assert(value == 10);

    // Test: Clear the queue
    queue.clear();
    // Test: Check if the number of elements in the queue is now 0
    assert(0 == queue.available());
    // Test: Attempt to dequeue from an empty queue (should return false)
    assert(!queue.dequeue(value));

    // Output a success message if all tests passed
    std::cout << "All tests passed!" << std::endl;

    return 0;
}