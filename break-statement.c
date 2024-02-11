#include<stdio.h>
#include<conio.h>
void main() {
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= 10) 
    {
        if (i == 5) 
        {
            break;
        }
        printf("%d ", i);
        i++;
    }
}
