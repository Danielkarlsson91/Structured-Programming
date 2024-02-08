#include<stdio.h>

/* typedef struct {
    int day;
    int month;
    int year;
} date_t;

1) Make an instance of date_t
2) Read day, month, and year from a terminal
3) Print the instance to the terminal in the format of YYYY-MM-DD
*/

// Define a structure named date_t to represent a date with day, month, and year
typedef struct {
    int day;
    int month;
    int year;
} date_t;

// Declare an instance of the date_t structure
date_t date;

int main()
{
    // Prompt the user to enter a day and read the input into the date.day member
    printf("Enter a day: \n");
    scanf("%d", &date.day);

    // Prompt the user to enter a month and read the input into the date.month member
    printf("Enter a month: \n");
    scanf("%d", &date.month);

    // Prompt the user to enter a year and read the input into the date.year member
    printf("Enter a year: \n");
    scanf("%d", &date.year);

    // Print the date instance to the terminal in the format YYYY-MM-DD
    printf("%d-%d-%d", date.year, date.month, date.day);

    return 0; // Exit successfully
}