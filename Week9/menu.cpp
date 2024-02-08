// A 2D-array

#include <iostream>

using namespace std;

int main()
{
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}

// Pointers

#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << &*&gpa;

    return 0;
}

// Classes (big)

#include <iostream>
#include <string>

class BankAccount
{
private:
    std::string accountHolderName;
    std::string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(const std::string &name, const std::string &number, double initialBalance)
        : accountHolderName(name), accountNumber(number), balance(initialBalance)
    {
    }

    // Member function to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposit successful. New balance: " << balance << std::endl;
        }
        else
        {
            std::cerr << "Invalid deposit amount." << std::endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
        }
        else
        {
            std::cerr << "Invalid withdrawal amount or insufficient funds." << std::endl;
        }
    }

    // Member function to display account information
    void displayAccountInfo() const
    {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
{
    // Create a BankAccount object
    BankAccount myAccount("John Doe", "123456789", 1000.0);

    // Deposit and withdraw money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display account information
    myAccount.displayAccountInfo();

    return 0;
}

// Classes(small)

#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;

public:
    // Constructor to initialize the object
    Person(const std::string &personName, int personAge) : name(personName), age(personAge) {}

    // Member function to display information about the person
    void displayInfo() const
    {
        std::cout << "Name: " << name << ", Age: " << age << " years" << std::endl;
    }

    // Getter function for the name
    std::string getName() const
    {
        return name;
    }

    // Setter function for the age
    void setAge(int personAge)
    {
        if (personAge >= 0)
        {
            age = personAge;
        }
        else
        {
            std::cerr << "Invalid age input. Age must be non-negative." << std::endl;
        }
    }
};

int main()
{
    // Create an instance of the Person class
    Person person1("John Doe", 25);

    // Display information about the person
    person1.displayInfo();

    // Access and modify object attributes
    std::cout << "Current Name: " << person1.getName() << std::endl;
    person1.setAge(30);

    // Display updated information
    person1.displayInfo();

    return 0;
}

// A class(bigger)

// Functions

#include <iostream>

using namespace std;

class Movie
{
private:
    string rating;

public:
    string title;
    string director;

    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }
    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }
    string getRating()
    {
        return rating;
    }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("Dog");

    cout << avengers.getRating();

    return 0;
}

// Classes

#include <iostream>

using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes yummy chicken" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes bbq ribs" << endl;
    }
};

class ItalianChef : public Chef
{
public:
    void makePasta()
    {
        cout << "The chef makes pasta" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes chicken parm" << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();

    return 0;
}

// A dice to roll

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short minValue = 1;
    const short maxValue = 6;
    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << first << ", " << second;

    return 0;
}

// Simple function

#include <iostream>

using namespace std;

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int main()
{
    int first_number{13}; // Statement
    int second_number{7};

    cout << "First number: " << first_number << endl;
    cout << "Second number: " << second_number << endl;

    int sum = first_number + second_number;
    cout << "Sum: " << sum << endl;

    sum = addNumbers(25, 7);
    cout << "Sum: " << sum << endl;

    sum = addNumbers(30, 54);
    cout << "Sum: " << sum << endl;

    cout << "Sum: " << addNumbers(3, 42) << endl;

    return 0;
}

// Another function

#include <iostream>
#include <cmath>

using namespace std;

double power(double base, int exponent) // Definition
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, exponent;
    cout << "What is the base?:\n";
    cin >> base;
    cout << "What is the exponent?:\n";
    cin >> exponent;
    double myPower = power(base, exponent);
    // double power = pow(base, exponent);
    cout << myPower << endl;

    return 0;
}

// Ternary operator

#include <iostream>

using namespace std;

int main()
{
    int answer = 11;
    cout << "Guess the number:\n";
    int guess;
    cin >> guess;

    guess == answer ? cout << "Good job\n" : cout << "Bad job\n";

    return 0;
}

// size of array

#include <iostream>

using namespace std;

int main()
{
    int guesses[10] = {12, 43, 23, 43, 23};

    int num_elements = 5;

    int size = sizeof(guesses) / sizeof(guesses[0]);

    cout << size << endl;

    for (int i = 0; i < num_elements; i++)
    {
        cout << guesses[i] << "\t";
    }

    return 0;
}

// A vector function

#include <iostream>
#include <vector>

// Function to print the elements of a vector
void print_vector(std::vector<int> &data)
{
    // Add the value 12 to the vector
    data.push_back(12);

    // Print the elements of the vector
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }

    // Print a newline character
    std::cout << "\n";
}

int main()
{
    // Declare and initialize a vector with values {1, 2, 3}
    std::vector<int> data = {1, 2, 3};

    // Call the print_vector function multiple times with the same vector
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);

    return 0; // Indicates successful program execution
}

// A game with vectors

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

// Function to print the elements of a vector
void print_vector(std::vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << "\n";
}

// Function to play the number guessing game
void play_game(std::vector<int> &guesses)
{
    // Generate a random number between 0 and 250
    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number:\n";

    // Game loop
    while (true)
    {
        int guess;
        cin >> guess; // Take user input for the guess

        guesses.push_back(guess); // Add the guess to the vector of guesses

        // Check if the guess is correct
        if (guess == random)
        {
            cout << "You win!\n";
            break; // Exit the loop if the guess is correct
        }
        else if (guess < random)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "Too high!\n";
        }

        print_vector(guesses); // Print the vector of guesses
    }
}

int main()
{
    std::vector<int> guesses; // Declare a vector to store guesses
    play_game(guesses);       // Call the play_game function to play the game
    print_vector(guesses);    // Print the vector of guesses after the game ends

    return 0; // Indicates successful program execution
}

// The new for loop

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6};

    for (int n : data)
    {
        cout << n << "\t";
    }

    return 0;
}

// The new for loop with vectors

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    vector<int> data = {1, 2, 3, 4, 5, 6};

    for (int n : data)
    {
        cout << n << "\t";
    }

    /*for(int i = 0; i < 6; i++)
    {
      cout << data[i] << "\t";
    }
    cout << "\n";*/

    return 0;
}

// The new for loop with template size array

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
    array<int, 6> data = {1, 2, 3, 4, 5, 6};

    for (int n : data)
    {
        cout << n << "\t";
    }

    /*for(int i = 0; i < 6; i++)
    {
      cout << data[i] << "\t";
    }
    cout << "\n";*/

    return 0;
}

// Files

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename;
    cin >> filename;

    std::ofstream file(filename.c_str(), std::ios::app);

    if (file.is_open())
    {
        cout << "success n00b\n";
    }

    vector<string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Charlotte");

    for (string name : names)
    {
        file << name << endl;
    }

    return 0;
}

