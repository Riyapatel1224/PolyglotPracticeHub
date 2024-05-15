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
        last->next = tmp; 
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

int insertAtAnyAfter(int key,int num)
{
    struct node *p = head;
    struct node *tmp=NULL;
    while (p != NULL)
    {
        if(p->data==key)
        {
            break;
        }
        p = p->next;
    }
    if(p==NULL)
    {
        printf("\nInvalid key");
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = p->next;
        tmp->prev = p;
        p->next = tmp;
        tmp->next->prev = tmp;

    }
}

void delLast()
{
    struct node *p = last;
    last = last->prev;
    last->next = NULL;
    free(p);
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    insertAtAnyAfter(30, 60);
    display();
    delLast();
    display();
    return 0;
}
