/*
    Author: Riya Patel
    Doc: 1, June 2023
    Objective: maximum
*/
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter first num: ");
    scanf("%d", &a);
    printf("Enter second num: ");
    scanf("%d", &b);

    switch (a > b)
    {
    case 0:
        printf("b is greatest");
        break;

    case 1:
        printf("a is greatest");
        break;
    }
}
