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

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf(" %d", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root){
    if(root!=NULL){
        printf(" %d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root!=NULL){
        preOrder(root->left);
        preOrder(root->right);
        printf(" %d", root->data);
    }
}

void search(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("\n%d NotFound", key);
    }
    else if (root->data == key)
    {
        printf("\n %d Found", key);
    }
    else if (key > root->data)
    {
        // right
        search(root->right, key);
    }
    else
    { // left
        search(root->left, key);
    }
}

void max(struct node *root)
{

    if (root == NULL)
    {
        return;
    }
    else if (root->right == NULL)
    {
        printf(" \n max =  %d", root->data);
    }
    else
    {
        max(root->right);
    }
}

int main()
{
    struct node *root = NULL;
    root=addNode(root, 20);
    addNode(root, 10);
    addNode(root, 40);
    addNode(root, 50);

    printf("\ninOrder");
    inOrder(root);

    printf("\npreOrder");
    preOrder(root);

    printf("\npostOrder");
    postOrder(root);

    printf("\n SEARCH");
    search(root, 200);

    printf("\n Max");
    max(root);

    // l r ro
    //  printf("\n%d %d %d %d", root->left->data, root->data, root->right->data,root->right->right->data);
}