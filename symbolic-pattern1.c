#include<stdio.h>
void main()
{
    int i,j,n;
    printf("How many to display Symbolic pattern: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}