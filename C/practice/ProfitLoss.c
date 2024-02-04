/*
    Author : Riya Patel
    DOC : 1 June,2023
    May 2023 Objective : profit and loss
*/

#include <stdio.h>
void main()
{
    int p, l, b, s, t;
    printf("Enter the buying cost: ");
    scanf("%d", &b);
    printf("Enter the selling cost: ");
    scanf("%d", &s);

    l = s - b;
    if (l < 0)
    {
        printf("loss: %d", b-s);
    }
    else
    {
        printf("profit: %d", l);
    }
}