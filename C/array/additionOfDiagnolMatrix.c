/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : addition of diagonal matrix
*/

#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], i, j,add;
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
    add = a[0][0] + a[1][1] + a[2][2];
    printf("Add = %d", add);
}