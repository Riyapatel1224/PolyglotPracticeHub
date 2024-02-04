/*
    Author: Riya Patel
    Doc: 10, May 2023
    Objective: factorial
*/

#include<stdio.h>
int main()
{
    int n,sum=1,i=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum = sum * i;
        i++;
    }
    printf("%d", sum);

}
