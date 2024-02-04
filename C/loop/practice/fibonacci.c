/*
    Author: Riya Patel
    Doc: 22, Jun 2023
    Objective: fibonacci 
*/

#include<stdio.h>
void main()
{
    int n, i,temp,a=0,b=1,c=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 0; i <= n;i++)
    {
        
        printf("\n%d", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n FIBONACCI = %d", c);
}