#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int main()
{
    printf("%d\n", sum(4));
    return 0;
}
int sum(int n)
{
    int result = 0;
    if (n == 0)
        result = 0;
    else{
        result = n + sum(n - 1);
    }

    return result;
}
