// With return-type and with-out-argument
#include<stdio.h>
int addition(); // prototype
void main()
{
    int result = addition(); //Function call
    printf("Addition is :%d",result);
}
int addition() //Function definations
{
    int a,b;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    return a+b;
}


