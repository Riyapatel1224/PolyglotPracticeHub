/*
    Author: Riya Patel
    DOC: 16, April 2023
    Objective: grading system
*/

#include <stdio.h>
void main()
{
    int ss, math, sci, avg, add;
    printf("Enter marks for ss ");
    scanf("%d", &ss);
    printf("\nEnter marks for science ");
    scanf("%d", &sci);
    printf("\nEnter marks for math ");
    scanf("%d", &math);

    add = ss + sci + math;
    avg = add / 3;

    if(avg>90)
    {
        printf("A+");
    }
    else if(avg>80)
    {
        printf("A");
    }
    else if (avg > 70)
    {
        printf("B+");
    }
    else if (avg > 60)
    {
        printf("B");
    }
    else if (avg>50)
    {
        printf("C");
    }
    else if(avg>40)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
}