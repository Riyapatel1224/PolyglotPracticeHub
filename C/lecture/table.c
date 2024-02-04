/*
    Author: Riya Patel
    Doc: 24, May 2023
    Objective: table
*/
#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the number : ");
    scanf("%d", &n);
    i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
}