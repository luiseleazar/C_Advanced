#include <stdio.h>
#include <stdlib.h>


int main()
{
    //int putchar(int c)
    //it allows you output a message one character at at time
    char string[] = "Hello Luis Nunez \nEngineer";
    int i = 0;
    while( string[i] != '\0')
    {
        //Prints everything but the '\n'
        if(string[i] != '\n')
            putchar(string[i]);
        ++i;
    }

    return 0;
}
