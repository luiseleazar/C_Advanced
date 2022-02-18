#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int addingNumbers(int count, ...);
int main()
{
    printf("%d\n", addingNumbers(2, 10, 20));
    printf("%d\n", addingNumbers(3, 10, 20, 30));
    printf("%d\n", addingNumbers(4, 10, 20, 30, 40));
    return 0;
}
int addingNumbers(int count, ...)
{
    va_list pargs;
    va_start(pargs, count);
    int sum = 0;

    for(int i = 0; i < count; i++)
    {
        int num = va_arg(pargs, int);
        sum += num;
    }

    va_end(pargs);

    return sum;
}
