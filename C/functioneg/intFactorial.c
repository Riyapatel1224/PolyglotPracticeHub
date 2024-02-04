#include <stdio.h>
int fact(int a)
{
    int i, f = 1;
    for (i = 1; i <= a; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int a, b, c, d, e, sum;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    printf("Enter value of c : ");
    scanf("%d", &c);
    printf("Enter value of d : ");
    scanf("%d", &d);
    printf("Enter value of e3 : ");
    scanf("%d", &e);
    sum = fact(a) + fact(b) + fact(c) + fact(d) + fact(e);
    printf("factorial: %d", sum);
}
