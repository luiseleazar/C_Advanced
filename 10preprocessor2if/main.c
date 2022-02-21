#include <stdio.h>
#include <stdlib.h>

#define MYDEF 5
#define MYOTHERDEF 2
int main()
{
    #if MYDEF == 5 && MYOTHERDEF == 2
        printf("Hello world!\n");
    #endif
    return 0;
}
