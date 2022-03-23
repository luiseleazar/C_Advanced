#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; //iter
    int tot = 0; //initialized to avoid trash
    size_t size = 0; //array size

    printf("Enter the number of elements you'll enter:\n");
    scanf("%zd", &size);

    int array[size];

    for(i = 0; i < size; i++)
    {
        printf("Enter an element in array[%d]\n", i);
        scanf("%d", &array[i]);
    }
    for(i = 0; i < size; i++)
    {
        tot += array[i]; //sum of elements
    }

    printf("%d", tot);
    return 0;
}
