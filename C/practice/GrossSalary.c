/*
    Author: Riya Patel
    DOC: 2, June 2023
    Objective: gross salary
*/
#include<stdio.h>
void main()
{
    float salary,gross_salary;
    float hra, da;
    printf("Enter the salary: ");
    scanf("%f", &salary);
    if(salary<=10000)
    {
        hra = salary * .20;
        da = salary * .80;
        gross_salary = hra + da+salary;
        printf("gross salary = %.2f", gross_salary);
    }
    else if (salary <= 20000)
    {
        hra = salary * .25;
        da = salary * .90;
        gross_salary = hra + da+salary;
        printf("gross salary = %.2f", gross_salary);
    }
    else if (salary > 20000)
    {
        hra = salary * .30;
        da = salary * .95;
        gross_salary = hra + da+salary;
        printf("gross salary = %.2f", gross_salary);
    }
}