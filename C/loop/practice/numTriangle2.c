/*
    Author: Riya Patel
    Doc: 17, May 2023
    Objective: number triangle
*/
#include<stdio.h>
int main()
{
    int i, j;
    i = 1;
    while (i <= 5)
    {
        j = i;
        while (j >= 1)
        {
            printf("%d",j);
            j--;
        }
        printf("\n");
        i++;
    }
}
