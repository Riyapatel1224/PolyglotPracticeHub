/*          
    Author : Riya Patel
    DOC : 31,june 2023
    May 2023 Objective : minimum medium and maximum
*/

#include<stdio.h>
void main()
{
    int a, b, c;
    printf("enter the value of num1 : ");
    scanf("%d", &a);
    printf("enter the value of num2 : ");
    scanf("%d", &b);
    printf("enter the value of num3 : ");
    scanf("%d", &c);

    if(a<=b && a<=c)
    {
        printf("\n%d is small", a);
        if(b<=c)
        {
            printf("\n%d is big",c);
            printf("\n%d is medium",b);
        }
        else
        {
            printf("\n%d is big", b);
            printf("\n%d is medium", c);
        }
    }

    else if (b <= a && b <= c)
    {
        printf("\n%d is small", b);
        if (a <= c)
        {
            printf("\n%d is big", c);
            printf("\n%d is medium", a);
        }
        else
        {
            printf("\n%d is big", a);
            printf("\n%d is medium", c);
        }
    }

    else
    {
        printf("\n%d is small", c);
        if(a<=b)
        {
            printf("\n%d is big", a);
            printf("\n%d is medium", b);
        }
        else
        {
            printf("\n%d is big", b);
            printf("\n%d is medium", a);
        }
    }
}