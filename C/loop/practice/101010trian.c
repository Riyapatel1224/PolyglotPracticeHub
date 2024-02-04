/*
    Author: Riya Patel
    Doc: 22, Jun 2023
    Objective: 0101 triangle
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            printf("%d", (j + i) % 2);
        }
        printf("\n");
    }
}
