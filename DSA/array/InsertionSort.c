#include<stdio.h>
#define SIZE 10
int arr[] = {9,8,7,6,5,4,3,2,1,0};

void display()
{
    int i;
    for (i = 0; i < SIZE;i++)
    {
        printf(" %d", arr[i]);
    }
}

void insertion()
{
    int i, j, temp;
    for (i = 1; i < SIZE;i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0;j--)
        {
            if(arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    printf("\nOriginal array:\n");
    display();
    printf("\nAfter sorting:\n");
    insertion();
    display();
}