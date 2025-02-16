#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3};
    int n=3;
    int no_of_subsets=(1<<n);
    vector<vector<int>>ans;
    for(int num=0;num<no_of_subsets;num++){
        vector<int>list;
        for(int i=0;i<n;i++){
            if(num & (1<<i)){
                list.push_back(arr[i]);
            }
        }
        ans.push_back(list);
    }
    for(auto it:ans){
        for(auto num:it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
//TC-O(2en * N)=SC