/*
    Author: Riya Patel
    Doc: 26, May 2023
    Objective: counting number of digits given by the user
*/
#include <stdio.h>
int main()
{
    int i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &i);
    if (i == 0)
    {
        count++;
    }
    else
    {

        while (i > 1)
        {

            i = i / 10;
            count++;
        }
    }

    printf("\nThe number of digits is: %d ", count);
}
