#include<stdio.h>
void main()
{
    float radius,area,perimeter;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    area = 3.14*radius*radius;
    perimeter = 2*3.14*radius;
    printf("\nArea of circle is: %f\n",area);
    printf("Perimeter of circle is: %f\n",perimeter); 
}