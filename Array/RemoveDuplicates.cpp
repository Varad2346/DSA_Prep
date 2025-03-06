//Brute
#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	set<int>st;
	for(int i=0;i<n;i++){
		st.insert(arr[i]);
	}
	int index=0;
	for(auto it:st){
		arr[index]=it;
		index++;
	}
	return index;
}

//optimal
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			i++;
			arr[i]=arr[j];
		}
	}
	return i+1;
}