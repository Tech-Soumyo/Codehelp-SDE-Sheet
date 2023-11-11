#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    int max_sum = INT_MIN;
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        max_sum= max(sum, max_sum);
        if(sum<0){
            sum =0;
        }
    }
    return max_sum;
}