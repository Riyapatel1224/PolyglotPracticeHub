#include <stdio.h>
#define n 10
int main()
{
    int ar[n], i, temp, shift, j, s;
    printf("Enter the elements of array \n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    printf("\nElements in original order are :\n");
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);

    printf("\nEnter how many times you want to shift array :\n");
    scanf("%d", &shift);

    while (shift)
    {
        if (shift == n)
        {
            break;
        }
        if (shift > n)
        {
            s = shift % (shift - n);
            temp = ar[0];
            for (i = 0; i < n; i++)
            {
                ar[i] = ar[i + 1];
            }
            ar[n - 1] = temp;
            shift--;
        }
        else
        {
            temp = ar[0];
            for (i = 0; i < n; i++)
            {
                ar[i] = ar[i + 1];
            }
            ar[n - 1] = temp;
            shift--;
        }
    }


    printf("\nElements after shifting %d positions to right :\n", shift);
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);

    return 0;
}