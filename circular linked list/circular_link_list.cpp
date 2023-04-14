#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *next = NULL;
struct Node *head = NULL;
int count()
{
    struct Node *curr = head;
    if(head==NULL)
    {
        return 0;
    }
    int count=0;
    do{
        count++;
        curr=curr->next;
    }while(curr!=head);
    return count;
}
void insertion()
{
    int n,pos;
    printf("Enter the value and position : ");
    scanf("%d",&n);
    scanf("%d",&pos);
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = n;
    int size = count()+1;
    if(head == NULL)
    {
        head = temp;
        head->next = head;
    }
    else if(pos==1)
    {
        struct Node *curr = head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next = temp;
        temp->next = head;
        head = temp;
    }
    else if(pos == size)
    {
        struct Node *curr = head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    else{
        struct Node *curr = head;
        while((pos%size)>2)
        {
            curr=curr->next;
            pos--;
        }
        temp->next = curr->next;
        curr->next= temp;
    }
}
void deletion()
{
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    int size = count();
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else if(head->next == head)
    {
        free(head);
        head = NULL;
    }
    else if(pos==1)
    {
        struct Node *curr =head;
        while(curr->next!=head)
        {
            curr=curr->next;
        }
        struct Node *temp = head;
        curr->next = head->next;
        free(temp);
        head = curr->next;
    }
    else{
        struct Node *curr = head;
        while(pos>2)
        {
            curr = curr->next;
            pos--;
        }
        struct Node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
    }
}
void display()
{
    if(head==NULL)
    {
        printf("list is empty \n");
    }
    else{
        struct Node *curr = head;
        do{
            printf("%d ",curr->data);
            curr=curr->next;
        }while(curr!=head);
        printf("\n");
    }
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