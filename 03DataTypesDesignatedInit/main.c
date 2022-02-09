#include <stdio.h>
#include <stdlib.h>

struct point{int x, y;};

struct P{
    int x, y, z;
};

int main()
{

    struct P p1 = {.y = 0, .z = 1, .x = 2};
    struct P p2 = {.x = 20};
    struct P p3[3] = {[0].x = 1, [1].y = 1, [2].z = 1 };

    printf("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
    printf("x = %d\n", p2.x);
    for(int i = 0; i < 3; i++){
        printf("%d %d %d\n", p3[i].x, p3[i].y, p3[i].z);
    }
    printf("\n");
    struct point p = {.y=2,.x=3}; //or struct point p = { y:2, y:3};


    int a[6] = {0,[1 ... 2]=1, [3 ... 4]=3}; //Expected OUTPUT: 0,1,1,3,3,0

    for(int i = 0; i < 6; i++)
        printf("%d\n",a[i]);

    return 0;
}
