#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
void main()
{
    struct student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter the name: ");
    scanf("%s", s.name);

    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    printf("\nstructure information\n");
    printf("\nRoll number: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nMarks: %f", s.marks);
}

