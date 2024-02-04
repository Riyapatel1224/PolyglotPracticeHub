/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : interchange matrix
*/

#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], i, j, add,temp;
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
            temp = a[0][0];
            a[0][0] = a[0][2];
            a[0][2] = temp;
            
            temp = a[2][0];
            a[2][0] = a[2][2];
            a[2][2] = temp;
            
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
}