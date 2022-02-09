#include <stdio.h>
#include <stdlib.h>

//STACK EXAMPLE
/*
    Very fast access
    Do not have to xplicity de-allocate variables
    Space is maneged efficiently by the CPU
    Local variables only
    limit on the size of the stack
    variables cannot be resized
*/

double multiplyByTwo (double input)
{
    double twice = input * 2.0;
    return twice;
}

int main(int argc, char *argv[])
{
    int age = 30;
    double salary = 12345.67;
    double myList[3] = {1.2, 2.3, 3.4};

    printf("double your salary us %.3f\n", multiplyByTwo(salary));
    return 0;
}
