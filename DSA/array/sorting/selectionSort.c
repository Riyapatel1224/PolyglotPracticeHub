#include <stdio.h>
#define SIZE 5
int arr[] = {23, 4, 63, 5, 6};

void display()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

void sortedArray()
{
    int i, j, k, min, temp;
    min=arr[0];
    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1,min=i; j < SIZE; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{
    printf("\nArray before sorting:\n");
    display();
    printf("\nArray after sorting\n");
    sortedArray();
}