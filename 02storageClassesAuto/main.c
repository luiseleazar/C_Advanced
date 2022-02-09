#include <stdio.h>
#include <stdlib.h>

//auto is seldon used
//Local variables are auto (storage class) for default

int main()
{
    int x; //local variable, same as auto int x

    int m;
    scanf("%d", &m);
    {
        int i; //both m and i in scope
        int n = 5;

        for(i = m; i < n; i++){
            //int i; redefinition error
        }
    }


    return 0;
}

char *myFunction()
{
    char x[] = "apple"; // x is allocated on the stack when the function is entered

    return x;
}

int func_name()
{
    int y; //local variable

    return y;

}
