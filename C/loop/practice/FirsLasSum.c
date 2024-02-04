/*
    Author: Riya Patel
    Doc: 22, Jun 2023
    Objective: sum of first and last digit entered by the user;
*/

#include<stdio.h>
void main()
{
    int num,i,sum=0,l,f;
    printf("Enter a number: ");
    scanf("%d", &num);
    l = num % 10;
    while(num > 10)
    {
        num = num / 10;
    }
    f = num;
    sum = f + l;

    printf("\nSum = %d", sum);
}