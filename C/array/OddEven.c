/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : OddEven 
*/

#include <stdio.h>
void main()
{
    int size, odd[50], even[50], i, j = 0, num[50], k = 0;
    printf("Enter the number of element you want to enter.");
    scanf("%d", &size);
    printf("\nEnter the elements");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("\n%d", num[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[j] = num[i];
            j++;
        }
        else if (num[i] % 2 != 0)
        {
            odd[k] = num[i];
            k++;
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("\nEVEN: %d", even[i]);
    }
    for (i = 0; i < k; i++)
    {
        printf("\nODD: %d", odd[i]);
    }
}