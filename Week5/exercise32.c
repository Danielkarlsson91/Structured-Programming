/**
 * @file exercise32.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*1) Make a function to fill an array of type int with random numbers int the range 0 and 99.

2) Make a function to print an array of type int to the output.

3) Make a function to swap values of two int variables.

4) Make a function to sort an array of type int. The function shall accept a function pointer of type compare_t to compare two values

    typedef bool (*compare_t)(int, int);

void sort_array(int *arr, size_t length, compare_t compare);

    a) When you sort the array, the compare function shall be used to compare the elements

    b) To swap the elements, the swap function of step 3 shall be used.

    c) Implement two functions, compare_asc and compare_desc, to sort the array ascending and descending

bool compare_asc(int a, int b); and bool compare_desc(int a, int b);

    d) You shall be able to sort the array ascending and descending by calling sort_array with different compare functions

 

* To handle the arrays use only pointers*/



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

// Function pointer type for comparison functions
typedef bool (*compare_t)(int, int);

// Swap function
void swap(int *num1, int *num2)
{
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

// Comparison function for ascending order
bool compare_asc(int number1, int number2)
{
  return number1 < number2;
}

// Comparison function for descending order
bool compare_desc(int a, int b)
{
  return a > b;
}

// Function to sort an array using a given comparison function
void sort_array(int *arr, size_t length, compare_t compare)
{
  for(int i = 0; i < length; i++)
  {
    for(int j = 0; j < length; j++)
    {
      if(compare(arr[i], arr[j]))
      {
        swap(arr + i, arr + j);
      }
    }
  }
}

// Function to fill an array with random numbers
void fillArray(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

// Function to print the elements of an array
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int x = 5;
    int y = 10;
    srand(time(NULL));
    int myArray[10];
    
    // Fill and print the original array
    fillArray(myArray, 10);
    printf("Original array:\n");
    printArray(myArray, 10);
    
    // Swap example
    printf("\nSwapping x and y:\n");
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    // Sorting in ascending order
    compare_t compare = compare_asc;
    sort_array(myArray, 10, compare);
    printf("\nArray sorted in ascending order:\n");
    printArray(myArray, 10);

    // Sorting in descending order
    compare = compare_desc;
    sort_array(myArray, 10, compare);
    printf("\nArray sorted in descending order:\n");
    printArray(myArray, 10);

    return 0;
}