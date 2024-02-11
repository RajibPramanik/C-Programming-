#include<stdio.h>
void main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("%d is %s\n",number,(number %2 == 0) ? "even":"odd");
    printf("Thank you");
}
