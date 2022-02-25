#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

///WRONG WAY
/*As I am passing a single pointer
as a function parameter, the function
creates a copy of the pointer;
The function changes the address/value but
in the copy pointer and not in the calling scope

What we need to do is something like "call by reference"
but with pointers
*/

void foo(int *ptr)
{
    int a = 5;
    ptr = &a;

    ///better  way?
    //I change the value the pointer is pointing to
    //*ptr = a;

}
int main()
{
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    foo(ptr);

    printf("%d\n", *ptr);
    return 0;
}
