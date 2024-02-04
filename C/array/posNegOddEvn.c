/*
    Author : Riya Patel
    DOC : 21 June,2023
    Objective : Take 20 integer inputs from user and print the following:
                number of positive numbers
                number of negative numbers
                number of odd numbers
                number of even numbers
                number of 0 and number of prime numbers.
*/

#include <stdio.h>
void main()
{
    int a[20], c = 0, j, positive = 0, negative = 0, even = 0, prime = 0, odd = 0;
    for (int i = 0; i <= 5; i++)
    {
        printf("enter a number: ");
        scanf("%d", &a[i]);
    
    }
    for (int i = 0; i <= 5; i++)
    {
        if (a[i] > 0)
        {

            positive++;
        }
        if (a[i] < 0)
        {

            negative++;
        }
        if (a[i] % 2 == 0)
        {

            even++;
        }
        if (a[i] % 2 == 1)
        {

            odd++;
        }
        c = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {

            prime++;
        }
    }
    printf("\n\n Even %d", even);
    printf("\n Odd %d", odd);
    printf("\n Positive %d", positive);
    printf("\n Negative %d", negative);
    printf("\n prime %d", prime);
}