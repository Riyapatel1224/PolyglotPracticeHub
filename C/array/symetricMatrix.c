/*
    Author : Riya Patel
    DOC : 14 July,2023
    Objective : symetrix matrix
*/

#include<stdio.h>
void main()
{
    int i, j, a, b;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    int arr[a][b];
    for (int i = 0; i < a;i++)
    {
        for (int j = 0; j < b;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(arr[i]==0)
            {
                
                for (int i = 0; i < a; i++)
                {
                    printf("%d", i);
                }
            }
            else
            {
                printf("%d", arr[i][j]);
            }
            
        }
        printf("\n");
    }
}

// 1 2 3
// 2 4 5
// 3 5 6