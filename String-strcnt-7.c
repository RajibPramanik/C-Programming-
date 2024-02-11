#include<stdio.h>
void main()
{
    char str1[20];
    char str2[20];
    int res;
    printf("Enter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    res = strcmp(str1,str2);
    printf("%d",res);
}