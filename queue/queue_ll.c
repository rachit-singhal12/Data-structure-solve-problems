#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *next = NULL;
struct Node *head;

void insertion()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data=n;
    if(head == NULL)
    {
        head = temp;
        head->next = NULL;
    }
    else{
        struct Node *curr = head;
        while(curr->next!=NULL)
        {
            curr= curr->next;
        }
        curr->next = temp;
        temp->next = NULL;
    }
}
void deletion()
{
    if(head == NULL)
    {
        printf("queue is empty\n");
    }
    else{
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("queue is empty");
    }
    struct Node *curr = head;
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr->next;
    }
    printf("\n");
}
int main()
{
    int ch;
    while(1)
    {
        printf("Press 1 for Insertion ...\n ");
        printf("Press 2 for Deletion ... \n ");
        printf("Press 3 for Display ... \n ");
        printf("Press 4 for exit ... \n ");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}