// How to read names by using a vector

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    std::ifstream file("tacos.txt");

    vector<std::string> names;
    string input;
    while (file >> input) // return file
    {
        names.push_back(input);
    }

    for (std::string name : names)
    {
        cout << name << endl;
    }

    return 0;
}

// Generic Linked List with Template Class

#include <iostream>

// Node class for the linked list
template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T value) : data(value), next(nullptr) {}
};

// Linked list class with template
template <typename T>
class LinkedList
{
private:
    Node<T> *head;

public:
    LinkedList() : head(nullptr) {}

    // Function to append a new node to the end of the list
    void append(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        if (!head)
        {
            head = newNode;
            return;
        }

        Node<T> *current = head;
        while (current->next)
        {
            current = current->next;
        }

        current->next = newNode;
    }

    // Function to display the elements of the list
    void display() const
    {
        Node<T> *current = head;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    // Example usage of the linked list with int and string types
    LinkedList<int> intList;
    intList.append(1);
    intList.append(2);
    intList.append(3);

    LinkedList<std::string> strList;
    strList.append("Hello");
    strList.append("World");

    // Display the contents of the lists
    std::cout << "Integer List: ";
    intList.display();

    std::cout << "String List: ";
    strList.display();

    return 0;
}

// Header file

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

// Node class for the linked list
template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T value);
};

// Linked list class with template
template <typename T>
class LinkedList
{
private:
    Node<T> *head;

public:
    LinkedList();

    // Function to append a new node to the end of the list
    void append(T value);

    // Function to display the elements of the list
    void display() const;
};

#endif // LINKEDLIST_H

//.cpp file

#include "LinkedList.h"

// Node constructor
template <typename T>
Node<T>::Node(T value) : data(value), next(nullptr) {}

// Linked list constructor
template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

// Function to append a new node to the end of the list
template <typename T>
void LinkedList<T>::append(T value)
{
    Node<T> *newNode = new Node<T>(value);
    if (!head)
    {
        head = newNode;
        return;
    }

    Node<T> *current = head;
    while (current->next)
    {
        current = current->next;
    }

    current->next = newNode;
}

// Function to display the elements of the list
template <typename T>
void LinkedList<T>::display() const
{
    Node<T> *current = head;
    while (current)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    // Example usage of the linked list with int and string types
    LinkedList<int> intList;
    intList.append(1);
    intList.append(2);
    intList.append(3);

    LinkedList<std::string> strList;
    strList.append("Hello");
    strList.append("World");

    // Display the contents of the lists
    std::cout << "Integer List: ";
    intList.display();

    std::cout << "String List: ";
    strList.display();

    return 0;
}

// Generic Stack with Template Class

#include <iostream>
#include <vector>
#include <stdexcept>

// Stack class with template
template <typename T>
class Stack
{
private:
    std::vector<T> data;

public:
    // Function to push a value onto the stack
    void push(T value)
    {
        data.push_back(value);
    }

    // Function to pop a value from the stack
    T pop()
    {
        if (isEmpty())
        {
            throw std::out_of_range("Stack is empty");
        }
        T value = data.back();
        data.pop_back();
        return value;
    }

    // Function to check if the stack is empty
    bool isEmpty() const
    {
        return data.empty();
    }
};

int main()
{
    // Example usage of the stack with int and string types
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    while (!intStack.isEmpty())
    {
        std::cout << "Popped: " << intStack.pop() << std::endl;
    }

    Stack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");

    while (!strStack.isEmpty())
    {
        std::cout << "Popped: " << strStack.pop() << std::endl;
    }

    return 0;
}

// Header file

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <vector>
#include <stdexcept>

// Stack class with template
template <typename T>
class Stack
{
private:
    std::vector<T> data;

public:
    // Function to push a value onto the stack
    void push(T value);

    // Function to pop a value from the stack
    T pop();

    // Function to check if the stack is empty
    bool isEmpty() const;
};

#endif // STACK_H

//.cpp file

#include "Stack.h"

// Function to push a value onto the stack
template <typename T>
void Stack<T>::push(T value)
{
    data.push_back(value);
}

// Function to pop a value from the stack
template <typename T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        throw std::out_of_range("Stack is empty");
    }
    T value = data.back();
    data.pop_back();
    return value;
}

// Function to check if the stack is empty
template <typename T>
bool Stack<T>::isEmpty() const
{
    return data.empty();
}

int main()
{
    // Example usage of the stack with int and string types
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    while (!intStack.isEmpty())
    {
        std::cout << "Popped: " << intStack.pop() << std::endl;
    }

    Stack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");

    while (!strStack.isEmpty())
    {
        std::cout << "Popped: " << strStack.pop() << std::endl;
    }

    return 0;
}

// Generic Queue with Template Class

#include <iostream>
#include <queue>
#include <stdexcept>

// Queue class with template
template <typename T>
class Queue
{
private:
    std::queue<T> data;

public:
    // Function to enqueue a value into the queue
    void enqueue(T value)
    {
        data.push(value);
    }

    // Function to dequeue a value from the queue
    T dequeue()
    {
        if (isEmpty())
        {
            throw std::out_of_range("Queue is empty");
        }
        T value = data.front();
        data.pop();
        return value;
    }

    // Function to check if the queue is empty
    bool isEmpty() const
    {
        return data.empty();
    }
};

int main()
{
    // Example usage of the queue with int and string types
    Queue<int> intQueue;
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);

    while (!intQueue.isEmpty())
    {
        std::cout << "Dequeued: " << intQueue.dequeue() << std::endl;
    }

    Queue<std::string> strQueue;
    strQueue.enqueue("Apple");
    strQueue.enqueue("Banana");
    strQueue.enqueue("Cherry");

    while (!strQueue.isEmpty())
    {
        std::cout << "Dequeued: " << strQueue.dequeue() << std::endl;
    }

    return 0;
}

// Generic Pair Class Template

#include <iostream>

// Pair class with template
template <typename T1, typename T2>
class Pair
{
public:
    T1 first;
    T2 second;

    Pair(T1 f, T2 s) : first(f), second(s) {}
};

int main()
{
    // Example usage of the Pair class with different types
    Pair<int, double> intDoublePair(10, 3.14);
    Pair<std::string, char> strCharPair("Hello", 'C');

    std::cout << "Pair 1: " << intDoublePair.first << ", " << intDoublePair.second << std::endl;
    std::cout << "Pair 2: " << strCharPair.first << ", " << strCharPair.second << std::endl;

    return 0;
}

// Header file

#ifndef PAIR_H
#define PAIR_H

#include <iostream>

