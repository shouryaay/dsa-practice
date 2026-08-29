class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0){
            return false;
        }
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int x;
        int num;
        for(auto it:mpp){
            num=it.first;
            x=it.second;
            if(x==0){
                continue;
            }
            for(int i=0;i<k;i++){
                if(mpp.find(num+i)==mpp.end() || mpp[num+i]<x){
                    return false;
                }                        
                    mpp[num+i]-=x;
            }
        }
        return true;
    }
};