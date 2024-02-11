#include<stdio.h>
void main()
{
    int i,j,n;
    printf("How many to display Alphabetical pattern: ");
    scanf("%c",&n);
    for(i='A';i<='Z';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}