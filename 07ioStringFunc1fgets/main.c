#include <stdio.h>
#include <string.h>


int main()
{
    ///NEVER INVOKE THE gets() FUNCTION
    //reads a line from std in
    //reads until a terminating newline or EOF
    //function structure char*gets(char*str)

    ///BETTER USE fgets()
    //Used for reading entire lines of data form a file/stream
    //function structure char *fgets(char*buffer, int n, FILE*stream)
    //retains the newline character (unlike gets)
    //Only use this if you are certain the data read cannot contain a null char
    char buf[255];
    int ch = '\0';
    char *p;

    if(fgets(buf, sizeof(buf), stdin))
    {
        p = strchr(buf, '\n'); //If I enter a newline,
        if (p)                 //
        {                      //
            *p = '\0';         //I set a EOF
        }
        else
        {
            while (((ch = getchar()) != '\n') && !feof(stdin) && !ferror(stdin));
        }
    }
    else{
        /* fgets failed, handle eorror*/
    }
    printf("Our buffer contains : %s", buf);

    return 0;
}
