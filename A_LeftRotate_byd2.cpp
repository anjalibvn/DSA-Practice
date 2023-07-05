#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void reve(int a[], int n, int d)
{
    d = d % n;
    reverse(a, a + d);
    reverse(a + d, a + n);
    reverse(a, a + n);
}

int main()
{
    int a[7] = {1, 3, 4, 5, 6, 7, 9};
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    
    reve(a, 7, 2);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}