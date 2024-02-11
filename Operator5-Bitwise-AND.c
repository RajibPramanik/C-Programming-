#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    c=a&b;
    printf("After Bitwise AND operator: %d\n", c);
}


