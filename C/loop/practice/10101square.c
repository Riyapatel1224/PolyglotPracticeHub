/*
    Author: Riya Patel
    Doc: 19, May 2023
    Objective: 1010 square
*/

#include <stdio.h>
int main()
{
    int i, j;
    i = 4;
    while (i >= 1)
    {
        j = 1;
        while (j <= 5)
        {
            printf("%d", (j + i) % 2);
            j++;
        }
        i--;
        printf("\n");
    }
}