/**
 * @file exercise30.c
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
/*1) Create two pointers, pa and pb to point to a and b; int a = 5; char b = ’s’;

2) Change values of a and b using the pointers.

3) Create a function that takes address of an int and adds 5 to the integer.

4) Create a function pointer, funcptr, to the following function and call it. void say_value(int a) { printf("Value of a is %d\n", a); }*/

#include<stdio.h>


void say_value(int a);
void addFivetoValue(int *ptr);


int main()
{
    //Creating two variables
    int a = 5;
    char b = 's';
    
    //Pointer to int memory location a
    //Pointer to char memory location b
    int *pa = &a;
    char *pb = &b;
    //Changes the value by using pointers
    *pa = 10;
    *pb = 'x';

    //Updated values
    printf("Updated values:\n");
    printf("a = %d\n", a);
    printf("a = %c\n", b);
    addFivetoValue(pa);
    void(*funcptr)(int) = &say_value;
    (*funcptr)(*pa);
    

    return 0;
}

void addFivetoValue(int *ptr)
{
    *ptr = *ptr + 5;
}

void say_value(int a)
{
  printf("Value of a is %d\n", a);
}