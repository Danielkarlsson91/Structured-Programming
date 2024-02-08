#include<stdio.h>

/* Write a program to make a 2-dimensional (3x3) array of type int.
   Then ask the user to enter all the elements and print the array to the output.
   Print the array to the output like a table.
   For example:
   123   234  456
   54    678  987
   12    987  100
*/

#define ROWS 3
#define COLS 3

int main() 
{
    int array[ROWS][COLS]; // Declare a 2D array of integers with dimensions 3x3

    // Loop to get input for each element in the array
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]); // Read and store the user input in the array
        }
    }

    printf("\n");

    // Loop to print the array as a table
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++) 
        {
            printf("%d ", array[i][j]); // Print each element of the array
        }
        printf("\n"); // Move to the next line for a new row in the table
    }

    return 0; // Exit successfully
}