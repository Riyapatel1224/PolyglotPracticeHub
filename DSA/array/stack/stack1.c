#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top = -1;
int stack[SIZE];

void push(int num)
{
    if(top == SIZE-1)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\nSTACK EMPTY\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
    
}

void pop()
{
    int temp;
    if (top == -1)
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    else
    {
        temp = stack[top];
        top--;
    }
}

int main()
{
    int choice, num;

    while (1)
    {
        printf("\n\n1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the value you want to insert: \n");
            scanf("%d",&num);
            push(num);
            break;
        
        case 2:
            pop();
            break;
            
        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\nENTER VALID CHOICE. PTA\n");
        }
    }
    
}