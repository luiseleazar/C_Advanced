#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf buf;

void error_recovery() {
    printf("Detected and uncoverable error\n");
    longjmp(buf,1);
}
int main ()
{
    while(1)
    {
        if (setjmp(buf)){
            printf("Back in main\n");
            break;
        }
        else{
            error_recovery();
        }
    }
    return 0;
}
