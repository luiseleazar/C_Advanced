#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    printf("%f", PI);
    const int weekdays[7];

    const float *pf; //pf points to a constant float value, cannot change value the pointer is pointing to

    float * const pt; // pt is a const pointer, cannot change address

    const float * const ptr; //cannot change value either address

    float const *pfc; //same as const float pfc;


    return 0;
}

void display(const int array[], int limit);

char *strcat(char *restrict s1, const char * restrict s2); //s2 is read mode, s1 will be equal to s2
