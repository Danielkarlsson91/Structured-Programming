#include<stdio.h>
#include<string.h>
#include<ctype.h>

/* Make a program to read date and time from a terminal and then
   check if the entered date and time are in the format of YYYY-MM-DD HH:mm:ss or not.
*/

int main() 
{
    char date[100]; // Declare a character array to store the date
    char time[100]; // Declare a character array to store the time

    printf("Please enter a date in the format YYYY-MM-DD: \n");
    fgets(date, sizeof(date), stdin); // Read the date from the standard input

    // Loop to check the format of the entered date
    for(int i = 0; i < 4; i++)
    {
        if(isdigit(date[i]))
        {
            // Check if the date has the correct format
            if(date[4] == '-' && date[7] == '-') 
            {
                printf("That is a date!\n");
            } 
            else 
            {  
                printf("That's incorrect, please try again!\n");
                fgets(date, sizeof(date), stdin); // Read the date again
            }
        }
        else 
        {
            printf("That's not a real date or time, try again!\n");
            fgets(date, sizeof(date), stdin); // Read the date again
        }
        break; // Exit the loop after one iteration
    }

    printf("Input the hours, minutes, and seconds in the format HH:MM:SS:\n");
    fgets(time, sizeof(time), stdin); // Read the time from the standard input

    // Loop to check the format of the entered time
    for(int j = 0; j < 2; j++)
    {
        if(isdigit(time[j]))
        {
            // Check if the time has the correct format
            if(time[2] == '-' && time[5] == '-') 
            {
                printf("That is your time: %s\n", time);
            } 
            else 
            {  
                printf("That's incorrect, please try again!\n");
                fgets(time, sizeof(time), stdin); // Read the time again
            }
        }
        else 
        {
            printf("That's not a real date or time, try again!\n");
            fgets(time, sizeof(time), stdin); // Read the time again
        }
        break; // Exit the loop after one iteration
    }

    return 0; // Exit successfully
}
      
       
    




    
