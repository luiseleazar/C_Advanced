#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void allocateMemory(int **p)
{
    *p = (int *) malloc(sizeof(int)); ///Memory created to p pointer
}

int main()
{
    int *p = NULL;
    allocateMemory(&p);

    *p = 10;
    printf("%d\n", *p);

    free(p);
    return 0;
}
