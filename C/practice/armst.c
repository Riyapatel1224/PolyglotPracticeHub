/*
    Author : Riya Patel
    DOC : 20 June,2023
    Objective : number is armstrong or not inputed by user in range
*/

#include <stdio.h>
#include <math.h>
void main()
{
    int rem, num, n1, total, n2, f, l, c;
    printf("Enter a first number: ");
    scanf("%d", &f);
    printf("Enter a last number: ");
    scanf("%d", &l);

    for (int num = f; num <= l; num++)
    {
        int count = 0, sum = 0;
        n1 = num;
        if (n1 == 0)
        {
            count++;
        }
        else
        {

            for (; n1 > 0;)
            {
                n1 = n1 / 10;
                count++;
            }
        }
        n2 = num;
        for (; n2 > 0;)
        {

            rem = n2 % 10;
            sum = sum + (pow(rem, count));
            n2 = n2 / 10;
        }
        if (sum == num)
        {
            printf("\n%d is armstrong number", num);
        }
    }
}

// if the
// sum of its own digits raised to the power number of digits gives the number itself.printf("\nThe sum of digits is: %d ", sum);

// 153= 1^3 + 5^3 + 3^3=153

// #include <stdio.h>
// #include <math.h>
// void main()
// {
//     int sum = 0, rem, num, count = 0, n1, total, n2, range;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     n1 = num;
//     if (n1 == 0)
//     {
//         count++;
//     }
//     else
//     {

//         for (; n1 > 0;)
//         {

//             n1 = n1 / 10;
//             count++;
//         }
//     }
//     printf("\nthe number of digits: %d", count);
//     n2 = num;
//     for (; n2 > 0;)
//     {

//         rem = n2 % 10;
//         sum = sum + (pow(rem, count));
//         n2 = n2 / 10;
//     }

//     printf("\nThe sum of digits is: %d ", sum);
//     if (sum == num)
//     {
//         printf("\n%d is armstrong number", num);
//     }
//     else
//     {
//         printf("\n%d not an armstrong number", num);
//     }
// }
