#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,n;
    printf("Enter how many number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0] = a[i];
        }
    }
    printf("Largest number is: %d",a[0]);
}