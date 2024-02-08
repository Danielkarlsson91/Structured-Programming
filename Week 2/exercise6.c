#include<stdio.h>
#include<ctype.h>

/* 1. Read a lowercase letter from terminal and convert it to uppercase and then print the converted letter to the terminal.
   2. Generate two random numbers and print them to the terminal.
*/

int main(void)
{
    // Declare a variable ch1 and initialize it with the lowercase letter 'a'
    char ch1 = 'a';

    // Convert the lowercase letter to uppercase using toupper function
    char ch = toupper(ch1);

    // Print the converted uppercase letter to the terminal
    printf("%c\n", ch);

    // Seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    // Generate and print the first random number between 0 and 999
    int random_number = (rand() % 1000);
    printf("%d\n", random_number);

    // Generate and print the second random number between 0 and 999
    int random_number2 = (rand() % 1000);
    printf("%d\n", random_number2);

    return 0; // Exit successfully
}