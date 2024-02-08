#include<stdio.h>  

/* Make a program to read a number in the range of 0 and 255 from the standard input using the scanf function in stdio.h 
   and print the binary form of the number to the output. While the entered number is not in the range, 
   the program shall ask for a new number.
*/

int main()
{
    // Declare variables to store the number and its binary representation
    unsigned int num = 32;
    int binary[32]; // Assuming a 32-bit binary representation

    // Loop to prompt the user to enter a number until a valid number in the range [0, 255] is entered
    do {
        printf("Please enter a number between 0-255\n");
        scanf("%d", &num);
    } while (num < 0 || num > 255);

    printf("The binary representation of the number is: \n");

    // Loop to calculate the binary representation of the entered number
    for (int i = 0; i < 8; i++) {
        binary[i] = num % 2; // Calculate the remainder when dividing the number by 2
        num /= 2; // Divide the number by 2 for the next iteration
    }

    // Loop to print the binary representation in reverse order (from least significant bit to most significant bit)
    for (int i = 7; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0; // Exit successfully
}