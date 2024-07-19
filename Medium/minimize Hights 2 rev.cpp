#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    if (n == 1)
        return arr[0];
    sort(arr, arr + n);

    int diff = arr[n - 1] - arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] - k < 0)
            continue;

        int max_ele = max(arr[i - 1] + k, arr[n - 1] - k);
        int min_ele = min(arr[0] + k, arr[i] - k);

        diff = min(diff, max_ele - min_ele);
    }
    return diff;
}

int main()
{
    vector<int> arr = {8, 5, 1, 4, 7};
    // maxSubarraySum(arr);
    return 0;
}