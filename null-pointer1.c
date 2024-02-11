#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5;
    int *p = NULL;
    printf("Address of a: %u \n",&a);
    printf("\nAddress of p: %u \n",&p);
    printf("\nAddress hold by p: %u \n",p);
}