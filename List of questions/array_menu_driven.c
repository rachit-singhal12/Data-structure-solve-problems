#include<stdio.h>
#include<stdlib.h>
int size = 10;
int arr[10];
int top =-1;

void insert()
{
    int n,pos;
    printf("Enter the value :");
    scanf("%d",&n);
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(top==-1)
    {
        top++;
        arr[top] = n;
    }   
    else if((top+1) == size)
    {
        printf("Array is full\n");
    }
    else if((top+1)==(pos-1))
    {
        arr[pos-1] = n;
        top++;
    }
    else if((top+1)<pos){
        printf("PLease enter the valid position\n");
    }
    else{
        for(int i=top;i>=(pos-1);i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = n;
        top++;
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void delete()
{
    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(top==-1)
    {
        printf("Array is empty\n");
    }
    else if((pos-1) > top)
    {
        printf("Not lies in an range\n");
    }
    else{
        for(int i=pos-1;i<=top;i++)
        {
            arr[i] = arr[i+1];
        }
        top--;
    }
}
void count()
{
    int temp=0;
    for(int i=0;i<top;i++)
    {
        temp++;
    }
    printf("%d\n",temp);
}
int main()
{
    int ch;
    while(1)
    {
        printf("Press 1 for insert a elements in an array...\n");
        printf("Press 2 for delete an elements of an array...\n");
        printf("Press 3 for displaying an array elemenst...\n");
        printf("Press 4 for check the total number of elements present in an array...\n");
        printf("Press 5 for exit...\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            count();
            break;
            case 5:
            exit(1);
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}