#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include"utility.h"


/*Make a utility module to provide the following functionalities:
A function to get the greatest common divisor (gcd) of two unsigned integers greater than 0.
Example: the gcd of 8 and 12 is 4.
A function to get the least common multiple(lcm) of two unsigned integers greater than 0.
Example: the lcm of 4 and 6 is 12.
A function to sort a string in alphabetical order.
Example:
String: jsaNSHosAlPWnSJq
Sorted String: AaHJjlNnoPqSSssW
Make a test program to test the functions using assertion.*/

int main()
{
    char string[] = "jsaNSHosAlPWnSJq";
    int max = gcd(8, 12);
    int min = lcm(4, 6);
    printf("%d %d\n", max, min);
    printf("%s\n", string);
    Sort_String(string);
    printf("%s\n", string);


    return 0;
}

