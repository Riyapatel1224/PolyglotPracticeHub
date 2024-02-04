/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : check the matrix are same or not
*/

#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], i, j,count=0;
    printf("\nEnter a matrix : ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
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
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(a[i][j]==b[i][j])
            {
                count++;
            }
        }
        
    }
    if(count==9)
    {
        printf("\nmatrix are same");
    }
    else
    {
        printf("\nNot same");
    }
}