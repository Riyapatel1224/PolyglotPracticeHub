/*
    Author Riya Patel
    Doc: 23, May 2023
    Objective: hollow square
*/
#include <stdio.h>
void main()
{
    int i, j;
    i = 0;
    while (i <= 5)
    {
        if ((i == 0) || (i == 5))
        {
            j = 0;
            while (j <= 5)
            {
                printf(" *");
                j++;
            }
           
        }
        else
        {
            j = 0;
            while (j <= 5)
            {
                if ((j >= 1) && (j <= 4))
                {
                    printf("  ");
                    j++;
                }
                else
                {
                    printf(" *");
                    j++;
                }
            }
        }
        printf("\n");
        i++;
    }
}