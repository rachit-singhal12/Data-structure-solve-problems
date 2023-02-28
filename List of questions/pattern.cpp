#include<iostream>
using namespace std;
int main(){
    int n,temp=1;
    cin>>n;
    for(int i=1;i<2*n;i++){
        if(i<n){
        for(int j=0;j<n-i;j++)
            cout<<" ";
        for(int k=1;k<=temp;k++)
            cout<<"*";
        temp=temp+2;
        }
        else
        {
            for(int k=n-(i%n);k<n;k++)
                cout<<" ";
            for(int j=temp;j>0;j--)
                cout<<"*";
                temp-=2;
        }
        printf("\n");
    }
    return 0;
}