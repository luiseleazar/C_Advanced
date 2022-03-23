#include <stdio.h>
#include <stdlib.h>

//HEAP EXAMPLE
/*
    Variables can be accessed globally
    No limit on memory size
    (Relatively) Slower access
    The programmer is responsable for managing the memory
    No guaranteed efficiente use of space
    Variables can be resized using realloc()

*/

double *multiplyByTwo(double *input)
{
    double *twice = malloc(sizeof(double));
    *twice = *input * 2.0;
    return twice;
}

int main(int argc, char *argv[])
{
    int *age = malloc(sizeof(int));
    *age = 30;
    double *salary = malloc(sizeof(double));
    *salary = 12345.67;
    double *myList = malloc(3* sizeof(double));
    myList[0] = 1.2;
    myList[1] = 2.3;
    myList[2] = 3.4;
    double *twiceSalary = multiplyByTwo(salary);

    printf("double your salary is %.3f\n", *twiceSalary);

    free(age);
    free(salary);
    free(myList);
    free(twiceSalary);

    return 0;
}
