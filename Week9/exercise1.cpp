/*Make a program to print a macro named NUMBER whose value is an integer to the terminal.

If NUMBER has not been defined, an error message shall be generated and compilation shall be terminated.

If NUMBER is not equal to 8 or 16,  an error message shall be generated and compilation shall be terminated.

The macro shall be defined when you compile the program.*/


#include<iostream>

#ifndef NUMBER 
#error "NUMBER not defined"
#endif 

#if(NUMBER != 8 && NUMBER != 16)
#error "NUMBER must be 8 or 16"
#endif

using namespace std;


int main()
{
    cout << NUMBER;
    

    return 0;
}