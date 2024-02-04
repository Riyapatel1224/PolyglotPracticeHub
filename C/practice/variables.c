#include<stdio.h>
int a;
void function()
{
    int a = 10;
    int b = 20;
    static c = 30;
    c = c + 10;
    printf("\na=%d", a);
    printf("\nb=%d", b);
    printf("\nc=%d", c);
}
void main()
{
    function();
    function();
    function();
}
