//Brute
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j) continue;
            if((book[i]+book[j])==target){
                return "YES";
            }
        }
    }
    return "NO";
}

//Better
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int num=books[i];
        int remain=target-num;
        if(mpp.find(remain)!=mpp.end()){
            return "YES";
        }
        mpp[num]=i;
    }
    return "NO"
}

//Optimal
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int left=0,right=n-1;
    sort(book.begin(),book.end());
    while(left<right){
        int sum=book[left]+book[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "NO";
}
