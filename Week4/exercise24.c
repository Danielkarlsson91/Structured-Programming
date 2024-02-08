#include <stdio.h>

/* Make a program to read date time in the format of YYYY-MM-DD HH:mm:ss from the input and validate it.
   A leap year is exactly divisible by 4 except for century years (years ending with 00).
   The century year is a leap year only if it is perfectly divisible by 400.
   If the year is a leap year, then February 29 is the leap day.
*/

// Function to check if a given year is a leap year
int isLeapYear(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to validate date and time
int isValidDateTime(int year, int month, int day, int hour, int minute, int second) 
{
    // Check for valid ranges of year, month, day, hour, minute, and second
    if (year < 0 || month < 1 || month > 12 || day < 1 || hour < 0 || hour > 23 ||
        minute < 0 || minute > 59 || second < 0 || second > 59) 
        {
        return 0;  // Invalid input
    }

    // Array to store the number of days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Update days in February for a leap year
    if (isLeapYear(year)) 
    {
        daysInMonth[2] = 29;
    }

    // Check if the entered day is within the valid range for the given month
    return (day <= daysInMonth[month]);
}

int main() 
{
    int year, month, day, hour, minute, second;

    // Input date and time from the user
    printf("Enter date and time in the format YYYY-MM-DD HH:mm:ss: ");
    scanf("%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);

    // Validate the entered date and time
    if (isValidDateTime(year, month, day, hour, minute, second)) 
    {
        printf("The entered date and time is valid.\n");
    } else 
    {
        printf("Invalid date or time entered.\n");
    }

    return 0;
}