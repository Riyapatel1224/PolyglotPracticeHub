#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *last = NULL;

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

void addnode(int num)
{
    struct node *temp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void addbeg(int num)
{
    struct node *temp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->next = head;
        head = temp;
    }
}

void delLast()
{
    struct node *p;
    if (head == last)
    {
        free(head);
        head = NULL;
        last = NULL;
    }
    else
    {
        p = head;
        while (p->next != last)
        {
            p = p->next;
        }
        p->next = NULL;
        free(last);
        last = p;
    }
}

void swapTwo()
{
    if(head==NULL||head->next==NULL)
    {
        printf("\nCANNOT SWAP. LESS THAN ONE DATA\n");
    }
    else{
        struct node *p=head;
        struct node *q=head->next;
        struct node *temp;
        temp = malloc(sizeof(struct node));
        while (p != NULL && q!=NULL)
        {
            temp->data = p->data;
            p->data = q->data;
            q->data = temp->data;

            p = q->next;
            if(p!=NULL){
                q = p->next;
            }
        }

        display();
    }
    
}

void rotate()
{
    // printf("%d",last->data);
    addbeg(last->data);
    delLast();
}

int main()
{
    addnode(10);
    addnode(20);
    addnode(30);
    // addnode(40);
    // rotate();
    swapTwo();
    // printf("%d\n",head);
    // printf("p", head);
    // printf("%d", head->data);
}