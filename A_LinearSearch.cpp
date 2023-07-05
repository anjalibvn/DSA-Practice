#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int linearsearch(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x)
          return i;
    }
    return -1;
}

int main(){
    int a[]={1,2,3,5,7,9,10};
    int y=linearsearch(a,7,6);
    if(y==-1){
        cout<<"NUMBER NOT FIND";
    }
    else{
        cout<<"NUMBER FOUND AT INDEX "<<y;
    }
    return 0;
}