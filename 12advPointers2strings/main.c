#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

void foo(char **ptr){
    *ptr = malloc(255);
    strcpy(*ptr, "Hello world");
}
int main()
{
    char *ptr = NULL;

    foo(&ptr);
    /*As this is a string/array, we do not need to pass
    the address, because we only need the base address
    which is in the first character in this case*/
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}
