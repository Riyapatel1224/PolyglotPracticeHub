/*
    Author: Riya Patel
    Doc: 8, May 2023
    Objective: Straight Diamond
*/
#include <stdio.h>
int main()
{
    int value, v, i, j, r, k, l;

    printf("Enter the height of pyramid: ");
    scanf("%d", &r);
    printf("Enter a value: ");
    scanf("%d", &value);

    for (int v = 1; v <= value; v++)
    {

        for (int i = 0; i <= r; i++)
        {
            for (int j = r; j >= i; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < i; k++)
            {
                printf(" *");
            }
            printf("\n");
        }

        for (int i = 0; i <= r; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (int k = r; k > i; k--)
            {
                printf(" *");
            }
            printf("\n");
        }
    }
}