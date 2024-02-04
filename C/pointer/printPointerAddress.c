#include<stdio.h>
int main()
{
    int a;
    int *p = &a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Value of a: %d", *p);
    printf("\n Address of a: %x", a);
    printf("\n Address of p: %d", p);
    printf("\n Value of p: %d", *p);
}