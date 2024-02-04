/*
    Author : Riya Patel
    DOC : 13 July,2023
    Objective : rotate array
*/

#include <stdio.h>
void main()
{
    // right rotate
    int num[5], i, j, k, choice;
    printf("Enter how to rotate the array");
    printf("\n1......left");
    printf("\n2......right\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the array you want : ");
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &num[i]);
        }
        printf("\nEnter the position: ");
        scanf("%d", &k);
        for (i = k; i < 5; i++)
        {
            printf("\n%d", num[i]);
        }
        for (i = 0; i < k; i++)
        {
            printf("\n%d", num[i]);
        }
        break;

    case 2:
        printf("Enter the array you want : ");
        for (i = 0; i < 5; i++)
        {
            scanf("%d", &num[i]);
        }
        printf("\nEnter the position: ");
        scanf("%d", &k);
        for (i = 5-k ; i < 5; i++)
        {
            printf("\n%d", num[i]);
        }
        for (i = 0; i < 5-k; i++)
        {
            printf("\n%d", num[i]);
        }
        break;

    default:
        printf("\nWrong decision");
        break;
    }
}
