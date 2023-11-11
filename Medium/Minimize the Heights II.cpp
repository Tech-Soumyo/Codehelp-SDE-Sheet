#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr+n);
   int max_ele = arr[n-1];
   int min_ele= arr[0];
   int res = max_ele - min_ele;
    for(int i =1; i<n; i++) {
        min_ele = min(arr[0]+k, arr[i]-k);
        max_ele = max(arr[i-1]+k, arr[n-1]-k);
        res = min(res, max_ele - min_ele);
    }
    return res;
}