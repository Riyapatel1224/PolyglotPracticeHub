/*
    Author: Riya Patel
    DOC: 6, June 2023
    Objective: leap year
*/

#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch (a > 0)
    {
    case 1:
        printf("number is positive");
        break;
    case 0:
        switch (a < 0)
        {

        case 1:
            printf("number is negative");
            break;
        case 0:
            printf("number is 0");
            break;
        
        }
        break;
    }
}