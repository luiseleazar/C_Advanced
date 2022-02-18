#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main()
{
    //reads an entire line from a stream
    //structure ssize_t getline(char**buffer, size_t*size, FILE*stream)

    char *buffer = NULL;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char*)malloc(bufsize * sizeof(char));

    if (buffer == NULL)
    {
        exit(1);
    }

    printf("Type something: ");

    ///getline() DOES NOT EXIST MinGW
    characters = getline(&buffer, &bufsize, stdin);

    printf("%zu characters were read\n", characters);
    printf("You typed: '%s'\n", buffer);
    return 0;
}
