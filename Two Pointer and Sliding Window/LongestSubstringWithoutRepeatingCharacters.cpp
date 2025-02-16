class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            if(s.length()==0){
                return 0;
            }
            int maxLen=INT_MIN;
            int left=0,right=0;
            int n=s.length();
            map<char,int>mpp;
            while(right<n){
                if(mpp.find(s[right])!=mpp.end() && mpp[s[right]]>=left){
                    // mpp.clear();
                    left=mpp[s[right]]+1;
                    mpp[s[right]]=right; 
                }else{
                    mpp[s[right]]=right;
                    maxLen=max(maxLen,right-left+1);
                }
                right++;
            }
            return maxLen;
        }
    };