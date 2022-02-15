#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long convertDecimalToBinary(int n);
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%lld",convertDecimalToBinary(n));

    return 0;
}
long long convertDecimalToBinary(int n)
{
    long long bitNumber = 0;
    int i = 1;
    int remainder = 0;

    while(n!=0)
    {
        remainder = n%2;
        n /= 2;
        bitNumber += remainder*i;
        i *= 10;
    }
    return bitNumber;
}
