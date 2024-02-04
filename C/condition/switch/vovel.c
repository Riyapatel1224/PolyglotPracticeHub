/*
    Author:Riya Patel
    Doc:10, may 2023
    Objective: vowel or consonent
*/
#include <stdio.h>

void main()
{
    char a;
    printf("\nEnter a value: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':

    case 'U':
        printf("VOWEL");
        break;

    default:
        printf("CONSONENT");
        break;
    }
}