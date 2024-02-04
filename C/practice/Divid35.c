/*
    Author: Riya Patel
    DOC: 2, June 2023
    Objective: divide by 3 and 5
*/

#include <stdio.h>
void main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a % 5 == 0)
    {
        printf("\nFizz");
    }

    if (a % 3 == 0)
    {
        printf("\nBuzz");
    }
}
