#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack
{
    //Exercise 17
    // Node structure for the linked list implementation of the stack
    struct node_t
    {
        int data;
        node_t *next;
        node_t(int _data, node_t *ptr) : data{_data}, next{ptr}
        {
            // Constructor for the node structure
        }
    };

    // Top pointer to the top of the stack
    node_t *top{nullptr};

    // Number of elements in the stack
    size_t elems_num{0};

public:
    // Default constructor
    Stack() = default;

    // Copy constructor and copy assignment operator deleted to prevent unintended copying
    Stack(const Stack &) = delete;
    Stack &operator=(const Stack &) = delete;

    // Function to push a value onto the stack
    bool push(int value)
    {
        bool status{false};

        // Create a new node with the provided value and set it as the new top
        node_t *node = new(std::nothrow) node_t{value, top};
        if (node != nullptr)
        {
            status = true;
            elems_num++;
            top = node;
        }

        return status;
    }

    // Function to pop a value from the stack
    bool pop(int &elem)
    {
        bool status{false};

        // Check if the stack is not empty
        if (top != nullptr)
        {
            status = true;
            elem = top->data;
            node_t *temp{top};
            top = top->next;
            delete temp;
            elems_num--;
        }

        return status;
    }

    // Function to get the number of elements in the stack
    size_t available()
    {
        return elems_num;
    }

    // Function to clear the stack by deleting all nodes
    void clear()
    {
        while (top != nullptr)
        {
            node_t *temp{top};
            top = top->next;
            delete temp;
        }

        elems_num = 0;
    }

    // Friend function to overload the << operator for printing the stack
    friend std::ostream &operator<<(std::ostream &out, const Stack &stack)
    {
        node_t *cursor{stack.top};

        // Traverse the stack and print each element
        while (cursor != nullptr)
        {
            out << cursor->data << "\t";
            cursor = cursor->next;
        }
        return out;
    }

    // Destructor to clear the stack during object destruction
    ~Stack()
    {
        clear();
    }
};

#endif