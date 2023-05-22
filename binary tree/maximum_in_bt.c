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
}

int inoder(struct node *root)
{
    if(root!=NULL)
    {
        inoder(root->left);
        printf("%d ",root->data);
        inoder(root->right);
    }
}

int maxs(struct node *root)
{
    if(root!=NULL)
    {
        int leftMax = maxs(root->left);
        int rightMax = maxs(root->right);
        int currentMax = root->data;

        if (leftMax > currentMax)
            currentMax = leftMax;
        if (rightMax > currentMax)
            currentMax = rightMax;

        return currentMax;
    }
    else{
        return -1;
    }
}
int main()
{
    struct node *root = createnode(10);
    root->left = createnode(20);
    root->right = createnode(30);
    root->left->left = createnode(40);
    root->left->right = createnode(50);
    root->right->left = createnode(60);
    root->right->right = createnode(70);
    root->right->right->left = createnode(80);
    inoder(root);
    printf("\n%d",maxs(root));
    return 0;
}