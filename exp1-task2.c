#include <stdio.h>
int main()
{
    
    int physics;
    int chem;
    int math;
    float avg;

    printf("Enter your Physics marks = ");
    scanf("%i",&physics);
    printf("\nEnter your Chemistry marks = ");
    scanf("%i",&chem);
    printf("\nEnter your Mathematics marks = ");
    scanf("%i",&math);

    avg = (physics + chem + math) / 3.0;
    printf("\nAdmission status = ");
    (avg >= 50) ? printf("You are eligible for admission \n") 
    : printf("You are not eligible for admission \n");
    return 0;
}