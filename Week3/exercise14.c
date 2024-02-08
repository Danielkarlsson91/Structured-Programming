#include <stdio.h>

/*Make a program to read an integer number in the range of 2 and 10000 from the terminal usign the scanf function in stdio.h and check if the number is a prime number or not. 
Until the entered number is not in the range, the program shall ask for a new number.

A prime number is a number which is divisible only by 1 and itself. E.g. 2, 7, 17, 23 and etc.*/

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0; // not a prime number
        }
    }
    return 1; // prime number
}

int main() {
    int num;

    do {
        // Read an integer from the user
        printf("Enter an integer between 2 and 10000: ");
        scanf("%d", &num);

        // Check if the entered number is in the specified range
        if (num < 2 || num > 10000) {
            printf("Please enter a number in the specified range.\n");
        } else {
            break; // Exit the loop if the number is in the range
        }
    } while (1);

    // Check if the entered number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
