#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int min(int a,int b)
{
    if(a>b)return b;
    else return a;
}
int lcm(int a,int b,int max)
{
    if(max == a*b)
    {
        return a*b;
    }
    else if(max%a==0 && max%b==0 )
    {
        return max;
    }
    else{
        return lcm(a,b,max+1);
    }
}
int hcf(int a,int b,int min)
{
    if(min==1)
    return min;
    else if(a%min==0 && b%min==0)
    {
        return min;
    }
    else
    {
        return hcf(a,b,min-1);
    }
}
int factorial(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int fibonnaci(int a,int b,int limit)
{
    if(limit==0)
    return 0;
    else{
        int temp=a+b;
        printf("%d ",temp);
        return fibonnaci(b,temp,limit-1);
    }
}
int main()
{
    int ch,a,b;
    while(1){
        printf("Press 1 for hcf ...\n ");
        printf("Press 2 for lcm ... \n ");
        printf("Press 3 for factorial ... \n ");
        printf("Press 4 for fibonnaci ...\n  ");
        printf("Press 5 for exit ... \n ");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 2:
            printf("Enter the both number : ");
            scanf("%d",&a);
            scanf("%d",&b);
            printf("%d\n",lcm(a,b,max(a,b)));
            break;
        case 1:
            printf("Enter the both number : ");
            scanf("%d",&a);
            scanf("%d",&b);
            printf("%d\n",hcf(a,b,min(a,b)));
            break;
        case 3:
            printf("Enter the number :");
            scanf("%d",&a);
            printf("factorial of %d is %d\n",a,factorial(a));
            break;
        case 4:
            printf("Enter the limit : ");
            scanf("%d",&a);
            printf("0 1 ");
            fibonnaci(0,1,a);
            printf("\n");
            break;
        case 5:
            printf("Thank you \n");
            exit(1);
            break;
        default:
            printf("Invalid choice \n");
            break;
        }
    }
    return 0;
}