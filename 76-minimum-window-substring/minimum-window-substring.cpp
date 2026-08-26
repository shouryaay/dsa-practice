class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.size();
        int n=t.size();
        int minlen=INT_MAX;
        int startindex=-1;
        int l=0;
        int r=0;
        int hash[256]={0};
        for(int i=0;i<n;i++){
            hash[t[i]]++;
        }
        int count=0;
        while(r<m){
            if(hash[s[r]]>0){
                count++;
            }
            hash[s[r]]--;
            while(count==n){
                if((r-l+1)<minlen){
                    startindex=l;
                    minlen=r-l+1;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    count--;
                }
                l++;
            }
            r++;
        }
        if(startindex==-1){
            return "";
        }
        return s.substr(startindex,minlen);
    }
};