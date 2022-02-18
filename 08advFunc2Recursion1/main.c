#include <stdio.h>
#include <stdlib.h>


int factorial(int n);
void up_and_down(int n);

int main()
{
    //printf("%d\n", factorial(5));

    up_and_down(1);


    return 0;
}
int factorial(int n)
{
    int result = 0;

    if (n == 0)
        result = 1;
    else{
        result = n * factorial(n -1);
    }

    return result;
}
void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);

    if (n < 4)
        up_and_down(n+1);

    printf("LEVEL %d: n location %p\n", n, &n);
}


