/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : create matrix
*/

#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    printf("\nEnter a matrix : ");

    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}