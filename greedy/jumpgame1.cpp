#include<iostream>
using namespace std;

bool func(int arr[],int n){
    int maxIndex=0;
    // int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<i<<endl;
        if(i>maxIndex) return false;
        maxIndex=max(maxIndex,i+arr[i]);
    }
    return true;
}

int main(){
    int arr[]={3,2,1,0,4};
    cout<<func(arr,5);
}