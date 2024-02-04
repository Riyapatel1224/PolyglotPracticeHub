/*
    Author : Riya Patel
    DOC : 17 july,2023
    Objective : parameter and arguments
*/
#include<stdio.h>
void name(char n[],int a,float h)
{
    printf("\nHello %s your age is %d and your height is %.2f", n,a,h);
}
int main()
{
    name("Khushi",2,5.5);
    name("Riya",19,5.2);
    name("Krisha",17,5.2);
    return 0;
}

