#include<stdio.h>
#include<stdlib.h>
int push();
int pop();
int traverse();
int total_element();

struct Node
{
    int data;
    struct Node *next;
};
struct Node *next = NULL;
struct Node *head = NULL;
int main()
{
    int choice;
    while(1)
    {
        printf("Press 1 for push an element in an stack\n");
        printf("Press 2 for pop an element in an stack\n");
        printf("Press 3 for display all elements of stack\n");
        printf("press 4 total element present in an stack\n");
        printf("press 5 Quit menu driven program\n");
        printf("Enter your's choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            total_element();
            break;
        case 5:
            goto end;
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    }
    end:
    printf("thank you");
    return 0;
}
int push()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->next = head;
    temp->data = n;
    head = temp;
    printf("Element inserted successfully\n");
}
int pop()
{
    if(head == NULL)
    {
        printf("stack underflow\n");
    }
    else{
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp = head;
        head= head->next;
        delete(temp);
        printf("Element deleted successfully\n");
    }
}
int traverse()
{
    if(head == NULL)
    {
        printf("stack underflow\n");
    }
    else{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    }
}
int total_element()
{
    if(head == NULL)
    {
        printf("Stack underflow\n");
    }
    else{
    int flag=0;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp =head;
    while(temp!=NULL)
    {
        flag++;
        temp = temp->next;
    }
    printf("%d",flag);
    }
}