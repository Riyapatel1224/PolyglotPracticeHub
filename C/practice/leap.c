/*
    Author: Riya Patel
    DOC: 6, June 2023
    Objective: leap year
*/

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    switch(year%4)
    {
        case 0:
            if(year%100==0)
            {
                if(year%400==0)
                {
                    printf("is a leap year");
                }
                else
                {
                    printf("not a leap year");
                }
            }
            else
            {
                printf("a leap year");
            }
            break;
        default:
            printf("not a leap year");
        }
}