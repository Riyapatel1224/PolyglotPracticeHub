/*
    Author: Riya Patel
    Doc: 16, May 2023
    Objective:bend  diamond
*/
#include <stdio.h>
int main()
{
    int i, j, k;
    i = 1;
    while (i <= 5)
    {
        j = 5;
        while (j >= i)
        {
            printf(" ");
            j--;
        }
        k = 1;
        while (k <= i)
        {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }

    i = 0;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf(" ");
            j++;
        }
        k = 5;
        while (k >= i)
        {
            printf("*");
            k--;
        }
        printf("\n");
        i++;
    }
}
