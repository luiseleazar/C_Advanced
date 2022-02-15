#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long n;
    printf("Enter a Binary number\n");
    scanf("%lld", &n);
    printf("%d to in decimal is %lld",n,bitDecimalConverter(n));

    return 0;
}
int bitDecimalConverter(long long number)
{
    int decimalNumber = 0, i = 0, remainder;
    while(number != 0)
    {
        remainder = number%10;
        number /= 10;
        decimalNumber += remainder*pow(2,i);
        i++;

    }
    return decimalNumber;
}
