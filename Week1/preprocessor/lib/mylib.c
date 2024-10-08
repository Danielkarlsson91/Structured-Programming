#include "mylib.h"
#include <stdio.h>

#ifndef MYBUFSIZE
#error "MYBUFSIZE has not been defined"
#else
#if (MYBUFSIZE % 8 != 0)
#error "The value of MYBUFSIZE shall be a multiple of 8"
#endif
#endif

void print_int(int a)
{
    printf("Integer: %d\n", a);
}

void print_double(double a)
{
    printf("Double: %f\n", a);
}

void print_string(char *s)
{
    printf("String: %s\n", s);
}
