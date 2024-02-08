#include <stdio.h>

#ifndef NUMBER
#error "MYBUFSIZE has not been defined"
#else
#if (NUMBER != 8 && NUMBER != 16)
#error "The value of NUMBER shall be a multiple of 8"
#endif
#endif

int main(void) 
{
    printf("%d\n", NUMBER);

    return 0;
}