#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[n] = {2,3,10,6,4,8,1};
    int res = arr[1]-arr[0];
    int mins = arr[0];
    for(int i=0;i<n;i++)
    {
        if(res<(arr[i]-mins))
            res = arr[i]-mins;
        if(arr[i]<mins)
            mins = arr[i];
    }
    cout<<res;
    return 0;
}