// Pair class with template
template <typename T1, typename T2>
class Pair
{
public:
    T1 first;
    T2 second;

    Pair(T1 f, T2 s);

    // Optional: Overloaded ostream operator to easily print Pair objects
    friend std::ostream &operator<<(std::ostream &out, const Pair<T1, T2> &pair)
    {
        out << "Pair: " << pair.first << ", " << pair.second;
        return out;
    }
};

#endif // PAIR_H

//.cpp file

#include "Pair.h"

// Constructor
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 f, T2 s) : first(f), second(s) {}

int main()
{
    // Example usage of the Pair class with different types
    Pair<int, double> intDoublePair(10, 3.14);
    Pair<std::string, char> strCharPair("Hello", 'C');

    std::cout << intDoublePair << std::endl;
    std::cout << strCharPair << std::endl;

    return 0;
}

// Generic Binary Search Tree

#include <iostream>
#include <stdexcept>

// Binary Search Tree (BST) node class with template
template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

// BST class with template
template <typename T>
class BinarySearchTree
{
private:
    TreeNode<T> *root;

    // Helper function to insert a value into the BST
    TreeNode<T> *insert(TreeNode<T> *node, T value)
    {
        if (node == nullptr)
        {
            return new TreeNode<T>(value);
        }

        if (value < node->data)
        {
            node->left = insert(node->left, value);
        }
        else if (value > node->data)
        {
            node->right = insert(node->right, value);
        }

        return node;
    }

    // Helper function to search for a value in the BST
    bool search(TreeNode<T> *node, T value) const
    {
        if (node == nullptr)
        {
            return false;
        }

        if (value == node->data)
        {
            return true;
        }
        else if (value < node->data)
        {
            return search(node->left, value);
        }
        else
        {
            return search(node->right, value);
        }
    }

public:
    BinarySearchTree() : root(nullptr) {}

    // Function to insert a value into the BST
    void insert(T value)
    {
        root = insert(root, value);
    }

    // Function to search for a value in the BST
    bool search(T value) const
    {
        return search(root, value);
    }
};

