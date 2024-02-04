/*
    Author : Riya Patel
    DOC : 18 july,2023
    Objective : sum of n natural number
*/

#include<stdio.h>
// void n()
// {
//     int sum=0,num;
//     printf("enter the number :");
//     scanf("%d", &num);
//     for (int i = 0; i <=num; i++)
//     {
//         sum = sum + i;
//     }
//     printf("%d", sum);
// }
// void main()
// {
//     n();
// }

int sum(int k)
{
    if(k>0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int k;
    printf("\nENTER A NUMBER: ");
    scanf("%d", &k);
    int result = sum(k);
    printf("\nresult= %d", result);
}