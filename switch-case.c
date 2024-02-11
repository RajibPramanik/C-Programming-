#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a':
            printf("It is a vowel");
            break;
        case 'e':
            printf("It is a vowel");
            break;
        case 'i':
            printf("It is a vowel");
            break;
        case 'u':
            printf("It is a vowel");
            break;
        default:
            printf("It is not a vowel");
            break;        
    }
    switch(ch)
    {
        case 'A':
            printf("It is a vowel");
            break;
        case 'E':
            printf("It is a vowel");
            break;
        case 'I':
            printf("It is a vowel");
            break;
        case 'O':
            printf("It is a vowel");
            break;
        case 'U':
            printf("It is a vowel");
            break;
        default:
            printf("\nIs is a consonant\nThank You");
    }
}