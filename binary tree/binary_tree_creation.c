#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int n)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right = NULL;
    temp->data = n;
    return temp;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    struct node *root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);

    //inorder traverse
    inorder(root);
    printf("\n");
    //postorder traverser
    postorder(root);
    printf("\n");
    //preorder traverse
    preorder(root);
    printf("\n");
    return 0;
}