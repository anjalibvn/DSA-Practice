#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void zero(vector<int>&v){
    vector<int>temp;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            temp.push_back(v[i]);
        }
    }

    int k =temp.size();
    for(int i=0;i<k;i++){
        v[i]=temp[i];
    }
    for(int i=k;i<v.size();i++){
        v[i]=0;
    }
}

int main(){
     
     vector<int> v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(0);
     v.push_back(14);
     v.push_back(0);
     v.push_back(15);
     v.push_back(0);
     v.push_back(15);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
     zero(v);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     return 0;

}