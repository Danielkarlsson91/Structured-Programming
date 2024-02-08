/**
 * @file exam.cpp
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief
 * @version 0.1
 * @date 2024-01-24
 *
 * @copyright Copyright (c) 2024
 *
 */

/*Implement an uncopyable and an unassignable template circular buffer class according to the requirements below.
Use a template type (T) and a non-type(N) template parameters.
A buffer is an array of type T whose length is N
Ensure that N is at least 4
The class shall have a function to clear a buffer
The class shall have a function to read data from a buffer
The class shall have a function to write data to a buffer
If the buffer is full then the oldest data shall be overwritten
The class shall have a function to return the number of data elements stored in a buffer
The class shall have a function to check if a buffer is full or not
Overload the insertion operator (<<) for the class to print all the stored elements in a buffer to the terminal
The class shall be tested using assertion.

For G, all the above requirements shall be fulfilled.
For VG, all the above requirements shall be fulfilled and if the template type(T) is an arithmetic type then the class shall have a function to return average of the data elements stored in a circular buffer.
The function shall not remove data elements stored in the buffer.
The return type of the function shall be float.*/

#include <iostream>
#include <cassert>

// Template class Cbuffer
template <typename T, size_t N>
class Cbuffer
{
    int head = 0;  // Index of the first element in the buffer
    int tail = 0;  // Index where the next element will be written
    int count = 0; // Number of elements currently stored in the buffer
    T buffer[N];   // Array to store elements of type T

public:
    // Constructor
    Cbuffer()
    {
        static_assert(N >= 4); // Ensures buffer size is at least 4
    }

    // Disable copy constructor and copy assignment
    Cbuffer(const Cbuffer &) = delete;
    Cbuffer &operator=(const Cbuffer &) = delete;

    // Method to write an item to the buffer
    void write(const T item)
    {
        buffer[tail] = item;   // Write item to buffer
        tail = (tail + 1) % N; // Update tail index

        // If buffer is full, advance head to make space for new item
        if (count == N)
        {
            head = (head + 1) % N;
        }
        else
        {
            count++; // Increment count if buffer is not full
        }
    }

    // Method to read an item from the buffer
    void read(T &items)
    {
        if (count > 0)
        {
            items = buffer[head];  // Read item from buffer
            head = (head + 1) % N; // Update head index
            count--;               // Decrement count
        }
    }

    // Method to clear the buffer
    void clear()
    {
        head = 0;
        tail = 0;
        count = 0;
    }

    // Method to get the count of items in the buffer
    int Count()
    {
        return count;
    }

    // Method to check if the buffer is full
    bool isFull()
    {
        return count == N;
    }

    // Overloading << operator to print buffer contents
    friend std::ostream &operator<<(std::ostream &os, const Cbuffer &buff)
    {
        for (int i = 0; i < buff.count; i++)
        {
            os << buff.buffer[(buff.head + i) % N] << " ";
        }
        os << "\n";

        return os;
    }
};

// Main function
int main()
{
    int items;
    double items2;

    // Testing with integer buffer of size 5
    Cbuffer<int, 5> test;

    test.write(10);
    test.write(20);
    test.write(30);
    test.write(40);
    test.write(50);
    test.write(60); // This write should overwrite the earliest value

    assert(test.Count() == 5);
    assert(test.isFull());
    test.read(items); // Reading should remove the earliest value
    assert(test.Count() == 4);
    assert(items == 20);

    std::cout << test; // Print the contents of the buffer

    test.clear();
    assert(test.Count() == 0);

    // Testing with double buffer of size 10
    Cbuffer<double, 10> test2;

    test2.write(10.5);
    test2.write(20.5);
    test2.write(30.5);
    test2.write(40.5);
    test2.write(50.5);
    test2.write(60.5); // This write should not overwrite any value

    assert(test2.Count() == 6);
    assert(!test2.isFull());
    test2.read(items2); // Reading should remove the earliest value
    assert(test2.Count() == 5);
    assert(items2 == 10.5);

    std::cout << test2; // Print the contents of the buffer

    test2.clear();
    assert(test2.Count() == 0);

    return 0;
}