#include<stdio.h>
#include<stdint.h>

/* Evaluate the following program */

// Define a macro for an expression involving variables i, j, and k
#define EXPRESSION (3 * j / k - 2)

// Define a macro to set initial values for variables i, j, and k
#define SET_VARIABLES \
{                     \
    i = 3;            \
    j = 2;            \
    k = 0;            \
}

int main(void) 
{
    // Declare and initialize variables
    int i = 0, j = 7, k = 6;
    char a = 'A', b = '3';
    int32_t x, y = 3;
    uint32_t z = 32;
    double d;

    // Evaluate and print result for expression x
    x = EXPRESSION;
    printf("A) %d\n", x);

    // Modify y based on bitwise operations
    y -= ((j << 1) & (k >> 1));
    printf("B) %d\n", y);

    // Evaluate and print result for expression x using conditional operator
    x = (!(i && k) || !k) ? k + b : j + b;
    printf("C) %d\n", x);

    // Modify character a based on arithmetic operations
    a += (b + k--) % 10;
    printf("D) %d\n", a);

    // Evaluate and print result for expression d involving type casting and arithmetic operations
    d = (double) j * 100 / --k / 3;
    printf("E) %f\n", d);

    // Evaluate and print result for expression y involving relational and logical operators
    x = -1;
    y = (x < z) ? (k < j < 0) : (b >= a < i);
    printf("F) %d\n", y);

    // Evaluate and print result for expression d involving division
    d = x / z;
    printf("G) %f\n", d);

    // Set new values for i, j, and k
    i = 4;
    j = -1;
    k = 0;

    // Evaluate and print results for expressions x and y involving logical operators
    x = i && j && k;
    y = i || j && k;
    printf("H) %d, %d\n", x, y);
    
    x = i && j || k;
    y = i || j || k;
    printf("I) %d, %d\n", x, y); 

    // Set initial values using SET_VARIABLES macro
    SET_VARIABLES;
    // Evaluate and print result for expression y involving increment and logical operators
    y = ++i || ++j && k++;
    printf("J) %d, %d, %d, %d\n", i, j, k, y);

    // Set initial values using SET_VARIABLES macro
    SET_VARIABLES; 
    // Evaluate and print result for expression y involving conditional operator and increment
    y = (123 && --i) ? k++ : ++k;
    printf("K) %d, %d, %d, %d\n", i, j, k, y);

    // Set initial values using SET_VARIABLES macro
    SET_VARIABLES;
    // Evaluate and print result for expression y involving increment and logical operators
    y = ++i && ++j && k++;
    printf("L) %d, %d, %d, %d\n", i, j, k, y);

    // Reset values for i, j, and k
    i = 4;
    j = --i;
    k = i--;
    // Print values of i, j, and k
    printf("M) %d, %d, %d\n", i, j, k);

    // Set values for i and j
    i = -1;
    j = 1;

    // Evaluate and print result for expression N using logical operators and printf
    i && printf("N) Hello World\n") && --j;

    // Evaluate and print result for expression O using logical operators and printf
    ++i && printf("O) Hello World\n");

    // Evaluate and print result for expression P using logical operators and printf
    i || printf("P) Hello World\n") || j++;
   
    // Evaluate and print result for expression Q using logical operators, printf, and decrement
    j-- || !printf("Q) Hello World\n") || i++;
   
    // Print final values of i and j
    printf("R) %d, %d\n", i, j);

    return 0; // Exit successfully
}