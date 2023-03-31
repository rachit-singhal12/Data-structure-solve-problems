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
int search(Node *head,int n)
{
    Node *curr =head;
    int i=0;
    while(curr!=NULL)
    {
        i++;
        if(curr->data == n)
        return i;
        curr = curr->next;
    }
    return -1;
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node * temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    int n;
    cin>>n;
    cout<<search(head,n);
    return 0;
}
