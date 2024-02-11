// With-out return-type with argument
#include<stdio.h>
void addition(int a, int b);
int main() {
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    addition(a, b);
    return 0;
}

void addition(int a, int b) {
    int sum = a + b; // Calculate the sum
    printf("The addition of %d and %d is : %d", a, b, sum);
}
