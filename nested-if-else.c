#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
        {
            printf("Greatest number is: %d",a);
        }
        else
        {
            printf("Greatest number is: %d",c);
        }
    }
    else
    {
        if(b >c)
        {
            printf("Greatest number is: %d",b);
        }
        else
        {
            printf("Greatest number is: %d",c);
        }
    }
}