#include <bits/stdc++.h>
using namespace std;


    void rearrange(long long *arr, int n)
    {

        // Your code here
        
        int start = 0;
        int end = n - 1;

        int i = 0;
        long long *ans = (long long *)malloc(n * sizeof(long long));
        if (ans == NULL)
        {
            // Handle memory allocation failure if needed
            return;
        }

        while (start <= end)
        {
            if (i % 2 == 0)
            {
                ans[i] = arr[end];
                end--;
            }
            else
            {

                ans[i] = arr[start];
                start++;
            }
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = ans[i];
        }
    }
