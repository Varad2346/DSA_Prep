//Brute



//optimal
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>temp;
	int i=0,j=0;
	if(n>m){
		while(j<m && i<n){
			if(arr1[i]==arr2[j]){
				temp.push_back(arr2[j]);
				i++;
				j++;
			}else if(arr1[i]>arr2[j]){
				j++;
			}else{
				i++;
			}
		}
	}else{
			while(i<n && j<m){
			if(arr1[i]==arr2[j]){
				temp.push_back(arr1[i]);
				i++;
				j++;
			}else if(arr1[i]>arr2[j]){
				j++;
			}else{
				i++;
			}
		}
	}
	return temp;
}