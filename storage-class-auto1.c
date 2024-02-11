#include<stdio.h>
#include<conio.h>
void main()
{
    auto int a=10;
    printf(" %d ",a);
    {
        int i;
        for(i=0;i<5;i++)
        {
            a=20;
            printf(" %d ",a);
        }
    }
    printf(" %d ",a);
}