/*
    Author : Riya Patel
    DOC : 27 June,2023
    Objective : harmoic series
*/

#include <stdio.h>
void main()
{
    

float sum = 0,num, i, j;
    
    printf("Enter a number : ");
    scanf("%f", &num);
    for (i = 1; i <= num; i++)
    {
        sum = (1/i) + sum;
    }
    printf("\n%f", sum);
}