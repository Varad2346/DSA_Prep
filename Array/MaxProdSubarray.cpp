#include<vector>

int subarrayWithMaxProduct(vector<int> &arr){
	// Write your code here.
	int pre=0;
	int maxProd=1;
	int suff=0;
	int n=arr.size();
	for(int i=0;i<n;i++){
		if(pre==0){
			pre=1;
		}
		if(suff==0){
			suff=1;
		}
		pre=pre*arr[i];
		suff=suff*arr[n-i-1];
		maxProd=max(maxProd,max(pre,suff));
	}
	return maxProd;
}