#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

foo(int **ptr)
{
    int a = 5;
    *ptr = &a;
}

int main()
{
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;

    //calling function
    /*as a double pointer has the address of a single pointer,
    we can actually pass that address as &ptr*/
    foo(&ptr);
    printf("%d\n", *ptr);
    return 0;
}
