#include<stdio.h>
#include<conio.h>
void main()
{
    void *p;
    int a=5;
    p = &a;
    printf("Type casting: %d",*(int *)p);
}