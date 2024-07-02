#include <bits/stdc++.h>
using namespace std;

void max_min(vector<int> v)
{
    if (v.empty())
    {
        cout << "Empty array" << endl;
        return;
    }

    vector<int> sorted_v = v;
    sort(sorted_v.begin(), sorted_v.end());
    int max = sorted_v.back();
    int min = sorted_v.front();
    cout << "max is " << max << " and min is " << min << endl;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    max_min(v);
    return 0;
}