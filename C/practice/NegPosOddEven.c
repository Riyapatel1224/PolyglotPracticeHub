/*
    Author : Riya Patel
    DOC : 5, June 2023
    May 2023 Objective : odd even positive and negative
*/

#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        if (a >= 0)
        {
            printf("\na is even");
            printf("\na is positive");
        }
        else
        {
            printf("\na is even");
            printf("\na is negative");
        }
    }
    else
    {
        if (a >= 0)
        {
            printf("\na is odd");
            printf("\na is positive");
        }
        else
        {
            printf("\na is odd");
            printf("\na is negative");
        }
    }
    
}