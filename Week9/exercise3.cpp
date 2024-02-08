/**
 * @file exercise3.cpp
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a program to read a positive integer number from the standard input, 
then sum all the even numbers from 0 to the entered number and print it to the output.*/

#include<iostream>
using namespace std;
 


int main()
{
    int num;
    int sum = 0;
    
    cout<<"Please enter a positive integer:\n";
    cin >> num;

    for(int i = 0; i <= num; i+=2)
    {
        sum += i;
    }

    printf("%d", sum);


    return 0;
}