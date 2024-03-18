#include<stdio.h>
#define SIZE 10

int ar[] = {1, 2, 3, 4, 6, 7, 8, 5, 3, 6};

void linearSearch(int key)
{
    int i,flag=0;
    for (i = 0; i < SIZE;i++)
    {
        if(ar[i]==key)
        {
            printf("%d is found", key);
            flag = 1;
        }
    }
    if(flag==0)
    {
        printf("%d not found",key);
    }
}

int main()
{
    linearSearch(1);
}