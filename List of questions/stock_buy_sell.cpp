#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,5,3,8,12};
    int res,r=0;
    for(int i=0;i<5;i++)
    {
        res=arr[i+1]-arr[i];
        if(res>0)r+=res;
    }
    cout<<r;
    return 0;
}