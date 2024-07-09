#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int> &arr)
{
    long long max_Sum = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = max(static_cast<long long>(arr[i]), sum + arr[i]);
        max_Sum = max(sum, max_Sum);
    }
    return max_Sum;
}

int main()
{
    vector<int> arr = {8, 5, 1, 4, 7};
    maxSubarraySum(arr);
    return 0;
}