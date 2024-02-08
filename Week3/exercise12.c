#include<stdio.h>
#include<ctype.h>

/* Make a program to read a positive integer number from the standard input, then sum all the even numbers 
   from 0 to the entered number and print it to the output.
*/

int main() {
    // Declare variables to store the entered number and the sum of even numbers
    int num;
    int sum = 0;

    // Prompt the user to input a positive number
    printf("Please input a positive number: \n");
    // Read the entered number from the standard input
    scanf("%d", &num);

    // Loop to iterate through even numbers from 0 to the entered number
    for(int i = 0; i <= num; i += 2) {
        sum += i; // Add the current even number to the sum
    }

    // Print the sum of even numbers to the standard output
    printf("%d", sum);

    return 0; // Exit successfully
}

