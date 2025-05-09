#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};struct node *head = NULL, *last = NULL;

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

void addAtAny(int key, int num)
{
    struct node *p = head, *temp;
    while (p != NULL)
    {
        if (p->data == key)
        {
            break;
        }
        p = p->next;
    }

    if (p == NULL)
    {
        printf("\nKey not Found\n");
    }
    else
    {
        if (p == last)
        {
            addnode(num);
        }
        else
        {
            temp = malloc(sizeof(struct node));
            temp->data = num;
            temp->next = p->next;
            p->next = temp;
        }
    }
}

void display()
{
    struct node *p;

    if (head == NULL)
    {
        printf("List is empty\n");
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
        printf("\n");
    }
}

void sumoflinklist()
{
    struct node *p;
    int sum = 0;
    p = head;

    while (p != NULL)
    {
        sum += p->data;
        p = p->next;
    }

    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        p = head;
        printf("\n");
        while (p != NULL)
        {
            printf("%d", p->data);
            if (p->next != NULL)
            {
                printf(" + ");
            }
            p = p->next;
        }
        printf(" = %d\n", sum);
    }
}

void max()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *p = head;
    int max = p->data;

    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    printf("\nMaximum value: %d\n", max);
}

void search(int num)
{
    struct node *p = head;
    int flag = 0;

    while (p != NULL)
    {
        if (p->data == num)
        {
            flag = 1;
            break;
        }
        p = p->next;
    }
    if (flag == 1)
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot Found\n");
    }
}

void deleteBeg()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *p = head;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        last = NULL;
    }
    else
    {
        head = head->next;
        free(p);
    }
}

void delLast()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (head == last)
    {
        free(head);
        head = NULL;
        last = NULL;
    }
    else
    {
        struct node *p = head;
        while (p->next != last)
        {
            p = p->next;
        }
        p->next = NULL;
        free(last);
        last = p;
    }
}

int main()
{
    addnode(100);
    addnode(10);
    addnode(1);
    addbeg(21);
    display();
    deleteBeg();
    delLast();
    display();
    sumoflinklist();
    max();
    search(10);
    search(0);
    return 0;
}
