#include <stdio.h>
#include <stdlib.h>

int GCD(int max, int min);
int main()
{
    printf("%d",GCD(12,5));
    return 0;
}
int GCD(int max, int min)
{
    int result = 0;
    if (min != 0)
    {
        return GCD(min, max%min);
    }
    else{
        return max;
    }

}
