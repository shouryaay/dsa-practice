class Solution {
public:
    int subarraysWithatmostKDistinct(vector<int>& nums, int k){
        int n=nums.size();
        int l=0;
        int r=0;
        int x=0;
        unordered_map<int,int>mpp;
        int count=0;
        while(r<n){
            if(mpp.find(nums[r])==mpp.end()){
                x++;
            }
            mpp[nums[r]]++;
            while(x>k){
                    mpp[nums[l]]--;
                    if(mpp[nums[l]]==0){
                        mpp.erase(nums[l]);
                        x--;
                    }
                    l++;
            }
            if(x<=k){
                count+=(r-l+1);
            }
            r++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarraysWithatmostKDistinct(nums,k)-subarraysWithatmostKDistinct(nums,k-1);
    }
};