/*1) Make a function to fill an array of type int with random numbers int the range 0 and 99.

2) Make a function to print an array of type int to the output.

3) Make a function to swap values of two int variables.

4) Make a function to sort an array of type int. The function shall accept a function pointer of type compare_t to compare two values

    using compare_t = bool (*)(int, int);

void sort_array(size_t length, int *arr, compare_t compare);

    a) When you sort the array, the compare function shall be used to compare the elements

    b) To swap the elements, the swap function of step 3 shall be used.

    c) Implement two functions, compare_asc and compare_desc, to sort the array ascending and descending

bool compare_asc(int a, int b); and bool compare_desc(int a, int b);

    d) You shall be able to sort the array ascending and descending by calling sort_array with different compare functions*/

#include<iostream>

using namespace std;

// Function to compare two integers in ascending order
bool compare_ascending(int num1, int num2)
{
    return num1 < num2;
}

// Function to compare two integers in descending order
bool compare_descending(int a, int b)
{
    return a > b;
}

// Typedef for a function pointer type for comparisons
using compare_t = bool(*)(int, int);

// Function to fill an array with random integers between 0 and 99
void fill_array(int *arr, int size)
{
  for(int i = 0; i < size; i++)
  {
  arr[i] = rand() % 100;
  }
}

// Function to print the elements of an array
void print_array(int *arr, int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
  cout << "\n" << endl;
}

// Function to swap the values of two integers
void swap(int &num1, int &num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

// Function to sort an array using a specified comparison function
void sort(int *arr, size_t length, compare_t compare)
{
  for(int i = 0; i < length; i++)
  {
    for(int j = 0; j < length; j++)
    {
        if(compare(arr[i], arr[j]))
        {
            swap(arr[i], arr [j]);
        }
    }
  }
}

int main()
{
    //Declaration of variables
    int k = 10;
    int l = 20;
    srand(time(NULL));
    int array[10];
    
    // Fill and print the original array
    fill_array(array, 10);
    cout << "Original array:\n";
    print_array(array, 10);

    // Swap k and l and print the result
    cout << "\nSwapping k and l:\n";
    swap(k, l);
    cout << k << '\n' << l << endl;
    
    // Sort the array in ascending order and print the result
    compare_t compare = compare_ascending;
    sort(array, 10, compare);
    cout << "\nArray sorted in the ascending order:\n";
    print_array(array, 10);
    
    // Sort the array in descending order and print the result
    compare = compare_descending;
    sort(array, 10, compare);
    cout << "\nArray sorted in the descending order:\n";
    print_array(array, 10);


    return 0;
}