/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : posiNeg
*/

#include<stdio.h>
void main()
{
    int size, neg[50], pos[50], i, n=0,num[50],p=0;
    printf("Enter the number of element you want to enter.");
    scanf("%d", &size);
    printf("\nEnter the elements");
    for (i = 0; i < size;i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("\n%d", num[i]);
    }
    for (i = 0; i < size;i++)
    {
        if(num[i]<0)
        {
            neg[n] = num[i];
            n++;
        }
        else if(num[i]>0)
        {
            pos[p] = num[i];
            p++;
        }
    }
    for (i = 0; i < n;i++)
    {
        printf("\nNEGATIVE: %d", neg[i]);
    }
    for (i = 0; i < p; i++)
    {
        printf("\nPOSITIVE: %d", pos[i]);
    }
}