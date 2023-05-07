#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *next = NULL;
struct Node *prev = NULL;
struct Node *head;

void display()
{
    struct Node *curr = head;
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr = curr->next;
    }
}

void addbegin(int n)
{
    struct Node *curr = head;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = NULL;
    temp->prev = NULL;
    temp->data = n;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void addmid(int n)
{
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = n;
    temp->prev = NULL;
    temp->next = NULL;
    struct Node *curr = head;
    if(head == NULL)
     head = temp;
    else{
        if(pos == 1)
        {
            addbegin(n);
        }
        else
        {
            while(pos>2)
            {
                curr = curr->next;
                pos = pos-1;
            }
            temp->next = curr->next;
            curr->next = temp;
            temp->prev  = curr;
        }
    }
}

void addlast(int n)
{
    struct Node *curr = head;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else{
        while(curr->next !=NULL)
        {
            curr=curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
    }
}

void deletebegin()
{
    struct Node *curr = head;
    struct Node *temp = head;
    if(head == NULL)
    {
        printf("Underflow\n");
    }
    else if(head->next == NULL)
    {
        struct Node *temp = head;
        head = NULL;
        free(temp);
    }
    else
    {
        curr=curr->next;
        curr->prev  = NULL;
        head = curr;
        free(temp);
    }
}

void deletemid()
{
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(head == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        struct Node *curr = head,*temp,*t;
        if(pos==1)
        {
            deletebegin();
        }
        while(pos>2)
        {
            pos--;
            curr = curr->next;
        }
        temp = curr->next;
        curr->next = temp->next;
        t = temp->next;
        t->prev = curr;
    }
}

void deletelast()
{
    struct Node *curr = head,*temp;
    while(curr->next!=NULL)
    {
        curr = curr->next;
    }
    temp = curr;
    curr=curr->prev;
    curr->next = NULL;
    free(temp);
}
int main()
{
    int ch,n;
    while(1)
    {
        printf("Press 1 for insert at begin ...\n ");
        printf("Press 2 for insert at mid ...\n ");
        printf("Press 3 for insert at last ...\n ");
        printf("Press 4 for delete from begin ...\n ");
        printf("Press 5 for delete from mid ...\n ");
        printf("Press 6 for delete from last ...\n ");
        printf("Press 7 for display list... \n ");
        printf("Press 8 for exit ... \n ");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value : ");
            scanf("%d",&n);
            addbegin(n);
            break;
        case 2:
            printf("Enter the value : ");
            scanf("%d",&n);
            addmid(n);
            break;
        case 3:
            printf("Enter the value : ");
            scanf("%d",&n);
            addlast(n);
            break;
        case 4:
            deletebegin();
            break;
        case 5:
            deletemid();
            break;
        case 6:
            deletelast();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
