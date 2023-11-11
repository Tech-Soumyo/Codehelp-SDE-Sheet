// Given an array of positive and negative numbers.Find if there is a subarray(of size at - least one) with 0 sum.
#include <bits/stdc++.h>
using namespace std;

    bool subArrayExists(int arr[], int n)
    {
        int sum = 0;
        unordered_set<int> set;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == 0 || set.find(sum) != set.end())
                return true;
            // We check if the current sum is zero or if we have encountered this sum before. If so, we return true because it means we have found a subarray with a sum of zero.

            set.insert(sum); // If the current sum is new, we add it to the set of encountered sums.
        }

        return false;
    }
