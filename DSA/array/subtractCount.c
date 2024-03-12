#include <stdio.h>

int main()
{
    int i, SIZE,j;
    printf("\nEnter a number of value you want to enter :\n");
    scanf("%d", &SIZE);
    int arr[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printf("\nYour entered value is: \n");

    // for (i = 0; i < SIZE; i++)
    // {
    //     printf("\n%d", arr[i]);
    // }

    int min=arr[0];
    for (i = 0; i < SIZE; i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        if(min==0 || min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nThe minimum element is %d", min);
}