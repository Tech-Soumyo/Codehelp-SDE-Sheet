// You are given a string s. You need to reverse the string.

// Example 1:

// Input:
// s = Geeks
// Output: skeeG
// Example 2:

// Input:
// s = for
// Output: rof
// Your Task:

// You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).
#include <bits/stdc++.h>
using namespace std;
string reverseWord(string str)
{

    // Your code here
    int s = 0;
    int e = str.length() - 1;
    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}
