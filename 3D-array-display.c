#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, k;
    int a[3][2][3] = {
        {{1, 2, 3},{4, 5, 6}},
        {{7, 8, 9},{10, 11, 12}},
        {{13, 14, 15},{16, 17, 18}}
        };

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf(" %d ",a[i][j][k]);
            }
        }
    }
}