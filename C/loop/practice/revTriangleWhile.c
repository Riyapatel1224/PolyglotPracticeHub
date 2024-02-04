/*
    Author: Riya Patel
    DOC: 15, may 2023
    Objective: reverse triangle
*/

#include <stdio.h>
int main()
{
    int i = 0, j = 1;
    while (i <= 5)
    {
        j = 5;
        while (j >= i)
        {

            printf(" *");
            j--;
        }

        printf("\n");
        i++;
    }
}
