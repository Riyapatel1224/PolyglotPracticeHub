/*
    Author: Riya Patel
    DOC: 5, June 2023
    Objective: maximum possibilities of currency
*/

#include <stdio.h>
void main()
{
    char a;
    printf("Enter value of a : ");
    scanf("%c", &a);

    if (a >= 'a' && a <= 'z')
    {
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
    else if(a>='0' && a<='9')
    {
        printf("%c DIGIT",a);
    }

    else
    {
        printf("%c SPECIAL CHARACTER",a);
    }
}
