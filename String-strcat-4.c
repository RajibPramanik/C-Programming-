#include<stdio.h>
void main()
{
    char str1[20];
    char str2[20];
    printf("Enter the first string: ");
    gets(str1);
    printf("\nEnter the second string: ");
    gets(str2);
    strcat(str1,str2);
    printf("%s",str1);
}