int main()
{
    // Example usage of the Binary Search Tree with int type
    BinarySearchTree<int> intBST;
    intBST.insert(10);
    intBST.insert(5);
    intBST.insert(15);

    std::cout << "Search for 5: " << (intBST.search(5) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search for 8: " << (intBST.search(8) ? "Found" : "Not Found") << std::endl;

    return 0;
}

// Generic Matrix Class Template

#include <iostream>
#include <vector>

// Matrix class with template
template <typename T>
class Matrix
{
private:
    std::vector<std::vector<T>> data;
    size_t rows, cols;

public:
    Matrix(size_t numRows, size_t numCols) : rows(numRows), cols(numCols)
    {
        data.resize(rows, std::vector<T>(cols));
    }

    T &operator()(size_t i, size_t j)
    {
        if (i >= rows || j >= cols)
        {
            throw std::out_of_range("Matrix indices out of range");
        }
        return data[i][j];
    }

    const T &operator()(size_t i, size_t j) const
    {
        if (i >= rows || j >= cols)
        {
            throw std::out_of_range("Matrix indices out of range");
        }
        return data[i][j];
    }

    void display() const
    {
        for (size_t i = 0; i < rows; ++i)
        {
            for (size_t j = 0; j < cols; ++j)
            {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    // Example usage of the Matrix class with int and double types
    Matrix<int> intMatrix(3, 3);
    intMatrix(0, 0) = 1;
    intMatrix(1, 1) = 2;
    intMatrix(2, 2) = 3;

    Matrix<double> doubleMatrix(2, 2);
    doubleMatrix(0, 1) = 2.5;
    doubleMatrix(1, 0) = 1.5;

    std::cout << "Integer Matrix:\n";
    intMatrix.display();

    std::cout << "\nDouble Matrix:\n";
    doubleMatrix.display();

    return 0;
}

// Header file

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

// Matrix class with template
template <typename T>
class Matrix
{
private:
    std::vector<std::vector<T>> data;
    size_t rows, cols;

public:
    Matrix(size_t numRows, size_t numCols);

    T &operator()(size_t i, size_t j);
    const T &operator()(size_t i, size_t j) const;

    void display() const;
};

#endif // MATRIX_H

//.cpp file

#include "Matrix.h"

// Constructor
template <typename T>
Matrix<T>::Matrix(size_t numRows, size_t numCols) : rows(numRows), cols(numCols)
{
    data.resize(rows, std::vector<T>(cols));
}

// Operator for non-const access
template <typename T>
T &Matrix<T>::operator()(size_t i, size_t j)
{
    if (i >= rows || j >= cols)
    {
        throw std::out_of_range("Matrix indices out of range");
    }
    return data[i][j];
}

// Operator for const access
template <typename T>
const T &Matrix<T>::operator()(size_t i, size_t j) const
{
    if (i >= rows || j >= cols)
    {
        throw std::out_of_range("Matrix indices out of range");
    }
    return data[i][j];
}

// Display function
template <typename T>
void Matrix<T>::display() const
{
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < cols; ++j)
        {
            std::cout << data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // Example usage of the Matrix class with int and double types
    Matrix<int> intMatrix(3, 3);
    intMatrix(0, 0) = 1;
    intMatrix(1, 1) = 2;
    intMatrix(2, 2) = 3;

    Matrix<double> doubleMatrix(2, 2);
    doubleMatrix(0, 1) = 2.5;
    doubleMatrix(1, 0) = 1.5;

    std::cout << "Integer Matrix:\n";
    intMatrix.display();

    std::cout << "\nDouble Matrix:\n";
    doubleMatrix.display();

    return 0;
}

// Generic Priority Queue Class Template

#include <iostream>
#include <queue>

// Priority Queue class with template
template <typename T>
class PriorityQueue
{
private:
    std::priority_queue<T> data;

public:
    void enqueue(T value)
    {
        data.push(value);
    }

    T dequeue()
    {
        if (isEmpty())
        {
            throw std::out_of_range("Priority Queue is empty");
        }
        T value = data.top();
        data.pop();
        return value;
    }

    bool isEmpty() const
    {
        return data.empty();
    }
};

int main()
{
    // Example usage of the Priority Queue with int and string types
    PriorityQueue<int> intPriorityQueue;
    intPriorityQueue.enqueue(30);
    intPriorityQueue.enqueue(10);
    intPriorityQueue.enqueue(20);

    while (!intPriorityQueue.isEmpty())
    {
        std::cout << "Dequeued: " << intPriorityQueue.dequeue() << std::endl;
    }

    PriorityQueue<std::string> strPriorityQueue;
    strPriorityQueue.enqueue("Apple");
    strPriorityQueue.enqueue("Banana");
    strPriorityQueue.enqueue("Cherry");

    while (!strPriorityQueue.isEmpty())
    {
        std::cout << "Dequeued: " << strPriorityQueue.dequeue() << std::endl;
    }

    return 0;
}

// Generic Graph Class Template

#include <iostream>
#include <unordered_map>
#include <vector>

// Graph class with template
template <typename T>
class Graph
{
private:
    std::unordered_map<T, std::vector<T>> adjacencyList;

public:
    void addVertex(T vertex)
    {
        adjacencyList[vertex];
    }

    void addEdge(T from, T to)
    {
        adjacencyList[from].push_back(to);
        adjacencyList[to].push_back(from);
    }

    void display() const
    {
        for (const auto &entry : adjacencyList)
        {
            std::cout << entry.first << " -> ";
            for (const T &neighbor : entry.second)
            {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    // Example usage of the Graph class with int type
    Graph<int> intGraph;
    intGraph.addVertex(1);
    intGraph.addVertex(2);
    intGraph.addVertex(3);
    intGraph.addEdge(1, 2);
    intGraph.addEdge(2, 3);
    intGraph.addEdge(3, 1);

    std::cout << "Graph:\n";
    intGraph.display();

    return 0;
}

// Header file

#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <unordered_map>
#include <vector>

// Graph class with template
template <typename T>
class Graph
{
private:
    std::unordered_map<T, std::vector<T>> adjacencyList;

public:
    void addVertex(T vertex);

    void addEdge(T from, T to);

    void display() const;
};

#endif // GRAPH_H

//.cpp file

#include "Graph.h"

// Function to add a new vertex to the graph
template <typename T>
void Graph<T>::addVertex(T vertex)
{
    adjacencyList[vertex];
}

// Function to add a new edge between two vertices in the graph
template <typename T>
void Graph<T>::addEdge(T from, T to)
{
    adjacencyList[from].push_back(to);
    adjacencyList[to].push_back(from);
}

// Function to display the adjacency list of the graph
template <typename T>
void Graph<T>::display() const
{
    for (const auto &entry : adjacencyList)
    {
        std::cout << entry.first << " -> ";
        for (const T &neighbor : entry.second)
        {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // Example usage of the Graph class with int type
    Graph<int> intGraph;
    intGraph.addVertex(1);
    intGraph.addVertex(2);
    intGraph.addVertex(3);
    intGraph.addEdge(1, 2);
    intGraph.addEdge(2, 3);
    intGraph.addEdge(3, 1);

    std::cout << "Graph:\n";
    intGraph.display();

    return 0;
}

// Generic Hash Table Class Template

#include <iostream>
#include <unordered_map>
#include <vector>

// Hash Table class with template
template <typename Key, typename Value>
class HashTable
{
private:
    std::unordered_map<Key, Value> data;

public:
    // Function to insert a key-value pair into the hash table
    void insert(const Key &key, const Value &value)
    {
        data[key] = value;
    }

    // Function to get the value associated with a key
    Value getValue(const Key &key) const
    {
        auto it = data.find(key);
        if (it != data.end())
        {
            return it->second;
        }
        throw std::out_of_range("Key not found in Hash Table");
    }

    // Function to check if a key is present in the hash table
    bool contains(const Key &key) const
    {
        return data.find(key) != data.end();
    }
};

int main()
{
    // Example usage of the Hash Table class with int and string types
    HashTable<int, std::string> intStringTable;
    intStringTable.insert(1, "One");
    intStringTable.insert(2, "Two");
    intStringTable.insert(3, "Three");

    std::cout << "Value for key 2: " << intStringTable.getValue(2) << std::endl;
    std::cout << "Contains key 4: " << (intStringTable.contains(4) ? "Yes" : "No") << std::endl;

    return 0;
}

// Generic Doubly Linked List Class Template

#include <iostream>

// Doubly Linked List node class with template
template <typename T>
class Node
{
public:
    T data;
    Node *prev;
    Node *next;

    Node(T value) : data(value), prev(nullptr), next(nullptr) {}
};

// Doubly Linked List class with template
template <typename T>
class DoublyLinkedList
{
private:
    Node<T> *head;
    Node<T> *tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to append a new node to the end of the list
    void append(T value)
    {
        Node<T> *newNode = new Node<T>(value);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to display the elements of the list
    void display() const
    {
        Node<T> *current = head;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    // Example usage of the Doubly Linked List class with int and char types
    DoublyLinkedList<int> intList;
    intList.append(1);
    intList.append(2);
    intList.append(3);

    DoublyLinkedList<char> charList;
    charList.append('A');
    charList.append('B');
    charList.append('C');

    std::cout << "Integer List: ";
    intList.display();

    std::cout << "Char List: ";
    charList.display();

    return 0;
}

// Generic Functor Class Template

#include <iostream>

// Functor class with template
template <typename T>
class MyFunctor
{
public:
    // Function call operator overloading
    T operator()(const T &x, const T &y) const
    {
        return x + y;
    }
};

int main()
{
    // Example usage of the Functor class with int and double types
    MyFunctor<int> intFunctor;
    MyFunctor<double> doubleFunctor;

    std::cout << "Int Functor: " << intFunctor(5, 3) << std::endl;
    std::cout << "Double Functor: " << doubleFunctor(2.5, 3.5) << std::endl;

    return 0;
}

// Template Class with Multiple Template Parameters

#include <iostream>

// Template class with multiple template parameters
template <typename T, int Size>
class FixedSizeArray
{
private:
    T array[Size];

public:
    // Setter function to set a value at a specific index
    void setValueAt(int index, const T &value)
    {
        if (index >= 0 && index < Size)
        {
            array[index] = value;
        }
    }

    // Getter function to retrieve the value at a specific index
    T getValueAt(int index) const
    {
        if (index >= 0 && index < Size)
        {
            return array[index];
        }
        return T(); // Default value if index is out of bounds
    }
};

int main()
{
    // Example usage of FixedSizeArray with int and double
    FixedSizeArray<int, 5> intArray;
    intArray.setValueAt(2, 42);
    std::cout << "Value at index 2: " << intArray.getValueAt(2) << std::endl;

    FixedSizeArray<double, 3> doubleArray;
    doubleArray.setValueAt(1, 3.14);
    std::cout << "Value at index 1: " << doubleArray.getValueAt(1) << std::endl;

    return 0;
}

// Template Class with Function Template

#include <iostream>

// Template class with function templates
template <typename T>
class Calculator
{
public:
    // Function template for addition
    T add(T a, T b)
    {
        return a + b;
    }

    // Function template for multiplication
    T multiply(T a, T b)
    {
        return a * b;
    }
};

int main()
{
    // Example usage of Calculator with int and double
    Calculator<int> intCalculator;
    std::cout << "Add: " << intCalculator.add(5, 7) << std::endl;

    Calculator<double> doubleCalculator;
    std::cout << "Multiply: " << doubleCalculator.multiply(2.5, 3.0) << std::endl;

    return 0;
}

// Template Class for a Generic Linked List:

#include <iostream>

// Node structure for the linked list
template <typename T>
class ListNode
{
public:
    T data;
    ListNode *next;

    ListNode(const T &value) : data(value), next(nullptr) {}
};

// Template class for a generic linked list
template <typename T>
class LinkedList
{
private:
    ListNode<T> *head;

public:
    LinkedList() : head(nullptr) {}

    // Function to append a new node with a given value to the linked list
    void append(const T &value)
    {
        ListNode<T> *newNode = new ListNode<T>(value);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            ListNode<T> *current = head;
            while (current->next)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to display the elements of the linked list
    void display() const
    {
        ListNode<T> *current = head;
        while (current)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    // Example usage of LinkedList with int and string
    LinkedList<int> intList;
    intList.append(10);
    intList.append(20);
    intList.append(30);
    intList.display();

    LinkedList<std::string> stringList;
    stringList.append("Hello");
    stringList.append("World");
    stringList.display();

    return 0;
}

// Header file to the program

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

// Node structure for the linked list
template <typename T>
class ListNode
{
public:
    T data;
    ListNode *next;

    ListNode(const T &value);
};

// Template class for a generic linked list
template <typename T>
class LinkedList
{
private:
    ListNode<T> *head;

public:
    LinkedList();

    // Function to append a new node with a given value to the linked list
    void append(const T &value);

    // Function to display the elements of the linked list
    void display() const;
};

#endif // LINKEDLIST_H

//.cpp file

#include "LinkedList.h"

// Node constructor
template <typename T>
ListNode<T>::ListNode(const T &value) : data(value), next(nullptr) {}

// LinkedList constructor
template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

// Function to append a new node with a given value to the linked list
template <typename T>
void LinkedList<T>::append(const T &value)
{
    ListNode<T> *newNode = new ListNode<T>(value);
    if (!head)
    {
        head = newNode;
    }
    else
    {
        ListNode<T> *current = head;
        while (current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to display the elements of the linked list
template <typename T>
void LinkedList<T>::display() const
{
    ListNode<T> *current = head;
    while (current)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    // Example usage of LinkedList with int and string
    LinkedList<int> intList;
    intList.append(10);
    intList.append(20);
    intList.append(30);
    intList.display();

    LinkedList<std::string> stringList;
    stringList.append("Hello");
    stringList.append("World");
    stringList.display();

    return 0;
}

// Vector with Custom Operations

#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
class CustomVector
{
private:
    std::vector<T> data;

public:
    // Constructor
    CustomVector() = default;

    // Overloaded '+' operator to concatenate two vectors
    CustomVector operator+(const CustomVector &other) const
    {
        CustomVector result = *this;
        result.data.insert(result.data.end(), other.data.begin(), other.data.end());
        return result;
    }

    // Overloaded '[]' operator to access elements by index
    T &operator[](size_t index)
    {
        return data[index];
    }

    // Overloaded '<<' operator for easy printing
    friend std::ostream &operator<<(std::ostream &out, const CustomVector &vec)
    {
        for (const auto &element : vec.data)
        {
            out << element << " ";
        }
        return out;
    }

    // Member function to push an element to the vector
    void push(const T &value)
    {
        data.push_back(value);
    }
};

int main()
{
    // Testing the custom vector
    CustomVector<int> vec1;
    vec1.push(1);
    vec1.push(2);
    vec1.push(3);

    CustomVector<int> vec2;
    vec2.push(4);
    vec2.push(5);

    CustomVector<int> result = vec1 + vec2;

    std::cout << "Vector 1: " << vec1 << std::endl;
    std::cout << "Vector 2: " << vec2 << std::endl;
    std::cout << "Concatenated Vector: " << result << std::endl;

    std::cout << "Element at index 2: " << result[2] << std::endl;

    return 0;
}

// Matrix with Operator Overloading

#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
class Matrix
{
private:
    std::vector<std::vector<T>> data;
    size_t rows;
    size_t cols;

public:
    // Constructor
    Matrix(size_t r, size_t c) : rows(r), cols(c), data(r, std::vector<T>(c, 0)) {}

    // Overloaded '+' operator to add two matrices
    Matrix operator+(const Matrix &other) const
    {
        assert(rows == other.rows && cols == other.cols);

        Matrix result(rows, cols);

        for (size_t i = 0; i < rows; ++i)
        {
            for (size_t j = 0; j < cols; ++j)
            {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    // Overloaded '<<' operator for easy printing
    friend std::ostream &operator<<(std::ostream &out, const Matrix &mat)
    {
        for (size_t i = 0; i < mat.rows; ++i)
        {
            for (size_t j = 0; j < mat.cols; ++j)
            {
                out << mat.data[i][j] << " ";
            }
            out << std::endl;
        }
        return out;
    }

    // Member function to set a value in the matrix
    void setValue(size_t i, size_t j, const T &value)
    {
        assert(i < rows && j < cols);
        data[i][j] = value;
    }
};

int main()
{
    // Testing the matrix class
    Matrix<int> mat1(2, 3);
    mat1.setValue(0, 0, 1);
    mat1.setValue(0, 1, 2);
    mat1.setValue(0, 2, 3);
    mat1.setValue(1, 0, 4);
    mat1.setValue(1, 1, 5);
    mat1.setValue(1, 2, 6);

    Matrix<int> mat2(2, 3);
    mat2.setValue(0, 0, 7);
    mat2.setValue(0, 1, 8);
    mat2.setValue(0, 2, 9);
    mat2.setValue(1, 0, 10);
    mat2.setValue(1, 1, 11);
    mat2.setValue(1, 2, 12);

    Matrix<int> result = mat1 + mat2;

    std::cout << "Matrix 1:\n"
              << mat1 << std::endl;
    std::cout << "Matrix 2:\n"
              << mat2 << std::endl;
    std::cout << "Sum of Matrices:\n"
              << result << std::endl;

    return 0;
}

// Header file of the program

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
class Matrix
{
private:
    std::vector<std::vector<T>> data;
    size_t rows;
    size_t cols;

public:
    // Constructor
    Matrix(size_t r, size_t c);

    // Overloaded '+' operator to add two matrices
    Matrix operator+(const Matrix &other) const;

    // Overloaded '<<' operator for easy printing
    friend std::ostream &operator<<(std::ostream &out, const Matrix &mat);

    // Member function to set a value in the matrix
    void setValue(size_t i, size_t j, const T &value);
};

#endif // MATRIX_H

//.cpp file of the program

#include "Matrix.h"

// Constructor
template <typename T>
Matrix<T>::Matrix(size_t r, size_t c) : rows(r), cols(c), data(r, std::vector<T>(c, 0)) {}

// Overloaded '+' operator to add two matrices
template <typename T>
Matrix<T> Matrix<T>::operator+(const Matrix &other) const
{
    assert(rows == other.rows && cols == other.cols);

    Matrix<T> result(rows, cols);

    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < cols; ++j)
        {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }

    return result;
}

// Overloaded '<<' operator for easy printing
template <typename T>
std::ostream &operator<<(std::ostream &out, const Matrix<T> &mat)
{
    for (size_t i = 0; i < mat.rows; ++i)
    {
        for (size_t j = 0; j < mat.cols; ++j)
        {
            out << mat.data[i][j] << " ";
        }
        out << std::endl;
    }
    return out;
}

// Member function to set a value in the matrix
template <typename T>
void Matrix<T>::setValue(size_t i, size_t j, const T &value)
{
    assert(i < rows && j < cols);
    data[i][j] = value;
}

int main()
{
    // Testing the matrix class
    Matrix<int> mat1(2, 3);
    mat1.setValue(0, 0, 1);
    mat1.setValue(0, 1, 2);
    mat1.setValue(0, 2, 3);
    mat1.setValue(1, 0, 4);
    mat1.setValue(1, 1, 5);
    mat1.setValue(1, 2, 6);

    Matrix<int> mat2(2, 3);
    mat2.setValue(0, 0, 7);
    mat2.setValue(0, 1, 8);
    mat2.setValue(0, 2, 9);
    mat2.setValue(1, 0, 10);
    mat2.setValue(1, 1, 11);
    mat2.setValue(1, 2, 12);

    Matrix<int> result = mat1 + mat2;

    std::cout << "Matrix 1:\n"
              << mat1 << std::endl;
    std::cout << "Matrix 2:\n"
              << mat2 << std::endl;
    std::cout << "Sum of Matrices:\n"
              << result << std::endl;

    return 0;
}

// Basic Stack Implementation

#include <iostream>
#include <vector>
#include <cassert>

template <typename T>
class Stack
{
private:
    std::vector<T> data;

public:
    void push(const T &value)
    {
        data.push_back(value);
    }

    bool pop(T &value)
    {
        if (!data.empty())
        {
            value = data.back();
            data.pop_back();
            return true;
        }
        return false; // Stack underflow
    }

    bool isEmpty() const
    {
        return data.empty();
    }
};

int main()
{
    // Testing the basic stack
    Stack<int> intStack;

    assert(intStack.isEmpty());

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    assert(!intStack.isEmpty());

    int poppedValue;
    while (!intStack.isEmpty())
    {
        assert(intStack.pop(poppedValue));
        std::cout << "Popped value: " << poppedValue << std::endl;
    }

    return 0;
}

// header file of the program

#ifndef STACK_H
#define STACK_H

#include <vector>
#include <cassert>

template <typename T>
class Stack
{
private:
    std::vector<T> data;

public:
    void push(const T &value);
    bool pop(T &value);
    bool isEmpty() const;
};

#endif // STACK_H

//.cpp file of the program

#include "Stack.h"
#include <iostream>

template <typename T>
void Stack<T>::push(const T &value)
{
    data.push_back(value);
}

template <typename T>
bool Stack<T>::pop(T &value)
{
    if (!data.empty())
    {
        value = data.back();
        data.pop_back();
        return true;
    }
    return false; // Stack underflow
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return data.empty();
}

int main()
{
    // Testing the basic stack
    Stack<int> intStack;

    assert(intStack.isEmpty());

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    assert(!intStack.isEmpty());

    int poppedValue;
    while (!intStack.isEmpty())
    {
        assert(intStack.pop(poppedValue));
        std::cout << "Popped value: " << poppedValue << std::endl;
    }

    return 0;
}

// Simple Calculator using Class and Operator Overloading

#include <iostream>
#include <cassert>

class Calculator
{
private:
    double result;

public:
    Calculator() : result(0.0) {}

    Calculator &operator+(double operand)
    {
        result += operand;
        return *this;
    }

    Calculator &operator-(double operand)
    {
        result -= operand;
        return *this;
    }

    Calculator &operator*(double operand)
    {
        result *= operand;
        return *this;
    }

    Calculator &operator/(double operand)
    {
        assert(operand != 0.0);
        result /= operand;
        return *this;
    }

    double getResult() const
    {
        return result;
    }
};

int main()
{
    // Testing the simple calculator
    Calculator calc;

    calc + 10.0;
    calc * 2.0;
    calc - 5.0;
    calc / 2.0;

    std::cout << "Result: " << calc.getResult() << std::endl;

    return 0;
}

// A program that has templates, classes, function overloading, and basic object-oriented programming concepts

#include <iostream>

// Template class for a dynamic array
template <typename T>
class MyArray
{
private:
    T *data;
    size_t size;

public:
    // Constructor: Allocates memory for the array
    MyArray(size_t size) : size(size)
    {
        data = new T[size];
    }

    // Destructor: Frees allocated memory when the object is destroyed
    ~MyArray()
    {
        delete[] data;
    }

    // Overloaded operator for array indexing
    T &operator[](size_t index)
    {
        return data[index];
    }

    // Getter function for the size of the array
    size_t getSize() const
    {
        return size;
    }
};

// Simple class with a method
class MyClass
{
public:
    void printMessage()
    {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

// Function overloading example
void printValue(int value)
{
    std::cout << "Integer value: " << value << std::endl;
}

void printValue(double value)
{
    std::cout << "Double value: " << value << std::endl;
}

int main()
{
    // Using templates with int type
    MyArray<int> intArray(5);
    for (size_t i = 0; i < intArray.getSize(); ++i)
    {
        intArray[i] = i * 2;
    }

    // Using templates with double type
    MyArray<double> doubleArray(3);
    for (size_t i = 0; i < doubleArray.getSize(); ++i)
    {
        doubleArray[i] = i * 1.5;
    }

    // Accessing and printing values from arrays
    for (size_t i = 0; i < intArray.getSize(); ++i)
    {
        std::cout << "Int Array[" << i << "]: " << intArray[i] << std::endl;
    }

    for (size_t i = 0; i < doubleArray.getSize(); ++i)
    {
        std::cout << "Double Array[" << i << "]: " << doubleArray[i] << std::endl;
    }

    // Using classes
    MyClass myObject;
    myObject.printMessage();

    // Using function overloading
    printValue(42);
    printValue(3.14);

    return 0;
}

// The program demonstrates the use of templates, classes, function overloading, and basic object-oriented programming concepts.
//(Header file)

#ifndef MYPROGRAM_H
#define MYPROGRAM_H

#include <iostream>

// Template class for a dynamic array
template <typename T>
class MyArray
{
private:
    T *data;
    size_t size;

public:
    // Constructor: Allocates memory for the array
    MyArray(size_t size);

    // Destructor: Frees allocated memory when the object is destroyed
    ~MyArray();

    // Overloaded operator for array indexing
    T &operator[](size_t index);

    // Getter function for the size of the array
    size_t getSize() const;
};

// Simple class with a method
class MyClass
{
public:
    void printMessage();
};

// Function overloading example
void printValue(int value);

void printValue(double value);

#endif // MYPROGRAM_H

// Heres the .cpp file

#include "myprogram.h"

// Template class for a dynamic array
template <typename T>
MyArray<T>::MyArray(size_t size) : size(size)
{
    data = new T[size];
}

template <typename T>
MyArray<T>::~MyArray()
{
    delete[] data;
}

template <typename T>
T &MyArray<T>::operator[](size_t index)
{
    return data[index];
}

template <typename T>
size_t MyArray<T>::getSize() const
{
    return size;
}

// Simple class with a method
void MyClass::printMessage()
{
    std::cout << "Hello from MyClass!" << std::endl;
}

// Function overloading example
void printValue(int value)
{
    std::cout << "Integer value: " << value << std::endl;
}

void printValue(double value)
{
    std::cout << "Double value: " << value << std::endl;
}

int main()
{
    // Rest of the main function remains the same
    // ...
    return 0;
}

// A program with vectors, classes, templates, overloading and data structures
//(5 files below)

#include <iostream>
#include <vector>
#include <stdexcept>

// Template class for a simple stack
template <typename T>
class Stack
{
private:
    std::vector<T> data;

public:
    // Function to push a value onto the stack
    void push(T value)
    {
        data.push_back(value);
    }

    // Function to pop a value from the stack
    bool pop(T &value)
    {
        if (!isEmpty())
        {
            value = data.back();
            data.pop_back();
            return true;
        }
        return false; // Stack underflow
    }

    // Function to check if the stack is empty
    bool isEmpty() const
    {
        return data.empty();
    }
};

// Template class for basic mathematical operations
template <typename T>
class MathOperations
{
public:
    // Function to add two values
    T add(T a, T b)
    {
        return a + b;
    }

    // Function to multiply two values
    T multiply(T a, T b)
    {
        return a * b;
    }

    // Overloaded function to add vectors element-wise
    std::vector<T> add(const std::vector<T> &vec1, const std::vector<T> &vec2)
    {
        if (vec1.size() != vec2.size())
        {
            throw std::invalid_argument("Vector sizes must be the same for addition");
        }

        std::vector<T> result;
        result.reserve(vec1.size());

        for (size_t i = 0; i < vec1.size(); ++i)
        {
            result.push_back(vec1[i] + vec2[i]);
        }

        return result;
    }
};

int main()
{
    // Example usage of the Stack class with int
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    while (!intStack.isEmpty())
    {
        int poppedValue;
        if (intStack.pop(poppedValue))
        {
            std::cout << "Popped: " << poppedValue << std::endl;
        }
    }

    // Example usage of the MathOperations class with int and double
    MathOperations<int> intMath;
    MathOperations<double> doubleMath;

    std::cout << "Addition: " << intMath.add(5, 3) << std::endl;
    std::cout << "Multiplication: " << doubleMath.multiply(2.5, 4.0) << std::endl;

    // Example usage of vector addition in MathOperations class
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    MathOperations<int> vectorMath;
    std::vector<int> result = vectorMath.add(vec1, vec2);

    std::cout << "Vector Addition Result: ";
    for (const auto &element : result)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Stack header file

#ifndef STACK_H
#define STACK_H

#include <vector>

// Template class for a simple stack
template <typename T>
class Stack
{
private:
    std::vector<T> data;

public:
    void push(T value);

    bool pop(T &value);

    bool isEmpty() const;
};

#include "Stack.cpp" // Include the implementation file

#endif // STACK_H

// Stack.cpp

// Implementation of the Stack class

template <typename T>
void Stack<T>::push(T value)
{
    data.push_back(value);
}

template <typename T>
bool Stack<T>::pop(T &value)
{
    if (!isEmpty())
    {
        value = data.back();
        data.pop_back();
        return true;
    }
    return false; // Stack underflow
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return data.empty();
}

// Mathoperations.header file

#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H

#include <vector>
#include <stdexcept>

// Template class for basic mathematical operations
template <typename T>
class MathOperations
{
public:
    T add(T a, T b);

    T multiply(T a, T b);

    std::vector<T> add(const std::vector<T> &vec1, const std::vector<T> &vec2);
};

#include "MathOperations.cpp" // Include the implementation file

#endif // MATHOPERATIONS_H

// Mathoperations cpp

// Implementation of the MathOperations class

#include <iostream> // Include any necessary headers

template <typename T>
T MathOperations<T>::add(T a, T b)
{
    return a + b;
}

template <typename T>
T MathOperations<T>::multiply(T a, T b)
{
    return a * b;
}

template <typename T>
std::vector<T> MathOperations<T>::add(const std::vector<T> &vec1, const std::vector<T> &vec2)
{
    if (vec1.size() != vec2.size())
    {
        throw std::invalid_argument("Vector sizes must be the same for addition");
    }

    std::vector<T> result;
    result.reserve(vec1.size());

    for (size_t i = 0; i < vec1.size(); ++i)
    {
        result.push_back(vec1[i] + vec2[i]);
    }

    return result;
}

//.cpp file

#include <iostream>
#include "Stack.h"
#include "MathOperations.h"

int main()
{
    // Example usage of the Stack class with int
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    while (!intStack.isEmpty())
    {
        int poppedValue;
        if (intStack.pop(poppedValue))
        {
            std::cout << "Popped: " << poppedValue << std::endl;
        }
    }

    // Example usage of the MathOperations class with int and double
    MathOperations<int> intMath;
    MathOperations<double> doubleMath;

    std::cout << "Addition: " << intMath.add(5, 3) << std::endl;
    std::cout << "Multiplication: " << doubleMath.multiply(2.5, 4.0) << std::endl;

    // Example usage of vector addition in MathOperations class
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    MathOperations<int> vectorMath;
    std::vector<int> result = vectorMath.add(vec1, vec2);

    std::cout << "Vector Addition Result: ";
    for (const auto &element : result)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Another simple program with classes, templates, overloading and data structures

#include <iostream>
#include <string>

// Template class for a dynamic array
template <typename T>
class DynamicArray
{
private:
    T *data;
    size_t size;

public:
    // Constructor to initialize the array
    DynamicArray(size_t s) : size(s)
    {
        data = new T[size];
    }

    // Destructor to free allocated memory
    ~DynamicArray()
    {
        delete[] data;
    }

    // Function to get the size of the array
    size_t getSize() const
    {
        return size;
    }

    // Operator overloading for array indexing
    T &operator[](size_t index)
    {
        if (index < size)
        {
            return data[index];
        }
        else
        {
            throw std::out_of_range("Index out of range");
        }
    }
};

// Template class for a Pair
template <typename T1, typename T2>
class Pair
{
public:
    T1 first;
    T2 second;

    // Constructor to initialize the pair
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Overloaded << operator for easy printing of pairs
    friend std::ostream &operator<<(std::ostream &out, const Pair &pair)
    {
        out << "Pair(" << pair.first << ", " << pair.second << ")";
        return out;
    }
};

int main()
{
    // Example usage of the DynamicArray class with int type
    DynamicArray<int> intArray(5);
    for (size_t i = 0; i < intArray.getSize(); ++i)
    {
        intArray[i] = i * 2;
    }

    // Example usage of the Pair class with different types
    Pair<int, double> intDoublePair(10, 3.14);
    Pair<std::string, char> strCharPair("Hello", 'C');

    // Display values from the DynamicArray
    std::cout << "Values in the DynamicArray<int>: ";
    for (size_t i = 0; i < intArray.getSize(); ++i)
    {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Display values in the Pairs using overloaded << operator
    std::cout << "Pair 1: " << intDoublePair << std::endl;
    std::cout << "Pair 2: " << strCharPair << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class CircularBuffer
{
private:
    std::vector<T> buffer; // Vector to hold the elements
    size_t capacity;       // Maximum capacity of the buffer
    size_t head;           // Index of the head (oldest element)
    size_t tail;           // Index of the tail (newest element)
    size_t size;           // Current size of the buffer

public:
    // Constructor
    explicit CircularBuffer(size_t capacity) : capacity(capacity), head(0), tail(0), size(0)
    {
        buffer.resize(capacity);
    }

    // Destructor
    ~CircularBuffer() = default;

    // Copy constructor (disabled)
    CircularBuffer(const CircularBuffer &other) = delete;

    // Move constructor
    CircularBuffer(CircularBuffer &&other) noexcept
        : buffer(std::move(other.buffer)), capacity(other.capacity), head(other.head), tail(other.tail), size(other.size)
    {
        other.capacity = 0;
        other.head = 0;
        other.tail = 0;
        other.size = 0;
    }

    // Copy assignment (disabled)
    CircularBuffer &operator=(const CircularBuffer &other) = delete;

    // Move assignment
    CircularBuffer &operator=(CircularBuffer &&other) noexcept
    {
        if (this != &other)
        {
            buffer = std::move(other.buffer);
            capacity = other.capacity;
            head = other.head;
            tail = other.tail;
            size = other.size;

            other.capacity = 0;
            other.head = 0;
            other.tail = 0;
            other.size = 0;
        }
        return *this;
    }

    // Function to check if buffer is empty
    bool isEmpty() const
    {
        return size == 0;
    }

    // Function to check if buffer is full
    bool isFull() const
    {
        return size == capacity;
    }

    // Function to get current size of buffer
    size_t getSize() const
    {
        return size;
    }

    // Function to insert an element into the buffer
    void push(const T &element)
    {
        if (isFull())
        {
            throw std::runtime_error("Buffer is full");
        }
        buffer[tail] = element;
        tail = (tail + 1) % capacity;
        size++;
    }

    // Function to remove and return the oldest element from the buffer
    T pop()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Buffer is empty");
        }
        T poppedElement = buffer[head];
        head = (head + 1) % capacity;
        size--;
        return poppedElement;
    }
};

int main()
{
    // Example usage of CircularBuffer
    CircularBuffer<int> cb(5);

    // Push elements into the buffer
    for (int i = 1; i <= 5; ++i)
    {
        cb.push(i);
    }

    // Pop elements from the buffer
    while (!cb.isEmpty())
    {
        std::cout << cb.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class CircularBuffer
{
private:
    std::vector<T> buffer;
    size_t head;
    size_t tail;
    size_t size;
    size_t capacity;

public:
    // Constructor
    explicit CircularBuffer(size_t capacity) : buffer(capacity), head(0), tail(0), size(0), capacity(capacity) {}

    // Copy constructor
    CircularBuffer(const CircularBuffer &other) = delete;

    // Move constructor
    CircularBuffer(CircularBuffer &&other) noexcept
        : buffer(std::move(other.buffer)), head(other.head), tail(other.tail), size(other.size), capacity(other.capacity)
    {
        other.head = 0;
        other.tail = 0;
        other.size = 0;
        other.capacity = 0;
    }

    // Destructor
    ~CircularBuffer() = default;

    // Copy assignment operator
    CircularBuffer &operator=(const CircularBuffer &other) = delete;

    // Move assignment operator
    CircularBuffer &operator=(CircularBuffer &&other) noexcept
    {
        if (this != &other)
        {
            buffer = std::move(other.buffer);
            head = other.head;
            tail = other.tail;
            size = other.size;
            capacity = other.capacity;

            other.head = 0;
            other.tail = 0;
            other.size = 0;
            other.capacity = 0;
        }
        return *this;
    }

    // Check if buffer is empty
    bool isEmpty() const
    {
        return size == 0;
    }

    // Check if buffer is full
    bool isFull() const
    {
        return size == capacity;
    }

    // Get current size of buffer
    size_t getSize() const
    {
        return size;
    }

    // Push element into buffer
    void push(const T &element)
    {
        if (isFull())
        {
            throw std::runtime_error("Buffer is full");
        }
        buffer[tail] = element;
        tail = (tail + 1) % capacity;
        size++;
    }

    // Pop element from buffer
    T pop()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Buffer is empty");
        }
        T poppedElement = buffer[head];
        head = (head + 1) % capacity;
        size--;
        return poppedElement;
    }
};

int main()
{
    // Example usage of CircularBuffer
    CircularBuffer<int> cb(5);

    // Push elements into the buffer
    for (int i = 1; i <= 5; ++i)
    {
        cb.push(i);
    }

    // Pop elements from the buffer
    while (!cb.isEmpty())
    {
        std::cout << cb.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}
