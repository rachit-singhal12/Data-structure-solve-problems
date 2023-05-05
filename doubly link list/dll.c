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
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    addbegin(n);
    addbegin(n);
    addbegin(n);
    addbegin(n);
    addbegin(n);

    display();

    addlast(20);
    addlast(20);
    addlast(20);
    addlast(20);
    addlast(20);

    printf("\n");
    display();

    deletebegin();
    deletebegin();
    printf("\n");
    display();


    deletelast();
    deletelast();
    deletelast();
    printf("\n");
    display();
    printf("\n");
    addmid(30);
    addmid(30);
    addmid(30);
    printf("\n");
    display();
    
    deletemid();
    deletemid();
    display();
    return 0;
}