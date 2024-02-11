#include<stdio.h>
#include<conio.h>
static int a = 10;
static int b = 20;
void sum()
{
    printf("%d %d \n",a,b);
    a++;
    b++;
}
void main()
{
    int i;
    for (i = 0;i < 3;i++)
    {
        sum();
    }
}