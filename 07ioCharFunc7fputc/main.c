#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Its a file handling function which is used to write a character into a file
    // moves the file pointer position to the next location to write the character
    //Function structure int fputc(int ch, FILE*stream)

    FILE *pFILE = NULL;
    char c = '\0';

    pFILE = fopen("myFile.txt", "w");

    if (pFILE != NULL)
    {
        //Puts all the alphanumeric chars that are capitalized into our pFILE
        for(c = 'A'; c <= 'Z'; c++)
            fputc(c,pFILE);
        fclose(pFILE);
    }


    return 0;
}
