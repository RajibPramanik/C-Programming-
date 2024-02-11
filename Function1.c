// With-out return-type and with-out-argument
#include<stdio.h>
void addition(); // function prototype
void main()
{
    addition();
}
void addition()
{
    int a,b,c;
    printf("Enter the two number you want to add :");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("Addition is : %d",c);
}