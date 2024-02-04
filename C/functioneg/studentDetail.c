//1. Write a program to store and print the roll no., name, age and marks of a student using structures.

#include<stdio.h>
struct student
{
    int rolln, age, marks;
    char name[20];
}s[1];

int studentinfo(int i)
{
    printf("Enter roll no of student: ");
    scanf("%d", &s[i].rolln);
    printf("Enter marks of student: ");
    scanf("%d", &s[i].marks);
    printf("Enter age of student: ");
    scanf("%d", &s[i].age);
}
int main()
{
    for (int i = 0; i < 1; i++)
    {
        studentinfo(i);
    }
    for (int i = 0; i < 1; i++)
    {
        printf(" ROLL NO: %d \n MARKS: %d \n AGE: %d",s[i].rolln, s[i].marks, s[i].age);
    }
}
