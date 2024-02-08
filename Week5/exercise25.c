/**
 * @file exercise25.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a function to fill an array of type int with unique random numbers in the range of 1 and 99.

Make another function to print an array of type int to the output.

Example: An array filled with random numbers: {9, 3, 8, 13, 5, 2, 6, 7, 1, 4}*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

// Function to check if a number is unique in the array
bool unique(int number, int fill, int array[]) 
{
    for(int i = 0; i < fill; i++) 
    {
        if(number == array[i]) 
        {
            return false;  // Number is not unique
        }
    }
    return true;  // Number is unique
} 

// Function to fill an array with unique random numbers
void fill_array(int array[], int length) 
{
    int random = 0;
    int fill = 0;

    for(int i = 0; i < length; i++) 
    {
        if(fill < 1) 
        {
            random = (rand() % 10);  // Filling the first element without checking for uniqueness
            array[i] = random;
        } else 
        {
            random = (rand() % 10);
            
            // Keep generating random numbers until a unique one is found
            while (unique(random, fill, array) == false) 
            {
                random = (rand() % 10);
            }
            
            array[i] = random;  // Assign the unique random number to the array
        }
        fill++;
    }
}

// Function to print an array
void print_array(int array[], int length) 
{
    for(int i = 0; i < length; i++) 
    {
        printf("%d\n", array[i]);
    }
}

int main() 
{
    srand(time(NULL));
    int numbers[10];

    // Fill the array with unique random numbers
    fill_array(numbers, 10);

    // Print the filled array
    print_array(numbers, 10);

    return 0;
}