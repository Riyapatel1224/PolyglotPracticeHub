/*
    Author: Riya Patel
    DOC: 30, May 2023
    Objective: find parameter and area of recatange 
*/
#include<stdio.h>
void main()
{
    int h, w,per,area;
    printf("Enter the value of height and widhth: ");
    scanf("%d %d", &h, &w);
    per = 2 * (h + w);
    area = h * w;
    printf("perameter is : %d", per);
    printf("\narea is: %d", area);
}
