#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* addNode(struct node *root,int data){
    if(root==NULL){
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if(root->data > data){
        // struct node *temp = malloc(sizeof(struct node));
        // temp->data = data;
        // temp->left = NULL;
        // temp->right = NULL;
        // root->left = temp;
        root->left = addNode(root->left, data);
    }
    else{
       
        // struct node *temp = malloc(sizeof(struct node));
        // temp->data = data;
        // temp->left = NULL;
        // temp->right = NULL;
        // root->right = temp;
        root->right = addNode(root->right, data);
    }
    return root;
}

int main()
{
    struct node *root = NULL;
    root=addNode(root, 20);
    addNode(root, 10);
    addNode(root, 40);

    printf("%d %d %d", root->left->data, root->data, root->right->data);
}