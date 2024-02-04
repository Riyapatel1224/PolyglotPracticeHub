/*
    Author : Riya Patel
    DOC : 14 July,2023
    Objective : 3x3 matrix addition
*/
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\nEnter the first matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the seconf matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &b[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
}