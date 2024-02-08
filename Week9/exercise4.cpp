/*Make a program to fill a 10 elements int array with positive random numbers lessr than 100, then

Print the array to the output.
Sort the array ascending(from the smallest to the largest) and then
Print the sorted array to the output.
 

Example:

    The array filled with random numbers: {9, 3, 8, 0, 5, 2, 6, 7, 1, 4}

    The sorted array: {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } */

#include<iostream>
using namespace std;

// Function declarations
void fill_random(int array[], int length, int max);
void sorted_numbers(int array[], int length, int max);

int main()
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Declare variables
    int numbers[10];
    int length = 10;
    int max = 100;

    // Fill the array with random numbers
    fill_random(numbers, length, max);

    // Sort the array in ascending order
    sorted_numbers(numbers, length, max);

    // Display the sorted numbers
    for(int i = 0; i < 10; i++)
        cout << " " << numbers[i];

    return 0;
}

// Function to fill an array with random numbers between 10 and 99
void fill_random(int array[], int length, int max)
{
    for(int i = 0; i < length; i++)
        array[i] = (rand() % 90) + 10;
}

// Function to perform bubble sort on an array of numbers
void sorted_numbers(int array[], int length, int max)
{
    // Flag to check if swapping is still needed
    bool sorting = true;

    // Outer loop for each pass
    for(int i = 0; i < length - 1 && sorting; i++)
    {
        // Assume no swapping is needed at the beginning of each pass
        sorting = false;

        // Inner loop to compare and swap elements
        for(int j = i + 1; j < length; j++)
        {
            // If the current element is greater than the next one, swap them
            if(array[i] > array[j])
            {
                sorting = true;  // Set the flag to true if a swap is performed
                // Swap elements using a temporary variable
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}