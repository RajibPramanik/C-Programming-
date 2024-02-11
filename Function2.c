// With return-type and with-argument
#include<stdio.h>
int addition(int,int);
void main()
{
    int a,b;
    printf("Enter the two number you want to add :");
    scanf("%d %d",&a,&b);
    addition(a,b);
    printf("%d",addition (a,b));
}
int addition(int m,int n)
{
    return (m+n);
}