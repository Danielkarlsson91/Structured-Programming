/*Make an uncopyable, but movable template queue class using a linked list to provide the following functions:
A function to enqueue a data element to a queue.
A function to dequeue a data element from a queue.
A function to get the number of data elements stored in a queue.
A function to clear a queue.
Use exception handling when you allocate memory dynamically.
Test the class using assertions and ensure that all the allocated memory blocks are released and the class is movable.*/

#include <iostream> // For standard input/output streams
#include <cassert>  // For assertions
#include <new>      // For std::nothrow
#include <cstddef>  // For std::size_t

// Define the Queue template class
template <typename T>
class Queue
{
    // Forward declaration of the node_t struct
    struct node_t;

    // Private member variables
    node_t *head{nullptr}; // Pointer to the first node in the queue
    node_t *tail{nullptr}; // Pointer to the last node in the queue
    size_t elems_num{0};   // Number of elements in the queue

public:
    // Default constructor
    Queue() = default;

    // Disable copy constructor
    Queue(const Queue &) = delete;

    // Move assignment operator
    Queue &operator=(Queue &&that) noexcept
    {
        if (this != &that)
        {
            clear(); // Clear the current queue

            // Move the state of 'that' queue to 'this' queue
            head = that.head;
            tail = that.tail;
            elems_num = that.elems_num;

            // Reset 'that' queue state
            that.head = nullptr;
            that.tail = nullptr;
            that.elems_num = 0;
        }
        return *this;
    }

    // Move constructor
    Queue(Queue &&other) noexcept : head{other.head}, tail{other.tail}, elems_num{other.elems_num}
    {
        other.tail = nullptr;
        other.head = nullptr;
        other.elems_num = 0;
    }

    // Function to enqueue a value
    bool enqueue(const T &value)
    {
        bool status{false};

        try
        {
            node_t *node = new (std::nothrow) node_t{value, nullptr};

            if (tail == nullptr)
            {
                head = node;
                tail = head;
            }
            else
            {
                tail->next = node;
                tail = node;
            }

            elems_num++;
            status = true;
        }

        catch (const std::bad_alloc &e)
        {
            std::cerr << e.what() << '\n';
            status = false;
        }

        return status;
    }

    // Function to dequeue a value
    bool dequeue(T &value)
    {
        bool status{false};

        if (head != nullptr)
        {
            status = true;
            value = head->data;

            node_t *temp{head};
            head = head->next;
            delete temp;
            elems_num--;

            if (head == nullptr)
            {
                tail = nullptr;
            }
        }
        return status;
    }

    // Function to get the number of elements in the queue
    size_t available() { return elems_num; }

    // Function to clear the queue
    void clear()
    {
        while (head != nullptr)
        {
            node_t *temp{head};
            head = head->next;
            delete temp;
        }

        elems_num = 0;
        tail = head;
    }

    // Destructor to clear the queue during object destruction
    ~Queue() { clear(); }

private:
    // Definition of the node_t struct
    struct node_t
    {
        T data;       // Data stored in the node
        node_t *next; // Pointer to the next node

        // Constructor for node_t
        node_t(const T &value, node_t *ptr) : data{value}, next{ptr} {}
    };
};

// Main function for testing
int main()
{
    int value;

    // Create a Queue object
    Queue<int> q1;

    // Assert that the queue is initially empty
    assert(q1.available() == 0);

    // Enqueue elements into the queue
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);

    // Assert the number of elements in the queue
    assert(q1.available() == 3);

    // Dequeue an element and assert its value
    assert(q1.dequeue(value));
    assert(value == 10);

    // Assert the number of elements in the queue after dequeue
    assert(q1.available() == 2);

    // Move construct a new queue 'q2' from 'q1'
    Queue<int> q2{std::move(q1)};

    // Assert that 'q1' is empty after move construction
    assert(q1.available() == 0);

    // Assert the number of elements in 'q2' after move construction
    assert(q2.available() == 2);

    // Create a new queue 'q3' and move assign 'q2' to 'q3'
    Queue<int> q3;
    q3 = std::move(q2);

    // Assert that 'q2' is empty after move assignment
    assert(q2.available() == 0);

    // Assert the number of elements in 'q3' after move assignment
    assert(q3.available() == 2);

    // All tests passed successfully
    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}