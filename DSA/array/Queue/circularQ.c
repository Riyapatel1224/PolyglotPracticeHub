#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int f = -1, r = -1, q[SIZE];

void insert(int num)
{
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nOverflow\n");
    }
    else if (r == f - 1)
    {
        printf("\nOverflow\n");
    }
    else
    {
        if (r == SIZE - 1)
        {
            r = 0;
            q[r] = num;
        }
        else
        {
            r++;
            q[r] = num;
            if (f == -1)
            {
                f = 0;
            }
        }
    }
}

void display()
{
    int i;
    if (r >= f)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    else
    {
        for (i = f; i < SIZE; i++)
        {
            printf(" %d", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    printf("\n");
}

void removeQ()
{
    if (f == -1)
    {
        printf("\nQueue underflow\n");
    }
    else
    {
        printf("\n%d is removed\n", q[f]);
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if(f==r)
        {
            f = -1;
            r = -1;
        }
        else if(f==SIZE-1)
        {
            f = 0;
        }
        else
        {
            f++;
        }
    }
}

int main()
{
    int choice, num;
    while (1)
    {
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n0.EXIT\nENTER YOUR CHOICE: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nENTER A NUMBER TO INSERT: \n");
            scanf("%d", &num);
            insert(num);
            break;

        case 2:
            removeQ();
            break;

        case 3:
            display();
            break;

        case 0:
            exit(1);

        default:
            printf("\nEnter a valid choice PTA\n");
            break;
        }
    }
}