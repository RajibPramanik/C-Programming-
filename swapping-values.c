#include<stdio.h>
void main()
{
    // Variable 'Z' for temporary use for swapping values
    int x,y,z; 
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    z = x;
    x = y;
    y = z;
    printf("x=%d y=%d",x,y);
}