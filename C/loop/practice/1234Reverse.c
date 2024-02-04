#include <stdio.h>
void main()
{
    int i, j;
    i = 5;
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i--;
    }

}