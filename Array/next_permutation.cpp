//Brute
// Using recursion
// Generate all subarrays and return next

//Better
// Using c++ STL

//optimal
// 1.Find a[i]<a[i+1];
// 2.find a[i]  which is > than ind and swap
// 3.Sort from index+1 to end

vector<int> nextGreaterPermutation(vector<int> &a) {
    // Write your code here.
    int ind=-1;
    int n=a.size();
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>ind;i--){
        if(a[i]>ind){
            swap(a[ind],a[i]);
            break;
        }
    }
    reverse(a.begin()+ind+1,a.end());
    return a;
    
}