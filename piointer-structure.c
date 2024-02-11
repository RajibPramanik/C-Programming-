#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[20];
    float fees;
};
int main()
{
    struct student *p,s1;
    p = &s1;
    int i;
    printf("Enter student roll no: ");
    scanf("%d", &p->roll);
    printf("Enter student name: ");
    scanf("%s", p->name);
    printf("Enter student fees: ");
    scanf("%f", &p->fees);

    printf("\nStudents Information:\n");
    printf("Student Name: %s\n", p->name);
    printf("Student Roll no: %d\n", p->roll);
    printf("Student fees: %f\n", p->fees);
    return 0;
}