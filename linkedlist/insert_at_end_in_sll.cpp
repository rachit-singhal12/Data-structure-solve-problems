#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = NULL;
    }
};
Node *insert_at_end(Node *head,int n)
{
    Node *temp = new Node(n);
    Node *curr = head;
    if(head == NULL)
    return temp;
    while(curr->next!=NULL)
    {

        curr=curr->next;
    }
    curr->next = temp;
    return head;
}
void printList(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main()
{
    Node *head= new Node(10);
    Node *temp= new Node(20);
    head->next= temp;

    int n;
    cin>>n;
    head = insert_at_end(head,n);
    printList(head);
    return 0;
}