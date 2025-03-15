// Monotonic Stack-Elements in specific order
#include<iostream>
using namespace std;
#include<stack>

int main(){
    int arr[]={2,10,12,1,11};

    int n=5;
    int nge[n];
    stack<int>st;
    for(int i=2*n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i%n]){
            st.pop();
        }
        if(i<n){
            nge[i]=st.empty()? -1:st.top();
        }
        st.push(arr[i%n]);
    }

    
    for(auto it:nge){
        cout<<it<<" ";
    }
}
