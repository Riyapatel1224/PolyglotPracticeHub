/*
    Author Riya Patel
    Doc: 24, May 2023
    Objective: hollow triangle

    i==3 (k==2)
    i==4((k==2)||(k==3))
*/
#include <stdio.h>
void main()
{
    int i, j, k, l;
    i = 1;
    while (i <= 5)
    {
        j = 5;
        while (j >= i)
        {
            printf(" ");
            j--;
        }

        k = 1;
        while (k <= i)
        {
            if (i == 3)
            {
                if (k == 2)
                {
                    k = 1;
                    while (k <= i)
                    {
                        printf(".");
                        k++;
                    }
                    
                }
                else
                {
                    k = 1;
                    while (k <= i)
                    {
                        printf(" *");
                        k++;
                    }
                }
            }
            else if (i == 4)
            {
                if ((k == 2)||(k==3))
                {
                    k = 1;
                    while (k <= i)
                    {
                        printf(".");
                        k++;
                    }
                }
                else
                {
                    k = 1;
                    while (k <= i)
                    {
                        printf(" *");
                        k++;
                    }
                }
            }
            else
            {
                k = 1;
                while(k<=i)
                {
                    printf(" *");
                    k++;
                }
            }
        }

        i++;
        printf("\n");
    }
}
