#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void zeros(vector<int>&v){
    int j=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1) return;

    for(int i=j+1;i<v.size();i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
}

int main(){
    vector<int>v;
    v.push_back(2);
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
     zeros(v);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }

    return 0;
}