/*
    Author: Riya Patel
    Doc: 20, June 2023
    Objective: normal 
*/

#include<stdio.h>
void main()
{
    int n;
    printf("enter a value: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}