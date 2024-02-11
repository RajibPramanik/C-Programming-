#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],n,i;
    printf("Enter how many element you want to store: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element: %d ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}