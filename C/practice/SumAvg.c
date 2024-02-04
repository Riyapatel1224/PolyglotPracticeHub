/*
    Author : Riya Patel
    DOC : 20 June,2023
    Objective : enter the size of 10 digit and output sum and average
*/

#include<stdio.h>
void main()
{
    int sum, avg, num;

    for (int i = 0; i < 10;i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        sum = num + sum;
    }

    printf("\nSum: %d", sum);
    printf("\nAverage %d : ", sum / 10);
}