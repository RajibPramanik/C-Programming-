#include <stdio.h>
#include<conio.h>
void main()
{
    int i, j, r, c;
    int a[100][100];
    printf("Enter row size: ");
    scanf("%d", &r);
    printf("Enter column size: ");
    scanf("%d", &c);
    for (i = 1; i <= r; i++) 
    {
        for (j = 1; j <= c; j++) 
        {
            printf("Enter the element of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements are:\n");
    for (i = 1; i <= r; i++) 
    {
        for (j = 1; j <= c; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}