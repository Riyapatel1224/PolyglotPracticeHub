/*
    Author : Riya Patel
    DOC : 20 June,2023
    Objective : palidrum
*/

#include<stdio.h>
int main()
{
    int num,rev=0,r,rem,n1;
    printf("Enter a number : ");
    scanf("%d", &num);
    n1 = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("\nrev = %d", rev);
    
    if (rev == n1)
    {
        printf("\nIt is palidrum number");
    }
    else
    {
        printf("\nIt is not a palidrum number");
    }
}