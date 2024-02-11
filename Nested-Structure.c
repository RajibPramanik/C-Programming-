#include<Stdio.h>
struct Book
{
    int id;
    char name[20];
    float price;
};
struct Student
{
    int roll;
    char sname[20];
    struct Book b;
};
void main()
{
    struct Student s;
    printf("Enter the Roll Number of student: ");
    scanf("%d", &s.roll);
    printf("\nEnter the Name of student: ");
    scanf("%s", s.sname);
    printf("\nEnter Book id: ");
    scanf("%d", &s.b.id);
    printf("\nEnter The book's Name: ");
    scanf("%s", &s.b.bname);
    printf("\nEnter Book Price: ");
    scanf("%f", &s.b.price);

    printf("\nBook & Student's Details \n");
    printf("\nBook id: %d", s.b.id);
    printf("\nBook Name: %s", s.b.bname);
    printf("\nBook price: %f", s.b.price);
    printf("\nStudent Roll No: %d", s.roll);
    printf("\nStudent Name: %s", s.sname);

}