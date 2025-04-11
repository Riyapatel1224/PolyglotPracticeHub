#include <stdio.h>

void subtract(int arr[], int n, int min)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[i] -= min;
        }
    }
}

int allZero(int arr[], int n)
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            flag = 1;
            return flag;
            break;
        }
    }
    return flag;
}

int miniElement(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != 0 && (min == 0 || min > arr[i]))
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int SIZE;
    printf("Enter the number of values you want to enter:\n");
    scanf("%d", &SIZE);
    int arr[SIZE];

    printf("Enter the values:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    int flag,count=0,min;
    while (1)
    {
        flag = allZero(arr, SIZE);
        if (flag == 1)
        {
            count++;
            min = miniElement(arr, SIZE);
            printf("The minimum element is %d\n", min);

            subtract(arr, SIZE, min);

            printf("After subtraction:\n");
            for (int i = 0; i < SIZE; i++)
            {
                printf("%d\n", arr[i]);
            }
        }
        else
        {
            printf("\ntotal subtraction : %d\n", count);
            break;
        }
    }
    return 0;
}