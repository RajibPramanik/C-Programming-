#include<stdio.h>
void main()
{
    /*** Age
        Less then 10-> child
        18->children
        18-60->young man
        Above 60->old men***/
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age < 10)
    {
        printf("Child\n");
    }
    else if(age < 18)
    {
        printf("Just young");
    }
    else if(age <= 60)
    {
        printf("Yong man");
    }
    else
    {
        printf("old Men");
    }
}