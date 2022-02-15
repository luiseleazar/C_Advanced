#include <stdio.h>
#include <stdlib.h>

int main()
{

    goto star;

    star:
        printf("*");
        //goto draw;
    space:
        printf(" ");
    endline:
        printf("\n");
    return 0;
}
