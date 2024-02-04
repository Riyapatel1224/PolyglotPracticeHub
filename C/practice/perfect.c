/*
    Author : Riya Patel
    DOC : 27 June,2023
    Objective : perfect number or not
*/
#include<stdio.h>
void main()
{
    int num, i, j,sum=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (i = 0; i < num;i++)
    {
        if(num%i==0)
        {
            printf("\n%d", i);
            sum = sum + i;
        }
    }
    if(sum==num)
    {
        printf("\nIt is perfect number");
    }
    else
    {
        printf("\nIt is not a perfect number");
    }
}