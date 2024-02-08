/**
 * @file exercise26.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a function named get_person, to create an instance of person_t and then
ask the user to enter values for the members in a terminal and
in the end return the instance.
 

typedef struct {


    int age;

    float height;

    char name[16];

} person_t;*/



#include<stdio.h>

// Definition of the structure person_t
typedef struct 
{
  int age;
  float height;
  char name[16];
} person_t;

// Function to create an instance of person_t by taking user input
person_t get_person();

int main()
{
    // Declare a person_t variable
    person_t person1;

    // Call the get_person function to fill the person1 instance
    person1 = get_person();

    // Print the values of the filled person1 instance
    printf("Age: %d\nHeight: %.2f\nName: %s\n", person1.age, person1.height, person1.name);

    return 0;
}

// Function to get user input and create a person_t instance
person_t get_person()
{
    // Declare a person_t variable
    person_t person;

    // Prompt the user to enter age and read the input
    printf("Please enter age: \n");
    scanf("%d", &person.age);

    // Prompt the user to enter height and read the input
    printf("Please enter height: \n");
    scanf("%f", &person.height); 

    // Prompt the user to enter name and read the input
    printf("Please enter your name: \n");
    scanf("%s", person.name); 

    // Return the created person_t instance
    return person;
}