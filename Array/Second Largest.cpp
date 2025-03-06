int secondLargest(vector<int>&arr,int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else{
            if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
    }
    return slargest;
}

int secondsmallest(vector<int>&arr,int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }else{
            if(arr[i]>smallest && arr[i]<ssmallest){
                ssmallest=arr[i];
            }
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int sslargest=secondLargest(a,n);
    int sssmallest=secondsmallest(a,n);
    return {sslargest,sssmallest};
}