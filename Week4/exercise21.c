#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdbool.h>

/* Make a program to fill a 10-element int array with random numbers in the range of 0 and 99, then
   print the array to the output.
   sort the array ascending (from the smallest to the largest) and then
   Print the sorted array to the output.
   To fill, print and sort the array use only pointers.
*/

// Function to fill the array with random numbers
void fill_random(int *array, int length, int max);

// Function to sort the array in ascending order
void sorted_numbers(int *array, int length, int max); 

int main() 
{
    srand( time(NULL) );

    int numbers[10];
    int *pointer = numbers; // Pointer to the beginning of the array
    
    fill_random(pointer, 10, 100); // Fill the array with random numbers using pointers

    // Print the original array
    for (int i = 0; i < 10; i++)
        printf("number[%d] = %d\n", i, *(pointer + i));
    
    sorted_numbers(pointer, 10, 100); // Sort the array using pointers

    // Print the sorted array
    for(int i = 0; i < 10; i++)
        printf("number[%d] = %d\n", i, *(pointer + i));

    return 0;
}

// Function to fill the array with random numbers
void fill_random(int *array, int length, int max)
{
    for (int i = 0; i < length; i++)
        array[i] = (rand() % max) + 1;
}

// Function to sort the array in ascending order
void sorted_numbers(int *array, int length, int max)
{
    bool needsSorting = true;
    int i = 0;

    for(; i < length - 1 && needsSorting; i++) 
    {
        needsSorting = false;

        for (int j = i + 1; j < length; j++)
        {
            if(array[i] > array[j])
            {
                needsSorting = true;

                // Swap elements if they are in the wrong order
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}