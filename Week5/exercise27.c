/**
 * @file exercise27.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a function to find the largest value in an array of type int.
Make a function to get the average of values in an array of type int. 
Make a function to find a specific value in an array of type int.
If the value exists in the array, index of the element containing the value in the array shall be returned; otherwise -1.*/

#include <stdio.h>
#include <stdlib.h>

// Function to find the largest value in an array of type int
int largest()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Sorting the array in descending order
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    // Printing the largest value (first element after sorting)
    printf("Largest value: %d\n", array[0]);
}

// Function to get the average of values in an array of type int
int average()
{
    float sum = 0;
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Calculating the sum of array elements
    for (int i = 0; i < 10; i++)
    {
        sum = sum + array[i];
    }

    // Printing the average
    printf("Average is: %.2f\n", sum / 10);
}

// Function to find a specific value in an array of type int
// If the value exists, return the index; otherwise return -1
int specific(int specific)
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Loop through the array to find the specific value
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == specific)
        {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    int m = 5;

    // Call the largest function to find and print the largest value
    largest();

    // Call the average function to calculate and print the average
    average();

    // Call the specific function to find the index of the specific value (7)
    int specific_Value = specific(7);

    // Print the result of the specific function
    printf("Index of specific value: %d\n", specific_Value);

    return 0;
}