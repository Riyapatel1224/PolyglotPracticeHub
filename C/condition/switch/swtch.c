/*
    Author:Riya Patel
    Doc:6, April 2023
    Objective: To learn the basics of datatypes
*/
#include <stdio.h>

void main()
{
    int a, b,choice,add;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("\n1------ADDITION");
    printf("\n2------SUBTRACTION");
    printf("\n3------MULTIPLICATION");
    printf("\n4------DIVISION");
    printf("\nEnter the choice: ");
    scanf("%i", &choice);
    switch (choice)
    {
    case 1:
        printf("%d + %d = %d ", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d ", a, b, a - b);
        break;
    case 3:
        printf("%d * %d = %d ", a, b, a * b);
        break;
    case 4:
        printf("%d / %d = %d ", a, b, a / b);
        break;
    default:
        printf("Enter valid input");
    } // end of switch

} // end of main
