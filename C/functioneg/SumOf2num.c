/*
    Author : Riya Patel
    DOC : 18 july,2023
    Objective : psum of 2 number
*/

#include<stdio.h>
void sum(int a,int b,int sum)
{
    sum = a + b;
    printf("sum: %d", sum);
}
void main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a,b, a + b);
}