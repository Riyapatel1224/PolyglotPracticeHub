/*
    Author : Riya Patel
    DOC : 19 June,2023
    Objective : prime number in between user inputed number
*/

#include <stdio.h>
void main()
{
    int f, l, p, c, flag = 1;
    printf("enter the starting number: ");
    scanf("%d", &f);
    printf("enter the last number: ");
    scanf("%d", &l);

    for (int i = f; i <= l; i++)
    {
        flag = 1;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag == 1)
        {
            printf("\n%d is prime", i);
        }
        else
        {
            printf("\n%d is not prime", i);
        }
    }
}