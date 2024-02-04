/*
    Author : Riya Patel
    DOC : 31 july,2023
    Objective : printing 1 to 10
*/

#include <stdio.h>
int count(int num)
{
    if (num <= 10)
    {
        printf("\n%d", num);
        count(num + 1);
    }
}
int main()
{
    int num = 1;
    count(num);
}