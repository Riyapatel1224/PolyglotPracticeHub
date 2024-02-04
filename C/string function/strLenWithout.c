#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int len = 0;
    printf("\nEnter you name: ");
    scanf("%s", &name);
    while(name[len]!='\0')
    {
        len++;
    }
    printf("\nThe lenght of %s is %d", name, len);
    return 0;
}
