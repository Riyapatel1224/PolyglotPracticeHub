/*
    Author : Riya Patel
    DOC : 1 June,2023
    Objective : marksheet
*/

#include <stdio.h>
void main()
{
    int m1sub1, m1sub2, m1sub3, m1sub4, m1sub5, total1, total2, total3, total4, total5, m2sub1, m2sub2, m2sub3, m2sub4, m2sub5, per, total;
    printf("Enter the marks of marks 1 sub1: ");
    scanf("%d", &m1sub1);
    printf("Enter the marks of marks 1 sub2: ");
    scanf("%d", &m1sub2);
    printf("Enter the marks of marks 1 sub3: ");
    scanf("%d", &m1sub3);
    printf("Enter the marks of marks 1 sub4: ");
    scanf("%d", &m1sub4);
    printf("Enter the marks of marks 1 sub5: ");
    scanf("%d", &m1sub5);

    printf("Enter the marks of marks 2 sub1: ");
    scanf("%d", &m2sub1);
    printf("Enter the marks of marks 2 sub2: ");
    scanf("%d", &m2sub2);
    printf("Enter the marks of marks 2 sub3: ");
    scanf("%d", &m2sub3);
    printf("Enter the marks of marks 2 sub4: ");
    scanf("%d", &m2sub4);
    printf("Enter the marks of marks 2 sub5: ");
    scanf("%d", &m2sub5);

    total1 = m1sub1 + m2sub1;
    total2 = m1sub2 + m2sub2;
    total3 = m1sub3 + m2sub3;
    total4 = m1sub4 + m2sub4;
    total5 = m1sub5 + m2sub5;

    printf("\n***********YOUR RESULT**********");
    printf("\nCOLLEGE: GJ POLYTECHNIC,GUJARAT");
    printf("\nNAME: RIYA PATEL     FATHER NAME: VIPULKUMAR PATEL");
    printf("\nENROLLMENT: 1234");
    printf("\n SUBJECTS  Marks1  Marks2  TOTAL");
    printf("\n SUB 1       %d      %d      %d ", m1sub1, m2sub1, total1);
    printf("\n SUB 2       %d      %d      %d ", m1sub2, m2sub2, total2);
    printf("\n SUB 3       %d      %d      %d ", m1sub3, m2sub3, total3);
    printf("\n SUB 4       %d      %d      %d ", m1sub4, m2sub4, total4);
    printf("\n SUB 5       %d      %d      %d ", m1sub5, m2sub5, total5);

    total = total1 + total2 + total3 + total4 + total5;
    printf("\nTOTAL MARKS: %d \t ", total);
    per = total / 5;
    
    if(per<=35)
    {
        printf("RESULT: FAIL");
    }
    else
    {
        printf("RESULT: PASS");
    }
}