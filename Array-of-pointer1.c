#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={10,20,30,40,50};
    int *p = a;
    printf("\nThe address of a: %u",a);
    printf("\nThe address of a: %u",&a);
    printf("\nAddress of p: %u",p);
    printf("\nAddress is: %u",&a[0]);
    printf("\nValue is: %d",a);
    printf("\nValue is: %d",*p);
    printf("\nValue is: %d",*(p));
    printf("\nValue is: %d",*(&a[0]));
}