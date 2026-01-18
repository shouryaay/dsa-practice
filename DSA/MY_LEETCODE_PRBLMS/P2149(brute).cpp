//uses O(n) extra space with linear time 
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive(n/2);
        vector<int> negative(n/2);
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positive[j]=nums[i];
                j++;
            }
        }
        j=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                negative[j]=nums[i];
                j++;
            }
        }
        for(int i=0;i<n/2;i++){
            nums[2*i]=positive[i];
            nums[2*i+1]=negative[i];
        }
        return nums;
    }
};
