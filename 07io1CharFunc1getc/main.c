#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///*******getc()************
    //function structure int getc(FILE *stream)
    char ch = '\0';
    ch = getc(stdin); //read ONLY the first character
    printf("Read in char %c\n", ch);
    return 0;
}
