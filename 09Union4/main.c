#include <stdio.h>
#include <stdlib.h>
union student {
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};
int main()
{
    union student student1, student2;

    ///student 1
    student1.letterGrade = 'B',
    student1.roundedGrade = 9;
    student1.exactGrade = 9.1;
    //this is a wrong way to operate unions
    printf("Student 1\n");
    printf("The letter grade is %c\n", student1.letterGrade);
    printf("The rounded grade is %d\n", student1.roundedGrade);
    printf("The exact grade is %f\n", student1.exactGrade);


    ///student 2
    printf("\nStudent 2\n");
    student2.letterGrade = 'A';
    printf("The letter grade is %c\n", student2.letterGrade);

    student2.roundedGrade = 10;
    printf("The rounded grade is %d\n", student2.roundedGrade);

    student2.exactGrade = 9.9;
    printf("The exact grade is %f\n", student2.exactGrade);
    return 0;
}
