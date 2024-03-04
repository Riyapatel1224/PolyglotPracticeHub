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
    
}


int main()
{
    int choice, num;
    while(1)
    {
        printf("1.INSERT\n2.DELETE\n3.DISPLAY\n0.EXIT\nENTER YOUR CHOICE: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nENTER A NUMBER TO INSERT: ");
            scanf("%d", &num);
            insert(num);
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 0:
            EXIT(0);

        default:
            printf("\nEnter a valid choice PTA");
            break;
        }
    }
}
