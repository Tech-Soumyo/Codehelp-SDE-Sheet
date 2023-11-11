#include <bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr, arr+r+1);
    int small = arr[k-1];
    return small;

}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int no;
        cin>>no;
        int a[no];
        for(int i =0; i<no; i++){
            cin>> a[i];
        }
        int k;
        cin>> k;
        cout<<kthSmallest(a, 0, no-1, k)<< endl;
    }
    return 0;  
}