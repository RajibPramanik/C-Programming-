#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("B.Tech.slx", "w");

    if (fp == NULL) {
        printf("File doesn't exist or couldn't be created\n");
    } else {
        printf("Successfully Created\n");
        fclose(fp);
    }
    return 0;
}

