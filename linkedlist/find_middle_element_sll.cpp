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

void find_middle(Node *head)
{
    Node *curr = head,*c = head;
    int temp=0,value=0;
    while(curr!=NULL)
    {
        temp++;
        curr = curr->next;
    }
    for(int i=0;i<temp/2;i++)
    {
        c = c->next;
    }
    cout<<c->data;;
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
    Node *head  = new Node(10);
    Node *temp1  = new Node(20);
    Node *temp2  = new Node(30);
    Node *temp3  = new Node(40);
    Node *temp4  = new Node(50);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;
    printList(head);
    cout<<endl;
    find_middle(head);
    return 0;
}