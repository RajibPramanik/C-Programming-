#include<stdio.h>
int fibonacci(int);
void main()
{
    int n,i;
    printf("How many terms to display fibonacci series: ");
    scanf("%d",&n);
    fibonacci(n);
    for(i=1;i<n;i++)
    {
        printf("%d\t",fibonacci(i));
    } 
}
int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n == 1)
        return 1;
    else 
        return(fibonacci(n-1) + fibonacci(n-2));
}