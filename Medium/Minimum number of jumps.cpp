#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
        if(n<=1){
            return 0;
        }// for single ele
        if(arr[0] == 0){
            return -1;
        }// for first ele is 0

    int maxreach =arr[0];
    int steps = arr[0];
    int jump = 1;

    int i = 1;
    for(i = 1; i<n; i++){
        if(i == n-1){
            return jump;
        } // return ans

        maxreach = max(maxreach, i+arr[i]);
        steps--; // scaning the max jump

        if(steps == 0){
            jump++;
            if(i >= maxreach){
                return -1;
            }
            steps = maxreach - i;
        }
    }
    return -1;

    }