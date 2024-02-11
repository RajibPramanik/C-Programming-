#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a > 0)
    {
        printf("\nPositive number is %d ",a);
    }
    if(a < 0)
    {
        printf("\nNegative number is %d ",a);
    }
}
