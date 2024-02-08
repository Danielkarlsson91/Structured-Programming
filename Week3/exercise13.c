#include<stdio.h>

/*Make a program to print all the numbers in the range of 0 and 1000 whose last digit is 7.

E.g. 7, 17, 27,  37, and etc.*/

int main() {

    int i = 0;

    for (i = 7; i < 1000; i+= 10)

    printf("%d\n", i);



    return 0;
}
