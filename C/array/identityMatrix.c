/*
    Author : Riya Patel
    DOC : 14 July,2023
    Objective : identity matrix
*/

#include<stdio.h>
void main()
{
    int r,c,a;
    printf("Enter the size of row you want: ");
    scanf("%d", &a);
    printf("\nEnter the size of column you want: ");
    scanf("%d", &c);
    int arr[a][c];
    for (int i = 0; i < a;i++)
    {
        for (int j = 0; j < c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
            
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i]<arr[j] || arr[i]>arr[j])
            {
                printf(" 0");
            }
            else
            {
                printf(" 1");
            }
        }
        printf("\n");
    }
    
}