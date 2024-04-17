#include<stdio.h>
#define SIZE 10

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low;
    int j = low;
    int temp;
    for (j = low; j < high;j++)
    {
        if(arr[j]<pivot)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }

    }
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return i;
}

void quickSort(int  arr[], int low, int high)
{
    int mid;
    mid = partition(arr, low, high);
    if(low<high)
    {
            quickSort(arr, low, mid-1);
            quickSort(arr, mid+1, high);
    }
}

void display(int arr[])
{
    int i;
    for (i = 0; i < SIZE ;i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    quickSort(arr,0,SIZE-1);
    display(arr);
    return 0;
}