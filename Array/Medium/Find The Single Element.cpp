// Brute
using two loops

//Better
using map,hashmap

// Optimal
using xor

#include<vector>

int getSingleElement(vector<int> &arr){
	int xor1=arr[0];
	for(int i=1;i<arr.size();i++){
		xor1^=arr[i];
	}	
	return xor1;
}