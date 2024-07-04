#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    int n = l + r + 1;
    sort(arr, arr + n);
    return (arr[k - 1]);
}

int main()
{
    int arr[5] = {8, 5, 1, 4, 7};
    int Ksm = kthSmallest(arr, 0, 4, 3);
    cout << Ksm;
    return 0;
}