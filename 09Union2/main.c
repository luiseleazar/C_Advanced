#include <stdio.h>
#include <stdlib.h>

union number {
    int x;
    double y;
};
int main()
{
    union number value; //define union variable

    value.x = 100;
    printf("Value of integer x: %d\n", value.x);
    printf("Value of double y: %f\n", value.y);

    value.y = 100.0;
    printf("Value of integer x: %d\n", value.x);
    printf("Value of double y: %f\n", value.y);


    return 0;
}
