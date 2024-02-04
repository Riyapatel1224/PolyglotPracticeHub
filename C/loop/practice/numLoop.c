/*
    Author: Riya Patel
    DOC: 4, may 2023
    Objective: number loop
*/

#include <stdio.h>
void main()
{
    for (int i = 0; i <= 5; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {   
            if(i%2==0)
            {
                i++;
            }
            else
            {
                    printf(" %d ", i);
            }
            
        }
        printf("\n");
    }
}