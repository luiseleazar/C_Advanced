#include <stdio.h>
#include <stdlib.h>

#define SUM(a,b) (a) + (b)
#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define IS_UPPER(x) (x >= 'A' && x <= 'Z')
#define IS_LOWER(x) (x >= 'a' && x <= 'z')

int main()
{
    //Variables
    int a, b;
    char ch;

    //Asking the user to enter values
    printf("Enter number a\n");
    scanf("%d", &a);
    printf("Enter number b\n");
    scanf("%d", &b);
    printf("Enter a character to check if its lower case\n");
    scanf("%s", &ch);

    //Macros invoke
    printf("The result of %d + %d = %d\n", a, b, SUM(a, b));

    printf("The square of %d is %d\n", a, SQUARE(a));

    printf("The cube of %d is %d\n", b, CUBE(b));

    if (IS_LOWER(ch)){
        printf("%c is lower case\n", ch);
    }
    else {
        printf("%c is upper case\n", ch);
    }


    return 0;
}
