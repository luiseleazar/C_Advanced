#include <stdio.h>
#include <stdlib.h>

struct packed_struct {
    unsigned int : 3; //No name because is unused, it's used for padding
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type: 8;
    unsigned int index: 18;
};


int main()
{
    struct packed_struct packed_data = {1,1,1,7,10};

    //packed_data.type = 7; //assigning value
    //using int bit = packed_data.type; //assigning to a local variable to read
    unsigned int flag1, flag2, flag3, typeBit, indexBit;
    flag1 = packed_data.f1;
    flag2 = packed_data.f2;
    flag3 = packed_data.f3;
    typeBit = packed_data.type;
    indexBit = packed_data.index;

    printf("Values on packed data are %u,%u,%u,%u,%u", flag1, flag2, flag3, typeBit, indexBit);

    return 0;
}
