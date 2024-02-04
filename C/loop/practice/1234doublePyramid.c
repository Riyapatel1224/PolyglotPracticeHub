/*
    Author: Riya Patel
    Doc: 22, May 2023
    Objective: Straight and upside down triangle
*/
#include <stdio.h>
void main()
{
    int i, j, k;
    i = 0;
    while (i <= 5)
    {
        j = 1;
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }

    i = 4;
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i--;
    }
}
