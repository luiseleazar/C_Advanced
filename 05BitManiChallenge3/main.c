#include <stdio.h>
#include <stdlib.h>

long long convertDecimalToBinary(int n);
int main()
{
    int a, b;
    printf("Enter a number a \n");
    scanf("%d", &a);
    printf("Enter a number b \n");
    scanf("%d", &b);

    int compa_op, compb_op, and_op, or_op, xor_op, left_op, right_op;

    compa_op = ~(a);
    compb_op = ~(b);
    and_op = a & b;
    or_op = a | b;
    xor_op = a ^ b;
    left_op = a << 2;
    right_op = b >> 2;

    printf("The result of comp a is %lld\n", convertDecimalToBinary(compa_op));
    printf("The result of comp b is %lld\n", convertDecimalToBinary(compb_op));
    printf("The result in decimal of a && b is %d\n", and_op);
    printf("The result of a & b is %lld\n", convertDecimalToBinary(and_op));
    printf("The result in decimal of a || b is %d\n", or_op);
    printf("The result of a | b is %lld\n", convertDecimalToBinary(or_op));
    printf("The result of a ^ b is %lld\n", convertDecimalToBinary(xor_op));
    printf("The result of a << 1 is %lld\n", convertDecimalToBinary(left_op));
    printf("The result of b >> 2 is %lld\n", convertDecimalToBinary(right_op));
    return 0;
}
long long convertDecimalToBinary(int n){
   long long binaryNumber = 0;
   int remainder, i=1;

   while(n != 0) {
     remainder = n%2;
     n = n / 2;
     binaryNumber += remainder * i;
     i = i * 10;
   }

   return binaryNumber;
}
