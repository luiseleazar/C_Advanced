#include <stdio.h>
#include <stdlib.h>

int sum2d(int rows, int cols, int array2d[rows][cols])
{
    int r;
    int c;
    int tot = 0;

    for(r = 0; r < rows; r++)
        for(c = 0; c < cols; c++)
            tot += array2d[r][c];
    return tot;
}

void array(int size)
{
    char alpha[size];
    int x = 0;

    while(x<size){
        alpha[x] = 'A' + x;
        printf("%c\n", alpha[x]);
        x++;
    }
}
int main()
{
    //array(5);
    //array(20);
    //array(9);
    return 0;
}
