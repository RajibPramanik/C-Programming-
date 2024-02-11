#include<stdio.h>
void main()
{
    int a;
    FILE *fp;
    fp=fopen("file1.doc","w");
    printf("Enter a number :");
    scanf("%d",&a);
    putw(a,fp);
    fclose(fp);
    fp=fopen("file1.doc","r");
    a = getw(fp);
    printf("Entered num :%d",a);
    fclose(fp);
    
}