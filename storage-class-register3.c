#include<stdio.h>
#include<conio.h>
void main()
{
    register int a=1;
    printf("%d ",a);
    registerF();
}
void registerF()
{
   register int a=1;
   a=a+2;
   printf("%d ",a);
}