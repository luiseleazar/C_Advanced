#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

double average(double v1, double v2, ...);
int main()
{
    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("Average = %.2f\n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Average = %.2f\n", average(1.0,2.0,0.0));
    printf("Average = %.2f\n", average((double)num2, v2, (double)num1, (double)num3, (double)num4, 0.0));

    return 0;
}
double average(double v1, double v2, ...)
{
   va_list parg;        //pointer to a variable a
   double sum = v1 + v2;//accumulate sum of the values
   double value = 0.0;  //argument value


   int count = 2;       //count of number of arguments
   va_start(parg,v2);    //Initialize argument poiter

   while((value = va_arg(parg, double)) != 0.0)
   {
       sum += value;
       ++count;
   }
   va_end(parg);

   return sum/count;
}
