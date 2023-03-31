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
int search(Node *head,int n,int i)
{
    Node *curr =head;
    if(curr->data == n)
    return i;
    else if(curr->next == NULL)
    return -1;
    else{
        i++;
        return search(curr->next,n,i++);
    }
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
    cout<<search(head,n,0)+1;
    return 0;
}
