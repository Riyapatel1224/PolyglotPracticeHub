/*
    Author: Riya Patel
    Doc: 25, May 2023
    Objective: maximum of 3 values
*/

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is maximum");
        }
        else
        {
            printf("c is maximun");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is maximum");
        }
        else
        {
            printf("c is maximun");
        }
    }
}
