//checking all possible subarrays and increasing the counter if the sum is k 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = nums[i];
            if(sum == k){
                count++;
                }
            for(int j = i+1; j < n; j++){
                sum = sum + nums[j];
                if(sum == k){
                    count++;
                }
            }
            sum = 0;
        }
        return count;
    }
};
