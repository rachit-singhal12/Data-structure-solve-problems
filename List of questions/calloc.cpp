#include<iostream>
using namespace std;

int main()
{
    int n,*arr;
    cin>>n;
    arr = (int *)malloc(n*sizeof(int));
    if(arr == NULL)
    {
        cout<<"no memory allocated";
    }
    else{
       
        for(int i=0;i<n;i++)
        {
            cout<<*(arr+i)<<" ";
        }
    }
    return 0;
}