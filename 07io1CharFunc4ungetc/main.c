#include <stdio.h>

int main()
{



    ///********ungetc()**********
    //fuction structure int ungetc(int ch, FILE *stream)
    char ch = 0;
    while(isspace(ch = (char)getchar()));//Read as long as there are space
    ungetc(ch,stdin);//put bacj the nonspace char

    printf("Char is %c\n", getchar());
}
