/*
    Author: Riya Patel
    Doc: 18, May 2023
    Objective: 1010 triangle
*/

#include <stdio.h>
int main()
{
    int i, j, k;
    i = 0;
    while (i <= 5)
    {
        j = 0;
        while (j <= i)
        {
            if (j % 2 == 0)
            {
                k = 1;
                printf("%d", k);
            }
            else
            {
                k = 0;
                printf("%d", k);
            }
            j++;
        }
        printf("\n");
        i++;
    }
}
