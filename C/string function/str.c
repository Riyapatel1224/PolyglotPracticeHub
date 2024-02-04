#include<stdio.h>
#include<string.h>

int main()
{
    int ans;
    char name1[20], name2[20],name3[20];
    printf("Enter your name1: ");
    scanf("%s", &name1);
    printf("Enter your name2: ");
    scanf("%s", &name2);
    printf("\n%lu and %lu are the size of both strings", strlen(name1), strlen(name2));
    printf("\nYour entered name is %s and %s", name1, name2);
    ans=strcmp(name1, name2);
    if(ans==0)
    {
        printf("\nstrings are same");
    }
    else
    {
        printf("\nStrings are not same");
    }
    
    printf("\n%s is concatinated string of name1 and name2", strcat(name1, name2));
    printf("\n%s is name2 ", strcpy(name2, name1));
}
