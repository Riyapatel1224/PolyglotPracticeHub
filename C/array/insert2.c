// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[6];
    int n, m, i, j;
    int ind;
    printf("enter a number to be inserted: ");
    scanf("%d", &m);
    for (j = 1; j <= m; j++)
    {
        scanf("%d", arr[j]);
    }
    printf("enter a number to be inserted: ");
    scanf("%d", &n);
    printf("enter index number:");
    scanf("%d", &ind);

    arr[ind] = n;
    for (i = 0; i <= 6; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}