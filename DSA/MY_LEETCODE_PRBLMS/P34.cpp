class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
       vector<int>ans(2,-1);
       while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<=target){
                ans[1]=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
       }
       if(ans[1]<0 || ans[1]==n || nums[ans[1]]!=target){
        return {-1,-1};
       }
       low=0;
       high=n-1;
       while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans[0]=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
       }
       return ans;
    }
};
