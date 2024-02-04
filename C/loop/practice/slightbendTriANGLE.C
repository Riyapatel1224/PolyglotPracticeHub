/*
    Author: Riya Patel
    Doc: 8, May 2023
    Objective: BENDED TRIANGLE 
*/

#include <stdio.h>
int main()
{
   
    
        for (int i = 0; i <= 5; i++)
        {
            for (int j = 5; j >= i; j--)
            {
                    printf(" ");
            }
                for (int k = 5; k >= i; k--)
                {
                printf("*");
                }
            printf("\n");
            
        }
        
}
