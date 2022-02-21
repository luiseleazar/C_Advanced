#include <stdio.h>
#include <stdlib.h>

union number {
    int x;
    double y;
};

void foo(union number n){
    union number x = n;
}
int main()
{
    union number x;
    union number *y = &x;

    y->y = 100.0; //Accesing to y member of union x through
    printf("Value of integer x: %d\n", y->x);
    printf("Value of double y: %f\n", y->y);

    return 0;
}
