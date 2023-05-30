#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node **root = NULL;

void insert(struct node **curr,int data)
{
    if((*curr)==NULL)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->left = NULL;
        temp->right = NULL;
        temp->data = data;
        *curr= temp;
    }
    else if((*curr)->data>data)
    insert(&((*curr)->left),data);
    else
    insert(&((*curr)->right),data);
}

void inorder(struct node *curr)
{
    if(curr!=NULL)
    {
        inorder(curr->left);
        printf("%d ",curr->data);
        inorder(curr->right);
    }
}

void preorder(struct node *curr)
{
    if(curr!=NULL)
    {
        printf("%d ",curr->data);
        preorder(curr->left);
        preorder(curr->right);
    }
}

void postorders(struct node *curr)
{
    if(curr!=NULL)
    {
        postorders(curr->left);
        postorders(curr->right);
        printf("%d ",curr->data);
    }
}

void count(struct node *curr,int *c)
{
    if(curr!=NULL)
    {
        *c=*c+1;
        count(curr->left,c);
        count(curr->right,c);
    }
}

void sum(struct node *curr,int *m)
{
    if(curr!=NULL)
    {
        *m=*m+curr->data;
        sum(curr->left,m);
        sum(curr->right,m);
    }
}

void deletion(struct node **curr,int n)
{
    if((*curr)->left==NULL && (*curr)->right==NULL && (*curr)->data==n)
    {
        free(curr);
    }
    else if((*curr)->data>n)
    deletion(&((*curr)->left),n);
    else
    deletion(&((*curr)->right),n);
}
int main()
{
    int c=0,s=0;
    struct node *root = NULL;
    insert(&root,100);
    insert(&root,20);
    insert(&root,200);
    insert(&root,10);
    insert(&root,30);
    insert(&root,150);
    insert(&root,300);
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorders(root);
    count(root,&c);
    printf("Total node present are %d \n",c);
    sum(root,&s);
    printf("Sum of element are %d\n",s);
    deletion(&root,10);
    inorder(root);
    return 0;
}