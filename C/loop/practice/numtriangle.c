/*
    Author: Riya Patel
    Doc: 17, May 2023
    Objective: number triangle
*/
#include <stdio.h>
int main()
{
    int i, j;
    i = 6;
    while (i >= 0)
    {
        printf(" ");
        i--;
        j = 1;
        while (j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
    }
}
