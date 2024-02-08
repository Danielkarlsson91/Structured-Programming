#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int isLeapYear(int year)
{

  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0); // Function to check if it's a leap year
}

bool isValidMonthDay(int month, int day)
{
  return (month >= 1 && month <= 12) && (day >= 1 && day <= 31); // Checking if the given month and day are valid
}

int isValidDateTime(int year, int month, int day)
{
  if (year < 0 || month < 1 || month > 12 || day < 1) // Checking if the given date and time are valid date and time
  {
    return 0; // Invalid date or time
  }

  int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // An array to have stored the days in each months

  if (isLeapYear(year))
  {
    daysInMonth[2] = 29; // Adjust for leap year
  }

  return (day <= daysInMonth[month]);
}

bool isValidIdentityNumber(char identityNumber[]) // Checking if the identity number the user writes is valid
{
  if (strlen(identityNumber) != 11)
  {
    return false; // The identity number must be 11 characters long to work
  }
  if (identityNumber[6] != '-')
  {
    return false; // The seventh character must be a hyphen
  }
  for (int i = 0; i < 11; i++)
  {
    if (i != 6 && (identityNumber[i] < '0' || identityNumber[i] > '9'))
    {
      return false; // Only digits are allowed, except at index 6 which is '-'
    }
  }
  return true; // The identity number is valid
}

int main()
{
  bool correctNumberOfDigits = false;
  char id_numbers[12];
  int year, month, day;
  bool valid;

  do
  {
    printf("Please enter your identity number: YYMMDD-nnnn:\n"); // Asking the user to write their identity number
    scanf("%s", &id_numbers);
    
    valid = isValidIdentityNumber(id_numbers);
  
  id_numbers[6] = id_numbers[7];
  id_numbers[7] = id_numbers[8];  // Reordering the last four digits in the identity number
  id_numbers[8] = id_numbers[9];

  long long int number = 0;
  number = atoll(id_numbers);
  int lastdigit = number % 10;
  number /= 100; 

  int temp;
  int sum = 0;

  for (int i = 0; i < 9; i++) // Loops through every character in the id_numbers array
  {
    temp = number % 10;
    number /= 10;
    if((i % 2) == 0) // Processing characters at even indices, excluding hyphen at index 6
    {
      temp *= 2; // Converts the character to an integer and doubles it

      if (temp > 9) // Checks if the doubled number is greater than 9
      {
        temp = 1 + (temp % 10); // If it is greater than 9, add the digits together
      }
  
    }
    
    sum = sum + temp;
  }
  
  int c = (10 -(sum % 10)) % 10;
  printf("C: %d\n", c);
  
  if (valid && c == lastdigit) // Validating the identity number and the last digit which is the control digit
    {
      sscanf(id_numbers, "%2d%2d%2d", &year, &month, &day); // Extracting the year, month, and day from the identity number

      if (isValidDateTime(year, month, day)) // Checks if the extracted date and time are valid ones
      {
        printf("The identity number is correct!\n");
      }
      else
      {
        printf("Invalid month or day in the input!\n");
      }
    } else
    {
      printf("The identity number is not correct!\n");
    }

  } while (!valid || !isValidDateTime(year, month, day)); // Repeats the loop if the identity number or date is not valid


  return 0;
}