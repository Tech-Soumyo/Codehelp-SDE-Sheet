#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    if (n == 1)
        return 0;
    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    int stepEnd = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jumps;

        maxReach = max(maxReach, i + arr[i]);

        if (i == stepEnd)
        {
            jumps++;
            stepEnd = maxReach;

            if (stepEnd <= i)
                return -1; // Cannot move forward
        }
    }

    return -1;
}