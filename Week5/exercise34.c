/**
 * @file exercise34.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a function to count number of digits of a given integer number using recursion.
For example: 456 has 3 digits
Make a function to calculate XY using recursion. X and Y are two integers.
For example: 23 = 8.*/

#include<stdio.h>
#include<math.h>

int Count_digits(int n);
 
int main() 
{ 
    int a; 
    printf("Enter number: "); //Asking the user to print a number
    scanf("%d", &a); 
    printf("Number of digits = %d", Count_digits(a)); //Number of digits are printing out 

    return 0;
} 

int Count_digits(int n) //A Function to count digits
{ 
    if(n == 0) return 0; 
    return 1 + Count_digits(n / 10); 
} 

