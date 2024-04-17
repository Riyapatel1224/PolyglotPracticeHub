#include <stdio.h>
#define SIZE 10

int ar[] = {1, 2, 3, 4, 10, 7, 8, 5, 30, 6};

void linearSearch(int key)
{
    int i, flag = 0, j;
    for (i = 0; i < SIZE / 2; i++)
    {
        printf("%d ", ar[i]);

        if (ar[i] == key)
        {
            printf("\n%d is found", key);
            flag = 1;
        }
    }
    printf("\n");
    for (j = SIZE - 1; j > SIZE / 2; j--)
    {
        printf("%d ", ar[j]);
        if (ar[j] == key)
        {
            printf("\n%d is found", key);
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("%d not found", key);
    }
}

int main()
{
    linearSearch(7);
}