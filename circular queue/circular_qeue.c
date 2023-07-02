#include<stdio.h>
#include<stdlib.h>

int queue[10];
int size = 10;
int head=-1,rear=-1;

int enqueue(int n)
{
    if((head==0 && rear==(size-1)) || rear== (head-1)%(size-1))
    {
        printf("Queue is fulll");
    }
    else if(head==-1){
        head=0;
        rear=0;
        queue[rear] = n;
    }
    else if(rear==size-1 && head!=0)
    {
        rear=0;
        queue[rear] = n;
    }
    else{
        rear++;
        queue[rear]= n;
    }
}

void dequeue()
{
    if(head==-1 && rear==-1)printf("Empty");
    if(rear==head)
    {
        queue[head]=-1;
        rear=head=-1;
    }
    else if(head==size-1)
    {
        queue[head]=-1;
        head=0;
    }
    else{
        queue[head]=-1;
        head++;
    }
}

void display(){
    if(rear==-1 && head==-1)printf("Queue is empty\n");
    if(head<=rear)
    {
        for(int i=head;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
    else{
        for(int i=head;i<size;i++)
        {
            printf("%d ",queue[i]);
        }
        for(int i=0;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    enqueue(100);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    enqueue(110);
    display();
    dequeue();
    display();
    return 0;
}