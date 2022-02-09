#include <stdio.h>
#include <stdlib.h>

static int m; //Default value = 0, cannot extern to other files

int fun(){
    static int count = 0; //allocated on the heap
    int localVar = 0;

    printf("automatic =%d, static = %d\n", localVar, count);

    localVar++;
    count++;
    return count;
}


int main()
{
    for (int i= 0; i < 5; i++)
    {
        fun(); // count retains the value (the last output of count)
    }


    return 1;
}
