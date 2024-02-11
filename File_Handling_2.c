#include<stdio.h>
void main()
{
    FILE *fp;
    char name[20];
    fp =fopen("Hello.doc","w");
    printf("Enter a string :");
    scanf("%s",&name);
    fputs(name,fp);
    fclose(fp);
    fp =fopen("Hello.doc","r");
    fgets(name,20,fp);
    printf("Entered string is :%s",name);
    fclose(fp);
    
}