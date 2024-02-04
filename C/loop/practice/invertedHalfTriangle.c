/*
    Author: Riya Patel
    Doc: 17, May 2023
    Objective: inverted triange
*/
#include <stdio.h>
int main()
{
    int i, j;
    i = 5;
    while(i>=1)
    {
        j = 1;
        while(j<=i)
        {
            printf(" %d",j);
            j++;
        }
        i--;
        printf("\n");
    }
    printf("\n");
}