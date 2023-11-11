#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    unordered_set<int> setB(B, B + n2);
    unordered_set<int> setC(C, C + n3);

    vector<int> result;

    for (int i = 0; i < n1; i++)
    {
        if (setB.count(A[i]) && setC.count(A[i]))
        {
            result.push_back(A[i]);
            setB.erase(A[i]);
            setC.erase(A[i]);
        }
    }

    return result;
}