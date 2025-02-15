#include<bits/stdc++.h>
using namespace std;

long long func(vector<int>&arr){
    sort(arr.begin(),arr.end());
    long long t=0,wtTime=0;
    for(int i=0;i<arr.size()-1;i++){
        wtTime+=t;
        t+=arr[i];
    }
    return (wtTime/(arr.size()-1));
}
// TC-O(N)+O(NlongN);
// SC-O(1);

int main(){
    vector<int>arr={1,2,4,5,6};
    func(arr);
    return 0;
}