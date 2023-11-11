#include<bits/stdc++.h>
using namespace std;
void segregateElements(int arr[], int n)
{
    // Your code goes here
    vector<int>v1;
    vector<int> v2;
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            v1.push_back(arr[i]);
        }
        else
        {
            v2.push_back(arr[i]);
        }
    }
  for(int i =0; i<v2.size(); i++){
    v1.push_back(v2[i]);
  }
    int i =0;
    for(i; i<v1.size(); i++){
        arr[i] = v1[i];
    }
    
    // int j = n1-1;
    // for( j; j<n2; j++){
    //     arr[j] = q.front();
    //     q.pop();
    // }
    for(int i =0; i<n; i++){
        cout<< arr[i];
    }
    v1.empty();
    v2.empty();
    
    {
        /* data */
    };
    
}
int main()
{
   
        int no;
        cin >> no;
        int a[no];
        for (int i = 0; i < no; i++)
        {
            cin >> a[i];
        }
        segregateElements(a, no);
    
    return 0;
}