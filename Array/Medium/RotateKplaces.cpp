void reverse(vector<int>&arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

vector<int> rotateArray(vector<int>arr, int d) {
    int n=arr.size();
    // Write your code here.
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    return arr;
}
