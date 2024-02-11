#include<stdio.h>
void main()
{
    char name[20];
    printf("Enter text :");
    gets(name);
    printf("Reverse of thr text :%s",strrev(name));
}