#include <iostream>
using namespace std;
int main() {
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
		cin>>arr[i];
		int maxi = -1;
		for(int i=0;i<size;i++)
		{
			if(maxi<arr[i])maxi = arr[i];
		}
		int newarray[maxi+1]={0};
		for(int i=0;i<size;i++)
		{
			newarray[arr[i]]++;
		}
		cout<<endl;
		int news[size];
		int i=0,j=0;
		while(i<size)
		{
		    while(j==0)j++;
		    for(int k=0;k<newarray[j];k++)
		    {
		        news[i]=j;
		        i++;
		    }
		    j++;
		}
		for(int i=0;i<size;i++)
		cout<<news[i]<<" ";
}