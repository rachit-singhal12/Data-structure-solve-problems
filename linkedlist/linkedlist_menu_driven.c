#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *next = NULL;
struct Node *head = NULL;

void add(int n,int pos)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data=n;
    if(pos==1)
    {
        temp->next = head;
        head = temp;
    }
    else{
         struct Node *curr = head;
         while (pos--)
         {
            if(pos==1)
            break;
            curr = curr->next;
         }
         temp->next = curr->next;
         curr->next = temp;
    }
}

void delete_node(int pos)
{
    struct Node *curr = head;
    if(pos==1)
    {
        curr = head->next;
        head = curr;
    }
    else{
        while(pos--)
        {
            if(pos==1)
            break;
            curr=curr->next;
        }
        curr->next=curr->next->next;
    }
}
void printList(struct Node *head)
{
    struct Node *curr = head;
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
}
void count(struct Node *head)
{
    struct Node *curr = head;
    int temp =0;
    while(curr!=NULL)
    {
        temp++;
        curr = curr->next;
    }
    printf("%d",temp);
}
int main()
{
    int choice;
    while(1)
    {
        printf("press 1 for Insertion...\n");
        printf("press 2 for Deletion...\n");
        printf("press 3 for Traversing...\n");
        printf("press 4 for total element present...\n");
        printf("press 5 for exit...\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            int n,pos;
            printf("Enter the value and postion :");
            scanf("%d%d",&n,&pos);
            add(n,pos);
            break;
            case 2:
            printf("Enter the value :");
            scanf("%d",&pos);
            delete_node(pos);
            break;
            case 3:
            printList(head);
            break;
            case 4:
            count(head);
            break;
            case 5:
            goto end;
            break;
            default:
            break;
        }
    }
    end:
    return 0;
}