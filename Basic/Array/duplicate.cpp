#include <bits/stdc++.h>
using namespace std;

int doUnion(vector<int> arr1, vector<int> arr2)
{
    while (!arr2.empty())
    {
        arr1.push_back(arr2.back());
        arr2.pop_back();
    }
    sort(arr1.begin(), arr1.end());
    auto last = unique(arr1.begin(), arr1.end());
    arr1.erase(last, arr1.end());
    int size = arr1.size();

    return size;
}

int main()
{
    vector<int> vec1 = {1, 2, 2, 3, 4, 4, 5};
    vector<int> vec2 = {1, 2, 2, 6};
    int size = doUnion(vec1, vec2);
    cout << size;
    return 0;
}