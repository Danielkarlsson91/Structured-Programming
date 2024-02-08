#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/* Analyse the following program. What is the output? */

int main(void)
{
    // Part 1: Pointers and Strings
    const char *s1 = "Roter"; // s1 is a pointer to a string literal
    char s2[6] = "Roger";    // s2 is an array of characters
    char *p = (char *)s1;     // p is a pointer to a character (typecasted from s1)
    char **pp = &p;           // pp is a pointer to a pointer to a character

    *pp = s2;        // Set the value pointed to by pp to the address of the first element of s2
    *p = 'P';        // Change the value of the first character in the memory pointed by p to 'P'
    **pp = 'J';      // Change the value of the first character in the memory pointed by pp to 'J'
    *(*pp + 2) = 'k'; // Change the value of the third character in the memory pointed by pp to 'k'

    printf("%s\n", p); // Print the modified string pointed by p

    // Part 2: Array and Pointer Operations
    uint8_t array[4] = {1, 2, 3, 4}; // An array of 4 uint8_t elements
    bool a = ((void *)array == (void *)&array);           // Check if the array address is equal to the address of its first element
    bool b = ((void *)(array + 1) == (void *)(&array + 1)); // Check if the address of the second element is equal to the address after the whole array

    // Print conditional statements based on boolean values
    printf("%s ", a ? "Hello" : "Bye");
    printf("%s!\n", b ? "Stefan" : "Linda");

    return 0; // Exit successfully
}