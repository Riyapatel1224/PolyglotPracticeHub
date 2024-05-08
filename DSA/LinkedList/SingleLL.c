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
    struct node *p, *temp;
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
        printf("\nKey not Found");
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

void sumoflinklist()
{
    struct node *p;
    int sum = 0;
    p = head;

    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    // printf("%d  \n",sum);
    if (head == NULL)
    {
        printf("list is empty");
    }
    else
    {
        p = head;
        printf("\n");
        while (p < last)
        {
            printf("%d + ", p->data);
            p = p->next;
        }
        printf("\n%d", p->data);
        printf("\n");
        p = last;
        printf("%d = %d", p->data, sum);
    }
}
void max()
{
    struct node *p;
    p = head;
    int max = p->data;

    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    printf("\n%d", max);
}

// void delete(int key){
//     struct node *p;
//     p = head;
//     while(p!= NULL){
//         if( p->data =  key){
//             free(p);
//         }

//     }
// }

void search(int num)
{
    struct node *p;
    p = head;
    int flag = 0;

    while (p != NULL)
    {
        if (p->data = num)
        {
            flag = 1;
        }
        p = p->next;
    }
    if (flag == 1)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot Found");
    }
}

void deleteBeg()
{
    struct node *p;
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        last = NULL;
    }
    else
    {
        p = head;
        head = head->next;
        free(p);
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
    // sumoflinklist();
    // max();
    // search(0);
    //  printf("%d %d %d",head->data,head->next->data,head->next->next->data);
}