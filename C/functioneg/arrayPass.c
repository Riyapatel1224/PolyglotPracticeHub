/*
    Author : Riya Patel
    DOC : 18 july,2023
    Objective : pass array
*/
#include<stdio.h>
void arr(int a[5])
{
    for (int i = 0; i < 5;i++)
    {
        printf("\n %d", a[i]);
    }
}
void main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("\n %d", &a[i]);
    }
    arr(a);
}