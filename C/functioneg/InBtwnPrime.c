/*
    Author : Riya Patel
    DOC : 23 Aug,2023
    Objective : find prime in between two numbers 0f 1t
*/

#include <stdio.h>
#include<math.h>
int prime(num)
{
    int m = sqrt(num);
    if (num == 1)
    {
        return 0;
    }
    for (int j = 2; j <= m; j++)
    {
        if (num % j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a, b, num, e;
    printf("\nEnter first number: ");
    scanf("%d", &a);
    printf("\nEnter last number: ");
    scanf("%d", &b);
    printf("\nEnter what you want \n1.PRIME \n2.NON-PRIME: ");
    scanf("%d", &e);
    switch (e)
    {
    case 1:
        for (int i = a; i <= b; i++)
        {
            if (prime(i) == 0)
            {
                printf("\n%d is prime", i);
            }
            else
            {
                continue;
            }
        }
        break;

    case 2:
        for (int i = a; i <= b; i++)
        {
            if (prime(i) == 0)
            {
                printf("\n%d is not prime", i);
            }
            else
            {
                continue;
            }
        }
        break;
    default:
        printf("\nEnter proper options");
        break;
    }
}