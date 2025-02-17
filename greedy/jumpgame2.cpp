#include<bits/stdc++.h>
using namespace std;

int func(int index, int jumps, int arr[], int n){
    // Base case: if we've reached or exceeded the last index
    if(index >= n - 1) return jumps;
    
    // If the current index value is 0, you can't move forward, so return a large value to indicate it's not possible
    if(arr[index] == 0) return INT_MAX;
    
    int mini = INT_MAX;
    
    // Try all possible jumps from the current index
    for(int i = 1; i <= arr[index]; i++) {
        int result = func(index + i, jumps + 1, arr, n);
        
        // If the result is valid (not INT_MAX), update the minimum
        if(result != INT_MAX) {
            mini = min(mini, result);
        }
    }
    
    return mini;
}

int main(){
    int arr[]={2,3,1,1,4};
    cout<<func(0,0,arr,6);
}