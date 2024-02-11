#include<stdio.h>
#include<conio.h>
struct student
{
    int sroll;
    char sname[20];
};
int main()
{
    int a[5], i;
    int *pt = a;
    struct student s, *p;
    p = &s;
    printf("Enter roll no: ");
    scanf("%d", &p->sroll);
    printf("Enter student name: ");
    scanf("%s", p->sname);
    printf("Enter five numbers:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of index a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("All input information:\n");
    printf("Roll.no: %d", p->sroll);
    printf("\nName: %s", p->sname);
    printf("\nInput value:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *pt);
        pt++;
    }
}
