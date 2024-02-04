#include <stdio.h>
int GP(int a, int r, int n)
{
    if (n == 1)
    {
        return a;
    }
    else
    {
        return GP(a, r, n - 1) * r;
    }
}
int main()
{
    int ans, a, r, n;
    printf("Enter the first term ,common ratio and n term:\n");
    scanf("%d", &a);
    scanf("%d", &r);
    scanf("%d", &n);
    ans = GP(a, r, n);
    printf("%d ", ans);
    return 0;
}