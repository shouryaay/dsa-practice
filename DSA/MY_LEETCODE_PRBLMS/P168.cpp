//sorting and looking for consecutive was fine
// but there are so many edge cases i had to look into
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1){
            if(nums[0]==0)
            return 1;
            else
            return 0;
        }
        sort(nums.begin(),nums.end());
        if(nums[0]!=0){
            return 0;
        }
        for(int i=0;i<n-1;i++){
            if(nums[i+1]!=nums[i]+1){
                return nums[i]+1;
            }
        }
    return nums[n-1]+1;

    }
};
