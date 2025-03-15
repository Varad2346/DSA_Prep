// Monotonic Stack-Elements in specific order
#include<iostream>
using namespace std;
#include<stack>

int main(){
    int arr[]={4,12,5,3,1,2,5,3,1,2,4,6};

    int n=12;
    int nge[n];
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            nge[i]=-1;
            st.push(arr[i]);
        }else{
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i]=-1;
            }else{
                nge[i]=st.top();
            }
            st.push(arr[i]);
        }

    }
    for(auto it:nge){
        cout<<it<<" ";
    }
}
