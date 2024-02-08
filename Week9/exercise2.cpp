/**
 * @file exercise2.cpp
 * @author Daniel Karlsson (daniel_karlsson91@hotmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*Make a program to read a number in the range of 0 and 255 from the standard input and 
then print the hexadecimal form of the number to the output. 
While the enetered number is not in the range, the program shall ask for a new number.*/

#include<cstdio>
#include<iostream>


int main()
{
    int num;

    do
    {
        std::cout <<"Enter a number that you want to convert to hexademical:\n";
        std::cin >> num;
        
    } while (num < 0 || num > 255);
    std::cout<< std::hex<<std::uppercase<<num; 

    
    return 0;
}