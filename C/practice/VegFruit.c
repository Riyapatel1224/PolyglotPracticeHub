/*
    Author: Riya Patel
    DOC: 6, June 2023
    Objective: Fruits and Vegitables
*/

#include <stdio.h>
void main()
{
    int a, v, f;
    printf("\n1........Fruits");
    printf("\n2........Vegitables");
    printf("\nEnter a value: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("\n1.......Mango");
        printf("\n2.......Banana");
        printf("\n3.......Dragon fruits");
        printf("\n4.......cherry");
        printf("\nEnter the fruits you want : ");
        scanf("%d", &f);
        switch (f)
        {
        case 1:
            printf("you selected Mango");
            break;

        case 2:
            printf("you selected Banana");
            break;

        case 3:
            printf("you selected Drangon fruits");
            break;

        case 4:
            printf("you selected cherry");
            break;
        default:
            printf("Enter invalid choice");
            break;
        }
        break;

    case 2:
        printf("\n1.......Cauliflower");
        printf("\n2.......tomato");
        printf("\n3.......zukhini");
        printf("\n4.......Okra");
        printf("\nEnter the Vegitables you want : ");
        scanf("%d", &v);
        switch (v)
        {
        case 1:
            printf("you selected Califlower");
            break;

        case 2:
            printf("you selected tomato");
            break;

        case 3:
            printf("you selected Drangon Zukhini");
            break;

        case 4:
            printf("you selected Okra");
            break;

        default:
            printf("Enter invalid choice");
            break;
        }
        break;
    }
}