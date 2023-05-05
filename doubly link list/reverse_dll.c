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

void reverse()
{
    struct Node *high = head;
    struct Node *low = head;
    while(high->next!=NULL)
    {
        high = high->next;
    }
    while(high!=low)
    {
        int temp = high->data;
        high->data = low->data;
        low->data = temp;
        high = high->prev;
        low = low->next;
    }
}

int main()
{
    addbegin(10);
    addbegin(20);
    addbegin(30);
    addbegin(40);
    display();
    printf("\n");
    reverse();
    display();
    return 0;
}