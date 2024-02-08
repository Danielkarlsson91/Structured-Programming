#include<stdio.h>

int main() 
{
    int grade[] = {91, 82, 73, 64, 55};
    
    int total = 0;
    
    for(int i = 0; i < 5; i++)
    total = total + grade[i];

    int average = total / 5;

    printf("Average: %d\n", average);


    return 0;
}

