#include <stdio.h>
int main()
{
    int i, j, n = 5, k;
    for (k = ((n * 2) - 2); k >= 0; k--)
    {
        i = 0;
        while (i <= k)
        {
            if ((i == 0) || (i == k))
            {
                j = 0;
                while (j <= k)
                {
                    printf(" %d", n);
                    j++;
                }
            }
            else
            {
                j = 0;
                while (j <= k)
                {
                    if ((j >= 1) && (j <= k - 1))
                    {
                        printf("  ");
                        j++;
                    }
                    else
                    {
                        printf(" %d", n);
                        j++;
                    }
                }
            }
            printf("\n");
            i++;
        }
    }
}