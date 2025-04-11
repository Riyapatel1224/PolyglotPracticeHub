#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int queue[SIZE];

int f = -1, r = -1;

int insert(int num)
{
    if(r == SIZE-1)
    {
        printf("\nQueue is full\n");
    }
    else
    {
        r++;
        queue[r] = num;
        if(f==-1)
        {
            f++;
        }
    }
}

void display()
{
    int i;
    if(f == -1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", queue[i]);
        }
    }
}

void removeQ()
{
    if(f==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else
    {
        printf("\n%d is removed\n",queue[f]);
        if(f==r)
        {
            f = -1;
            r = -1;
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
    while(1)
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
