/*
    Author : Riya Patel
    DOC : 23 June,2023
    Objective : append 5 number and ask user to add another number in particular index
*/

#include <stdio.h>
void main()
{
    int a[5], ins,i, n, pos;
    printf("Enter a number of elements : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &a[i]);
    }
    printf("\nEnter a number you want to insert : ");
    scanf("%d", &ins);
    printf("\nEnter index you want to put it on : ");
    scanf("%d", &pos);
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = ins;
    n++;
    printf("\nArray after insertion: ");
    for (int i = 0; i <= n; i++)
    {
        printf("\n%d", a[i]);
    }
}