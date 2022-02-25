#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    printf("%s was called.\n", __func__); //__func__ returns the fuction time in sting
    return a + b;
}

int main()
{
    //__FILE__ returns in string the root of the file
    //__LINE__ returns in int the line where is called
    printf("The file is in %s in line %d\n", __FILE__,__LINE__ );

    // __DATE__ Date (mmm dd yyyy ) when the file was compiled
    //__TME__ Time (hh:mm:ss) when the file was compiled
    printf("Program last compiled at %s on %s\n", __TIME__, __DATE__);


    printf("%d\n", sum (10, 20));


    return 0;
}
