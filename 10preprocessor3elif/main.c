#include <stdio.h>
#include <stdlib.h>

#define US 0
#define UK 1
#define FRANCE 2
#define GERMANY 3
#define COUNTRY US

int main()
{
    #if COUNTRY == US || COUNTRY == UK
        #define Greeting "Hello"
    #elif COUNTRY == FRANCE
        #define Greeting Bonjour
    #elif COUNTRY == GERMANY
        #define Greeting "Guten Tag"
    #else
        #define Greeting "Hola"
    #endif // CONTRY

    printf("The greeting is %s\n", Greeting);
    return 0;
}
