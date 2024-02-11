#include<stdio.h>

void main()
{
    int x,y,t;
    int *p1,*p2;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);
    p1 = &x;
    p2 = &y;
    printf("\n%d + %d = %d",*p1,*p2,*p1 + *p2);
    printf("\n%d - %d = %d",*p1,*p2,*p1 - *p2);
    printf("\n%d * %d = %d",*p1,*p2,(*p1) * (*p2));
    printf("\n%d / %d = %d",*p1,*p2,(*p1) / (*p2));
    (*p1)++;
    printf("\nAfter increment, x = %d", *p1);
    (*p2)--;
    printf("\nAfter decrement, y = %d", *p2);
    if (*p1 > *p2) 
    {
        printf("\n%d is greater than %d", *p1, *p2);
    }
    else if (*p1 < *p2)
    {
        printf("\n%d is less than %d", *p1, *p2);
    } 
    else 
    {
        printf("\n%d is equal to %d", *p1, *p2);
    }
}