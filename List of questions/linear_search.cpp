#include<iostream>
using namespace std;

int main()
{
	int n,k,temp=-1;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			temp=i;
			break;
		}
	}
	cout<<temp;
	return 0;
}