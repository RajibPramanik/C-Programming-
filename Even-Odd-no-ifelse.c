#include<stdio.h>
void main()
{
    int n = 2;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2 == 0)
    {
        printf("Even number is: %d",n);
    }
    else
    {
        printf("Odd number is: %d",n);
    }
}