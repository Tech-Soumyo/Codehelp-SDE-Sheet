#include<bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(int N, vector<int> arr)
{
    vector<int> nextPermutation(int N, vector<int> arr)
    {
        int index = -1;

        for (int i = N - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            reverse(arr.begin(), arr.end());
            return arr;
        }

        for (int i = N - 1; i > index; i--)
        {
            if (arr[i] > arr[index])
            {
                swap(arr[i], arr[index]);
                break;
            }
        }
        reverse(arr.begin() + index + 1, arr.end());
        return arr;
    }
}