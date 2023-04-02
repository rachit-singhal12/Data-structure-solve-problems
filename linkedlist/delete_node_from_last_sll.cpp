#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int n)
    {
        data =n;
        next = NULL;
    }
};
int printList(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
Node *delete_from_last(Node *head)
{
    Node *curr  = head;
    while(curr != NULL)
    {
        if(curr->next->next == NULL)
        {
            curr->next = NULL;
            break;
        }
        curr= curr->next;
    }
    delete(curr->next);
    return head;
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next=temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    printList(head);
    cout<<endl;
    head = delete_from_last(head);
    printList(head);
    return 0;
}