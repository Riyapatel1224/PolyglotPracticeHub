/*
    Author: Riya Patel
    DOC: 31, May 2023
    Objective: marksheet
*/

#include <stdio.h>
void main()
{
    float s1, s2, s3, max = 100, sum;
    float total;
    char grade;

    printf("Enter the marks of subject 1: ");
    scanf("%f", &s1);
    printf("Enter the marks of subject 2: ");
    scanf("%f", &s2);
    printf("Enter the marks of subject 3: ");
    scanf("%f", &s3);
    sum = (s1 + s2 + s3) / 3;
    printf("total : %.2f", sum);

    if (sum > 90)
    {
        printf("\nA+");
    }
    else if ((sum < 80) && (sum => 90))
    {
        printf("\nA");
    }
    else if ((sum < 70) && (sum => 80))
    {
        printf("\nB+");
    }
    else if ((sum < 60) && (sum => 70))
    {
        printf("\nB");
    }
    else if ((sum < 50) && (sum => 60))
    {
        printf("\nC+");
    }
    else if ((sum < 40) && (sum => 50))
    {
        printf("\nC");
    }
    else if(sum<40)
    {
        printf("YOU FAILED");
    }
    else
    {
        printf("Enter valid value");
    }
}