#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int n=11;
    int i=2;
    
    if((n & (1<<i))){
        cout<<"Set";
    }else{
        cout<<"not set";
    }
}