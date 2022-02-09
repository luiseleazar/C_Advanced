#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct myArray{;
    int array_size;
    int array[];
};

int main()
{
    int i;
    int desired_size;
    printf("Enter the desired size of array:\n");
    scanf("%d", &desired_size);

    struct myArray *ptr;
    ptr = malloc(sizeof(struct myArray) + desired_size * sizeof(int));

    //********* Notes at: C Beginners\7pointers2*************



    for(i = 0; i < desired_size;i++){
        printf("Enter an element:\n");
        scanf("%d", ptr + i);
    }

    for(i = 0; i < desired_size;i++){
        printf("%d\n", *(ptr + i));
    }



    return 0;
}
