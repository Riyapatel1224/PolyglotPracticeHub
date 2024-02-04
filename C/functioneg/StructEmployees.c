/*
    Author : Riya Patel
    DOC : 7 Aug,2023
    Objective : employees
    struct emp=id,name,salary,position(char)
    function 1 display
    function 2 create
    function 3 delete
    function 4 search
*/
#include <stdio.h>
#include <stdlib.h>
struct employees
{
    int id, salary;
    char name[15], position[20];
} e[3];

int display(emp)
{
    int i;
    printf("\nID\t\tNAME\t\tPOSITION\tSALARY");
    for (i = 1; i <= emp; i++)
    {
        printf("\n%d\t\t%s\t\t%s\t\t%d", e[i].id, e[i].name, e[i].position, e[i].salary);
    }
    return emp;
}

int create(emp)
{
    int t;
    printf("\nEnter the information of the employee you want to create: ");
    emp = emp + 1;
    for (int i = emp; i < emp+1; i++)
    {
        printf("\nEnter the id of %d employee: ", i);
        scanf("%d", &e[i].id);
        printf("\nEnter the name of %d employee: ", i);
        scanf("%s", &e[i].name);
        printf("\nEnter the position of %d employee: ", i);
        scanf("%s", &e[i].position);
        printf("\nEnter the salary of %d employee: ", i);
        scanf("%d", &e[i].salary);
    }
    return emp;
}

int delete(emp)
{
    int d, i;
    printf("\nEnter the id of the employee you want to remove: ");
    scanf("%d", &d);
    if(d<=0 || d>emp)
    {
        printf("\nYOU HAVE ENTERED INVALID VALUES \n PLEASE TRY AGAIN");
        return emp;
    }
    else
    {
        for (i = d; i <= emp - 1; i++)
        {
            e[i] = e[i + 1];
        }
        return emp - 1;
    }
    
    
}

int update(emp)
{
    int u;
    printf("\nENTER THE INDEX YOU WANT TO UPDATE");
    scanf("%d", &u);
    if (u <= 0 || u > emp)
    {
        printf("\nYOU HAVE ENTERED INVALID VALUES \nPLEASE TRY AGAIN");
        return emp;
    }
    else
    {
        printf("\nEnter the id of %d employee: ", u);
        scanf("%d", &e[u].id);
        printf("\nEnter the name of %d employee: ", u);
        scanf("%s", &e[u].name);
        printf("\nEnter the position of %d employee: ", u);
        scanf("%s", &e[u].position);
        printf("\nEnter the salary of %d employee: ", u);
        scanf("%d", &e[u].salary);
        return emp;
    }
}

int main()
{

    for (int i = 1; i <= 3; i++)
    {
        printf("\nEnter the id of %d employee: ", i);
        scanf("%d", &e[i].id);
        printf("\nEnter the name of %d employee: ", i);
        scanf("%s", &e[i].name);
        printf("\nEnter the position of %d employee: ", i);
        scanf("%s", &e[i].position);
        printf("\nEnter the salary of %d employee: ", i);
        scanf("%d", &e[i].salary);
    }
    int emp = 3;
    while (1)
    {
        int s;
        printf("\n1.....DISPLAY\n2.....CREATE\n3.....DELETE\n4.....UPDATE\n5.....EXIT\n");
        scanf("%d", &s);
        switch (s)
        {
        case 1:
            emp = display(emp);
            break;

        case 2:
            emp = create(emp);
            break;

        case 3:
            emp = delete (emp);
            break;

        case 4:
            emp = update(emp);
            break;

        case 5:
            exit(0);

        default:
            printf("\nPLEASE ENTER VALID VALUE \nTRY AGAIN");
        }
    }
}
