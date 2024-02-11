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
    struct student s[10];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter the number,name and price of book: ");
        scanf("%d%s%f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\nStudents Information\n");
    printf("\nRoll \tName \tMarks");
    
    for(i = 0; i < 5; i++)
    {
        printf("\n%d \t%s \t%.2f", s[i].roll, s[i].name, s[i].marks);
    }
}