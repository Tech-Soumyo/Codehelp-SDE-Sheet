#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &v)
{
    if (v.size() == 0)
        return;
    int l = v.back();
    for (int i = v.size() - 1; i > 0; --i)
    {
        v[i] = v[i - 1];
    }
    v[0] = l;
}

int main()
{
    vector<int> arr = {8, 5, 1, 4, 7};
    rotate(arr);
    return 0;
}