#include<stdio.h>
void main()
{
    int a;
    char name[20];
    FILE *fp;
    fp=fopen("new.doc","w");
    printf("Enter name :");
    scanf("%s",&name);
    printf("Enter roll :");
    scanf("%d",&a);
    fscanf(fp,"%s%d",&name,&a);
    fprintf(fp,"%s\n%d",name,a);
    fclose(fp);
    fp=fopen("new.doc","r");
    fscanf(fp,"%s%d",&name,&a);
    printf("name is :%s",name);
    printf("\nroll is :%d",a);
}