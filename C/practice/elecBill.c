/*
    Author: Riya Patel
    DOC: 31, May 2023
    Objective: Electricity Bill
    1. An electric power distribution company charges its domestic consumers as follows.
    Consumption units	Rate of Charge
    0 - 200				Rs 0.50 per unit
    201 - 400			Rs 100 + Rs 0.65 per unit excess of 200
    401 - 600			Rs 230 + Rs 0.80 per unit excess of 400
    601 and above		Rs 390 + Rs 1.00 per unit excess of 600

    Write a program to read customer number and power consumed, and prints the amount paid by the customer.
*/
#include <stdio.h>
void main()
{
    float unit, amount;
    printf("Enter the units: ");
    scanf("%f", &unit);

    if (unit <= 200)
    {
        amount = unit * 0.50;
    }
    else if (unit > 201 && unit <= 400)
    {
        amount = 0.65 * (unit - 200) + 100;
    }
    else if (unit > 401 && unit <= 600)
    {
        amount = 0.80 * (unit - 400) + 230;
    }
    else if (unit > 601)
    {
        amount = 1.00 * (unit - 600) + 390;
    }

    printf("Amount is %.2f", amount);
}