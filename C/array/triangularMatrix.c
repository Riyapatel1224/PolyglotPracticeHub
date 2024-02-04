/*
    Author : Riya Patel
    DOC : 13 July,2023
    Objective : triangular matrix
*/

#include <stdio.h>
void main()
{
    int m[10][10], i, j,r,c;
    printf("Enter the number of rows : ");
    scanf("%d", &r);
    printf("\nEnter the number of column: ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(" %d", m[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n\nUPPER\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (m[i] < m[j])
            {
                printf(" 0");
            }
            else
            {
               
                printf(" %d", m[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("LOWER\n\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (m[i] > m[j])
            {
                printf(" 0");
            }
            else
            {

                printf(" %d", m[i][j]);
            }
        }
        printf("\n");
    }
}