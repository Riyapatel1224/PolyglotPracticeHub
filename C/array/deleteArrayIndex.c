/*
    Author : Riya Patel
    DOC : 25 June,2023
    Objective : delete the array index
*/

#include <stdio.h>
void main()
{
    int arr[5], i, in,n=5;
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", arr[i]);
    }
    printf("\nEnter a index you want to delete : ");
    scanf("%d", &in);

    for (int i = n; i < in; i++)
    {
        if(arr[i]==in)
        {
            break;
        }
    }
    for (int i = in-1; i <= n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (i = 0; i < n;i++)
    {
        printf("\n%d", arr[i]);
    }
}