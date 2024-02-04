/*
    Author : Riya Patel
    DOC : 22 June,2023
    Objective : series of number entered by user
*/

#include <stdio.h>
void main()
{
    int n, i, sum = 0,t=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d", t);
        
        if(i<n)
        {
            printf(" + ");
        }
        sum = sum + t;
        t = (t * 10) + 1;
    }
    printf("\n %d", sum);
}