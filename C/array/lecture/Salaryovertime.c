/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : take salary and overtime of employee from user of 5 employees
*/

#include<stdio.h>
void main()
{
    int emp[5][2], i, j;
    for (i = 0; i < 5;i++)
    {
        printf("\nEnter the salary and overtime of the employees %d: ", i+1);
       
        for (j = 0; j < 1; j++)
        {
            scanf("%d", &emp[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nSalary of the employee %d: %d", i + 1, emp[i]);
        for (j = 0; j < 1; j++)
        {
            printf("\novertime of the employee: %d",emp[j]);
           
        }
    }
}