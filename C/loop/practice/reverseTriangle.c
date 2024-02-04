/*
    Author: Riya Patel
    Doc: 8, May 2023
    Objective: reverse triangle
*/
#include<stdio.h>
void main()
{
    int value,j;
    printf("Enter a value: ");
    scanf("%d", &value);
    int i;
    for (int v = 1; v <= value; v++)
    {
        for (i = 0; i <= 5; i++)
        {
            for (int j = 5; j >= i; j--)
            {
                printf(" *");
            }
            printf("\n");
        }
        
    }
}
