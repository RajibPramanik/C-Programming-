#include<stdio.h>
void main()
{
    int i,n,n1=0,n2=1,n3;
    printf("Enter how many terms of display fibonacci series: ");
    scanf("%d",&n);
    printf("fibonacci series:\n");
    printf("%d\t%d",n1,n2);
    for(i=0;i<=n-1;i++)
    {
        printf("%d",n3);
        n3 = n1+n2;
        printf("%d \t",n3);
        n1 = n2;
        n2 = n3;
    }
    printf("\n");
}