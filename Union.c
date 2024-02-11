#include<stdio.h>
union student
{
    int sroll;
    float sfees;
    char sname[20];
}s;
void main()
{
    printf("Total memory provide by the  compiler : %d",sizeof(s));
}