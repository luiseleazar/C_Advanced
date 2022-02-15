#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, position, newNum, bitStatus;

    //Input from the user
    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Enter the bit position to set (0-31): \n");
    scanf("%d", &position);

    //Right shift num, position times and perform bitwise AND with 1
    bitStatus = (num >> position) & 1;
    printf("The %d position is set to %d\n", position, bitStatus);

    //Set to 1
    newNum = (1 << position) | num;

    printf("Bit se successfully.\n\n");

    printf("Number before setting 1 to %d position: %d (in decimal)\n", position, num);
    printf("Number after setting 1 to %d position: %d (in decimal)\n", position, newNum);
    return 0;
}
