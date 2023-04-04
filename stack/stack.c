//Stack menu driven using array
#include<stdio.h>
int push();
int pop();
int traverse();
int total_element();

//global elements
int SIZE = 5;
int top = -1;
int arr[5];
int main()
{
    int choice;
    while(1)
    {
        printf("Press 1 for push an element in an stack\n");
        printf("Press 2 for pop an element in an stack\n");
        printf("Press 3 for display all elements of stack\n");
        printf("press 4 total element present in an stack\n");
        printf("press 5 Quit menu driven program\n");
        printf("Enter your's choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            total_element();
            break;
        case 5:
            goto end;
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    }
    end:
    printf("thank you");
    return 0;
}
int push()
{
    if(top >=  SIZE-1)
    {
        printf("Stack overflow\n");
    }
    else{
         int n;
    printf("Enter the value \n");
    scanf("%d",&n);
        top++;
        arr[top] = n;
        printf("Element inserted successfully\n");
    }
}
int pop()
{
    if(top == -1)
    {
        printf("Stack underflow\n");
    }
    else{
        top--;
        printf("Element deleted successfully\n");
    }
}
int traverse()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
int total_element()
{
    printf("Total element present in an stack was %d\n",top+1);
}