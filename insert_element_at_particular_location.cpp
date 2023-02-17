#include<stdio.h>
int main() 
{
	int arr[5] = {2,5,1,3};
	int key = 2,v=40;
	for(int i=4;i>=key-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[key-1] = 12;
	for(int i=0;i<5;i++)printf("%d ",arr[i]);
}