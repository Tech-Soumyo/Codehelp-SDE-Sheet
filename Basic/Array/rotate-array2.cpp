#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    list<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = q.back();
        q.pop_back();
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr, 5);
    return 0;
}