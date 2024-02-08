#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/*Write a program to make an array of person_t dynamically.

The program shall ask the user to enter length of the array.
Then the program shall allocate memory for the array.
Then the program shall ask the user to enter name and age of each person.
Memory for the name member shall be allocated dynamically.
Then the program shall print all the persons to the output.
In the end the program shall release all the dynamically allocated memory.*/

// Define a structure for a person with a name and age
typedef struct
{
    char *name;
    uint8_t age;
} person_t;

int main(void)
{
    // Declare variables
    person_t *persons; // Pointer to an array of person_t
    uint8_t length;    // Variable to store the length of the array

    // Ask the user to enter the length of the array
    printf("Enter the length of the array: ");
    scanf("%hhu", &length);

    // Allocate memory for the array of person_t dynamically
    persons = (person_t *)malloc(length * sizeof(person_t));

    // Check if memory allocation was successful
    if (persons == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Loop to input data for each person
    for (int i = 0; i < length; i++)
    {
        // Ask the user to enter the name of the person
        printf("Enter the name of person %d: ", i + 1);
        
        // Allocate memory for the name member dynamically
        persons[i].name = (char *)malloc(100 * sizeof(char)); // Assuming a maximum length of 100 characters for the name
        
        // Check if memory allocation was successful
        if (persons[i].name == NULL)
        {
            printf("Memory allocation failed\n");
            return 1; // Exit the program with an error code
        }

        // Ask the user to enter the age of the person
        printf("Enter the age of person %d: ", i + 1);
        scanf("%hhu", &(persons[i].age));
    }

    // Print all the persons to the output
    printf("\nPersons:\n");
    for (int i = 0; i < length; i++)
    {
        printf("Person %d: Name: %s, Age: %hhu\n", i + 1, persons[i].name, persons[i].age);
    }

    // Release all the dynamically allocated memory for names
    for (int i = 0; i < length; i++)
    {
        free(persons[i].name);
    }

    // Release the dynamically allocated memory for the array of person_t
    free(persons);

    return 0;
}