#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    int *p;
    printf("Enter the number you want to choice: ");
    scanf("%d",&x);
    p = &x;
    printf("\nValues:%d",*p);
    printf("\nMemory Address is:%u",p);
}