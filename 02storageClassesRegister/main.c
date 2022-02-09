#include <stdio.h>
#include <stdlib.h>

int main()
{
    register int x; //register variable (count), only for local scope, not global

    for (x =0; x <= 15;x++)
    {
        printf("%d\n",x);
    }
    return 1;
}
