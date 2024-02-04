/*
    Author : Riya Patel
    DOC : 27 June,2023
    Objective : HCF
*/

#include <stdio.h>
void main()
{
    int a, b, i, j;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    for (i = 0; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("\n%d", i);
        }
    }
    printf("\n---------------");
    for (j = 0; j <= b; j++)
    {
        if (b % j == 0)
        {
            printf("\n%d", j);
        }
    }
}