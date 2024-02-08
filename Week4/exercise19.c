#include<stdio.h>
#include<string.h>

/* Make a program to read a string from the standard input, then split the string by spaces as the delimiter
   and print the substrings to the output.
   Example:
   The input string: I am a C programmer
   The output:
   I
   am
   a
   C
   programmer
*/

int main()
{
    char inputString; // Declare a character variable to store each character from input
    printf("Please, enter a string: \n");
    inputString = getchar(); // Read the first character from the standard input
    putchar(inputString); // Print the first character

    // Loop to read characters until a newline character is encountered
    while((inputString = getchar()) != '\n')
    {
        if(inputString == ' ')
        {
            printf("\n"); // Print a newline when a space is encountered
            continue; // Skip the rest of the loop and start the next iteration
        }

        putchar(inputString); // Print the character to the output
    }

    return 0; // Exit successfully
}