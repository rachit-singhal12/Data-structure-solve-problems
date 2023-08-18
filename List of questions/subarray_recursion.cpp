#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>v;
void print(vector<int> arr,int start,int end)
{
    if(end==arr.size())
    {
        return;
    }
    else if(start>end)
    {
        print(arr,0,end+1);
    }
    else{
        vector<int>v1;
        for(int i=start;i<=end;i++)
        v1.push_back(arr[i]);
        v.push_back(v1);
        print(arr,start+1,end);
    }
}
int main()
{
    vector<int> arr={1,2,3};
    print(arr,0,0);
    for(auto x : v)
    {
        for(auto y : x)
        cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}
