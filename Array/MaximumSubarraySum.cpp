//Brute
Using three loops

//Better
Using two loops

//Optimal
//Kadanes Algorithm

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long sum=0;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>=maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi>0? maxi:0;
}