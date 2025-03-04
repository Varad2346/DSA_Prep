//Brute
// Using loops

//Better
// using sorting
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    sort(a.begin(),a.end());
    int lastSmaller=INT_MIN;
    int maxCnt=1;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        if((a[i]-1)==lastSmaller){
            cnt++;
            lastSmaller=a[i];    
        }else if(lastSmaller!=a[i]){
            cnt=1;
            lastSmaller=a[i];
        }
        maxCnt=max(maxCnt,cnt);
    }
    return maxCnt;
}

//Optimal
bool ls(vector<int>a,int x){
    for(int i=0;i<a.size();i++){
        if(a[i]==x){
            return true;
        }
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    int maxCnt=1;
    for(int i=0;i<n;i++){
        int x=a[i];
        int cnt=1;
        while(ls(a,x+1)==true){
            x=x+1;
            cnt++;
        }
        maxCnt=max(maxCnt,cnt);
    }
    return maxCnt;
}