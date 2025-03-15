
#include<iostream>
using namespace std;
#include<stack>

// class minStack{

//     public:
//     // pair<int,int>mini;
//     stack<pair<int,int>>st;
    
//     void pushval(int val){
//         if(st.empty()){
//             st.push({val,val});
//         }
//         else{
//             st.push({val,min(st.top().second,val)});
//         }
//     }
//     void pop(){
//         if(st.empty()){
//             return ;
//         }
//         st.pop();
//     }
//     int getMin(){
//         return st.top().second;
//     }

// };

class minStack{

    public:
    int mini=0;
    // pair<int,int>mini;
    stack<int>st;
    
    void pushval(int val){
        if(st.empty()){
            st.push(val);
            mini=val;
        }
        else{
            if(val<mini){

                int x=(2*val-mini);
                mini=val;
                // cout<<x;
                st.push(x);
            }else{
                st.push(val);
            }
        }
    }
    void pop(){
        if(st.empty()){
            return ;
        }
        else{
            if(st.top()<mini){
                mini=(2*mini-st.top());
                st.pop();
            }else{
                st.pop();
            }
        }
        // st.pop();
    }
    int getMin(){
        return mini;
    }

};


int main(){

    minStack s;
    s.pushval(15);
    s.pushval(12);
    s.pushval(8);
    cout<<s.getMin();

    s.pop();
    // cout<<sṇ.getMin();

}