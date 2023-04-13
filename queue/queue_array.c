#include<stdio.h>
#include<stdlib.h>
int arr[10];
int head = 0;
int tail = -1;
int size =10;
void insertion()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    if(size == (tail+1))
    {
        printf("Array is full \n");
    }
    else{
        tail = tail+1;
        arr[tail] = n;
        printf("Element inserted successfully\n");
    }
}
void deletion()
{
    if(tail == -1)
    {
        printf("Array is empty \n");
    }
    else if(tail==0)
    {
        arr[tail] = 0;
        tail--;
    }
    else{
        for(int i=0;i<tail;i++)
        {
            arr[i] = arr[i+1];
        }
        arr[tail] = 0;
        tail--;
        printf("Element deleted \n");
    }
}
void display()
{
    for(int i=head;i<=tail;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    while(1)
    {
        printf("Press 1 for Insertion ...\n ");
        printf("Press 2 for Deletion ... \n ");
        printf("Press 3 for Display ... \n ");
        printf("Press 4 for exit ... \n ");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}