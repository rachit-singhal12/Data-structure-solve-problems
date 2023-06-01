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
void evennodes(struct node *,int *);
struct node **root = NULL;

void inorder(struct node *curr)
{
    if(curr!=NULL)
    {
        inorder(curr->left);
        printf("%d ",curr->data);
        inorder(curr->right);
    }
}
int main()
{
    struct node *curr = NULL;
    int ch,val,count=0;
    char c;
    do{
        printf("Press 1 for insertion...\n");
        printf("Press 2 for display total number of even nodes...\n");
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
            count=0;
            evennodes(root,&count);
            printf("Total number of even nodes are : %d\n",count);
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

void evennodes(struct node *curr,int* c){
	if(curr== NULL){
		return ;
	}
	else{
		if(curr->data %2 ==0){
			*c=*c+1;
		}
		evennodes(curr->left,c);
		evennodes(curr->right,c);
		return;
	}
}