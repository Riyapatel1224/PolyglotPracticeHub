#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*last=NULL;


void addNode(int num)
{
    struct node *tmp = NULL;

    if(head==NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else{
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->prev = last;
        tmp->next = NULL;
        last = tmp;
    }
}

void display()
{
    struct node *p;
    int sum;

    if (head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        p = head;
        printf("\n");
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->next;
        }
    }
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    display();
    return 0;
}
