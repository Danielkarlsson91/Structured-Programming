#include<stdio.h>
#include<time.h>


int main() 
{

    int height;

    printf("Enter a height: ");
    scanf("%d", &height);
    printf("\n");

    for (int i = 1; i <= height; i++)
    {
        int starCount = (i * 2 - 1);
        int spaceCount = height - i + 1;

        for(int j = 0; j < spaceCount; j++)
          printf(" ");

        for (int j = 0; j < starCount; j++)
          printf("*");

        printf("\n");  
    } 

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < height; j++)
        printf(" ");

      printf("*\n");
    }




    return 0;
}