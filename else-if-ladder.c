#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>b && a<c && a>d && a>e)
        printf("Greatest number is: %d",a);
    else if(b>c && b>d && b>e)
        printf("Greatest number is: %d",b);
    else if(c>d && c>e)
        printf("Greatest number is: %d",c);
    else if(d>e)
        printf("Greatest number is: %d",d);
    else 
        printf("Greatest number is: %d",e);
}