/*
    Author: Riya Patel
    DOC: 30, May 2023
    Objective: reverse number
*/

#include<stdio.h>
void main()
{
    int num,rem;
    printf("Enter a numeber: ");
    scanf("%d", &num);
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        printf("%d", rem);
    }
    
}