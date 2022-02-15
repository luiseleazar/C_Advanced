#include <stdio.h>
#include <stdlib.h>

// Logical Operators
int main()
{
    short int w1 = 25; //0001 1001
    short int w2 = 77; //0100 1101
    short int w0 = 154;//1001 1010

    short int w3 = 0;  //0000 1001 equals to 9 expected output
    short int w4 = 0;  //0101 1101 equals to  expected output
    short int w5 = 0;  //0101 0100 equals to
    short int w0_comp; //1111 1100 equals to -3 ???????

    w3 = w1 & w2; //1 and 1 in row = 1, other combination is 0
    w4 = w1 | w2; //if any value in row has 1 = 1, otherwise 0, only a 0 and 0 results in 0
    w5 = w1 ^ w2; //1 and 0 OR 0 and 1 is 1, otherwise is 0
    w0_comp = ~(w0); //The bitwise negation operator (~) inverts each bit operand, converting 1s to 0s and vice versa
    //but represented in 2s complement


    printf("The AND result is %d\n", w3);
    printf("The OR result is %d\n", w4);
    printf("The XOR result is %d\n", w5);
    printf("The 2'scomplement of %d is %d", w0, w0_comp);

    return 0;
}
