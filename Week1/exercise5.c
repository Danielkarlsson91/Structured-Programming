#include <stdio.h>
#include <limits.h>
#include <float.h>

/* Make a program using the printf function in stdio.h, the sizeof operator, and the min/max values defined in limits.h and float.h to display:

Size, min, and max values of char, signed char, and unsigned char
Size, min, and max values of int, unsigned int, short int, unsigned short int, signed long int, unsigned long int, signed long long int, and usigned long long int.
Size, min, and max values of float, double, and long double
Size of enum color { RED, GREEN, BLUE, YELLOW, WHITE, BLACK };
*/

enum color { RED, GREEN, BLUE, YELLOW, WHITE, BLACK };

int main(void) {
    // Display information for char
    printf("Size of char is: %lu bytes\n", sizeof(char));
    printf("Minimum value of char: %d\n", CHAR_MIN);
    printf("Maximum value of char: %d\n", CHAR_MAX);

    // Display information for signed char
    printf("Size of signed char is: %d bytes\n", sizeof(signed char));
    printf("Minimum value for signed char: %d\n", SCHAR_MIN);
    printf("Maximum value for signed char: %d\n", SCHAR_MAX);

    // Display information for unsigned char
    printf("Size of unsigned char is: %d bytes\n", sizeof(unsigned char));
    printf("Minimum value for unsigned char: %d\n", (0));
    printf("Maximum value for unsigned char: %d\n", UCHAR_MAX);

    // Display information for int
    printf("Size of int is: %d bytes\n", sizeof(int));
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);

    // Display information for unsigned int
    printf("Size of unsigned int is: %u bytes\n", sizeof(unsigned int));
    printf("Minimum value of unsigned int: %u\n", (0));
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);

    // Display information for short int
    printf("Size of short int is: %hd bytes\n", sizeof(short int));
    printf("Minimum value of short int: %hd\n", SHRT_MIN);
    printf("Maximum value of short int: %hd\n", SHRT_MAX);

    // Display information for unsigned short int
    printf("Size of unsigned short int is: %hu bytes\n", sizeof(unsigned short int));
    printf("Minimum value of unsigned short int: %hu\n", (0));
    printf("Maximum value of unsigned short int: %hu\n", USHRT_MAX);

    // Display information for signed long int
    printf("Size of signed long int is: %ld bytes\n", sizeof(signed long int));
    printf("Minimum value of signed long int: %ld\n", LONG_MIN);
    printf("Maximum value of signed long int: %ld\n", LONG_MAX);

    // Display information for unsigned long int
    printf("Size of unsigned long int is: %lu bytes\n", sizeof(unsigned long int));
    printf("Minimum value of unsigned long int: %lu\n", (0));
    printf("Maximum value of unsigned long int: %lu\n", ULONG_MAX);

    // Display information for signed long long int
    printf("Size of signed long long int is: %lld bytes\n", sizeof(signed long long int));
    printf("Minimum value of signed long long int: %lld\n", LLONG_MIN);
    printf("Maximum value of signed long long int: %lld\n", LLONG_MAX);

    // Display information for unsigned long long int
    printf("Size of unsigned long long int is: %llu bytes\n", sizeof(unsigned long long int));
    printf("Minimum value of unsigned long long int: %llu\n", (0));
    printf("Maximum value of unsigned long long int: %llu\n", ULLONG_MAX);

    // Display information for float
    printf("Size of float is: %d bytes\n", sizeof(float));
    printf("Minimum value of float: %e\n", FLT_MIN);
    printf("Maximum value of float: %e\n", FLT_MAX);

    // Display information for double
    printf("Size of double is: %d bytes\n", sizeof(double));
    printf("Minimum value of double: %le\n", DBL_MIN);
    printf("Maximum value of double: %le\n", DBL_MAX);

    // Display information for long double
    printf("Size of long double is: %d bytes\n", sizeof(long double));
    printf("Minimum value of long double: %lg\n", LDBL_MIN);
    printf("Maximum value of long double: %lg\n", LDBL_MAX);

    // Display size of enum color
    printf("\nSize of enum color: %lu bytes\n", sizeof(enum color));

    return 0;
}