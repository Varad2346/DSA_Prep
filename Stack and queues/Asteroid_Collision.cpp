#include<iostream>
using namespace std;
#include<stack>

void func(int arr[],int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            st.push(arr[i]);
        }else{
            while(!st.empty() && st.top()>0 && st.top()<abs(arr[i])){
                st.pop();
            }
            if(!st.empty() && st.top()==abs(arr[i])){
                st.pop();
            }else if(st.empty() && st.top()<0){
                st.push(arr[i]);
            }
        }
    }
}

int main(){
    int arr[]={4,7,1,1,2,-3,-7,17,15,-18,-19};
    int n=11;
    func(arr,n);
}