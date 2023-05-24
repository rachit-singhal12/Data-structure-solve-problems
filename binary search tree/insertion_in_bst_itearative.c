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

struct node *insert(struct node *root,int n)
{
    struct node *parent = NULL;
    struct node *curr = root;
    while(curr!=NULL)
    {
        parent = curr;
        if(curr->data>n)
        curr = curr->left;
        else if(curr->data<n)
        curr = curr->right;
        else
        return root;
    }
    if(parent == NULL)
    return createnode(n);
    else if(parent->data<n)
    parent->right = createnode(n);
    else
    parent->left = createnode(n);
    return root;
}

void inorder(struct node *temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
}

int main()
{
    struct node *root = NULL;
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,40);
    root = insert(root,50);
    root = insert(root,60);
    root = insert(root,70);
    root = insert(root,80);
    root = insert(root,90);
    inorder(root);
    return 0;
}
