#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("Addition is:%d\n",c);
    c = a-b;
    printf("Subtraction is:%d\n",c);
    c = a*b;
    printf("Multiplication is:%d\n",c);
    c = a/b;
    printf("Division is:%d",c);
}