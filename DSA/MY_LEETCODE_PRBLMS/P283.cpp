// swapping  the non-zero elements with the increasing index from start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k=0;
        for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    if(nums[k]!=nums[i]){
                    swap(nums[k],nums[i]);
                    }
                    k++;
                }
        }

    }
};
