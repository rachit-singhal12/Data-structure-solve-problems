#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int n)
    {
        data =n;
        next=NULL;
    }
};
Node *delete_begin(Node *head)
{
    Node *curr = head;
    head = curr->next;
    curr = NULL;
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
    Node *head = new Node(10);
    Node * temp1 = new Node(20);
    Node * temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    printList(head);
    cout<<endl;
    head  = delete_begin(head);
    printList(head);
    return 0;
}