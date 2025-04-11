// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// }*root=NULL;

// int main()
// {
//     //root
//     root = malloc(sizeof(struct node));
//     root->data = 10;
//     root->left = NULL;
//     root->right = NULL;


//     //left
//     struct node *tmp = malloc(sizeof(struct node));
//     tmp->data = 20;
//     root->left = NULL;
//     root->right = NULL;
//     root->left = tmp;

//     //right
//     tmp = malloc(sizeof(struct node));
//     tmp->data = 30;
//     root->left = NULL;
//     root->right = NULL;
//     root->right = tmp;

//     printf("%d %d %d", root->data, root->left->data, root->right->data);
// }

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;

} *root = NULL;

int main()
{
    root = malloc(sizeof(struct node));
    root->data = 500;
    root->left = NULL;
    root->right = NULL;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = 250;
    temp->left = NULL;
    temp->right = NULL;
    root->left = temp;

    temp = malloc(sizeof(struct node));
    temp->data = 150;
    temp->left = NULL;
    temp->right = NULL;
    root->right = temp;

    printf("%d %d %d", root->data, root->left->data, root->right->data);
    printf("\n");
}