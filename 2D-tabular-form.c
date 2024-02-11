#include <stdio.h>
void main()
{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter number [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nTabular from is\n");
    for (i = 0; i < 3; i++)
    {
        printf(" \n ");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
}

// include<stdio.h>
// void main()
// {
//      int a[3][3], i, j;
//     for (i = 0; i < 3; i++)

//     {

//         for (j = 0; j < 3; j++)

//         {

//             printf("Enter Number [%d][%d] : ", i + 1, j + 1);

//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("\nTabular form is \n");

//     for (i = 0; i < 3; i++)

//     {

//         printf("\n");

//         for(j = 0; j < 3; j++)

//         {

//             printf(" %d\t", a[i][j]);
//         }
//     }
// }