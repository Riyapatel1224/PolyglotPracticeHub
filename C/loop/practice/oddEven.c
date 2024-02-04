/*
    Author: Riya Patel
    Doc: 11, May 2023
    Objective:odd,Even ,addition of 50 
*/

#include <stdio.h>
int main()
{
    int i=1,sum=0;
    while (i<50)
    {
        i++;
        if (i % 2 == 0)
        {
            printf("\neven : %d",i);
        }
        else
        {
            printf("\nodd : %d",i);
        }
        sum = sum + i;
    }
    printf("\n%d", sum);
}