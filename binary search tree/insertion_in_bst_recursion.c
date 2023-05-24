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
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->right = NULL;
    temp->left = NULL;
    temp->data = n;
    return temp;
}

struct node *insert(struct node *temp,int n)
{
    if(temp==NULL)
    return createnode(n);
    else if(temp->data>n)
    temp->left= insert(temp->left,n);
    else if(temp->data<n)
    temp->right= insert(temp->right,n);
    return temp;
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
    struct node *root= NULL;
    root = insert(root,10);
    root = insert(root,2);
    root = insert(root,30);
    root = insert(root,4);
    root = insert(root,14);
    root = insert(root,1);
    root = insert(root,70);
    root = insert(root,80);
    inorder(root);
    return 0;
}
