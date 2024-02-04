/*
    Author : Riya Patel
    DOC : 12 July,2023
    Objective : find prime number
*/

#include <stdio.h>
void main()
{
    int size, num[50],i,j,p=0;
    printf("Enter the number of element you want to enter.");
    scanf("%d", &size);
    printf("\nEnter the elements");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < size; i++)
    {
        int flag = 0;
        for (j = 2; j < num[i]; j++)
        {
            if(num[i]%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0 && num[i]>1)
        {
            printf("\n%d num is prime",num[i]);
        }
        else
        {
            printf("\n%d num is not prime",num[i]);
        }
    }
    
}