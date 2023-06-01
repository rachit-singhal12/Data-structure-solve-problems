#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

void insert(struct node **,int);
void inorder(struct node *);
void preorder(struct node *);
void postorders(struct node *);
void deletion(struct node **,int);
struct node* minValueNode(struct node *);

struct node **root = NULL;

int main()
{
    struct node *root=NULL;
    int ch,val,count=0;
    char c;
    do{
        printf("Press 1 for insertion...\n");
        printf("Press 2 for inorder traversal...\n");
        printf("Press 3 for preorder traversal...\n");
        printf("Press 4 for postorder traversal...\n");
        printf("Press 5 for delete a node in tree...\n");
        printf("Press 6 for exit...\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("enter the value : ");
            scanf("%d",&val);
            insert(&root,val);
            break;
        case 2:
           inorder(root);
            printf("\n");
            break;
        case 3:
            preorder(root);
            printf("\n");
            break;
        case 4:
            postorders(root);
            printf("\n");
            break;
        case 5:
            printf("Enter the value to be deleted : ");
            scanf("%d",&val);
            deletion(&root,val);
            break;
        case 6:
            exit(1);
            break;
        default:
            printf("invalid choice...\n");
            break;
        }
        printf("Press y for continue : ");
        scanf(" %c",&c);
    }while(toupper(c)=='Y');
    return 0;
}

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

struct node* minValueNode(struct node* current) {
    while (current && current->left != NULL) {
        current = current->left;
    }

    return current;
}

void deletion(struct node **curr,int val)
{
    if((*curr)==NULL)return;
    else if((*curr)->data>val)
    deletion(&((*curr)->left),val);
    else if((*curr)->data<val)
    deletion(&((*curr)->right),val);
    else {
        if((*curr)->left == NULL)
        {
            struct node *temp = *curr;
            *curr = (*curr)->right;
            free(temp);
        }
        else if((*curr)->right == NULL)
        {
            struct node *temp = *curr;
            *curr = (*curr)->left;
            free(temp);
        }
        else{
            struct node *temp = minValueNode((*curr)->right);
            (*curr)->data = temp->data;
            deletion(&((*curr)->right),temp->data);
        }
    }
}
