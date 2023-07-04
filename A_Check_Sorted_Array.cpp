#include <iostream>
using namespace std;
#include<bits/stdc++.h>
 int check(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i+1]>a[i])
          return -1;
    }
    return 0;
 }



int main(){
    int a[4]={1,5,2,3};
    int y = check(a,4);
    cout<<y;
    return 0;

}