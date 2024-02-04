/*
    Author: Riya Patel
    Doc: 18, May 2023
    Objective: abcd triangle
*/

#include <stdio.h>
int main()
{
    int i, j, k, a,l;
    i = 1;
    while (i <= 5)
    {
        j = 5;
        while (j >= i)
        {
            printf(" ");
            j--;
        }
        
        a = 65;
        k = 1;
        
        while (k <= i)
        {
            
            printf(" %c",a);
            a = a + 1;
            k++;
        }
       
        printf("\n");
        i++;
    }
}
