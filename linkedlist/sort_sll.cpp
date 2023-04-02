#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = NULL;
    }
};
Node *sort(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        Node *temp = curr->next;
        while(temp!=NULL)
        {
            if((curr->data)>=(temp->data))
            {
                int v = curr->data;
                curr->data = temp->data;
                temp->data = v;
            }
            temp = temp->next;
        }
        curr=curr->next;
    }
    return head;
}
 void printList(Node *head)
 {
    Node * curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
 }
int main()
{
    Node *head  = new Node(12);
    Node *temp1  = new Node(8);
    Node *temp2  = new Node(7);
    Node *temp3  = new Node(15);
    Node *temp4  = new Node(20);
    Node *temp5  = new Node(1);
    Node *temp6  = new Node(12);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;
    temp5->next = temp6;
    printList(head);
    cout<<endl;
    head = sort(head);
    printList(head);
    return 0;
}