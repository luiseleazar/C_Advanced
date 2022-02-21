#include <stdio.h>
#include <stdlib.h>

union car {
    int i;
    float f;
    char c[3];
};

int main()
{
    union car car1, car2, *car3;

    printf("Memory size of car is %zu Bytes\n", sizeof(car1));
    return 0;
}
