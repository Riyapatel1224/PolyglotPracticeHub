#include<stdio.h>
int main()
{
    int a, b, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    printf("\nEnter the value of c: ");
    scanf("%d", &c);

    if(*p1>*p2 && *p1>*p3)
    {
        printf("\n%d is maximum",*p1);
    }
    else if (*p2 > *p1 && *p2 > *p3)
    {
        printf("\n%d is maximum", *p2);
    }
    else
    {
        printf("\n%d is maximum", *p3);
    }

    if (*p1 < *p2 && *p1 < *p3)
    {
        printf("\n%d is minimum", *p1);
    }
    else if (*p2 < *p1 && *p2 < *p3)
    {
        printf("\n%d is minimum", *p2);
    }
    else
    {
        printf("\n%d is minimum", *p3);
    }
}