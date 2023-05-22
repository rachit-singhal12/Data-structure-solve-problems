#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *createnode(int n)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    temp->data = n;
    return temp;
}

int size(struct node *root)
{
    if(root==NULL)
    return 0;
    else
    return 1+size(root->left)+size(root->right);
}

int main()
{
    struct node *root = createnode(80);
    root->left = createnode(30);
    root->left->left = createnode(90);
    root->right = createnode(40);
    root->right->right = createnode(50);
    root->right->right->left = createnode(60);
    printf("%d",size(root));
    return 0;
}