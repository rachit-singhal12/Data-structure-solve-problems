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

void prinList(Node *head)
{
    Node *curr = head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

Node *insert_at_particular_position(Node *head,int n,int pos)
{
    Node *temp = new Node(n);
    Node *curr = head;
    Node *temp1;
    if(pos==1)
    {
        temp->next = curr;
        return temp;
    }
    while(pos--)
    {
        if(pos==1)break;
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main()
{
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp1 = new Node(30);
    Node * temp2 = new Node(40);
    head->next = temp;
    temp->next = temp1;
    temp1->next = temp2;
    int n,pos;
    cin>>n>>pos;
    prinList(head);
    cout<<endl;
    head = insert_at_particular_position(head,n,pos);
    prinList(head);
    return 0;
}