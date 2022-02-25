#include <stdio.h>
#include <stdlib.h>

#define str(x) #x
//This creats a constant string: "x"

#define eat(what) puts("I'm eating "#what " today")

int main()
{
    int a = 10;
    printf(str(Hello world\n));
    //equivalent to
    printf("Hello world\n");

    eat(chorizo);


    return 0;
}
