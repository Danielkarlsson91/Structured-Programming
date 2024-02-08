/**
 * @file exercise31.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
 

/*1) Make a function to fill an array of type int with random numbers.

2) Make a function to print an array of type int to the output.

3) Make a function to print a 2D array of type int to the output.

* To handle the arrays use only pointers*/


#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// Function to fill a 1D array with random numbers between 1 and 10
void fillArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1;
    }
}

// Function to print a 1D array
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d\n", arr[i]);
    }   
} 

// Function to print a 2D array
void print2D_array(int array[3][3])
{
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      printf("%d ", array[i][j]); 
    }
    printf("\n");
  }
}

int main() 
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Create and fill a 1D array
    int myArray[10];
    fillArray(myArray, 10);

    // Print the 1D array
    printf("1D Array:\n");
    printArray(myArray, 10);

    // Create and print a 2D array
    int array[3][3] = {{1, 2, 3}, 
                       {4, 5, 6}, 
                       {7, 8, 9}
                      };
    printf("\n2D Array:\n");
    print2D_array(array);                  

    return 0;
}