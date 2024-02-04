/*
    Author : Riya Patel
    DOC : Mon 28 ,Aug
    Objective : swaping 2 values
*/

#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    int *p = &a, *p1 = &b;
    temp = *p;
    *p = *p1;
    *p1 = temp;
    printf("\nEnter the value of a: %d",a);
    printf("\nEnter the value of b: %d",b);
}