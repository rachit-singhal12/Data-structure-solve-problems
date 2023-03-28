#include<iostream>
using namespace std;

int jose(int n,int k)
{
    if(n==1)
    {
        return 0;
    }
    else{
        return (jose(n-1,k)+k)%n;
    }
}
int main()
{
    int n,k;
   cin>>n>>k;
   cout<<jose(n,k);
}