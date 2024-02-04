/*
    Author: Riya Patel
    DOC: 15, may 2023
    Objective: triangle
*/

#include <stdio.h>
int main()
{
    int i=1,j=1;
    while(i<=5)
    {
        j = 1;
        while (j <= i)
        {
            
            printf("*");
            j++;
        }
        
        printf("\n");
        i++;
    }

}