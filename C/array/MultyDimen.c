/*
    Author : Riya Patel
    DOC : 14 July,2023
    Objective : Multidimensional array
*/

#include<stdio.h>
void main()
{
    int a, b, c;
    printf("\nENter the value of a : ");
    scanf("%d", &a);
    printf("\nENter the value of b : ");
    scanf("%d", &b);
    printf("\nENter the value of c : ");
    scanf("%d", &c);
    int arr[a][b][c];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b;j++)
        {
            for (int k = 0; k < c;k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf(" %d", arr[i][j][k]);
            }
        }
        printf("\n");
    }
    printf("\n");
}