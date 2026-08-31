class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minI=0;
        int maxI=0;
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>=maximum){
                maximum=nums[i];
                maxI=i;
            }
            if(nums[i]<=minimum){
                minimum=nums[i];
                minI=i;
            }
        }
        int rightI=minI>maxI?minI:maxI;
        int leftI=minI>maxI?maxI:minI;
        return min({rightI+1,n-leftI,(leftI+1)+(n-rightI)});
    }
};