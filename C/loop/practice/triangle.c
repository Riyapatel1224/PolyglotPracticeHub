/*
    Author: Riya Patel
    DOC: 4, may 2023
    Objective: triangle
*/

#include <stdio.h>
void main()
{
    
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 5; j >= i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}