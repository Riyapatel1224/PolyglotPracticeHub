/*
    Author: Riya Patel
    Doc: 8, May 2023
    Objective: Straight Diamond
*/
#include <stdio.h>
void main()

{

    int i, j, k;
    i = 0;
    while(i<=5)
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
            printf(" *");
            k++;
        }
        printf("\n");
        i++;
    }
    
}