#include <stdio.h>
#include <stdlib.h>

int main()
{
    //count number of words and chars in a file
    int words = 1, letters = 0;
    FILE *fp = NULL;

    char c = '/0';
    fp = fopen("myChallenge.txt", "r");
    if(fp == NULL){
        printf("Could not open file myFile.txt");
        return 0;
    }
    printf("Reading the file myChallenge.txt\n");

    c = getc(fp);
    while(c != EOF)
    {
        if(c == ' ' || c == '\n')
            words++;
        else{
            letters++;
        }
        c = getc(fp); //reading file
    }
    printf("There are %d letters in file\n", letters);
    printf("There are %d words in file\n", words);
    printf("Closing file\n");
    fclose(fp);

    return 0;
}
