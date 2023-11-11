#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    if(intervals.size() == 0){      
        return intervals;
    }
    vector<vector<int>>res;

    sort(intervals.begin(), intervals.end(), [](vector<int>a, vector<int>b){     // sort the array wrt front of the intervals 
        return a[0]<b[0];                                       
    });
    vector<int>curr = intervals[0];

    for(int i=0; i<intervals.size();i++){

        if(curr[1] < intervals[i][0]){
            res.push_back(curr);
            curr= intervals[i];
        }
        else{
            curr[1] = max(curr[1], intervals[i][1]);    // change the ovarlapped intervals
        }
        
    }
    res.push_back(curr);
    return res;
}

//                        Another better solution

/* vector<vector<int>> ans;
int n = arr.size();
sort(arr.begin(), arr.end());
for (int i = 0; i < n; i++)
{
    if (ans.empty() || arr[i][0] > ans.back()[1])
    {
        ans.push_back(arr[i]);
    }
    else
    {
        ans.back()[1] = max(ans.back()[1], arr[i][1]);
    }
}

return ans; */