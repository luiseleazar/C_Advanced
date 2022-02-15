#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Bitwise shifting
    //left-shift operator <<
    //The left operands value is moved by the numbers of bits specified by the rigth operand

    //rigth-shift operator >>
    //The left operands value is moved right by the number of bits specified by the right operand

    // int is 32 bits: 31 0's...1

    int w1 = 138; // 0000 0000 0000 0000 0000 0000 1000 1010
    int left_op  = 0;
    int right_op = 0;

    left_op  = w1 << 1; // 0000 0000 0000 0000 0000 0001 0001 0100 equals to 276
    right_op = w1 >> 2; // 0000 0000 0000 0000 0000 0000 0010 0010 equals to 34
    printf("The result of left operand to %d is %d\n", w1, left_op);
    printf("The result of right operand to %d is %d\n", w1, right_op);
    return 0;
}
