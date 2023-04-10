#include<stdio.h>
int main()
{
    int n = 12345,sum=0,curr_sum=0;
    while(n>0)
    {
        int res = n%10;
        curr_sum+=res;
        sum+=curr_sum;
        n/=10;
    }
    printf("%d",sum);
}