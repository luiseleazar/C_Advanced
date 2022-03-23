#include <stdio.h>
#include <stdlib.h>

int i = 5; //Global variable

char text[255];

void foo(void); //Explicit declaration to avoid implicit declaration of function "foo" warning

int main()
{
    printf("%i ", i);
    foo();
    printf("%i ", i);
    return 0;
}
