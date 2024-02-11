#include<stdio.h>
void main()
{
    char str1[20];
    char str2[20];
    printf("Enter text :");
    gets(str1);
    printf("Reverse of the text : %s",strcpy(str2,str1));
}