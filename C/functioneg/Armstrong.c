/*
    Author : Riya Patel
    DOC : 18 july,2023
    Objective : find if the number is armstrong or not
*/
#include<stdio.h>
#include<math.h>
int arm()
{
    int num,rem=0,n1,n2;
    printf("Enter the number: ");
    scanf("%d", &num);
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
    else
    {
        printf("\n%d is not an armstrong number", num);
    }
}
int main()
{
    arm();
}