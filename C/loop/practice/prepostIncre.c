/*
    Author: Riya Patel
    DOC: 12, may 2023
    Objective: pre and post increment 
*/

#include <stdio.h>
void main()
{
    int a=2,b=3,c=0;
    c = ++a + ++a + ++a + a++ + a++ + a++ + ++b + ++b + b++ + b++;
    printf("\n%d %d", a, b);
    printf("\n %d", c);
}

