/*
    Author: Riya Patel
    Doc: 19, May 2023
    Objective: 5 and 7 even or odd
*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("divide by 5");
        if (num % 2 == 0)
        {
            printf("\nnum is even");
        }
        else
        {
            printf("\nnumber is odd");
        }
    }
    if (num % 7 == 0)
    {
        printf("\ndivide by 7");
        if (num % 2 == 0)
        {
            printf("\nnum is even");
        }
        else
        {
            printf("\nnumber is odd");
        }
    }
    else{
        printf("\nnot divisible by 5 or 7");
    }
}