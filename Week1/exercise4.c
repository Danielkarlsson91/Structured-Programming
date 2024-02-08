#include <stdio.h>

/* Make a program to print a macro(NUMBER) whose value is an integer to the terminal.
   If NUMBER has not been defined, an error message shall be generated and compilation shall be terminated.
   If NUMBER is not equal to 8 or 16, an error message shall be generated and compilation shall be terminated.
   The macro shall be defined when you compile the program.
*/

// Check if NUMBER has been defined
#ifndef NUMBER
#error "NUMBER has not been defined"
#else
    // Check if NUMBER is not equal to 8 or 16
    #if (NUMBER != 8 && NUMBER != 16)
    #error "The value of NUMBER shall be 8 or 16"
    #endif
#endif

int main(void) 
{
    // Print the value of the macro NUMBER
    printf("%d\n", NUMBER);

    return 0; // Exit successfully
}