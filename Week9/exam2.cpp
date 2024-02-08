/**
 * @file exam2.cpp
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief
 * @version 0.1
 * @date 2024-02-05
 *
 * @copyright Copyright (c) 2024
 *
 */

/*Develop and test a template circular queue class implemented using a linked list according to the requirements below.
Use a template type (T) parameter for type of data stored in a queue.
Make the class uncopyable by
Deleting the copy constructor and the copy assignment operator
Size of a queue is specified when an instance is created
Size shall be at least 4.
Size is passed to the constructor of the class
The nodes shall be created and linked in the constructor
To allocate memory for the nodes, use the nothrow version of the new operator
The class shall have a function to clear a queue
The class shall have a function to read data from a queue
The class shall have a function to write data to a queue
If the queue is full then the oldest data shall be overwritten
The class shall have a function to return number of data elements stored in a queue
The class shall have a function to check if a queue is full or not
Ensure that the dynamic memory is managed properly.
Don’t use assertion in the class. But to test the class, use assertion.*/

#include <iostream>
#include <cassert>

template <typename T>
class CircularQueue
{
private:
    // Node structure to hold data and link to the next node
    struct Node
    {
        T data;
        Node *next;
    };

    // Pointers to the head and tail of the queue
    Node *head;
    Node *tail;
    // Current size and maximum capacity of the queue
    size_t size;
    size_t capacity;

    // Private copy constructor and assignment operator to prevent unintended copying
    CircularQueue(const CircularQueue &) = delete;
    CircularQueue &operator=(const CircularQueue &) = delete;

public:
    // Constructor: Initializes the queue with a specified capacity
    CircularQueue(size_t _capacity) : head{nullptr}, tail{nullptr}, size{0}, capacity{_capacity}
    {
        // Check if the capacity is valid
        if (capacity < 4)
        {
            throw std::invalid_argument("The size must be at least 4");
        }

        // Create nodes and link them in a circular manner
        for (size_t i = 0; i < capacity; ++i)
        {
            Node *newNode = new (std::nothrow) Node;
            if (newNode == nullptr)
            {
                // Handle memory allocation failure
                clear();
                throw std::bad_alloc();
            }
            if (i == 0)
            {
                head = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }

        tail->next = head;
        tail = head;
    }

    // Destructor: Deallocates memory for all nodes
    ~CircularQueue()
    {
        clear();
    }

    // Writes data to the queue
    void write(const T &data)
    {

        tail->data = data;
        tail = tail->next;

        if (full())
        {
            head = head->next;
        }
        else
        {
            size++;
        }
    }

    // Clears the queue
    void clear()
    {
        for (int i = 0; i < capacity; i++)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        size = 0;
    }

    // Checks if the queue is full
    bool full()
    {
        return size == capacity;
    }

    // Returns the number of data elements stored in the queue
    size_t counter()
    {
        return size;
    }

    // Reads data from the queue
    T read()
    {
        T data{head->data};

        if (size > 0)
        {
            head = head->next;
            --size;
        }

        return data;
    }
};

int main()
{
    // Testing the CircularQueue class
    CircularQueue<int> cq(5);

    // Assert that the initial count is 0
    assert(cq.counter() == 0);

    cq.write(10);
    cq.write(20);
    cq.write(30);
    cq.write(40);
    cq.write(50);

    // Assert that the initial count is equal to the capacity
    assert(cq.counter() == 5);

    // Assert that the queue is full initially
    assert(cq.full());

    // Checking that the oldest data has been overwritten
    assert(cq.read() == 10);

    // std::cout << cq.read() << std::endl;
    //  std::cout << cq.read() << std::endl;

    assert(cq.counter() == 4);
    cq.write(60);
    cq.write(70);

    assert(cq.read() == 30);

    cq.clear();
    assert(cq.counter() == 0);

    std::cout << "All test did pass!" << std::endl;

    return 0;
}