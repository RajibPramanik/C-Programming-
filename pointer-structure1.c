#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
void main()
{
    int i, n;
    struct student *s, *t;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    s = (struct student *)malloc(n * sizeof(struct student));
    t = s;
    for (i = 0; i < n; i++, t++)
    {
        printf("Enter the name, marks: ");
        t->roll_no = i + 1;
        scanf("%s%f", t->name, &t->marks);
    }
     t = s;
    printf("\nStudents Information\n");
    printf("roll no. \tname \tmarks\n"); 

    for (i = 0; i < n; i++, t++)
    {
        printf("%d\t%s\t%f\n", t->roll_no, t->name, t->marks); 

    free(s);
}
}