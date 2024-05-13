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
        for (p = head; p != NULL;p=p->next)
        {
            printf("%d ", p->data);
        }
        printf("\n");
}



void revDisplay()
{
    struct node *p;
    for (p = last; p != NULL;p=p->prev)
    {
        printf(" %d", p->data);
    }
    printf("\n");
}

int addBeg(int num)
{
    struct node *temp;
    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        temp = malloc(sizeof(struct node*));
        temp->data = num;
        temp->next = head;
        temp->prev = NULL;
        head->prev = temp;
        head = temp;
    }
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addBeg(70);
    display();
    revDisplay();
    return 0;
}
