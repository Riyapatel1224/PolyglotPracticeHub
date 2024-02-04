/*
    Author : Riya Patel
    DOC : 18 july,2023
    Objective : average of 5 number
*/

#include<stdio.h>
int avg(int a,int b,int c,int d,int e)
{
    printf("AVERAGE: %d", (a + b + c + d + e) / 5);
}
void main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg(a, b, c, d, e);
}
