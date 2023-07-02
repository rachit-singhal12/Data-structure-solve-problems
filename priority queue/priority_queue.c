#include<stdio.h>
#include<stdlib.h>

typedef struct item
{
    int value;
    int priority;
}items;

items arr[1000];
int size=-1;

void enqueue(int v,int p)
{
    if(size==1000-1)
    {
        printf("priority queue is full\n");
    }
    else{
        size++;
        arr[size].value=v;
        arr[size].priority=p;
    }
}

int peek()
{
    if(size==-1)return;
    int in=-1;
    int pro = -1;
    for(int i=0;i<=size;i++)
    {
        if(pro==arr[i].priority && in>-1 && arr[i].value>arr[in].value)
        {
            pro = arr[i].priority;
            in = i;
        }
        else if(pro<arr[i].priority)
        {
            pro = arr[i].priority;
            in = i;
        }
    }
    return in;
}

int dequeue()
{
    int n = peek();
    for(int i=n;i<=size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}

int main()
{
    enqueue(10, 2);
    enqueue(14, 4);
    enqueue(16, 4);
    enqueue(12, 3);
    int i  = peek();
    printf("%d ",arr[i].value);
    dequeue();
    i = peek();
    printf("%d ",arr[i].value);
    return 0;
}