/*
    Author: Riya Patel
    DOC: 25, May 2023
    Objective: capital or small
*/

#include <stdio.h>
void main()
{
    char a;
    printf("Enter a charater: ");
    scanf("%c", &a);
    if((a>=97)&&(a<=122))
    {
        printf("%c is Smaller case", a);
    }
    else if((a>=65)&&(a<=90))
    {
        printf("%c id Bigger case", a);
    }
    else
    {
        printf("Enter valid charater");
    }
}
