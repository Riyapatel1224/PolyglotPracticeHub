/*
    Author: Riya Patel
    Doc: 7, April 2023
    Objective: using switch case perform addition of inputed dataTypes
*/
#include <stdio.h>
void main()
{

    int a, b, c,i;
    float l, j, k;

    printf("\n1------int");
    printf("\n2------float\n");
    printf("\n3------Long float\n");
    printf("enter the addition method: ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("\nEnter the first int: ");
        scanf("%d", &a);
        printf("\nEnter the second int: ");
        scanf("%d", &b);
        c = a + b;
        printf("\nThe addition of int is : %d", c);
        break;
    case 2:
        printf("\nEnter the first float: ");
        scanf("%f", &l);
        printf("\nEnter the second float: ");
        scanf("%f", &j);
        k=l+j;
        printf("\nThe addition of float is : %.2f", k);
        break;

    case 3:
        printf("\nEnter the first long float: ");
        scanf("%lf", &l);
        printf("\nEnter the second long float: ");
        scanf("%lf", &j);
        k = l + j;
        printf("\nThe addition of long float is : %.2lf", k);
        break;
    
    

    }//end of switch
} // end of main
