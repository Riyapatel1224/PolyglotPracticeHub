/*
    Author: Riya Patel
    Doc: 9, May 2023
    Objective: BENDED SQURE 
*/

#include <stdio.h>
int main()
{
    int v;
    printf("Enter the value: ");
    scanf("%d", &v);
    for (int i = 0; i <= v; i++)
    {
        for (int j = v; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 7; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
