#include<bits/stdc++.h>
using namespace std;
int doUnion(int a[], int n, int b[], int m)
{
    set<int>ele;
    for(int i =0; i<n; i++){
        ele.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ele.insert(b[i]);
    }
    return ele.size();
}