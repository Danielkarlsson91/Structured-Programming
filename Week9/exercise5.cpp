/*Write a program to make a 2 dimensional(3x3) array of type int.

Then ask the user to enter all the elements and then print the array to the output.

Print the array to the output like a table.*/

#include<iostream>
using namespace std;

#define ROWS 3
#define COLS 3

int main()
{
    int array[ROWS][COLS]; //Declaring the 2D-array

    for(int i = 0; i < ROWS; i++) //Looping through the lines of ROWS
    {
        for(int j = 0; j < COLS; j++) //Looping through the lines of COLUMS
        {
            cout<<"Please enter the numbers you want in the 2D-array:\n", i, j; // Prompts the user to input the numbers in the 2D-array
            cin>>array[i][j]; //Stores the input in the array
        }
    }

    cout<<"\n"; //Making a new line for the next iteration

    for(int i = 0; i < ROWS; i++)//Looping through the lines of ROWS
    {
        for(int j = 0; j < COLS; j++) //Looping through the lines of COLUMS
        {
            cout<<" " <<array[i][j]; //Stores the input in the array
        }
        cout<<"\n"; // Move to the next line for a new row in the table
    }


    return 0; // Exit successfully
}