#include<stdio.h>
#define SIZE1 5
#define SIZE2 5
#define SIZE3 SIZE1+SIZE2

int a[] = {10,20,30,40,50};
int b[] = {5,15,25,100,600};
int c[SIZE3];

void merge()
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < SIZE1 && j < SIZE2;k++)
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }

    while(i<SIZE1)
    {
        c[k++] = a[i++];
    }
    while(j<SIZE2)
    {
        c[k++] = b[j++];
    }
}

int main()
{
    int i;
    merge();
    for (i = 0; i < SIZE3;i++)
    {
        printf(" %d", c[i]);
    }
}
