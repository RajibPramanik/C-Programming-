#include<stdio.h>
void main()
{
    int a = 5;
    int *p;      // pointer variable
    int **pt;    // pointer to pointer
    int ***ptr;  // pointer to pointer to pointer
    
    p = &a;
    pt = &p;
    ptr = &pt;
    printf("Address of a: %u\n", &a);
    printf("Value of a: %d\n", a);
    printf("Address held by pt: %u\n", &pt);
    printf("Value held by pt: %u\n", *pt);
    printf("Address held by ptr: %u\n", &ptr);
    printf("Value held by ptr: %u\n", **ptr);
}



