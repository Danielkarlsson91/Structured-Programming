/**
 * @file exercise28.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a function to compare two strings.

If they are equal, the function shall return 1; otherwise 0.*/


#include<stdio.h>
#include<string.h>

// Function to compare two strings.
// If they are equal, the function shall return 1; otherwise, 0.
char strings()
{
    char string1[20];
    char string2[20]; 
    int compare;

    // Getting the first string from the user
    printf("Enter a string: \n");
    scanf("%s", string1);

    // Getting the second string from the user
    printf("Enter another string: \n");
    scanf("%s", string2);
  
    // Using strcmp to compare the two strings
    compare = strcmp(string1, string2);
  
    // If the strings are equal, return 1; otherwise, return 0
    if (compare == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}

int main()
{
    // Calling the strings function to compare two strings
    int Compare = strings();

    // Printing the result (1 if equal, 0 if not)
    printf("Comparison Result: %d\n", Compare);

    return 0;
}