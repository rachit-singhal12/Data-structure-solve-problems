#include<stdio.h>
#include<iostream>
using namespace std;

int merge(int arr[],int beg,int mid,int end)
{
    int n1 = mid-beg + 1;
    int n2 = end-mid;
    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
    left[i]=arr[i+beg];

    for(int i=0;i<n2;i++)
    right[i] =arr[mid+1+i];

    int i=0,j=0,k=beg;

    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void sortmerge(int arr[],int beg,int end)
{
    if(beg<end)
    {
        int mid = (beg+end)/2;
        sortmerge(arr,beg,mid);
        sortmerge(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    for(int i=0;i<7;i++)cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"after sorting"<<endl;
    sortmerge(arr,0,6);
    for(int i=0;i<7;i++)cout<<arr[i]<<" ";

}