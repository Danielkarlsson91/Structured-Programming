/**
 * @file exercise29.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a function to print all prime numbers in the range of m and n to the ouput.

m and n are two unsigned integers.*/

#include<stdio.h>

// Function to print prime numbers in the range [m, n]
void prime(int m, int n)
{
    // Loop through numbers from m to n
    for(int i = m; i <= n; i++)
    { 
        int isPrime = 1; // Assume i is prime initially

        // Check for factors from 2 to i-1
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0) 
            {
                isPrime = 0; // i has a factor other than 1 and itself
                break;
            }   
        }

        // If isPrime is still 1, i is prime
        if(isPrime)
        {
            printf("%d is a prime number\n", i);
        }
    }
}

int main()
{
    unsigned int m = 3;
    unsigned int n = 25;

    // Call the prime function to print prime numbers in the range [m, n]
    prime(m, n);

    return 0;
}