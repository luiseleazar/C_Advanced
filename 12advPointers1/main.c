#include <stdio.h>
#include <stdlib.h>


/// Use cases
/* The biggest reason to use a double pointer is when
you need to change the value of the pointer passed to
a function as the function parameter
    simulate pass by reference*/

int main()
{
    int a = 10;

    int *p1 = NULL;
    int **p2 = NULL;

    p1 = &a;
    p2 = &p1;

    //Printing values
    printf("Value of a is %d\n", a);
    printf("Value of a is %d\n", *p1);
    printf("Value of a is %d\n", **p2);

    //Printing address of a
    printf("Address of a is %u\n", &a);
    printf("Address of a is %u\n", p1);
    printf("Address of a is %u\n", *p2);

    //Printing address of p1
    printf("Address of p1 is %p\n", &p1);
    printf("Address of p1 is %p\n", p2);

    //Printing address of p2
    printf("Address of p2 is %p\n", &p2);
    return 0;
}
