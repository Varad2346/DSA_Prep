//Brute
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    int maxLen=0;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            if(sum==k){
                maxLen=max(maxLen,j-i+1);
                // return (j-i+1);
            }
         
        }
    }
    return maxLen;
    return 0;
}

//Better
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    // Write your code here
    map<long long,int>preSumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
        return maxLen;
}

//Optimal - For positives only
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& nums, int k) {
    int left = 0, right = 0;
    long long sum = 0;
    int maxLen = 0;
    int n = nums.size();

    while (right < n) {
        sum += nums[right];  // Expand window

        while (left <= right && sum > k) { // Shrink window if needed
            sum -= nums[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;  // Move right pointer forward
    }
    
    return maxLen;
}
