// had to debug a lot 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int maxcount=0;
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
            }
            if(count>maxcount){
                maxcount=count;
            }
            if(nums[i+1]>nums[i]+1){
                count=0;
            }
        }
        return maxcount+1;
    }
};
