/*
    Author : Riya Patel
    DOC : 20 June,2023
    Objective : number is armstrong or not inputed by user
*/

#include<stdio.h>
void main()
{
    int n, rem, rev;
    printf("enter a digit: ");
    scanf("%d", &n);

    while(n>0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    n = rev;
    while(n>0)
    {
        rem = n % 10;
        if(rem==0)
        {
            printf("Zero");
        }
        else if(rem==1)
        {
            printf("One");
        }
        else if (rem == 2)
        {
            printf("Two");
        }
        else if (rem == 3)
        {
            printf("Three");
        }
        else if (rem == 4)
        {
            printf("Four");
        }
        else if (rem == 5)
        {
            printf("Five");
        }
        else if (rem == 6)
        {
            printf("Six");
        }
        else if (rem == 7)
        {
            printf("Seven");
        }
        else if (rem == 8)
        {
            printf("Eight");
        }
        else if (rem == 9)
        {
            printf("Nine");
        }
        n = n / 10;
    }
}