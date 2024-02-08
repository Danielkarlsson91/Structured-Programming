/*Make a program to get a positive integer as an argument from the command line and then check if the number is prime or not.*/

#include<iostream>

using namespace std;


int main()
{
    // Declare variables
    int n;
    bool is_prime = true;
    
    // Prompt the user to enter a positive integer
    cout << "Enter a positive integer:\n";
    cin >> n;
    
    // 0 and 1 are not prime numbers
    if(n == 0 || n == 1)
    {
        is_prime = false;
    }
    
    // Loop to check if n is prime
    for(int i = 2; i <= n/2; ++i)
    {
      if(n % i == 0) //If n is divisible by i, it is not a prime number
      {
        is_prime = false;
        break; // Exit the loop since the number is not prime
      }
    }
    
    // Display the result based on the is_prime flag
    if(is_prime)
      cout << n << " is a prime number"; 
    else
      cout << n << " is not a prime number";


    return 0;
}