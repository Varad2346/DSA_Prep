// Brute--
using two loops

// Better-
using hashing
using set

// Optimal--
using XOR
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int xor1=0;
    int xor2=0;
    int n=N-1;
    for(int i=0;i<n;i++){
        xor2=xor2^a[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1^xor2;
}

using N*(N+1)/2;