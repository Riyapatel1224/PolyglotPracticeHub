#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void addData(int num)
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

void display()
{
    struct node *p;
    if (head == NULL)
    {
        printf("\nEMPTY\n");
    }
    else
    {
        p = head;
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->next;
        }
    }
}

void SingleTransaction()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct node *p = head;
    int maxProfit = 0;
    struct node *buyDay = NULL;
    struct node *sellDay = NULL;
    while (p != NULL)
    {
        struct node *q = p;
        while (q != NULL)
        {
            printf("%d q", q->data);
            printf("\n");
            printf("%d p", p->data);
            int diff = q->data - p->data;
            // printf("diff %d\n", diff);
            if (diff > maxProfit)
            {
                buyDay = p;
                sellDay = q;
                maxProfit = diff;
            }
            q = q->next;
        }
        p = p->next;
    }
    printf("\nMaximum Single Transaction Profit can be : %d\n", maxProfit);
    printf("\nBuy at: %d\n", buyDay->data);
    printf("\nSell at: %d\n", sellDay->data);
}

int main()
{
    // addData(7);
    // addData(1);
    // addData(5);
    // addData(6);
    // addData(3);
    // addData(4);
    // addData(4);
    // addData(4);
    // addData(4);
    // addData(4);

    // addData(8);
    // addData(5);
    // addData(3);
    // addData(4);
    // addData(10);
    // addData(4);
    // addData(2);
    // addData(11);
    // addData(2);
    // addData(6);

    addData(3);
    addData(13);
    addData(5);
    addData(14);
    addData(16);
    addData(3);
    addData(12);
    addData(24);
    addData(10);
    addData(10);

    display();
    printf("\n");
    SingleTransaction();
}