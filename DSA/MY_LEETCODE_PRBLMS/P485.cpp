class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        int n = nums.size();
        for(int j=0;j<n;j++){
                if(nums[j]==1){
                    count++;
                }
                else{
                    count=0;
                }
            if(count>maxcount){
                maxcount=count;
            }
        }
        return maxcount;
    }
};
