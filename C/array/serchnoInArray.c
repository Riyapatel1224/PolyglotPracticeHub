/*
    Author : Riya Patel
    DOC : 23 June,2023
    Objective : serch the array if it is in the array of 5 declared in the program.
*/

#include <stdio.h>
void main()
{
    int arr[] = {10, 20, 3, 40, 5}, i, num,flag=0;
    printf(" Enter a number: ");
    scanf(" %d", &num);
    flag = 1;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            flag = 0;
            printf("\n %d declared in array", arr[i]);
            break;
        }
        else    
        {
            flag = 1;
            printf("\n %d", arr[i]);
        }
    }
}