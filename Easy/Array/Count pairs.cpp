#include <bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[], int n, int k){
    unordered_map<int ,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    int twice =0;
    for(int i=0; i<n; i++){
        twice += m[k - arr[i]];
        if(k -arr[i] == arr[i]){ // reduce the count when duplicates are visible
            twice--;
        } 
    }
    return twice/2;
}
int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is "
         << getPairsCount(arr, n, sum);
    return 0;
}