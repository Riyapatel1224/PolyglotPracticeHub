/*
    Author: Riya Patel
    Doc: 19, Jun 2023
    Objective: sum of one digit entered by user
*/
#include <stdio.h>
int main()
{
    int i, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &i);

    while (i > 0)
    {
        rem = i % 10;  
        sum = sum + rem;
        i = i / 10;
    }
    printf("\nThe sum of digits is: %d ", sum);
}
