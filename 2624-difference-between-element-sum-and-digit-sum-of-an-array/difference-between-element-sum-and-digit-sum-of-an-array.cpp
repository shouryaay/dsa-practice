class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digitsum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int temp=nums[i];
            while(temp){
                digitsum+=temp%10;
                temp=temp/10;
            }
        }
        return abs(sum-digitsum);
    }
};