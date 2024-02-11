#include <stdio.h>
#include <conio.h>
struct students
{
    char name[50];
    char address[50];
    int roll;
    float fees;
};
void main()
{
    struct students s[1];
    int i;

    printf("Enter students information\n");

    for (i = 0; i < 100; i++)
    {
        printf("Enter the student's name: ");
        scanf("%s", s[i].name);

        printf("Enter the student's address: ");
        scanf("%s", s[i].address);

        printf("Enter the student's roll no: ");
        scanf("%d", &s[i].roll);

        printf("Enter the student's fees: ");
        scanf("%f", &s[i].fees);
    }

    printf("\nStudents Information\n");

    for (i = 0; i < 100; i++)
    {
        printf("\nName: %s", s[i].name);
        printf("\nAddress: %s", s[i].address);
        printf("\nRoll no: %d", s[i].roll);
        printf("\nFees: %f", s[i].fees);
    }
}