#include<stdio.h>
void swap(int, int); // Function Prototype
int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(a, b); //Actual argument
    return 0;
}
void swap(int a, int b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping values are: %d %d\n", a, b);
}



