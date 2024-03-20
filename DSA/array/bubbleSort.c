#include<stdio.h>
#define SIZE 10
int a[] = {6, 31, 32, 5, 67, 8, 50, 3, 23, 60};

void bubbleSort()
{
    int i, j, temp;
    for (i = 0; i < SIZE;i++)
    {
        for (j = 0; j < SIZE - 1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSORTED\n");
    for (i = 0; i < SIZE;i++)
    {
        printf(" %d", a[i]);
    }
}

int main()
{
    bubbleSort();
}