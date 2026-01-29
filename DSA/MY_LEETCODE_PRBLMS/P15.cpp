class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res; 
        sort(nums.begin(),nums.end());
        int left=0;
        int right=n-1;
        for(int i=0;i<n-2;i++){
            left=i+1;
            right=n-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                    res.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while (left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while (left<right && nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(nums[i]+nums[left]+nums[right]<0){
                   left++;
                }
                else if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                }
            }
        }
    return res;
    }
};
