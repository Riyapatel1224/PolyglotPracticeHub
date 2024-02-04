/*
    Author : Riya Patel
    DOC : 26 July,2023
    Objective : determinent of matrix

    00 01 02
    10 11 12
    20 21 22
*/

#include <stdio.h>
int r = 3;
void main()
{

    int a[r][r], i, j, k, mul = 0;
    printf("\nEnter the matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        mul = 0;
        for (j = 1; j < r; j++)
        {
            mul = a[0][j] * ((a[1][i] * a[2][j]) - (a[1][j] * a[2][i]));
        }
        printf("\n%d", mul);
    }
}