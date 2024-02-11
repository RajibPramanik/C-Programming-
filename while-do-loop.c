#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter how many time to display your name: ");
    scanf("%d",&n);
    i = 1;
    while(i<=n)
    {
        printf("Hello-World\n");
        i++;
    }  
}