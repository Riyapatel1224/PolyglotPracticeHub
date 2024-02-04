/*
    Author: Riya Patel
    Doc: 20, June 2023
    Objective: print square rows and cols
*/

#include<stdio.h>
void main()
{
    int r, c;
    printf("Enter the value of rows: ");
    scanf("%d", &r);
    printf("Enter the value of column: ");
    scanf("%d", &c);

    for (int i = 0; i < r;i++)
    {
        for (int j = 0; j < c;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
