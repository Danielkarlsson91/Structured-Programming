#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <stdbool.h>

/* Make a program to fill a 10-element int array with random numbers, then
   Print the array to the output.
   Sort the array ascending (from the smallest to the largest) and then
   Print the sorted array to the output.
*/

// Function to fill an array with random numbers
void fill_random(int array[], int length, int max);

// Function to sort an array in ascending order
void sorted_numbers(int array[], int length, int max); 

int main() 
{
    srand( time(NULL) ); // Seed the random number generator with the current time

    int numbers[10]; // Declare an array of 10 integers
    
    fill_random(numbers, 10, 100); // Fill the array with random numbers in the range [10, 100]

    // Print the original array
    for (int i = 0; i < 10; i++)
        printf("number[%d] = %d\n", i, numbers[i]);
    
    // Sort the array in ascending order
    sorted_numbers(numbers, 10, 100);

    // Print the sorted array
    for(int i = 0; i < 10; i++)
        printf("number[%d] = %d\n", i, numbers[i]);

    return 0; // Exit successfully
}

// Function to fill an array with random numbers
void fill_random(int array[], int length, int max)
{
    for (int i = 0; i < length; i++)
        array[i] = (rand() % max) + 1; // Generate a random number in the range [1, max]
}

// Function to sort an array in ascending order using the Bubble Sort algorithm
void sorted_numbers(int array[], int length, int max)
{
    bool needsSorting = true; // Flag to check if sorting is still needed

    int i = 0;

    // Outer loop for each pass of the Bubble Sort algorithm
    for(; i < length - 1 && needsSorting; i++) 
    {
        needsSorting = false; // Assume the array is sorted

        // Inner loop to compare and swap elements if necessary
        for (int j = i + 1; j < length; j++)
        {
            // If the current element is greater than the next element, swap them
            if(array[i] > array[j])
            {
                needsSorting = true; // Set the flag to indicate that sorting is still needed

                // Swap the elements
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}