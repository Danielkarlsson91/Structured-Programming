/*Make a function to count number of digits of a given integer number using recursion.
For example: 456 has 3 digits
Make a function to calculate XY using recursion. X and Y are two integers.
For example: 23 = 8.*/

#include<iostream>

using namespace std;

// Function declaration: Counts the number of digits in an integer.
int Count_digits(int y);

int main()
{
    // Variable to store user input
    int x;
    
    // Prompt the user to enter a number
    cout << "Please enter a number:" << endl;

    // Read the entered integer into the variable x
    cin >> x;
    
    // Print the result: Number of digits in the entered integer
    cout << "Number of digits:\n" << Count_digits(x) << endl; 

    return 0; // Indicates successful program execution
}

// Recursive function to count the number of digits in an integer
int Count_digits(int y)
{
    // Base case: If the input integer is 0, there are no digits
    if(y == 0) return 0;

    // Recursive case:
    // Call Count_digits with the integer obtained by removing the last digit
    // Add 1 to the result, as we are counting the current digit
    return 1 + Count_digits(y / 10);
}