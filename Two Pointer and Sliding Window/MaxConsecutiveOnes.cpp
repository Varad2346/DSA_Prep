#include<bits/stdc++.h>
using namespace std;

int func(vector<int>nums,int k){
    int n=nums.size();
    int left=0,right=0,maxLen=0,zeros=0;
    
    while(right<n){
        if(nums[right]==0) zeros++;
        if(zeros>k){
            if(nums[left]==0) zeros--;
            left++;
        }
        if(zeros<=k){
            maxLen=max(maxLen,right-left+1);

        }
        right++;
    }
    return maxLen;
}

int main(){
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<func(nums,k);
}