#include <stdio.h>
#include <conio.h>
struct student
{
    int roll;
    char name[50];
    char address[50];
    float fees;
};

void main()
{
    struct student s1;
    printf("Enter student roll no: ");
    scanf("%d", &s1.roll);

    printf("Enter student name: ");
    scanf("%s", &s1.name);

    printf("Enter student address: ");
    scanf("%s", &s1.address);

    printf("Enter student fees: ");
    scanf("%f", &s1.fees);

    printf("\nstudent description\n");
    printf("\nRoll no: %d", s1.roll);
    printf("\nName: %s", s1.name);
    printf("\nAddress: %s", s1.address);
    printf("\nFees: %f", s1.fees);
}