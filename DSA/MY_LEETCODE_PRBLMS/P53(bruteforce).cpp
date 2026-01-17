//checking sum of all possible subarrays and updating r on finding a subarray with greater sum
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n  = nums.size();
        int maxsum=0;
        int r=INT_MIN;
        for(int i=0;i<n;i++){
                maxsum=0;
            for(int j=i;j<n;j++){
                        maxsum=maxsum+nums[j];
                        if(maxsum>r){
                            r=maxsum;
                        }
                    }
            }
    return r;
    }
};
