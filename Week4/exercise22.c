#include<stdio.h>
#include<string.h>
#include<ctype.h>

/* Make a program to read a string from a terminal and then convert
   the uppercase letters to lowercase and vice versa and
   in the end print the string to the standard output.
   To change and print the string use only pointers.
*/

int main()
{
    char upperCase[50] = "ABC"; // Initialize with a default string "ABC"
    char *pointer = upperCase;   // Pointer to the beginning of the array

    scanf("%s", upperCase); // Read a new string from the terminal

    // Convert uppercase letters to lowercase and vice versa using pointers
    for(int i = 0; i < strlen(pointer); i++)
    {
        if(isupper(pointer[i]))
        {
            pointer[i] = tolower(pointer[i]);
        }
        else
        {
            pointer[i] = toupper(pointer[i]);
        }
    }

    // Print the modified string using pointers
    for(int i = 0; i < strlen(pointer); i++)
    {
        printf("%c", pointer[i]);
    }

    return 0;
}