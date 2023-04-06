#include<stdio.h>
struct  Node 
{
    int data;
    struct Node *next;
};
struct Node *next = NULL;
struct Node *head;

void insertion(int n,int pos)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = n;
    if(pos==1){
        temp->next = head;
        head= temp;
    }
    else{
        struct Node *curr = head;
        while(pos--)
        {
            if(pos==1)
            break;
            curr= curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}
void deletion(struct Node *temp)
{
    
}
void traverse(struct Node *head)
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    add_begin(10,1);
    add_begin(20,1);
    add_begin(30,1);
    add_begin(1,2);
    add_begin(3,5);
    traverse(head);
    return 0;
}