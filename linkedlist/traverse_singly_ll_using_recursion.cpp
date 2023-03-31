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
int printList(Node *head)
{
    if(head==NULL)
    {
        return head->data;
    }
    cout<<head->data<<" ";
    return printList(head->next);
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    printList(head);
}

