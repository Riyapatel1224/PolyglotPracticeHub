/*
    Author : Riya Patel
    DOC : 14 July,2023
    Objective : 3x3 matrix multiplication
*/
#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j,k,sum;
    printf("\nEnter the first matrix: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
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


    for (k = 0; k < 3;k++)
    {
        for (i = 0; i < 3; i++)
        {
            sum = 0;
            for (j = 0; j < 3; j++)
            {
                sum = sum + a[k][j] * b[j][i];
            }
            c[k][i] = sum;
        }
    }

    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 3;j++)
        {
            printf("\t %d", c[i][j]);
        }
        printf("\n");
    }
}
