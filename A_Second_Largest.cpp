#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sec(int a[],int n){
    if(n<2) return -1;
    int second=INT_MIN;
    int lar=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>lar){
            second=lar;
            lar=a[i];
        }
         else if (a[i] > second && a[i] != lar) 
        {
            second= a[i];
        }
    }
    return second;
}

int main(){

    int a[4]={1,8,6,10};
    int y=sec(a,4);
    cout<<y;
    return 0;

}