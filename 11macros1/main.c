#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define CIRCLE_AREA(x) ((PI) * (x) * (x))

#define PRNT(a,b) \
    printf("Value 1 = %d\n", a);\
    printf("Value 2 = %d\n", b);

int main()
{
    int area = CIRCLE_AREA(4);

    int x = 10;
    int y = 14;

    printf("The area is %d\n", area);
    PRNT(x,y);
    return 0;
}
