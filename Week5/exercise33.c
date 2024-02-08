/**
 * @file exercise33.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a program to find the number of years it takes to move 64 disks from a peg to another peg if each move takes 1 second. 86400 seconds a day, 31 536 000 seconds a year*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    // Calculate the number of seconds in a year, assuming a 64-bit unsigned integer can represent all seconds
    double disc_seconds = pow(2, 64) - 1;
    
    // Print the calculated number of seconds in scientific notation
    printf("Seconds: %e\n", disc_seconds);
    
    // Convert seconds to minutes
    double disc_minutes = disc_seconds / 60;
    printf("Minutes: %e\n", disc_minutes);

    // Convert minutes to hours
    double disc_hours = disc_minutes / 60;  
    printf("Hours: %e\n", disc_hours);

    // Convert hours to days
    double disc_day = disc_hours / 24;
    printf("Days: %e\n", disc_day);
    
    // Convert days to months (assuming 30 days per month)
    double disc_month = disc_day / 30;
    printf("Months: %e\n", disc_month);

    // Convert months to years (assuming 12 months per year)
    double disc_year = disc_month / 12;
    printf("Years: %e\n", disc_year);

    return 0;
}

