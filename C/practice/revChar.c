/*
    Author: Riya Patel
    DOC: 30, May 2023
    Objective: reverse character
*/

#include<stdio.h>
void main()
{
    char a, b, c,temp;
    printf("Enter 3 character: ");
    scanf("%c%c%c", &a, &b, &c);
    printf("user entered: %c %c %c", a, b, c);

    temp = a;
    a = c;
    c = temp;

    printf("\nReversed characters are : %c %c %c ", a,b,c);
}
