#include<bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n)
{
  vector<int> v;
  unordered_map<int, int>mp;
  for(int i=0; i<n; i++){
    mp[arr[i]++];
    if(mp[arr[i]]== 2){
        v.push_back(arr[i]);
    }
  }
  if(v.size() ==0){
    v.push_back(-1);
  }
  return v;
}