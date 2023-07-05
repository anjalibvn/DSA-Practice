#include<iostream>
using namespace std;
#include<bits/stdc++.h>

vector<int> uni(vector<int>a,vector<int>b){
    set<int>s;
    vector<int>v;
    for(int i=0;i<a.size();i++){
        s.insert(a[i]);
    }
    for(int j=0;j<b.size();j++){
        s.insert(b[j]);
    }
    for(auto x:s){
        v.push_back(x);
    }
    return v;
}

int main(){
    vector<int> a{1,2,2,3,4,5};
    vector<int> b{2,3,3,5,6};
    vector<int>v;
    v=uni(a,b);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;

}
