#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int rd(vector<int> &a)
{
    int i = 0;
    for (int j = 1; j < a.size(); j++)
    {
        if (a[j] != a[i])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
     for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    int x= rd(v);
    for (int i = 0; i <x; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}