/*Make a program to print your full name to the terminal.

Your full name shall be defined as a macro in the command line when you compile your program.*/

#include <stdio.h>

// Define a macro for the full name, which can be passed as a command-line argument
#define NAME "Your Full Name Here"

int main() {
    // Print the full name using the macro
    printf("My name is %s", NAME);

    return 0; // Exit successfully
}