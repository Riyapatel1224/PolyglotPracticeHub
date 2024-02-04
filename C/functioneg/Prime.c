/*
    Author : Riya Patel
    DOC : 18 july,2023
    Objective : find if the number is prime or not
*/

#include <stdio.h>
int prime(int num)
{ 
    int flag = 0;
    for (int j = 2; j < num; j++)
    {
        if (num % j == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0 && num > 1)
    {
        printf("\n%d num is prime", num);
    }
    else
    {
        printf("\n%d num is not prime", num);
    }
   
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}