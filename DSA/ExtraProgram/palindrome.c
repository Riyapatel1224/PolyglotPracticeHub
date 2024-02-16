#include <stdio.h>
#define n 5
int main()
{
    int a[n], i, count = 0;
    printf("Enter 5 array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n / 2; i++)
    {
        if (a[i] == a[(n - 1) - i])
        {
            count++;
        }
    }
    if (count == (n / 2))
    {
        printf("is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
