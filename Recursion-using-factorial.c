#include<stdio.h>
int factorial(int);
void main()
{
    int n;
    printf("Enter a number finding a factorial: ");
    scanf("%d",&n);
    factorial(n);
    printf("Factorial of %d = %d",n,factorial(n));
}
int factorial(int n)
{
    if(n<=1)
        return 1;
    else
        return(n*factorial(n-1));
}