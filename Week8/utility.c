#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

unsigned int gcd(int x, int y)
{
  int max = 0;  
  for(int i = 1; i < x; i++)
  {
    if(x % i == 0 && y % i == 0)
    {
      max = i; 
    }
  }
  return max;
} 

unsigned int lcm(int a, int b)
{
    int min = 0;
    for(int i = 2; i < a; i++)
    {
        for(int j = 2; j < a; j++)
        {
        if(a * i == b * j)
        {
          min = a * i;
          break;
        }
        }
    }
    return min;
    
}

char Sort_String(char array[])
{
    int i = 0;

  for(; i < strlen(array) - 1; i++) 
  {

    for (int j = i + 1; j < strlen(array); j++)
    {
      
      
      if(toupper(array[i]) > toupper(array[j]))
      {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
      else if(toupper(array[i]) == toupper(array[j]))
      {
        if(array[i] > array[j])
        {
          int tmp = array[i];
          array[i] = array[j];
          array[j] = tmp;
        }
      }

    }
   }
}