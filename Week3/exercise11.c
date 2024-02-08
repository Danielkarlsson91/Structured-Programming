#include<stdio.h>
#include<ctype.h>

/* Make a program to read a full name character by character from the standard input.
   The program shall filter, capitalize, and then print it out to the standard output (terminal).
   The filtered name can only contain one space between parts of the name and uppercase/lowercase letters (a-z).
   Don’t use an array to store the name. The entered name shall be handled character by character.
*/

int main() 
{
    char character; // Variable to store the current character read from input
    char character2; // Variable to store the previous character read from input

    printf("Please enter your name: \n");

    while((character = getchar()) != '\n') 
    {
        // Check if the current character is not an alphabetic character or a space
        if (!isalpha(character) && !isspace(character)) 
        {
            continue; // Skip to the next iteration of the loop
        }
        // Check if the current and previous characters are both spaces
        else if (isspace(character) && isspace(character2))
        {
            continue; // Skip to the next iteration of the loop
        }

        // Check if the current character is the first character or follows a space
        if (character2 == 0 || isspace(character2)) 
        {
            character = toupper(character); // Capitalize the character
        }
        else
        {
            character = tolower(character); // Convert the character to lowercase
        }

        character2 = character; // Update the previous character to the current character

        putchar(character); // Print the filtered character to the standard output
    }

    return 0; // Exit successfully
}