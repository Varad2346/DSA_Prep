#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int b=6;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<b;
}