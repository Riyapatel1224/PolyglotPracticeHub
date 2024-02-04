/*
    Author: Riya Patel
    DOC: 30, May 2023
    Objective: finding year week and remaining days out of days entered by user
*/

#include <stdio.h>
void main()
{
    int m, y, d, w, remain;
    printf("Enter days: ");
    scanf("%d", &d);
    y = d / 365;
    w = (d % 365) / 7;
    remain = d - ((y * 365) + (w * 7));
    printf("\n year: %d", y);
    printf("\n week: %d", w);
    printf("\n remaining days: %d", remain);
}
