#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int a[3][3] = {{1,2,3},{10,20,30},{11,22,33}};
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

