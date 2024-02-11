#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,fact=1;
    printf("Enter a number for finding a factorial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact =fact*i;
    }
    printf("factorial %d is %d",n,fact);
}