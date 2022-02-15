#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, sum = 0;
    int data[100] = {[0 ... 99] = 1};

    while (i < 100)
        sum += data[i], ++i;

    printf("%d", sum);

    return 0;
}
