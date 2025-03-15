// Monotonic Stack-Elements in specific order
#include<iostream>
using namespace std;
#include<stack>

int main(){
    int arr[]={2,10,12,1,11};

    int n=5;
    int nge[n];
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        nge[i]=st.empty()? -1:st.top();
        st.push(arr[i]);
    }

    
    for(auto it:nge){
        cout<<it<<" ";
    }
}
