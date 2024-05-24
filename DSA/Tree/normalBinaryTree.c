#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;

int main()
{
    //root
    root = malloc(sizeof(struct node));
    root->data = 10;
    root->left = NULL;
    root->right = NULL;


    //left
    struct node *tmp = malloc(sizeof(struct node));
    tmp->data = 20;
    root->left = NULL;
    root->right = NULL;
    root->left = tmp;

    //right
    tmp = malloc(sizeof(struct node));
    tmp->data = 30;
    root->left = NULL;
    root->right = NULL;
    root->right = tmp;

    printf("\n     %d     ", root->data);
    printf("\n   %d   %d", root->left->data,root->right->data);
}
