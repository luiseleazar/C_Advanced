#include <stdio.h>
#include <stdlib.h>


int count;

extern void write_extern(); //Not necessary to #include "foo.h" to use this function


int main()
{
    count = 5;
    write_extern();
    return 1;

}
