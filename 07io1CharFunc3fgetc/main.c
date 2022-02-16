#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///*******fgetc()*************
    //Reads a character from a file
    //function structure int fgetc(FILE *fp)
    FILE *fp = NULL;
    char c = '\0';
    fp = fopen("myFile.c", "r"); //opening an existing file
    if(fp == NULL){
        printf("Could not open file myFile.txt");
        return 1;
    }
    printf("Reading the file myFile.txt\n");

    while (1){
        c = fgetc(fp); //reading the file
        if (c == EOF)
            break;
        printf("%c", c);
    }
    printf("Closing the file");
    fclose(fp);
    return 0;
    return 0;
}
