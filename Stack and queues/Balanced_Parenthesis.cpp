#include<bits/stdc++.h>
using namespace std;

bool checkParenthesis(string s){
    int n=s.size();
    stack<char>s1;
    for(auto it:s){
        if(it=='{'||it=='['||it=='('){
            s1.push(it);
        }else{
            if(s1.size()==0) return false;
            char ch=s1.top();
            s1.pop();
            if((ch=='(' && it==')')||(ch=='[' && it==']')||(ch=='{' && it=='}')){
                continue;
            }else{
                return false;
            }
        }
    }
    return s1.empty();
}

int main(){

    string s="(){}[]";

    cout<<checkParenthesis(s);
}