#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int largest(int a[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
return maxi;
}

int main(){
    int a[4]={1,7,3,9};
    int y = largest(a,4);
    cout<<y;
    return 0;
}