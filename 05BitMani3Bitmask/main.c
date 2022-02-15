#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flags = 65; //0000 1111
    int mask = 182; //1011 0110

    int turn_on, turn_off, togg;

    turn_on = flags | mask; //1011 1111
    //printf("%d", ~(mask));//1111 1111 0100 1001   -183
    turn_off = flags & ~(mask);     //0000 1001
    togg = flags ^ mask; //1011 1001

    return 0;
}
