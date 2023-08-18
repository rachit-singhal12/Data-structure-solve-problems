#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>v;
    vector<int>v1;
    int arr[]={1,2,0,7,2};
    int n = 5;
    for(int i=0;i<n;i++)
    {
        int curr = 0 ;
        for(int j=i;j<n;j++)
        {
            v1={};
            for(int k=i;k<=j;k++)
            {
                v1.push_back(arr[k]);
            }
            v.push_back(v1);
        }
    }
    for(auto x : v)
    {
        for(auto y : x)
        cout<<y<<" ";
        cout<<endl;
    }
}