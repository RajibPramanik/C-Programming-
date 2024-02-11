#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n % 2 == 0)
        goto Even;
    else
        goto Odd;
    Even:
        printf("It is an even number");
        goto end;
    Odd:
        printf("It is an odd number");
        goto end;
    end:
        return 0;
}