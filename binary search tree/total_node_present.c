#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node 
{
    struct node *left;
    int data;
    struct node *right;
};
void insertion(struct node **,int);
void total_nodes(struct node *,int *);
struct node **root = NULL;

int main()
{
    struct node *curr = NULL;
    int ch,val,co=0;
    char c;
    do{
        printf("Press 1 for insertion...\n");
        printf("Press 2 for display total elements in a tree...\n");
        printf("Press 3 for exit...\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value : ");
            scanf("%d",&val);
            insertion(&root,val);
            break;
        case 2:
            co=0;
            total_nodes(root,&co);
            printf("Total nodes are : %d\n",co);
            break;
        case 3:
            exit(0);
            break;
        default:
            break;
        }
        printf("Press y for continue : ");
        scanf(" %c",&c);
    }while(toupper(c)=='Y');
    return 0;
}

void insertion(struct node **curr,int n)
{
    if((*curr)==NULL)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = n;
        temp->left = NULL;
        temp->right = NULL;
        (*curr) = temp;
    }
    else if((*curr)->data>n)
    {
        insertion(&((*curr)->left),n);
    }
    else{
        insertion(&((*curr)->right),n);
    }
}

void total_nodes(struct node *curr,int *count)
{
    if(curr==NULL)return;
    else
    {
        (*count)=(*count)+1;
        total_nodes(curr->left,count);
        total_nodes(curr->right,count);
    }
}