#include<stdio.h>
#include<string.h>

/* Make a program to get a string from the standard input, then print the string to the output in the reversed order.
   For example:
   Enter a string: ABCDEF
   Reversed string: FEDCBA
*/

int main(void)
{
    char ch[50]; // Declare a character array to store the input string
    printf("\nPlease enter a string that you want to reverse: ");
    scanf("%s", &ch); // Read a string from the standard input and store it in 'ch'

    // Loop to print the characters of the string in reverse order
    for(int i = strlen(ch) - 1; i >= 0; i--) {
        printf("%c", ch[i]); // Print the character at index 'i'
    }

    return 0; // Exit successfully
}