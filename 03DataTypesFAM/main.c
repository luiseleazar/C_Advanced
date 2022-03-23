#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct s{
    int array_size;
    int array[];
};

int main()
{
    int desired_size = 5;
    struct s *ptr;

    ptr = malloc(sizeof(struct s) + desired_size * sizeof(int));



    return 0;
}
