#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void rotate(int a[],int n){
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}

int main(){
    int a[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    rotate(a,4);
     for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
     }
}