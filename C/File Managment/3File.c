// Write a program that takes 20 integers from user and creates 3 files - odd.txt, mod5.txt and prime.txt.Store all the odd numbers in odd.txt, all numbers which are divisible by 5 in mod5.txt and all prime numbers in prime.txt.Do not forget to close the files that you open.

#include <stdio.h>
#include <math.h>
int main()
{
    FILE *oddNum;
    FILE *modBy5;
    FILE *primeNum;

    int i, a[5], limit, flag, j;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    oddNum = fopen("odd.txt", "w");
    fprintf(oddNum, "Odd numbers: ");
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 1)
        {
            fprintf(oddNum, "\n %d", a[i]);
        }
    }

    modBy5 = fopen("mod5.txt", "w");
    fprintf(modBy5, "modBy5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 5 == 0)
        {
            fprintf(modBy5, "\n %d", a[i]);
        }
    }

    primeNum = fopen("prime.txt", "w");
    fprintf(primeNum, "Prime numbers: ");
    for (i = 0; i < 5; i++)
    {
        limit = sqrt(a[i]);
        flag = 1;
        for (j = 2; j <= limit; j++)
        {
            if (a[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1 && a[i] != 0 && a[i] != 1)
        {
            fprintf(primeNum, "\n %d", a[i]);
        }
    }
    fclose(oddNum);
    fclose(modBy5);
    fclose(primeNum);
}
