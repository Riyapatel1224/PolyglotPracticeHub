/*
    Author: Riya Patel
    Doc: 8, May 2023
    Objective: pyramid
*/
#include <stdio.h>
int main()
{
    int i,v;
    printf("Enter the level of pyramid you want : ");
    scanf("%d", &v);
    for (int i = 0; i <= v; i++)
    {
        for (int j = v; j >= i; j--)
        {
            printf(" "); 
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

