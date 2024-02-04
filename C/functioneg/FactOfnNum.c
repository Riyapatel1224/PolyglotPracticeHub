/*
    Author : Riya Patel
    DOC : 18 july,2023
    Objective : factorial of n natural number
*/

#include <stdio.h>
// void n()
// {
//     int fact = 1, num;
//     printf("enter the number :");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         fact = fact * i;
//     }
//     printf("%d", fact);
// }
// void main()
// {
//     n();
// }

// void n(int num)
// {
//     int fact = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         fact = fact * i;
//     }
//     printf("%d", fact);
// }
// void main()
// {
//     int num;
//     printf("enter the number :");
//     scanf("%d", &num);
//     n(num);
// }

int fact(int f)
{
    if(f<=1)
    {
        return 1;
    }
    return f*fact(f-1);
}
int main()
{
    int f;
    printf("\nEnter a number:");
    scanf("%d", &f);
    int result = fact(f);
    printf("\nresult: %d", result);
}