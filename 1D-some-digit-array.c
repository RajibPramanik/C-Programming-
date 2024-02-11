#include<stdio.h>
void main()
{
    int n, a[50], i, sum=0;
    printf("Enter how many number you want to add:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter value:%d ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Sum of the numbers: ");
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("%d", sum);
}
