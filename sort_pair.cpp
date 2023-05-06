#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {4,3,2,6,4};
    char carr[] = {'b','d','e','p','a'};
    pair <int,char> pa[5];
    for(int i=0;i<5;i++)
    {
        pa[i] = {arr[i],carr[i]};
    }
    sort(pa,pa+5);
    for(int i=0;i<5;i++)
    {
        cout<<pa[i].first<<" "<<pa[i].second<<endl;
    }
    return 0;
}