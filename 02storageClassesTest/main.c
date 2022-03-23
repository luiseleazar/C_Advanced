#include <stdio.h>
#include <stdlib.h>

static double doubVar; //not accessible in other files
float floVar; //accessible within the entire program

int main()
{
    register int count;
    static float fl_permanent_storage;

    for(int i = 0; i < 10; i++) //i has a block scope
    {
        printf("%d\n", i);
    }
    return 0;
}
static int suma(int a, int b) //a function that is only accessible with this file
{
    return a + b;
}
