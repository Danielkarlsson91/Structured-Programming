/**
 * @file Exam.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*We have a 2-dimensional array: matrix[R][C], where R is a rows number and C is the column number.  Write a C program to do some operations on this matrix: 
1.   Make a function to fill the matrix with random even, unique numbers, in the range of min and max. 
2.   Make a function to print the matrix to the terminal. 
3.   Make a function to calculate sum of elements in each row of the matrix and store the result in an element of an array passed to the function.     
The function shall calculate sum for all rows. 
4.   Make a function to calculate sum of elements in each column of the matrix and store the result in an element of an array passed to the function.   
  The function shall calculate sum for all columns. 
  5.   In the program:     Ask the user to enter the array dimensions (R and C)     
  Make a J x K array and fill it with random, even unique numbers in the range of 10 and 1000.     
  Use pointers in your functions. For G, the requirements shall be fulfilled. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

// Function prototypes
void fill_array(int rows, int colu, int array[rows][colu]);
void print_array(int rows, int colu, int array[rows][colu]);
bool unique(int number, int rows, int colu, int array[rows][colu]);
void calculate_sum(int rows, int colu, int array[rows][colu], int row_sum[rows]);
void calculate_colu(int rows, int colu, int array[rows][colu], int colu_sum[colu]);

int main() 
{
    // Declare variables
    int rows, colu;

    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n");
    scanf("%d", &colu);
    
    // Declare arrays to store row and column sums
    int colu_sum[colu];
    int row_sum[rows];
    int array[rows][colu];   // Declare a 2D array of size rows x colu

    // Seed the random number generator
    srand(time(NULL));

    // Fill the array with unique random numbers
    fill_array(rows, colu, array);

    // Print the filled array
    print_array(rows, colu, array);

    // Calculate and print the sum of each row
    calculate_sum(rows, colu, array, row_sum);

    // Calculate and print the sum of each column
    calculate_colu(rows, colu, array, colu_sum);

    // Declare a pointer to the array
    int (*pointer)[colu] = array;

    printf("\n");

    return 0;
}

// Function to check if a number is unique in the array
bool unique(int number, int rows, int colu, int array[rows][colu]) 
{
    // Check if the number is odd, if yes, it's not unique
    if(number % 2 != 0)
    {
        return false;
    }

    // Check if the number is already present in the array
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < colu; j++)
        {
            if(number == array[i][j]) 
            {
                return false;  // Number is not unique
            }
        }
    }
    return true;  // Number is unique
} 

// Function to fill an array with unique random numbers
void fill_array(int rows, int colu, int array[rows][colu]) 
{
    int random = 0;

    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < colu; j++)
        {
            // Generate random numbers until a unique one is found
            random = rand() % 1000 + 10;
            while (unique(random, rows, colu, array) == false) 
            {
                random = rand() % 1000 + 10;
            }

            // Assign the unique random number to the array
            array[i][j] = random;
        }
    }
}

// Function to print an array
void print_array(int rows, int colu, int array[rows][colu]) 
{
    // Print the array using pointers
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < colu; j++) 
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate and print the sum of each row
void calculate_sum(int rows, int colu, int array[rows][colu], int row_sum[rows])
{
    printf("Row_sum:\n");
    for(int i = 0; i < rows; i++)
    {
        row_sum[i] = 0;
        for(int j = 0; j < colu; j++) 
        {
            row_sum[i] += array[i][j]; 
        }
        printf("%d ", row_sum[i]);
    }
    printf("\n");
}

// Function to calculate and print the sum of each column
void calculate_colu(int rows, int colu, int array[rows][colu], int colu_sum[colu])
{
    printf("Col_sum:\n");
    for(int i = 0; i < colu; i++)
    {
        colu_sum[i] = 0;
        for(int j = 0; j < rows; j++) 
        {
            colu_sum[i] += array[j][i]; 
        }
        printf("%d ", colu_sum[i]);
    }
    printf("\n");
}