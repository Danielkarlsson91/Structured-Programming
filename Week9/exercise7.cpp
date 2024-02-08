/*Make a program to fill a 2D array (2x3) of type int with random numbers in the range of 0 and 99 and then print the array to the terminal.

To fill and print the array, use only pointers.*/

#include<iostream>
using namespace std;

#define ROWS 2
#define COLU 3


int main()
{
    srand(time(NULL)); // Seeding the random number generator

    int array[ROWS][COLU]; // Declare a 2D array of size 2x3

    int (*pointer)[COLU] = array; // Declare a pointer to an array of size COLU (3 in this case)

    // Fill the array with random numbers
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLU; j++)
        {
            pointer[i][j] = rand() % 100; //Gives random numbers between 0 and 99
        }
    }

    cout << "\n";
    
    // Printing the array using pointers
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLU; j++)
        {
            cout << pointer[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}