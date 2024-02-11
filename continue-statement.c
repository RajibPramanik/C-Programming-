#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter tha number: ");
    scanf("%d",&n);
    for(i =1;i<=10;i++)
    {
        if(i == 5)
        {
            continue; 
        }
        printf("%d\t",i);
    }
}