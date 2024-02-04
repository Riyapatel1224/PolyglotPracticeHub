/*
    Author : Riya Patel
    DOC : 27 June,2023
    Objective : maximum number from 5 number
*/

#include <stdio.h>
void main()
{
    int arr[5], i, j;
    printf("Enter 5 number : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                break;
            }
            else
            {
                printf("\n%d", arr[i]);
            }
        }
    }
}