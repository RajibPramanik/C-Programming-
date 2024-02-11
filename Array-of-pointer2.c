#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i;
    int *p;
    for(i=0;i<10;i++)
    {
        printf("Enter the number: %d ",i+1);
        scanf("%d",&a[i]);
    }
    p = &a[0];
    printf("\nInformation\n");
    printf("\nIndex \tValue \tAddress");
    for(i=0;i<10;i++,p++)
    {
        printf("\n%d \t%d \t%u",i+1,*p,p);
    }
}