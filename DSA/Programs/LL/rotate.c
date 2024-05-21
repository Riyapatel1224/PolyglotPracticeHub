#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *last = NULL;

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

int addbeg(int num)
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
    struct node *p;
    struct node *q;
    struct node *temp;
    p = head;
    q = p->next;

    temp = p->data;//
    p = q;//
    q = temp;//
}



void rotate()
{
    addbeg(last->data);
    delLast();
}

int main()
{
    addbeg(10);
    addnode(20);
    addnode(30);
    addnode(40);
    // rotate();
    swapTwo();
    // printf("%d",head);
}