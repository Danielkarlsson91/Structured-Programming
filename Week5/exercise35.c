/**
 * @file exercise35.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a program to get a positive integer as an argument from the command line and then check if the number is prime or not.*/

#include<stdio.h>
#include<stdlib.h>

// Function to check if a number is prime or not
int primeCheck(int n);

int main(int argc, char *argv[])
{
    // Convert the command line argument to an integer
    int num = atoi(argv[1]);

    // Check if the number is prime using the primeCheck function
    if (primeCheck(num) == 1)
    {
        printf("It's a prime number!");
    }
    else
    {
        printf("It's not a prime number!");
    }

    return 0;
}

// Function to check if a number is prime or not
int primeCheck(int n)
{
    // Check if the number is less than or equal to 1
    if (n <= 1)
    {
        return 0; // 0 and 1 are not prime numbers
    }

    // Iterate from 2 to the square root of n to check for divisibility
    for (int i = 2; i * i <= n; i++)
    {
        // If n is divisible by a number other than 1 and itself, it's not prime
        if (n % i == 0)
        {
            return 0;
        }
    }

    // If no divisor is found, the number is prime
    return 1;
}
