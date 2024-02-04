#include<stdio.h>
#include<string.h>
int main()
{
    char fname[10], lname[10],name[30];
    int i;
    printf("Enter your first name: ");
    scanf("%s", &fname);
    printf("\nEnter your last name: ");
    scanf("%s", &lname);
    i = 0;
    while (fname[i]!='\0')
    {
        name[i] = fname[i];
    }
    printf("\n%s", name);
}