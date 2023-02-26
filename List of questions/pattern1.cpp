#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<2*n;i++){
         if(i<n){
        for(int j=i%n;j<n;j++)
            printf(" ");
        for(int k=(n-(i%n));k<n;k++)
            printf("*");
        }
        else{
            for(int j=i%n;j>0;j--)
                printf(" ");
            for(int l=n;l>((i%n));l--)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}