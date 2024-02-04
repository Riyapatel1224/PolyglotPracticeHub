/*
    Author : Riya Patel
    DOC : 7 Aug,2023
    Objective : take student info
*/

#include <stdio.h>
struct structStudent
{
    int age, marks, rolln;
    char name[30];
};
int main()
{
    struct structStudent e[1];
    int j;
    for (int i = 1; i <= 5; i++)
    {
        printf("\nEnter the name of %d student: ", i);
        scanf("%s", &e[i].name);
        printf("\nEnter the age of %d student: ", i);
        scanf("%d", &e[i].age);
        printf("\nEnter the marks of %d student: ", i);
        scanf("%d", &e[i].marks);
    }
    printf("Enter the roll no of the student you want to display: ");
    scanf("%d", &j);

    printf("\nAGE\t\tNAME\t\tMARKS");
    printf("\n%d\t\t%s\t\t%d", e[j].age, e[j].name, e[j].marks);
}

// #include<stdio.h>
// struct structStudent
// {
//     int id,marks;
//     char name[30];
// }e[5];
// int main()
// {
//     for (int i = 1; i <= 5;i++)
//     {
//         printf("\nEnter the id of %d student: ",i);
//         scanf("%d", &e[i].id);
//         printf("\nEnter the name of %d student: ",i);
//         scanf("%s", &e[i].name);
//         printf("\nEnter the marks of %d student: ", i);
//         scanf("%d", &e[i].marks);
//     }
//     printf("\nID\t\tNAME\t\tMARKS");
//     for (int i = 1; i <= 5;i++)
//     {
//         printf("\n%d\t\t%s\t\t%d", e[i].id, e[i].name,e[i].marks);
//     }
// }
