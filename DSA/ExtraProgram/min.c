#include<stdio.h>
#define SIZE

int a[5];

int main()
{
    int i,min;
    printf("Enter 5 value: \n");
    for (i = 0; i < 5 ; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    for (i = 0; i < 5; i++)
    {
        if(a[i]==0)
        {
            continue;
        }
            
        if(min==0||min>a[i])
        {
            min = a[i];
        }
    }
    printf("min is : %d", min);
    
    return 0;
}